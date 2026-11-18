#include "common.h"

void *malloc(u32);
extern void *D_007AB2E0[];
extern void *D_007AB2E4[];
extern void *D_007AB2E8[];
extern void *D_007AB2EC[];
extern void *D_007AB2F0[];
extern void *D_007AB2F4[];
extern void *D_007AB2F8[];
extern void *D_007AB2FC[];
extern void *D_00360350;
extern void *D_00360354;
extern void *D_00360358;
extern void *D_0036035C;
extern void *D_00360360;
extern void *D_00360364;
extern void *D_00360368;
extern void *D_0036036C;

void func_00278AE0(void) {
    D_007AB2E0[0] = malloc(0x104F);
    D_007AB2E4[0] = malloc(0x19583F);
    D_007AB2E8[0] = malloc(0x83F);
    D_007AB2EC[0] = malloc(0xC03F);
    D_007AB2F0[0] = malloc(0x8003F);
    D_007AB2F4[0] = malloc(0x403F);
    D_007AB2F8[0] = malloc(0x16807F);
    D_007AB2FC[0] = malloc(0x2804B);
    D_00360368 = (void *)(((s32)D_007AB2E0[0] + 0x3F) & ~0x3F);
    D_00360364 = (void *)(((s32)D_007AB2E4[0] + 0x3F) & ~0x3F);
    D_00360360 = (void *)(((s32)D_007AB2E8[0] + 0x3F) & ~0x3F);
    D_00360358 = (void *)(((s32)D_007AB2EC[0] + 0x3F) & ~0x3F);
    D_00360354 = (void *)(((s32)D_007AB2F0[0] + 0x3F) & ~0x3F);
    D_00360350 = (void *)(((s32)D_007AB2F4[0] + 0x3F) & ~0x3F);
    D_0036036C = (void *)(((s32)D_007AB2F8[0] + 0x3F) & ~0x3F);
    D_0036035C = (void *)(((s32)D_007AB2FC[0] + 0x3F) & ~0x3F);
}
