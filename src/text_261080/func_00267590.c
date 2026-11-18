/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00267590_0 {
    u8 pad_00[0x640];
    s32 unk_640;
    u8 pad_644[8];
} unk_func_00267590_0;

typedef struct unk_func_00267590_1 {
    u8 pad_00[0x18];
    s32 unk_18;
    s32 unk_1C;
    u8 pad_20[4];
} unk_func_00267590_1;

typedef struct unk_func_00267590_2 {
    u8 pad_00[0x18];
    s32 unk_18;
    u8 pad_1C[0x14];
} unk_func_00267590_2;

typedef struct unk_func_00267590_3 {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 pad_24[4];
} unk_func_00267590_3;

void func_0016FF50(s32 *);
void func_00271160();
extern s32 D_00360210;
extern s8 D_00360224;
extern s32 D_0035F5AC;
extern s32 D_0036023C;
extern s32 D_00360244;
extern s32 D_0036021C;
extern s32 D_00360248;
extern s8 D_00360234;
extern s32 D_0036024C;
extern s32 D_0036020C;
extern unk_func_00267590_0 D_00618AE0[];
extern unk_func_00267590_1 D_00630780[];
extern unk_func_00267590_2 D_00630D20[];
extern unk_func_00267590_3 D_00630460[];
extern u8 D_0035F5B8;
extern s32 D_00360288;
extern f32 D_00360298;
extern s32 D_003602A0;
extern s32 D_0036029C;
extern s32 D_00360294;
extern s32 D_00360290;

void func_00267590(void) {
    u32 i;
    s32 j;
    s32 k;
    s32 m;

    D_00360210 = 0;
    D_00360224 = 0;
    D_0035F5AC = 1;
    D_0036023C = 0;
    D_00360244 = 0;
    D_0036021C = 0;
    D_00360248 = 0;
    D_00360234 = 0;
    D_0036024C = 0;
    D_0036020C = 0;
    for (i = 0; i < 50; i++) {
        D_00618AE0[i].unk_640 = 0;
    }
    for (j = 0; j < 40; j++) {
        D_00630780[j].unk_1C = 0;
        D_00630780[j].unk_18 = 0;
    }
    for (k = 0; k < 200; k++) {
        D_00630D20[k].unk_18 = 0;
    }
    for (m = 0; m < 20; m++) {
        if (D_0035F5B8 == 0 && D_00630460[m].unk_20 != 0) {
            func_0016FF50(&D_00630460[m].unk_20);
        }
        D_00630460[m].unk_20 = 0;
    }
    D_0035F5B8 = 0;
    func_00271160();
    D_00360288 = 0;
    D_00360298 = 4.0f;
    D_003602A0 = 0;
    D_0036029C = 0;
    D_00360294 = 0;
    D_00360290 = 0;
}
