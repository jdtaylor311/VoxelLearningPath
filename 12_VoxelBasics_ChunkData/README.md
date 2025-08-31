============================================================================
 Voxel Basics — Chunk Data
 ============================================================================
 Key concepts to focus on: data layout, cache coherence

 RULES:
 1) Do NOT paste solutions from elsewhere. Write it yourself.
 2) Keep the program minimal; one clear goal at a time.
 3) Commit when you hit acceptance criteria.

 TASKS:
 1. Define a 3D array for blocks (e.g., 16x16x16).
 2. Create an enum for block types (Air, Dirt, Stone, Grass).
 3. Initialize a simple flat world with a surface layer.
 4. Plan data layout: x-fastest or z-fastest indexing (document choice).

 ACCEPTANCE CRITERIA:
 - You can inspect memory or print slice summaries without rendering.

 STRETCH GOALS:
 - Add per-chunk position so chunks can be placed in a grid.

 HINTS (read only if stuck):
 - Use a single flat vector for storage and index with (x + y*W + z*W*H).

 Write your code below this line.
 -----------------------------------------------------------
