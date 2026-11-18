#include "common.h"

void func_002ADFA0();
extern u8 D_007B84F8[];
extern f32 D_007B84FC[];
extern f32 D_007B8500[];

void func_002ADF00(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp;
    s32 temp2;

    if (D_007B84F8[0] != 0) {
        temp = 0.5f + D_007B84FC[0];
        temp2 = 0.5f + D_007B8500[0];
        switch (arg2) {
        case 0x1900:
        case 0x1901:
            break;
        case 0x1902:
        case 0x1903:
        case 0x1904:
        case 0x1905:
        case 0x1906:
        case 0x1907:
        case 0x1908:
        case 0x1909:
        case 0x190A:
            func_002ADFA0(temp, temp2, arg0, arg1, arg2, arg3, arg4);
            break;
        }
    }
}
