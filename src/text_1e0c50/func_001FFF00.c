/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001FFF00_2 {
    u8 pad_00[0x72];
    u16 unk_72;
} unk_func_001FFF00_2;

typedef struct unk_func_001FFF00_3 {
    u8 pad_00[0x68];
    s32 unk_68;
} unk_func_001FFF00_3;

typedef struct unk_func_001FFF00_1 {
    u8 pad_00[0xC];
    unk_func_001FFF00_2 *unk_0C;
    unk_func_001FFF00_3 *unk_10;
    u8 pad_14[0xBC];
} unk_func_001FFF00_1;

typedef struct unk_func_001FFF00_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_001FFF00_0;

unk_func_001FFF00_0 *HIE_fn_hGetSuperObjectObject(s32);
void func_001B4D70(s32);
void func_001F49F0(unk_func_001FFF00_1 *);
void func_001F4BF0(unk_func_001FFF00_1 *);
void func_001F55C0(unk_func_001FFF00_1 *);
void func_001F6260(unk_func_001FFF00_1 *);
void func_001FF6A0(s32, unk_func_001FFF00_1 *);
void func_00202620(unk_func_001FFF00_1 *);
void func_00202730(unk_func_001FFF00_1 *);
extern u8 D_0035F590;
extern u8 D_00360154;
extern u8 D_00360158;

void func_001FFF00(s32 arg0) {
    unk_func_001FFF00_1 sp40;
    s32 temp_s2;

    temp_s2 = HIE_fn_hGetSuperObjectObject(arg0)->unk_10;
    func_001B4D70(temp_s2);
    func_001FF6A0(arg0, &sp40);
    D_00360158 = (sp40.unk_0C->unk_72 & 0x4000) ? 1 : 0;
    D_00360154 = (sp40.unk_0C->unk_72 & 0x20) ? 1 : 0;
    D_0035F590 = 1;
    func_001F49F0(&sp40);
    func_001F4BF0(&sp40);
    func_001F55C0(&sp40);
    func_001F6260(&sp40);
    if (sp40.unk_10->unk_68 != 0) {
        func_00202620(&sp40);
        func_00202730(&sp40);
    }
}
