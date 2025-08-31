// ============================================================================
// 2D Collision Resolution
// ============================================================================
// Suggested libs for this step: sfml
// Key concepts to focus on: collision detection, impulse response
//
// RULES:
// 1) Do NOT paste solutions from elsewhere. Write it yourself.
// 2) Keep the program minimal; one clear goal at a time.
// 3) Commit when you hit acceptance criteria.
//
// TASKS:
// 1. Spawn multiple circles with different radii.
// 2. Detect circle-circle overlap.
// 3. Resolve overlap by pushing them apart along the normal.
// 4. Apply a basic impulse to swap/adjust velocities along the collision normal.
//
// ACCEPTANCE CRITERIA:
// - No persistent penetration; stable after many frames.
//
// STRETCH GOALS:
// - Add AABB vs circle collisions.
//
// HINTS (read only if stuck):
// - Distance < rA + rB ⇒ collision; use normalized difference for normal.
//
// Write your code below this line.
// -----------------------------------------------------------
