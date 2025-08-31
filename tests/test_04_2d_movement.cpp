// ============================================================================
// Tests for 04_InputMovement2D & 05_AnimationDeltaTime
// ============================================================================
// You will likely implement a small math type and helpers (Vec2, clamp_to_bounds).
//
// TASKS:
// 1) Design a function: Vec2 clamp_to_bounds(Vec2 p, Vec2 min, Vec2 max).
// 2) Design a function: Vec2 move_with_input(Vec2 p, Vec2 dir, float speed, float dt).
// 3) Write tests that verify:
//    - Clamping keeps the circle within [min,max].
//    - Movement is proportional to speed*dt.
//    - Diagonal movement length is correct (normalize dir).
//
// HINTS:
// - Keep functions pure (no globals).
// - Prefer float comparisons with an epsilon.
//
