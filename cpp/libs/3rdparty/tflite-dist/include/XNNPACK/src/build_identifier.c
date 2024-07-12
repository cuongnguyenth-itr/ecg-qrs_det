// Copyright 2024 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

// Auto-generated file. Do not edit!
//   Generator: scripts/generate-build-identifier.py
//
// The following inputs were used to generate this file.
// - external/XNNPACK/src/packing.c
// - external/XNNPACK/src/tables/exp2-k-over-64.c
// - external/XNNPACK/src/tables/exp2-k-over-2048.c
// - external/XNNPACK/src/tables/exp2minus-k-over-4.c
// - external/XNNPACK/src/tables/exp2minus-k-over-8.c
// - external/XNNPACK/src/tables/exp2minus-k-over-16.c
// - external/XNNPACK/src/tables/exp2minus-k-over-32.c
// - external/XNNPACK/src/tables/exp2minus-k-over-64.c
// - external/XNNPACK/src/tables/exp2minus-k-over-2048.c
// - external/XNNPACK/src/tables/vlog.c
// - external/XNNPACK/src/enums/allocation-type.c
// - external/XNNPACK/src/enums/datatype-strings.c
// - external/XNNPACK/src/enums/microkernel-type.c
// - external/XNNPACK/src/enums/node-type.c
// - external/XNNPACK/src/enums/operator-type.c
// - external/XNNPACK/src/log.c
// - external/XNNPACK/src/amalgam/gen/scalar.c
// - external/XNNPACK/src/amalgam/gen/neonfp16arith-aarch64.c
// - external/XNNPACK/src/amalgam/gen/neonfp16arith.c
// - external/XNNPACK/src/amalgam/gen/neondot-aarch64.c
// - external/XNNPACK/src/amalgam/gen/neondot.c
// - external/XNNPACK/src/amalgam/gen/neondotfp16arith.c
// - external/XNNPACK/src/amalgam/gen/neoni8mm-aarch64.c
// - external/XNNPACK/src/amalgam/gen/neoni8mm.c
// - external/XNNPACK/src/amalgam/gen/neon-aarch64.c
// - external/XNNPACK/src/amalgam/gen/neon.c
// - external/XNNPACK/src/amalgam/gen/neonfp16.c
// - external/XNNPACK/src/amalgam/gen/neonfma-aarch64.c
// - external/XNNPACK/src/amalgam/gen/neonfma.c
// - external/XNNPACK/src/amalgam/gen/neonv8.c
// - external/XNNPACK/src/f16-gemm/gen/f16-gemm-1x8-minmax-asm-aarch64-neonfp16arith-ld64.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemm-1x16-minmax-asm-aarch64-neonfp16arith-ld32.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemm-1x16-minmax-asm-aarch64-neonfp16arith-ld64.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemm-4x8-minmax-asm-aarch64-neonfp16arith-ld64.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemm-4x16-minmax-asm-aarch64-neonfp16arith-ld32.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemm-4x16-minmax-asm-aarch64-neonfp16arith-ld64.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemm-6x8-minmax-asm-aarch64-neonfp16arith-ld64.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemm-6x16-minmax-asm-aarch64-neonfp16arith-cortex-a55.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemm-6x16-minmax-asm-aarch64-neonfp16arith-cortex-a55r0.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemm-6x16-minmax-asm-aarch64-neonfp16arith-cortex-a75.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemm-6x16-minmax-asm-aarch64-neonfp16arith-ld32.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemm-6x16-minmax-asm-aarch64-neonfp16arith-ld64.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemm-8x8-minmax-asm-aarch64-neonfp16arith-ld64.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemminc-1x8-minmax-asm-aarch64-neonfp16arith-ld64.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemminc-1x16-minmax-asm-aarch64-neonfp16arith-ld32.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemminc-4x8-minmax-asm-aarch64-neonfp16arith-ld64.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemminc-4x16-minmax-asm-aarch64-neonfp16arith-ld32.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemminc-6x8-minmax-asm-aarch64-neonfp16arith-ld64.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemminc-6x16-minmax-asm-aarch64-neonfp16arith-cortex-a55.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemminc-6x16-minmax-asm-aarch64-neonfp16arith-cortex-a75.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemminc-6x16-minmax-asm-aarch64-neonfp16arith-ld32.S
// - external/XNNPACK/src/f16-gemm/gen/f16-gemminc-8x8-minmax-asm-aarch64-neonfp16arith-ld64.S
// - external/XNNPACK/src/f16-igemm/f16-igemm-1x16-minmax-asm-aarch64-neonfp16arith-ld32.S
// - external/XNNPACK/src/f16-igemm/f16-igemm-1x16-minmax-asm-aarch64-neonfp16arith-ld64.S
// - external/XNNPACK/src/f16-igemm/f16-igemm-4x16-minmax-asm-aarch64-neonfp16arith-ld32.S
// - external/XNNPACK/src/f16-igemm/f16-igemm-4x16-minmax-asm-aarch64-neonfp16arith-ld64.S
// - external/XNNPACK/src/f16-igemm/f16-igemm-6x16-minmax-asm-aarch64-neonfp16arith-cortex-a55.S
// - external/XNNPACK/src/f16-igemm/f16-igemm-6x16-minmax-asm-aarch64-neonfp16arith-cortex-a55r0.S
// - external/XNNPACK/src/f16-igemm/f16-igemm-6x16-minmax-asm-aarch64-neonfp16arith-cortex-a75.S
// - external/XNNPACK/src/f16-igemm/f16-igemm-6x16-minmax-asm-aarch64-neonfp16arith-ld32.S
// - external/XNNPACK/src/f16-igemm/f16-igemm-6x16-minmax-asm-aarch64-neonfp16arith-ld64.S
// - external/XNNPACK/src/f32-dwconv/f32-dwconv-9p4c-minmax-asm-aarch64-neonfma-cortex-a55.S
// - external/XNNPACK/src/f32-dwconv/f32-dwconv-9p4c-minmax-asm-aarch64-neonfma.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neon-ld128-acc2-prfm.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neon-ld128-acc2.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neonfma-cortex-a53-prfm.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neonfma-cortex-a53.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neonfma-cortex-a75-prfm.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neonfma-cortex-a75.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neonfma-ld64-acc2-prfm.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neonfma-ld64-acc2.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neonfma-ld64-acc4-prfm.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neonfma-ld64-acc4.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neonfma-ld64-prfm.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neonfma-ld128-acc2-prfm.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neonfma-ld128-acc2.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neonfma-ld128-acc4-prfm.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neonfma-ld128-acc4.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neonfma-ld128-prfm.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-1x12-minmax-asm-aarch64-neonfma-cortex-a53.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-4x1-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-4x1-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-4x2-minmax-asm-aarch64-neonfma-cortex-a75-prfm.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-4x2-minmax-asm-aarch64-neonfma-cortex-a75.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-4x2-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-4x2-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-4x8-minmax-asm-aarch64-neonfma-cortex-a53-prfm.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-4x8-minmax-asm-aarch64-neonfma-cortex-a53.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-4x8-minmax-asm-aarch64-neonfma-cortex-a55.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-4x8-minmax-asm-aarch64-neonfma-cortex-a75-prfm.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-4x8-minmax-asm-aarch64-neonfma-cortex-a75.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-4x8-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-4x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-4x12-minmax-asm-aarch64-neonfma-cortex-a53.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-5x8-minmax-asm-aarch64-neonfma-cortex-a75-prfm.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-5x8-minmax-asm-aarch64-neonfma-cortex-a75.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-6x8-minmax-asm-aarch64-neonfma-cortex-a53-prfm.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-6x8-minmax-asm-aarch64-neonfma-cortex-a53.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-6x8-minmax-asm-aarch64-neonfma-cortex-a55.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-6x8-minmax-asm-aarch64-neonfma-cortex-a73.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-6x8-minmax-asm-aarch64-neonfma-cortex-a75-prfm.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-6x8-minmax-asm-aarch64-neonfma-cortex-a75.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-6x8-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-6x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-goi-1x8-minmax-asm-aarch64-neonfma-ld128-prfm.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-goi-1x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-gemm/gen/f32-gemm-goi-4x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-1x8-minmax-asm-aarch64-neonfma-cortex-a53.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-1x8-minmax-asm-aarch64-neonfma-cortex-a75-prfm.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-1x8-minmax-asm-aarch64-neonfma-cortex-a75.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-1x8-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-1x12-minmax-asm-aarch64-neonfma-cortex-a53.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-4x8-minmax-asm-aarch64-neonfma-cortex-a53.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-4x8-minmax-asm-aarch64-neonfma-cortex-a55.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-4x8-minmax-asm-aarch64-neonfma-cortex-a75-prfm.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-4x8-minmax-asm-aarch64-neonfma-cortex-a75.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-4x8-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-4x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-4x12-minmax-asm-aarch64-neonfma-cortex-a53.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-5x8-minmax-asm-aarch64-neonfma-cortex-a75-prfm.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-5x8-minmax-asm-aarch64-neonfma-cortex-a75.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-6x8-minmax-asm-aarch64-neonfma-cortex-a53.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-6x8-minmax-asm-aarch64-neonfma-cortex-a55.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-6x8-minmax-asm-aarch64-neonfma-cortex-a73.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-6x8-minmax-asm-aarch64-neonfma-cortex-a75-prfm.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-6x8-minmax-asm-aarch64-neonfma-cortex-a75.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-6x8-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-gemminc/gen/f32-gemminc-6x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-igemm/f32-igemm-1x12-minmax-asm-aarch64-neonfma-cortex-a53.S
// - external/XNNPACK/src/f32-igemm/f32-igemm-4x8-minmax-asm-aarch64-neonfma-cortex-a55.S
// - external/XNNPACK/src/f32-igemm/f32-igemm-4x12-minmax-asm-aarch64-neonfma-cortex-a53.S
// - external/XNNPACK/src/f32-igemm/f32-igemm-6x8-minmax-asm-aarch64-neonfma-cortex-a55.S
// - external/XNNPACK/src/f32-igemm/f32-igemm-6x8-minmax-asm-aarch64-neonfma-cortex-a73.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-1x8-minmax-asm-aarch64-neonfma-cortex-a53-prfm.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-1x8-minmax-asm-aarch64-neonfma-cortex-a53.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-1x8-minmax-asm-aarch64-neonfma-cortex-a75-prfm.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-1x8-minmax-asm-aarch64-neonfma-cortex-a75.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-1x8-minmax-asm-aarch64-neonfma-ld64-prfm.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-1x8-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-4x2-minmax-asm-aarch64-neonfma-cortex-a75-prfm.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-4x2-minmax-asm-aarch64-neonfma-cortex-a75.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-4x2-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-4x8-minmax-asm-aarch64-neonfma-cortex-a53-prfm.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-4x8-minmax-asm-aarch64-neonfma-cortex-a53.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-4x8-minmax-asm-aarch64-neonfma-cortex-a75-prfm.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-4x8-minmax-asm-aarch64-neonfma-cortex-a75.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-4x8-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-4x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-5x8-minmax-asm-aarch64-neonfma-cortex-a75-prfm.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-5x8-minmax-asm-aarch64-neonfma-cortex-a75.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-6x8-minmax-asm-aarch64-neonfma-cortex-a53-prfm.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-6x8-minmax-asm-aarch64-neonfma-cortex-a53.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-6x8-minmax-asm-aarch64-neonfma-cortex-a75-prfm.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-6x8-minmax-asm-aarch64-neonfma-cortex-a75.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-6x8-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-igemm/gen/f32-igemm-6x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-ppmm/gen/f32-ppmm-4x8-minmax-asm-aarch64-neonfma-cortex-a75-prfm.S
// - external/XNNPACK/src/f32-ppmm/gen/f32-ppmm-4x8-minmax-asm-aarch64-neonfma-cortex-a75.S
// - external/XNNPACK/src/f32-ppmm/gen/f32-ppmm-4x8-minmax-asm-aarch64-neonfma-ld128-prfm.S
// - external/XNNPACK/src/f32-ppmm/gen/f32-ppmm-4x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-ppmm/gen/f32-ppmm-8x8-minmax-asm-aarch64-neonfma-cortex-a75-prfm.S
// - external/XNNPACK/src/f32-ppmm/gen/f32-ppmm-8x8-minmax-asm-aarch64-neonfma-cortex-a75.S
// - external/XNNPACK/src/f32-ppmm/gen/f32-ppmm-8x8-minmax-asm-aarch64-neonfma-ld128-prfm.S
// - external/XNNPACK/src/f32-ppmm/gen/f32-ppmm-8x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-1x8-minmax-asm-aarch64-neon-ld128-acc2-prfm.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-1x8-minmax-asm-aarch64-neon-ld128-acc2.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-1x8-minmax-asm-aarch64-neonfma-ld64-acc2-prfm.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-1x8-minmax-asm-aarch64-neonfma-ld64-acc2.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-1x8-minmax-asm-aarch64-neonfma-ld64-acc4-prfm.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-1x8-minmax-asm-aarch64-neonfma-ld64-acc4.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-1x8-minmax-asm-aarch64-neonfma-ld64-prfm.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-1x8-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-1x8-minmax-asm-aarch64-neonfma-ld128-acc2-prfm.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-1x8-minmax-asm-aarch64-neonfma-ld128-acc2.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-1x8-minmax-asm-aarch64-neonfma-ld128-acc4-prfm.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-1x8-minmax-asm-aarch64-neonfma-ld128-acc4.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-1x8-minmax-asm-aarch64-neonfma-ld128-prfm.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-1x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-4x1-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-4x1-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-4x2-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-4x2-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-4x8-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-4x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-6x8-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-qc4w-gemm/gen/f32-qc4w-gemm-6x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x8-minmax-asm-aarch64-neon-ld128-acc2-prfm.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x8-minmax-asm-aarch64-neon-ld128-acc2.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x8-minmax-asm-aarch64-neonfma-ld64-acc2-prfm.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x8-minmax-asm-aarch64-neonfma-ld64-acc2.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x8-minmax-asm-aarch64-neonfma-ld64-acc4-prfm.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x8-minmax-asm-aarch64-neonfma-ld64-acc4.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x8-minmax-asm-aarch64-neonfma-ld64-prfm.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x8-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x8-minmax-asm-aarch64-neonfma-ld128-acc2-prfm.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x8-minmax-asm-aarch64-neonfma-ld128-acc2.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x8-minmax-asm-aarch64-neonfma-ld128-acc4-prfm.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x8-minmax-asm-aarch64-neonfma-ld128-acc4.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x8-minmax-asm-aarch64-neonfma-ld128-prfm.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-1x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x1-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x1-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x2-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x2-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x8-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-4x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-6x8-minmax-asm-aarch64-neonfma-ld64.S
// - external/XNNPACK/src/f32-qc8w-gemm/gen/f32-qc8w-gemm-6x8-minmax-asm-aarch64-neonfma-ld128.S
// - external/XNNPACK/src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-4x16c4-minmax-asm-aarch64-neondot-ld128.S
// - external/XNNPACK/src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-4x16c4-minmax-asm-aarch64-neondotfp16arith-cortex-a55.S
// - external/XNNPACK/src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-4x16c4-minmax-asm-aarch64-neondot-cortex-a55.S
// - external/XNNPACK/src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-4x16c4-minmax-asm-aarch64-neondot-ld128.S
// - external/XNNPACK/src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-4x16c4-minmax-asm-aarch64-neondot-cortex-a55.S
// - external/XNNPACK/src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-4x16c4-minmax-asm-aarch64-neondot-ld64.S
// - external/XNNPACK/src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-4x16c4-minmax-asm-aarch64-neondot-ld128.S
// - external/XNNPACK/src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-4x16c4-minmax-asm-aarch64-neondot-cortex-a55.S
// - external/XNNPACK/src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-4x16c4-minmax-asm-aarch64-neondot-ld128.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-1x8c8-minmax-fp32-asm-aarch64-neon-mlal-cortex-a53-prfm.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-1x8c8-minmax-fp32-asm-aarch64-neon-mlal-cortex-a53.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-1x8c8-minmax-fp32-asm-aarch64-neon-mlal-prfm.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-1x8c8-minmax-fp32-asm-aarch64-neon-mlal.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-1x16c4-minmax-fp32-asm-aarch64-neondot-ld32.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-1x16c4-minmax-fp32-asm-aarch64-neondot-ld64.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-2x8c8-minmax-fp32-asm-aarch64-neon-mlal-cortex-a53-prfm.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-2x8c8-minmax-fp32-asm-aarch64-neon-mlal-cortex-a53.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-2x8c8-minmax-fp32-asm-aarch64-neon-mlal-prfm.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-2x8c8-minmax-fp32-asm-aarch64-neon-mlal.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-2x8c8-minmax-fp32-asm-aarch64-neon-mull.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-2x8c16-minmax-fp32-asm-aarch64-neon-mlal.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-4x16-minmax-fp32-asm-aarch64-neon-mlal-lane-cortex-a53-prfm.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-4x16-minmax-fp32-asm-aarch64-neon-mlal-lane-cortex-a53.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-4x16-minmax-fp32-asm-aarch64-neon-mlal-lane-ld64-prfm.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-4x16-minmax-fp32-asm-aarch64-neon-mlal-lane-ld64.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-4x16c4-minmax-fp32-asm-aarch64-neondot-cortex-a55.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-4x16c4-minmax-fp32-asm-aarch64-neondot-ld32.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-4x16c4-minmax-fp32-asm-aarch64-neondot-ld64.S
// - external/XNNPACK/src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-4x16c4-minmax-fp32-asm-aarch64-neondot-ld128.S
// - external/XNNPACK/src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-1x8c8-minmax-fp32-asm-aarch64-neon-mlal-cortex-a53-prfm.S
// - external/XNNPACK/src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-1x8c8-minmax-fp32-asm-aarch64-neon-mlal-cortex-a53.S
// - external/XNNPACK/src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-1x8c8-minmax-fp32-asm-aarch64-neon-mlal-prfm.S
// - external/XNNPACK/src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-1x8c8-minmax-fp32-asm-aarch64-neon-mlal.S
// - external/XNNPACK/src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-2x8c8-minmax-fp32-asm-aarch64-neon-mlal-cortex-a53-prfm.S
// - external/XNNPACK/src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-2x8c8-minmax-fp32-asm-aarch64-neon-mlal-cortex-a53.S
// - external/XNNPACK/src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-2x8c8-minmax-fp32-asm-aarch64-neon-mlal-prfm.S
// - external/XNNPACK/src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-2x8c8-minmax-fp32-asm-aarch64-neon-mlal.S
// - external/XNNPACK/src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-2x8c16-minmax-fp32-asm-aarch64-neon-mlal.S
// - external/XNNPACK/src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-4x16-minmax-fp32-asm-aarch64-neon-mlal-lane-cortex-a53-prfm.S
// - external/XNNPACK/src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-4x16-minmax-fp32-asm-aarch64-neon-mlal-lane-cortex-a53.S
// - external/XNNPACK/src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-4x16-minmax-fp32-asm-aarch64-neon-mlal-lane-ld64-prfm.S
// - external/XNNPACK/src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-4x16-minmax-fp32-asm-aarch64-neon-mlal-lane-ld64.S
// - external/XNNPACK/src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-4x16c4-minmax-fp32-asm-aarch64-neondot-cortex-a55.S
// - external/XNNPACK/src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-4x16c4-minmax-fp32-asm-aarch64-neondot-ld64.S
// - external/XNNPACK/src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-4x16c4-minmax-fp32-asm-aarch64-neondot-ld128.S
// - external/XNNPACK/src/qu8-gemm/gen/qu8-gemm-4x16-minmax-rndnu-asm-aarch64-neon-mlal-lane-cortex-a53-prfm.S
// - external/XNNPACK/src/qu8-gemm/gen/qu8-gemm-4x16-minmax-rndnu-asm-aarch64-neon-mlal-lane-cortex-a53.S
// - external/XNNPACK/src/qu8-gemm/gen/qu8-gemm-4x16-minmax-rndnu-asm-aarch64-neon-mlal-lane-cortex-a75-prfm.S
// - external/XNNPACK/src/qu8-gemm/gen/qu8-gemm-4x16-minmax-rndnu-asm-aarch64-neon-mlal-lane-cortex-a75.S
// - external/XNNPACK/src/qu8-gemm/gen/qu8-gemm-4x16-minmax-rndnu-asm-aarch64-neon-mlal-lane-ld64-prfm.S
// - external/XNNPACK/src/qu8-gemm/gen/qu8-gemm-4x16-minmax-rndnu-asm-aarch64-neon-mlal-lane-ld64.S
// - external/XNNPACK/src/qu8-igemm/gen/qu8-igemm-4x16-minmax-rndnu-asm-aarch64-neon-mlal-lane-cortex-a53-prfm.S
// - external/XNNPACK/src/qu8-igemm/gen/qu8-igemm-4x16-minmax-rndnu-asm-aarch64-neon-mlal-lane-cortex-a53.S
// - external/XNNPACK/src/qu8-igemm/gen/qu8-igemm-4x16-minmax-rndnu-asm-aarch64-neon-mlal-lane-cortex-a75-prfm.S
// - external/XNNPACK/src/qu8-igemm/gen/qu8-igemm-4x16-minmax-rndnu-asm-aarch64-neon-mlal-lane-cortex-a75.S
// - external/XNNPACK/src/qu8-igemm/gen/qu8-igemm-4x16-minmax-rndnu-asm-aarch64-neon-mlal-lane-ld64-prfm.S
// - external/XNNPACK/src/qu8-igemm/gen/qu8-igemm-4x16-minmax-rndnu-asm-aarch64-neon-mlal-lane-ld64.S

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>

static const uint8_t xnn_build_identifier[] = {
  114, 251, 201, 117, 214, 128, 233, 225,
  125,  12, 126, 215,  94, 144,  92, 235,
   23, 145,   6, 223, 182, 142, 171,  94,
  105, 127, 244,  63, 227, 186, 133,  70
};

size_t xnn_experimental_get_build_identifier_size() {
  return sizeof(xnn_build_identifier);
}

const void* xnn_experimental_get_build_identifier_data() {
  return xnn_build_identifier;
}

bool xnn_experimental_check_build_identifier(const void* data, const size_t size) {
  if(size != xnn_experimental_get_build_identifier_size()) {
    return false;
  }
  return !memcmp(data, xnn_build_identifier, size);
}
