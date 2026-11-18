/* profile: opt_300 */
#include "common.h"

typedef struct unk_AGO2_MEM_Shrink_0 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    s32 unk_0C;
} unk_AGO2_MEM_Shrink_0;

typedef struct unk_AGO2_MEM_Shrink_1 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} unk_AGO2_MEM_Shrink_1;

extern s32 D_0035F5C4;
extern u32 D_003602BC;
extern unk_AGO2_MEM_Shrink_0 D_00644CF0[];
extern u8 D_00658570[];
extern unk_AGO2_MEM_Shrink_1 D_00758570;

void AGO2_MEM_Shrink(void) {
    u32 i;
    u32 idx;
    s32 found;
    u32 min;
    u32 dst;
    u32 n;
    u32 *d;
    u32 *src;

    D_0035F5C4 = 1;
    dst = (u32)D_00658570;
    D_00758570.unk_00 = (u32)D_00658570;
    D_00758570.unk_04 = (u32)(D_00658570 + 0x100000);
    D_00758570.unk_08 = 0x100000;
    for (i = 0; i < D_003602BC; i++) {
        D_00644CF0[i].unk_0C = 0;
    }
    do {
        min = (u32)&D_00758570 + 1;
        idx = 0;
        found = 0;
        for (i = 0; i < D_003602BC; i++) {
            if (D_00644CF0[i].unk_0C == 0 && D_00644CF0[i].unk_08 < min) {
                min = D_00644CF0[i].unk_08;
                found = 1;
                idx = i;
            }
        }
        if (found) {
            if (dst != min) {
                n = D_00644CF0[idx].unk_04 >> 2;
                src = (u32 *)min;
                d = (u32 *)dst;
                while (n != 0) {
                    *d++ = *src++;
                    n--;
                }
            }
            D_00644CF0[idx].unk_0C = 1;
            D_00644CF0[idx].unk_08 = dst;
            dst += D_00644CF0[idx].unk_04;
            D_00758570.unk_00 += D_00644CF0[idx].unk_04;
        }
    } while (found);
    D_00758570.unk_08 = D_00758570.unk_04 - D_00758570.unk_00;
    if (D_00758570.unk_08 == 0) {
        D_0035F5C4 = 0;
    }
}
