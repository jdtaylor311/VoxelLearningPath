// ============================================================================
// Tests for 15_Terrain_Noise
// ============================================================================
// Test determinism and reasonable height ranges for your noise-based terrain.
//
// TASKS:
// 1) Given a fixed seed, the same (x,z) returns the same height always.
// 2) Heights fall within expected min/max for your mapping.
// 3) Different seeds produce different (but still bounded) distributions.
//
// HINTS:
// - Wrap your noise generator in a function that accepts a seed.
// - Clamp or map noise from [-1,1] to [minH, maxH].
//
