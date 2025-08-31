============================================================================
 Save/Load World
 ============================================================================
 Key concepts to focus on: serialization, versioning

 RULES:
 1) Do NOT paste solutions from elsewhere. Write it yourself.
 2) Keep the program minimal; one clear goal at a time.
 3) Commit when you hit acceptance criteria.

 TASKS:
 1. Define a file format for chunks (raw binary or simple RLE).
 2. Save modified chunks to disk when they change.
 3. Load existing chunks on startup (only those in range).

 ACCEPTANCE CRITERIA:
 - Edits persist across runs; file size remains reasonable.

 STRETCH GOALS:
 - Add a region-folder structure similar to Minecraft (optional).

 HINTS (read only if stuck):
 - Keep formats simple; document the version in the file header.

 Write your code below this line.
 -----------------------------------------------------------
