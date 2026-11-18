/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002D2D50_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002D2D50_0;

typedef struct unk_func_002D2D50_1 {
    s32 unk_00;
    u8 pad_04[0x8];
} unk_func_002D2D50_1;

typedef struct unk_func_002D2D50_2 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002D2D50_2;

extern "C" {
void func_002D1960(...);
s32 func_002D2D20(...);
void func_002D2D30(...);
s32 func_002D2F80(...);
s32 func_002D2FF0(...);
void func_002D3000(...);
void func_002D3010(...);
s32 func_002D3020(...);
s32 *func_002D3030(...);
void func_002D3040(...);
void func_002D30A0(...);
void func_002D3300(...);
void func_002D35A0(...);
void func_002F5390(...);
s32 func_002F5A00(...);
void func_003030B0(...);
s32 func_00303210(...);
s32 func_00303380(...);

s32 func_002D2D50(unk_func_002D2D50_0 *arg0, s32 arg1, unk_func_002D2D50_0 *arg2) {
    unk_func_002D2D50_1 sp58;
    unk_func_002D2D50_2 sp68;
    unk_func_002D2D50_2 sp70;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s32 sp94;
    s32 sp98;
    s32 sp9C;
    s32 spA0;
    s32 spA4;
    s32 spA8;
    s32 spAC;
    s32 i;
    s32 end;
    s32 end2;

    sp7C = func_00303210(func_00303380(), arg1);
    if (sp7C == 0) {
        sp7C = func_002F5A00(arg0->unk_0C, arg1);
        if (sp7C != 0) {
            for (i = 0; i < 10; i++) {
                func_002D35A0(&sp58, &spA0, &sp9C);
                func_002D1960(&sp9C, -1);
                func_003030B0(func_00303380(), &sp58);
                func_002F5390(arg0->unk_0C, &sp58);
                if (sp58.unk_00 == 0) {
                    func_002D3040(&sp58, -1);
                    break;
                }
                func_002D3040(&sp58, -1);
            }
        }
    }
    func_002D2D30(&sp80, func_002D2D20(arg0));
    end = sp80;
    func_002D30A0(&sp84, arg0, &sp7C);
    if (sp84 == end) {
        u8 eq = false;
        s32 size = *func_002D3030(arg0);
        s32 size2 = *func_002D3030(arg2);
        if (size2 == size) {
            func_002D3010(&spAC, func_002D3020(arg0));
            func_002D3000(&sp90, &spAC);
            func_002D3010(&spA8, func_002D2FF0(arg2));
            func_002D3000(&sp8C, &spA8);
            func_002D3010(&spA4, func_002D3020(arg2));
            func_002D3000(&sp88, &spA4);
            if (func_002D2F80(sp88, sp8C, sp90) != 0) {
                eq = true;
            }
        }
        if ((bool)eq ^ 1) {
            func_002D2D30(&sp94, func_002D2D20(arg2));
            end2 = sp94;
            func_002D30A0(&sp98, arg2, &sp7C);
            if (sp98 == end2) {
                func_002D3300(&sp68, arg0, &sp7C);
            }
        } else {
            func_002D3300(&sp70, arg0, &sp7C);
        }
    }
    return sp7C;
}
}
