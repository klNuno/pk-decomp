#include "common.h"

typedef struct unk_func_002C90A0_0 {
    u8 pad_00[0x40];
} unk_func_002C90A0_0;

typedef struct unk_func_002C90A0_1 {
    u8 pad_00[0x6340];
    unk_func_002C90A0_0 unk_6340[17];
    u8 pad_6780[0x10];
    unk_func_002C90A0_0 unk_6790[4];
    u8 pad_6890[0x20];
    unk_func_002C90A0_0 unk_68B0[2];
    s32 unk_6930[4];
    unk_func_002C90A0_0 unk_6940[4][4];
} unk_func_002C90A0_1;

extern unk_func_002C90A0_1 D_007B2370;
extern s32 D_007B83E0[];
extern unk_func_002C90A0_0 *D_007B83E4[];
extern unk_func_002C90A0_0 *D_007B83E8[];
extern s32 *D_007B83EC[];
extern s32 D_007B8480[];
extern unk_func_002C90A0_0 D_007B8620[];
extern s32 D_007B86A0[];
extern unk_func_002C90A0_0 D_007B8AB0[];
extern s32 D_007B8AF0[];

void func_002C90A0(s32 arg0) {
    s32 n;

    switch (arg0) {
    case 0x1700:
        D_007B83E4[0] = D_007B8620;
        D_007B83EC[0] = D_007B86A0;
        D_007B83E8[0] = &D_007B2370.unk_6340[D_007B86A0[0]];
        break;
    case 0x1701:
        D_007B83E4[0] = D_007B8AB0;
        D_007B83EC[0] = D_007B8AF0;
        D_007B83E8[0] = &D_007B2370.unk_6790[D_007B8AF0[0]];
        break;
    case 0x1702:
        n = D_007B8480[0];
        D_007B83E4[0] = &D_007B2370.unk_68B0[n];
        D_007B83EC[0] = &D_007B2370.unk_6930[n];
        D_007B83E8[0] = &D_007B2370.unk_6940[n][*D_007B83EC[0]];
        break;
    default:
        return;
    }
    D_007B83E0[0] = arg0;
}
