/* profile: o0_301_p */
#include "common.h"

s32 func_00161ED0(s32, u16);
s16 func_001DB990(s32, s16);
s32 func_001DB9B0(s32, s16, s16);
s16 func_001DBB80(s32, s16);
s32 func_001DBBA0(s32, s16, s16);
void func_001DBCD0(s32, s16, s32 *);
s16 func_001DD0C0(s32);
s16 func_001DD310(s32, s16);

s32 func_001B02F0(s32 arg0, u16 arg1) {
    s16 i;
    s16 j;
    s16 unk_00;
    s16 unk_02;
    s32 unk_5C;

    unk_00 = func_001DD0C0(arg0);
    for (i = 0; i < unk_00; i++) {
        switch (func_001DD310(arg0, i)) {
        case 1:
            func_001DBCD0(arg0, i, &unk_5C);
            if (func_00161ED0(unk_5C, arg1)) {
                return unk_5C;
            }
            break;
        case 7:
            unk_02 = func_001DBB80(arg0, i);
            for (j = 0; j < unk_02; j++) {
                unk_5C = func_001DBBA0(arg0, i, j);
                if (func_00161ED0(unk_5C, arg1)) {
                    return unk_5C;
                }
            }
            break;
        case 8:
            unk_02 = func_001DB990(arg0, i);
            for (j = 0; j < unk_02; j++) {
                unk_5C = func_001DB9B0(arg0, i, j);
                if (func_00161ED0(unk_5C, arg1)) {
                    return unk_5C;
                }
            }
            break;
        case 0:
        default:
            break;
        }
    }
    return 0;
}
