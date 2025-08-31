// ============================================================================
// Tests for 13_VoxelMeshing_FaceCulling & 14_VoxelMeshing_Greedy
// ============================================================================
// Validate that your mesher emits the expected number of quads.
//
// TASKS:
// 1) Build a small test chunk with a single solid block; expect 6 quads.
// 2) Two adjacent blocks share a face; expect 10 quads (not 12).
// 3) A 2x1x1 slab under greedy meshing should produce fewer quads (merged).
// 4) Create a hollow 3x3x3 cube; expect only outer faces (no interior).
//
// HINTS:
// - Structure your mesher to return a list of faces/quads for easy assertions.
// - For greedy, assert reduced face count vs naive.
//
