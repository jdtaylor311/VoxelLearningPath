// ============================================================================
// Tests for 12_VoxelBasics_ChunkData
// ============================================================================
// You will choose a data layout for (x,y,z) in a flat vector.
//
// TASKS:
// 1) Implement size_t index3D(int x,int y,int z,int W,int H,int D) -> linear index.
// 2) Implement inverse: (x,y,z) from index (optional).
// 3) Verify index range, corners, and some random cells.
// 4) Benchmark mentally: x-fastest vs z-fastest; choose and document.
//
// HINTS:
// - Typical layout: idx = x + y*W + z*W*H.
// - Write tests for bounds (negative or >= size should be invalid).
//
