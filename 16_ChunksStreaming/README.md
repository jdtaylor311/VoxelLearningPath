============================================================================
 Chunk Streaming & LOD
 ============================================================================
 Key concepts to focus on: systems thinking, lifetime management

 RULES:
 1) Do NOT paste solutions from elsewhere. Write it yourself.
 2) Keep the program minimal; one clear goal at a time.
 3) Commit when you hit acceptance criteria.

 TASKS:
 1. Create a player position; determine which chunk coords are in range.
 2. Load/generate chunks around the player; unload those too far away.
 3. Keep a queue/thread for generation (can be single-threaded at first).
 4. Avoid stutter by spreading work over multiple frames.

 ACCEPTANCE CRITERIA:
 - Walking forward continuously loads new terrain without freezing.

 STRETCH GOALS:
 - Basic LOD: render distant chunks as simplified meshes.

 HINTS (read only if stuck):
 - Track chunks in a hash map keyed by (cx, cy, cz).

 Write your code below this line.
 -----------------------------------------------------------
