// ============================================================================
// Tests for 16_ChunksStreaming
// ============================================================================
// Focus on **which chunks should be present** given a player position & radius.
//
// TASKS:
// 1) Write: std::vector<ChunkCoord> visible_chunks(ChunkCoord player, int radius).
// 2) Ensure uniqueness (no duplicates).
// 3) Sort results (stable order) to make tests deterministic.
// 4) Add test cases for edges where player crosses chunk boundaries.
//
// HINTS:
// - ChunkCoord might be integers (cx, cy, cz) with cy often 0 for surface worlds.
// - Keep it pure; no global state or I/O in these functions.
//
