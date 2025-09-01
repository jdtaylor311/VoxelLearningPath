Param(
    [string]$VcpkgRoot = "C:\vcpkg",
    [switch]$NoGit = $false
)
$ErrorActionPreference = "Stop"

function Check-Cmd { param([string]$n) return [bool](Get-Command $n -ErrorAction SilentlyContinue) }

# Resolve repo root (this script lives in repo\scripts\setup.ps1)
$RepoRoot = (Resolve-Path (Join-Path $PSScriptRoot "..")).Path
Push-Location $RepoRoot

# --- vcpkg -------------------------------------------------------------------
if (Test-Path $VcpkgRoot) {
    Write-Host "vcpkg found at $VcpkgRoot"
} else {
    if (-not (Check-Cmd git)) { throw "git is required to clone vcpkg (install Git for Windows)" }
    Write-Host "Cloning vcpkg to $VcpkgRoot ..." -ForegroundColor Cyan
    git clone https://github.com/microsoft/vcpkg $VcpkgRoot
    & "$VcpkgRoot\bootstrap-vcpkg.bat"
}

# In **manifest mode**, DO NOT pass package names to `vcpkg install`.
# The dependencies are read from vcpkg.json at the repo root.
Write-Host "Installing manifest dependencies via vcpkg (x64-windows) ..." -ForegroundColor Cyan
$ManifestArgs = @("--triplet","x64-windows","--clean-after-build","--x-manifest-root",$RepoRoot)
& "$VcpkgRoot\vcpkg.exe" install @ManifestArgs

# Optional: integrate so Visual Studio picks up the toolchain automatically
& "$VcpkgRoot\vcpkg.exe" integrate install | Out-Null

# --- Git init ----------------------------------------------------------------
if (-not $NoGit) {
    if (Check-Cmd git) {
        if (-not (Test-Path ".git")) {
            git init
            git add .
            git commit -m "Initialize VoxelLearningPath scaffold (no solutions)"
        } else {
            Write-Host "Git repo already initialized."
        }
    } else {
        Write-Warning "git not found; skipping git init."
    }
}

Pop-Location
Write-Host "`nDone. Open this folder in Visual Studio 2022, or configure with CMake:" -ForegroundColor Green
Write-Host '  cmake -S . -B build -G "Visual Studio 17 2022" -A x64 -DCMAKE_TOOLCHAIN_FILE="$env:VCPKG_ROOT\scripts\buildsystems\vcpkg.cmake"'
