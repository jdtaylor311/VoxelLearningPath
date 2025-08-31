// ============================================================================
// Tests for 06_2DPhysicsBounce & 07_2DCollisionResolution
// ============================================================================
// Focus on pure physics helpers (semi-implicit Euler, overlap tests, impulse calc).
//
// TASKS:
// 1) Write: bool circles_overlap(Vec2 a, float ra, Vec2 b, float rb).
// 2) Write: float overlap_amount(Vec2 a, float ra, Vec2 b, float rb).
// 3) Write: Vec2 resolve_separation(Vec2 a, float ra, Vec2 b, float rb) -> push vector for 'a'.
// 4) Test impulse response along the collision normal (no tangential component).
//
// HINTS:
// - Use squared distances to avoid sqrt when possible.
// - For impulses, project relative velocity onto the normal.
//
