#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[8];
    s32 unk_14;
    u32 unk_18;
    s32 unk_1C;
    u8 unk_20;
} unk_func_00309700_0;

extern u8 D_0035F7AC;
extern u8 D_003607E8;
extern s32 D_003607EC;
extern u32 D_003607F0;
extern unk_func_00309700_0 D_007C81D0[];
extern unk_func_00309700_0 D_007C9200[];
extern u32 D_007C9230[];
extern s32 D_007C9240[];
extern u8 *D_007C9250[];
extern char D_007C9260[][0x100];

extern void func_00119548(void *);
extern void func_0011D8F0(char *, const char *, u32);
extern u32 func_003079E0(s32);
extern u32 func_003079F0(s32, s32, void *, u32);
extern void func_00307A60(s32);
extern s32 func_00307A70(const char *, s32);
extern u32 func_00309A00(unk_func_00309700_0 *, void *, u32, u32);
extern s32 func_0030A050(void);
extern void func_0030E190(unk_func_00309700_0 *, void *, u32, s32);
extern void *malloc(u32);
extern s32 strcmp(const char *, const char *);

s32 func_00309700(unk_func_00309700_0 *arg0, const char *arg1, s32 arg2) {
    s32 temp0;
    s32 i;

    arg0->unk_1C = arg2;
    if (D_003607E8 != 0 && D_0035F7AC != 0 && arg0->unk_1C == 0) {
        D_003607E8 = 0;
        func_00309A00(D_007C9200, &arg0->unk_18, 4, 1);
        D_003607E8 = 1;
        return arg0->unk_18 != 0;
    }

    if (D_003607EC != 0) {
        if (arg0->unk_20 != 0) {
            arg0->unk_08 = -1;
            for (i = 0; i < 4 && arg0->unk_08 == -1; ++i) {
                if (D_007C9250[i] != NULL && strcmp(D_007C9260[i], arg1) == 0) {
                    ++D_007C9240[i];
                    arg0->unk_08 = i;
                    arg0->unk_18 = D_007C9230[i];
                }
            }
            if (arg0->unk_08 != -1) {
                return 1;
            }
        }
    }
    arg0->unk_08 = func_00307A70(arg1, arg2);
    if (arg0->unk_08 != -1) {
        arg0->unk_18 = func_003079E0(arg0->unk_08);
        arg0->unk_14 = 0;
    } else {
        arg0->unk_18 = 0;
        arg0->unk_20 = 0;
    }

    if (D_003607EC != 0 && arg0->unk_20 != 0) {
        arg0->unk_20 = 0;
        temp0 = func_0030A050();
        if (temp0 != -1 && arg0->unk_18 < 0x7D001U) {
            if (D_007C9250[temp0] != NULL) {
                func_00119548(D_007C9250[temp0]);
                D_003607F0 -= D_007C9230[temp0];
            }
            D_007C9250[temp0] = malloc(arg0->unk_18);
            if (D_007C9250[temp0] != NULL) {
                D_007C9230[temp0] = func_003079F0(arg0->unk_08, 0, D_007C9250[temp0], arg0->unk_18);
                func_00307A60(arg0->unk_08);
                func_0011D8F0(D_007C9260[temp0], arg1, 0x100);
                D_003607F0 += D_007C9230[temp0];
                D_007C9240[temp0] = 1;
                arg0->unk_18 = D_007C9230[temp0];
                arg0->unk_08 = temp0;
                arg0->unk_20 = 1;
                return 1;
            }
        }
    }
    if (D_003607E8 != 0 && D_0035F7AC == 0 && arg0->unk_1C == 0) {
        func_0030E190(D_007C81D0, &arg0->unk_18, 4, 1);
    }
    return arg0->unk_08 != -1;
}
