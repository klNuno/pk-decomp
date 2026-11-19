/* profile: opt_noprop */
#include "common.h"

typedef struct {
    u8 unk_00 : 1;
    u8 unk_01 : 1;
    u8 unk_02 : 1;
    u8 unk_03 : 1;
    u8 unk_04 : 1;
    u8 unk_05 : 1;
    u8 unk_06 : 1;
    u8 unk_07 : 1;
} unk_func_002BE600_0;

typedef union {
    u64 unk_00;
    u8 unk_00_byte;
} unk_func_002BE600_1;

typedef struct {
    u64 unk_00;
    unk_func_002BE600_1 unk_08;
} unk_func_002BE600_2;

void func_002C1650(s32, unk_func_002BE600_2 *);

extern u64 D_007B0820[];
extern u64 D_007B0828[];
extern u64 D_007B0830[];
extern u64 D_007B0838[];
extern u64 D_007B0840[];
extern u64 D_007B0848[];
extern u64 D_007B0850[];
extern u64 D_007B0858[];
extern u64 D_007B0860[];
extern u64 D_007B0868[];
extern u64 D_007B0870[];
extern u64 D_007B0878[];
extern u64 D_007B0880[];
extern u64 D_007B0888[];
extern u64 D_007B0890[];
extern u64 D_007B0898[];
extern u64 D_007B08A0[];
extern u64 D_007B08A8[];
extern u64 D_007B08B0[];
extern u64 D_007B08B8[];
extern u64 D_007B08C0[];
extern u64 D_007B08C8[];
extern u64 D_007B08D0[];
extern u64 D_007B08D8[];
extern u64 D_007B08E0[];
extern u64 D_007B08E8[];
extern u64 D_007B08F0[];
extern u64 D_007B08F8[];
extern u64 D_007B0900[];
extern u64 D_007B0908[];
extern u64 D_007B0910[];
extern u64 D_007B0918[];
extern u64 D_007B0920[];
extern u64 D_007B0928[];
extern u64 D_007B0930[];
extern u64 D_007B0938[];
extern u64 D_007B0940[];
extern u64 D_007B0948[];
extern u64 D_007B0950[];
extern u64 D_007B0958[];
extern u64 D_007B0960[];
extern u64 D_007B0968[];
extern u64 D_007B0970[];
extern u64 D_007B0978[];
extern u64 D_007B0980[];
extern u64 D_007B0988[];
extern u64 D_007B0990[];
extern u64 D_007B0998[];
extern u64 D_007B09A0[];
extern u64 D_007B09A8[];
extern u64 D_007B09B8[];
extern u64 D_007B09C8[];
extern unk_func_002BE600_0 D_007B09D0[];
extern unk_func_002BE600_0 D_007B09D2[];
extern unk_func_002BE600_0 D_007B09D4[];

#define UNK_002BE600(sp20, arg0, arg1, arg2) \
    if (arg0) { \
        const u64 *temp = (arg1); \
        sp20.unk_00 = *temp; \
        sp20.unk_08.unk_00_byte = (arg2); \
        func_002C1650(0xE, &sp20); \
        (arg0) = 0; \
    }

void func_002BE600(void) {
    unk_func_002BE600_2 sp20;

    sp20.unk_08.unk_00 = 0;
    sp20.unk_00 = 0;
    UNK_002BE600(sp20, D_007B09D2[0].unk_03, D_007B08B8, 0x1A)
    UNK_002BE600(sp20, D_007B09D2[0].unk_04, D_007B08C0, 0x1B)
    UNK_002BE600(sp20, D_007B09D0[0].unk_00, D_007B0820, 0)
    UNK_002BE600(sp20, D_007B09D0[0].unk_06, D_007B0850, 6)
    UNK_002BE600(sp20, D_007B09D0[0].unk_07, D_007B0858, 7)
    UNK_002BE600(sp20, D_007B09D0[1].unk_00, D_007B0860, 8)
    UNK_002BE600(sp20, D_007B09D0[1].unk_01, D_007B0868, 9)
    UNK_002BE600(sp20, D_007B09D0[1].unk_02, D_007B0870, 0xA)
    UNK_002BE600(sp20, D_007B09D0[1].unk_03, D_007B0878, 0xC)
    UNK_002BE600(sp20, D_007B09D0[1].unk_04, D_007B0880, 0xD)
    UNK_002BE600(sp20, D_007B09D0[1].unk_05, D_007B0888, 0x14)
    UNK_002BE600(sp20, D_007B09D0[1].unk_06, D_007B0890, 0x15)
    UNK_002BE600(sp20, D_007B09D0[1].unk_07, D_007B0898, 0x16)
    UNK_002BE600(sp20, D_007B09D2[0].unk_00, D_007B08A0, 0x17)
    UNK_002BE600(sp20, D_007B09D2[0].unk_01, D_007B08A8, 0x18)
    UNK_002BE600(sp20, D_007B09D2[0].unk_02, D_007B08B0, 0x19)
    UNK_002BE600(sp20, D_007B09D2[0].unk_05, D_007B08C8, 0x1C)
    UNK_002BE600(sp20, D_007B09D2[0].unk_06, D_007B08D0, 0x22)
    UNK_002BE600(sp20, D_007B09D2[0].unk_07, D_007B08D8, 0x34)
    UNK_002BE600(sp20, D_007B09D2[1].unk_00, D_007B08E0, 0x35)
    UNK_002BE600(sp20, D_007B09D2[1].unk_01, D_007B08E8, 0x36)
    UNK_002BE600(sp20, D_007B09D2[1].unk_02, D_007B08F0, 0x37)
    UNK_002BE600(sp20, D_007B09D2[1].unk_03, D_007B08F8, 0x3B)
    UNK_002BE600(sp20, D_007B09D2[1].unk_04, D_007B0900, 0x3D)
    UNK_002BE600(sp20, D_007B09D2[1].unk_06, D_007B0910, 0x40)
    UNK_002BE600(sp20, D_007B09D2[1].unk_07, D_007B0918, 0x41)
    UNK_002BE600(sp20, D_007B09D4[0].unk_00, D_007B0920, 0x42)
    UNK_002BE600(sp20, D_007B09D4[0].unk_01, D_007B0928, 0x43)
    UNK_002BE600(sp20, D_007B09D4[0].unk_02, D_007B0930, 0x44)
    UNK_002BE600(sp20, D_007B09D4[0].unk_03, D_007B0938, 0x45)
    UNK_002BE600(sp20, D_007B09D4[0].unk_04, D_007B0940, 0x46)
    UNK_002BE600(sp20, D_007B09D4[0].unk_05, D_007B0948, 0x47)
    UNK_002BE600(sp20, D_007B09D4[0].unk_06, D_007B0950, 0x48)
    UNK_002BE600(sp20, D_007B09D4[0].unk_07, D_007B0958, 0x49)
    UNK_002BE600(sp20, D_007B09D4[1].unk_00, D_007B0960, 0x4A)
    UNK_002BE600(sp20, D_007B09D4[1].unk_01, D_007B0968, 0x4B)
    UNK_002BE600(sp20, D_007B09D4[1].unk_02, D_007B0970, 0x4C)
    UNK_002BE600(sp20, D_007B09D4[1].unk_03, D_007B0978, 0x4D)
    UNK_002BE600(sp20, D_007B09D4[1].unk_04, D_007B0980, 0x4E)
    UNK_002BE600(sp20, D_007B09D4[1].unk_05, D_007B0988, 0x4F)
    UNK_002BE600(sp20, D_007B09D4[1].unk_06, D_007B0990, 0x50)
    UNK_002BE600(sp20, D_007B09D4[1].unk_07, D_007B0998, 0x51)
    UNK_002BE600(sp20, D_007B09D4[2].unk_00, D_007B09A0, 0x52)
    UNK_002BE600(sp20, D_007B09D4[2].unk_01, D_007B09A8, 0x53)
    UNK_002BE600(sp20, D_007B09D4[2].unk_03, D_007B09B8, 0x60)
    UNK_002BE600(sp20, D_007B09D4[2].unk_05, D_007B09C8, 0x62)
    UNK_002BE600(sp20, D_007B09D0[0].unk_01, D_007B0828, 1)
    UNK_002BE600(sp20, D_007B09D0[0].unk_02, D_007B0830, 2)
    UNK_002BE600(sp20, D_007B09D0[0].unk_03, D_007B0838, 3)
    UNK_002BE600(sp20, D_007B09D0[0].unk_04, D_007B0840, 4)
    UNK_002BE600(sp20, D_007B09D0[0].unk_05, D_007B0848, 5)
    UNK_002BE600(sp20, D_007B09D2[1].unk_05, D_007B0908, 0x3F)
}
