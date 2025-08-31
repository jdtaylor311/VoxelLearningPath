// ============================================================================
// Tests for 17_Lighting_AO
// ============================================================================
// Verify your AO calculation darkens corners with more occluders.
//
// TASKS:
// 1) AO factor based on 3 neighbors (side, up, diagonal).
// 2) More neighbors => darker AO value; no neighbors => full light.
// 3) Symmetry checks (swap left/right should not change AO).
//
// HINTS:
// - Return AO in [0,1].
// - Keep it data-only: input = 3 booleans, output = float.
//
