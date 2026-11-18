#include "common.h"

extern u8 D_007B7B8F[];
extern f32 D_007B7FA0[];
extern f32 D_007B7FF0[];

void func_0028F130(s32 arg0, s32 arg1, f32 arg2) {
    if (arg1 == 0x1601) {
        switch (arg0) {
        case 0x408:
            D_007B7FA0[0] = arg2;
        case 0x405:
            D_007B7FF0[0] = arg2;
            break;
        case 0x404:
            D_007B7FA0[0] = arg2;
            break;
        }
        D_007B7B8F[0] = 1;
    }
}
