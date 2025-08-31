============================================================================
 Voxel Meshing — Face Culling
 ============================================================================
 Suggested libs for this step: glad, glfw3, glm
 Key concepts to focus on: mesh generation, face tests

 RULES:
 1) Do NOT paste solutions from elsewhere. Write it yourself.
 2) Keep the program minimal; one clear goal at a time.
 3) Commit when you hit acceptance criteria.

 TASKS:
 1. Generate a mesh for a chunk that emits quads only for faces adjacent to air.
 2. Build vertex buffers (positions + normals or positions only).
 3. Render the chunk’s mesh as solid color quads.

 ACCEPTANCE CRITERIA:
 - Chunk renders with only visible faces; hollow interior (can verify by noclip).

 STRETCH GOALS:
 - Only emit faces between different opaque blocks (skip internal faces).

 HINTS (read only if stuck):
 - Loop all blocks; check 6 neighbors; append face vertices if neighbor is air.

 Write your code below this line.
 -----------------------------------------------------------
