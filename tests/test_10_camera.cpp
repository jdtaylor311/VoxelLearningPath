// ============================================================================
// Tests for 10_CameraWASD_MouseLook
// ============================================================================
// TASKS:
// 1) Given yaw/pitch, compute a forward vector. Test known angles (0, 90°, etc.).
// 2) Update camera position with WASD input; verify deltas are correct.
// 3) Clamp pitch to [-89°, +89°].
//
// HINTS:
// - Keep keyboard state as an input struct to make this pure and testable.
//
