============================================================================
 Free-Fly Camera
 ============================================================================
 Suggested libs for this step: glfw3, glm
 Key concepts to focus on: camera math, input integration

 RULES:
 1) Do NOT paste solutions from elsewhere. Write it yourself.
 2) Keep the program minimal; one clear goal at a time.
 3) Commit when you hit acceptance criteria.

 TASKS:
 1. Implement a camera controlled by WASD for movement.
 2. Mouse moves the view (pitch/yaw).
 3. Constrain pitch to avoid flipping.
 4. Hide/lock cursor while controlling camera; unlock with Esc.

 ACCEPTANCE CRITERIA:
 - Smooth movement, no gimbal lock; Escape releases mouse.

 STRETCH GOALS:
 - Add sprint (Shift) and adjustable sensitivity.

 HINTS (read only if stuck):
 - Store camera position + yaw/pitch; build view matrix each frame.

 Write your code below this line.
 -----------------------------------------------------------
