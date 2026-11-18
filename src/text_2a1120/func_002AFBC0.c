#include "common.h"

void func_002ACFF0();
void func_002ADFA0();
extern void *(*D_0035F644)(s32);
extern void (*D_0035F64C)(void *);
extern u8 D_007B84F8[];
extern f32 D_007B84FC[];
extern f32 D_007B8500[];

void func_002AFBC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *buf;

    buf = D_0035F644(arg2 * arg3 * 4);
    switch (arg4) {
    case 0x1800:
        func_002ACFF0(arg0, arg1, arg2, arg3, 0x1908, 0x1401, buf);
        if (D_007B84F8[0] != 0) {
            func_002ADFA0((s32)(0.5f + D_007B84FC[0]), (s32)(0.5f + D_007B8500[0]), arg2, arg3, 0x1908, 0x1401, buf);
        }
        break;
    case 0x1801:
        func_002ACFF0(arg0, arg1, arg2, arg3, 0x1902, 0x1401, buf);
        if (D_007B84F8[0] != 0) {
            func_002ADFA0((s32)(0.5f + D_007B84FC[0]), (s32)(0.5f + D_007B8500[0]), arg2, arg3, 0x1902, 0x1401, buf);
        }
        break;
    }
    D_0035F64C(buf);
}
