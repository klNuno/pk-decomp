#include "common.h"

typedef struct unk_func_0012FB40_0 {
    struct unk_func_0012FB40_0 *unk_00;
    struct unk_func_0012FB40_0 *unk_04;
} unk_func_0012FB40_0;

typedef struct unk_func_0012FB40_1 {
    unk_func_0012FB40_0 *unk_00;
    u8 pad_04[0x8];
    s32 *unk_0C;
    s32 unk_10;
} unk_func_0012FB40_1;

typedef struct unk_func_0012FB40_2 {
    u8 pad_00[0x4];
    unk_func_0012FB40_1 *unk_04;
    u8 pad_08[0x24];
    s32 unk_2C;
} unk_func_0012FB40_2;

void func_0012B540();
s32 func_0012C370();
void func_0012E670();
void func_001302C0();
f32 func_00131AC0();
u8 func_00165600();
void func_00165C60();
void func_00165C90();
void func_00165E30();
void func_00193400();
void func_00193420(f32);
void func_00193470(f32);
s32 func_001BFB20();
extern s32 D_0035F8E8;
extern unk_func_0012FB40_2 *D_0035F8EC;
extern u8 D_0035F8F4;
extern u8 D_003601AC;

void func_0012FB40(s32 arg0, s32 arg1, unk_func_0012FB40_2 *arg2, s32 arg3, s32 arg4) {
    unk_func_0012FB40_1 *list;
    s32 n;
    unk_func_0012FB40_1 *t;
    s16 count;
    s32 e;
    s32 *p;
    s16 i;
    unk_func_0012FB40_0 *node;
    unk_func_0012FB40_2 *obj;
    s32 bits;
    s32 flags;

    list = arg2->unk_04;
    if (arg4 == 0 && D_003601AC == 0) {
        return;
    }
    func_00165E30(1);
    n = 0;
    func_001302C0(arg1, arg2);
    if ((arg3 & 0x8000) && (arg2->unk_2C & 0x8000)) {
        t = arg2->unk_04;
        count = 0;
        p = t->unk_0C;
        for (i = 0; i < t->unk_10; i++) {
            e = *p;
            if (func_00165600(e) & 2) {
                func_00165C90(arg1, e);
                count++;
            }
            p++;
        }
        n = count;
    }
    if (D_0035F8F4 == 0 || D_0035F8F4 == 2) {
        func_00193470(func_00131AC0(arg2));
        func_00193420(0.0f);
        for (node = list->unk_00; node != 0; node = node->unk_04) {
            obj = (unk_func_0012FB40_2 *)node->unk_00;
            flags = obj->unk_2C;
            bits = func_001BFB20(obj);
            func_00193400();
            if (D_003601AC != 0 && !(bits & 0x100000)) {
                continue;
            }
            if (flags & 0x200000) {
                D_0035F8E8 = 1;
                D_0035F8EC = obj;
                func_0012B540(arg1, obj, flags & arg3, arg4);
                D_0035F8E8 = 0;
                D_0035F8EC = 0;
                if (func_0012C370() == 0 && (bits & 0x100)) {
                    func_0012E670(arg1, obj, arg2, arg3);
                }
            }
        }
    }
    if (n != 0) {
        func_00165C60(arg1, (s16)n);
    }
}
