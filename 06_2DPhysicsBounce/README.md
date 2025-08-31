============================================================================
 2D Physics — Gravity & Bounce
 ============================================================================
 Suggested libs for this step: sfml
 Key concepts to focus on: integrators, simple collisions

 RULES:
 1) Do NOT paste solutions from elsewhere. Write it yourself.
 2) Keep the program minimal; one clear goal at a time.
 3) Commit when you hit acceptance criteria.

 TASKS:
 1. Give a circle a velocity.
 2. Apply constant gravity downward each frame.
 3. Bounce off the window edges with a restitution factor (0..1).

 ACCEPTANCE CRITERIA:
 - Circle visibly falls and bounces; rests after several bounces if restitution < 1.

 STRETCH GOALS:
 - Add simple friction when on the ground.
 - Add pause/resume key.

 HINTS (read only if stuck):
 - Semi-implicit Euler: v += a*dt; p += v*dt; invert velocity on collision.

 Write your code below this line.
 -----------------------------------------------------------
