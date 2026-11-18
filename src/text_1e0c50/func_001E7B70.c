/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[0x2];
    s32 unk_04;
} unk_func_001E7B70_0;

typedef struct {
    u8 pad_00[0x4];
    u8 unk_04;
} unk_func_001E7B70_8;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x4];
    s32 unk_0C;
} unk_func_001E7B70_1;

typedef struct {
    u8 pad_00[0x4];
    unk_func_001E7B70_1 *unk_04;
} unk_func_001E7B70_2;

typedef struct {
    unk_func_001E7B70_2 *unk_00;
} unk_func_001E7B70_3;

typedef struct {
    unk_func_001E7B70_3 *unk_00;
    u8 *unk_04;
    u8 *unk_08;
} unk_func_001E7B70_4;

typedef struct {
    u8 *unk_00;
    u8 pad_04[0x8];
    u8 unk_0C;
} unk_func_001E7B70_5;

typedef struct {
    u8 pad_00[0x8];
    unk_func_001E7B70_5 *unk_08;
} unk_func_001E7B70_6;

typedef struct {
    unk_func_001E7B70_6 *unk_00;
    u8 pad_04[0x8];
    unk_func_001E7B70_4 *unk_0C;
} unk_func_001E7B70_7;

s32 func_00208E60(s32);
s32 func_001E8B50(s32, u8);
void memcpy();

void func_001E7B70(unk_func_001E7B70_7 *arg0, s32 arg1) {
    u8 i;
    s32 type;
    unk_func_001E7B70_0 *dst;
    unk_func_001E7B70_0 *src;
    s32 off;
    s32 size;
    u8 *base;
    u8 *out;
    unk_func_001E7B70_8 *p;
    s32 temp;

    if (arg0 != NULL && arg0->unk_0C != NULL) {
        base = NULL;
        out = arg0->unk_0C->unk_08;
        if (arg0->unk_0C->unk_04 == NULL) {
            base = arg0->unk_00->unk_08->unk_00;
        } else {
            base = arg0->unk_0C->unk_04;
        }
        for (i = 0; i < arg0->unk_00->unk_08->unk_0C; i++) {
            type = arg0->unk_0C->unk_00->unk_00->unk_04[i].unk_04;
            if (type == 9) {
                dst = (unk_func_001E7B70_0 *)(out + arg0->unk_0C->unk_00->unk_00->unk_04[i].unk_00);
                src = (unk_func_001E7B70_0 *)(base + arg0->unk_0C->unk_00->unk_00->unk_04[i].unk_00);
                dst->unk_04 = src->unk_04;
                dst->unk_00 = 0;
                dst->unk_01 = src->unk_01;
            } else {
                temp = arg0->unk_0C->unk_00->unk_00->unk_04[i].unk_0C;
                if (arg1 <= temp) {
                    off = arg0->unk_0C->unk_00->unk_00->unk_04[i].unk_00;
                    if (func_00208E60(type) == 0x2A) {
                        p = (unk_func_001E7B70_8 *)(arg0->unk_00->unk_08->unk_00 + arg0->unk_0C->unk_00->unk_00->unk_04[i].unk_00);
                        size = func_001E8B50(type, p->unk_04);
                    } else {
                        size = func_001E8B50(type, 0);
                    }
                    memcpy(out + off, base + off, size);
                }
            }
        }
    }
}
