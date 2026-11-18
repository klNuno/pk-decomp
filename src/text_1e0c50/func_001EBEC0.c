/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001EBEC0_0 {
    s32 *unk_00;
    u8 pad_04[0x4];
    u8 unk_08;
} unk_func_001EBEC0_0;

typedef struct unk_func_001EBEC0_1 {
    u8 pad_00[0x4];
    u8 unk_04;
} unk_func_001EBEC0_1;

typedef struct unk_func_001EBEC0_2 {
    u8 pad_00[0x8];
    unk_func_001EBEC0_0 *unk_08;
    u8 pad_0C[0x4];
    unk_func_001EBEC0_1 *unk_10;
} unk_func_001EBEC0_2;

void func_0011B418(char *, s32);
u8 func_001E6FA0(unk_func_001EBEC0_2 *, u8);
s32 func_001E7850(unk_func_001EBEC0_2 *, u8);
s32 func_001EBD30(s32, s32, s8 *);
extern char D_0034D870[];
extern s8 D_00360128;
extern s8 D_00360138;
extern u8 D_0036013C;
extern unk_func_001EBEC0_2 *D_00360140;

s32 func_001EBEC0(s32 arg0, unk_func_001EBEC0_2 *arg1) {
    s8 i;
    u8 flags;
    s32 s2;
    u8 s3;
    s32 retry;
    s8 last;
    u8 s6;
    s8 sp80[16];

    retry = 0;
    D_00360140 = arg1;
    D_00360128 = 0;
restart:
    last = (s8)arg1->unk_08->unk_08 - 1;
    s6 = arg1->unk_10->unk_04;
    for (i = 0; i <= last; i++) {
        D_0036013C = i + 1;
        s3 = func_001E6FA0(arg1, D_0036013C);
        if (s3 < s6) {
            s2 = func_001E7850(arg1, s3);
        } else {
            s2 = arg1->unk_08->unk_00[i];
        }
        s2 = func_001EBD30(arg0, s2, sp80);
        flags = sp80[0];
        if ((flags & 1) == 1) {
            return 1;
        }
        if ((flags & 8) == 8) {
            D_00360138 = 0;
            retry++;
            if (retry != 200) {
                goto restart;
            }
            func_0011B418(D_0034D870, 0x742);
        }
        if ((flags & 0x10) != 0x10) {
            return 0;
        }
    }
    return 0;
}
