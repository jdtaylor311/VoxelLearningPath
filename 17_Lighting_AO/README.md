============================================================================
 Lighting — Ambient Occlusion (AO)
 ============================================================================
 Key concepts to focus on: lighting models, per-vertex data

 RULES:
 1) Do NOT paste solutions from elsewhere. Write it yourself.
 2) Keep the program minimal; one clear goal at a time.
 3) Commit when you hit acceptance criteria.

 TASKS:
 1. Implement simple per-vertex or per-face ambient occlusion based on neighbor occupancy.
 2. Darken corners where 2–3 neighbors meet.
 3. Store AO as vertex color or in a separate attribute.

 ACCEPTANCE CRITERIA:
 - Blocks at concave corners appear darker; visual depth improves.

 STRETCH GOALS:
 - Add a basic directional light (sun) using Lambert diffuse.

 HINTS (read only if stuck):
 - AO factor can be computed from 3 samples around a vertex (side, up, diagonal).

 Write your code below this line.
 -----------------------------------------------------------
