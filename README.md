# VoxelLearningPath

**Learn C++ by building your way up to a voxel engine.**  
This repository is a structured learning path: a collection of **microprojects** that start with printing to the console and gradually introduce graphics, physics, 3D rendering, and voxel engine concepts.

Unlike tutorials with finished code, every project here contains only **comments with tasks, acceptance criteria, stretch goals, and hints**. You write the code yourself. Tests are scaffolded with [Catch2](https://github.com/catchorg/Catch2) to help you practice TDD.

---

## 🚀 Structure

```
VoxelLearningPath/
├─ 00_ConsoleHelloWorld/        # Print text to console, read input
├─ 01_ConsoleLoopsFunctions/    # Guessing game with loops and functions
├─ 02_ConsoleTinyTextGame/      # A tiny text adventure
├─ 03_DrawWindow2D_SFML/        # First graphics window
├─ 04_InputMovement2D/          # Keyboard movement
├─ 05_AnimationDeltaTime/       # Frame-rate independent animation
├─ 06_2DPhysicsBounce/          # Gravity + bouncing
├─ 07_2DCollisionResolution/    # Circle collisions
├─ 08_3DWindow_GLFW_OpenGL/     # OpenGL window
├─ 09_FirstCubeWithMatrices/    # Render a rotating cube
├─ 10_CameraWASD_MouseLook/     # Free-fly camera
├─ 11_TexturedCube/             # Load and render textures
├─ 12_VoxelBasics_ChunkData/    # Store voxel blocks in chunks
├─ 13_VoxelMeshing_FaceCulling/ # Render only visible faces
├─ 14_VoxelMeshing_Greedy/      # Greedy meshing optimization
├─ 15_Terrain_Noise/            # Procedural terrain with noise
├─ 16_ChunksStreaming/          # Load/unload chunks dynamically
├─ 17_Lighting_AO/              # Ambient occlusion lighting
├─ 18_SaveLoad_World/           # Save/load voxel worlds
└─ tests/                       # Catch2 test skeletons
```

Each project folder has:
- `main.cpp` — only **comments** with tasks/hints.
- `README.md` — tasks written in plain text.
- `CMakeLists.txt` — minimal build instructions for that stage.

---

## 🛠️ Requirements
- Windows 10/11  
- [Visual Studio 2022](https://visualstudio.microsoft.com/) with Desktop Development in C++  
- [CMake](https://cmake.org/) (included in VS2022, or add to PATH)  
- [vcpkg](https://github.com/microsoft/vcpkg) for dependency management  

### Dependencies installed via `vcpkg`
- [SFML](https://www.sfml-dev.org/) (for 2D)
- [GLFW](https://www.glfw.org/) + [GLAD](https://glad.dav1d.de/) + [GLM](https://github.com/g-truc/glm) (for 3D/OpenGL)
- [stb](https://github.com/nothings/stb) (image loading)
- [Catch2](https://github.com/catchorg/Catch2) (testing)

Noise generation (FastNoiseLite) is **vendored** under `third_party/` later in the path.

---

## ⚡ Getting Started

1. Clone the repo
   ```powershell
   git clone https://github.com/your-username/VoxelLearningPath.git
   cd VoxelLearningPath
   ```

2. Run setup (installs vcpkg + deps, initializes git if not already)
   ```powershell
   scripts\setup.ps1
   ```

3. Open in Visual Studio 2022 (**File → Open → Folder**).  
   VS auto-detects the root `CMakeLists.txt`.

4. Use the dropdown next to the green ▶ to pick a target (e.g., `HelloConsole`, `Draw2D`, `FirstCube`) and press **F5**.

---

## ✅ How to Work
- Read the `main.cpp` comments in the project you’re on.
- Implement the tasks yourself.
- Run the program. When it matches the **acceptance criteria**, commit your work.
- Write tests for pure logic in the `tests/` folder.

---

## 🧪 Running Tests
From PowerShell:
```powershell
scripts\run_tests.ps1
```

Or manually:
```powershell
cmake -S . -B build -A x64 -DCMAKE_TOOLCHAIN_FILE="$env:VCPKG_ROOT\scripts\buildsystems\vcpkg.cmake"
cmake --build build --config Debug --target voxel_tests
ctest --test-dir build -C Debug --output-on-failure
```

---

## 🎯 Goal
By the end of this path, you will:
- Be comfortable with C++ basics (loops, functions, classes, stdlib).
- Understand 2D graphics, animation, and simple physics.
- Gain fundamentals of 3D rendering and camera control.
- Build voxel-world systems: chunking, meshing, streaming, noise-based terrain.
- Have a solid foundation for your **own voxel engine**.

---

## 📜 License
This repo is for personal learning. Tasks and scaffolding are free to use and modify.
