cmake_minimum_required(VERSION 3.20)
project(VoxelLearningPath LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ---- Console ----
add_subdirectory(00_ConsoleHelloWorld)
add_subdirectory(01_ConsoleLoopsFunctions)
add_subdirectory(02_ConsoleTinyTextGame)

# ---- 2D (SFML) ----
add_subdirectory(03_DrawWindow2D_SFML)
add_subdirectory(04_InputMovement2D)
add_subdirectory(05_AnimationDeltaTime)
add_subdirectory(06_2DPhysicsBounce)
add_subdirectory(07_2DCollisionResolution)

# ---- 3D (OpenGL/GLFW/GLM/GLAD) ----
add_subdirectory(08_3DWindow_GLFW_OpenGL)
add_subdirectory(09_FirstCubeWithMatrices)
add_subdirectory(10_CameraWASD_MouseLook)
add_subdirectory(11_TexturedCube)

# ---- Voxels ----
add_subdirectory(12_VoxelBasics_ChunkData)
add_subdirectory(13_VoxelMeshing_FaceCulling)
add_subdirectory(14_VoxelMeshing_Greedy)
add_subdirectory(15_Terrain_Noise)
add_subdirectory(16_ChunksStreaming)
add_subdirectory(17_Lighting_AO)
add_subdirectory(18_SaveLoad_World)

# ---- Tests ----
add_subdirectory(tests)
