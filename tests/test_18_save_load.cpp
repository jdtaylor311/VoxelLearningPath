// ============================================================================
// Tests for 18_SaveLoad_World
// ============================================================================
// Test that encoding/decoding preserves chunk data.
//
// TASKS:
// 1) Serialize a small chunk to bytes; then deserialize to a new chunk; compare equal.
// 2) Changing one block should change the saved bytes (not the entire file if RLE).
// 3) Version number is written/read correctly.
//
// HINTS:
// - Keep encode/decode pure functions over vectors of bytes.
// - Avoid hitting disk in tests; use memory buffers.
//
