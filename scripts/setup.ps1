Param(
    [string]$VcpkgRoot = "C:\vcpkg",
    [switch]$NoGit = $false
)
$ErrorActionPreference = "Stop"

function Check-Cmd { param([string]$n) return [bool](Get-Command $n -ErrorAction SilentlyContinue) }

# vcpkg
if (Test-Path $VcpkgRoot) {
    Write-Host "vcpkg found at $VcpkgRoot"
} else {
    if (-not (Check-Cmd git)) { throw "git is required to clone vcpkg (install Git for Windows)" }
    Write-Host "Cloning vcpkg to $VcpkgRoot ..." -ForegroundColor Cyan
    git clone https://github.com/microsoft/vcpkg $VcpkgRoot
    & "$VcpkgRoot\bootstrap-vcpkg.bat"
}

# Deps install
Write-Host "Installing deps via vcpkg (x64-windows) ..." -ForegroundColor Cyan
& "$VcpkgRoot\vcpkg.exe" install sfml:x64-windows glfw3:x64-windows glad:x64-windows glm:x64-windows stb:x64-windows fastnoise2:x64-windows catch2:x64-windows
& "$VcpkgRoot\vcpkg.exe" integrate install

# Git init
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

Write-Host "`nReady. Open this folder in Visual Studio 2022 and start at 00_ConsoleHelloWorld." -ForegroundColor Green
