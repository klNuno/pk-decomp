/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00180FB0_0;

void func_0031ECD0(s32, void *, s32);
extern s32 D_0035F4D8;

void func_00180FB0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk_func_00180FB0_0 hdr;
    s32 off;
    u32 size;

    if (D_0035F4D8 >= 0) {
        switch (arg3 & 0xF) {
        case 1:
            off = 0x40;
            size = (u32)(arg1 * arg2) >> 1;
            break;
        case 2:
            size = arg1 * arg2;
            off = 0x400;
            break;
        case 3:
            off = 0;
            size = arg1 * arg2 * 2;
            break;
        case 4:
            off = 0;
            size = arg1 * arg2 * 4;
            break;
        }
        hdr.unk_08 = arg1;
        hdr.unk_0C = arg2;
        hdr.unk_04 = arg3;
        hdr.unk_00 = 0x0AB9FC72;
        func_0031ECD0(D_0035F4D8, &hdr, 0x10);
        size += off;
        func_0031ECD0(D_0035F4D8, arg0, size);
    }
}
