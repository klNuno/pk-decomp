/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00181C80_0 {
    s8 unk_00;
    u8 pad_01[0x1F];
    s32 unk_20;
} unk_func_00181C80_0;

s32 func_00181F50();
extern unk_func_00181C80_0 D_00332FF0[];
extern s32 D_0035FD48;

s32 func_00181C80(void) {
    s32 old;
    s32 pad;
    s32 first;
    s32 i;
    s32 j;
    s32 cur;
    s32 v;

    old = D_0035FD48;
    pad = func_00181F50();
    i = 0;
    while (D_00332FF0[i].unk_20 == 0) {
        i++;
    }
    first = i;
    while (D_00332FF0[i].unk_20 != 0x15) {
        i++;
    }
    while (D_00332FF0[i].unk_20 == 0x15 || D_00332FF0[i].unk_20 == 0) {
        i--;
    }
    for (j = 0; j < 2; j++) {
        while (D_00332FF0[D_0035FD48].unk_20 == 0 && D_00332FF0[D_0035FD48].unk_20 != 0x15) {
            D_0035FD48++;
        }
        if (D_00332FF0[D_0035FD48].unk_20 == 0x15) {
            D_0035FD48 = 0;
        }
    }
    cur = D_0035FD48;
    v = D_00332FF0[cur].unk_20;
    if (v == 0x15 || v == 0) {
        return 0;
    }
    if (pad & 0x40) {
        return v;
    }
    if (pad & 0x4000) {
        if (cur == i) {
            D_0035FD48 = first;
        } else {
            D_0035FD48 = cur + 1;
            while (D_00332FF0[D_0035FD48].unk_20 == 0) {
                D_0035FD48++;
            }
        }
    } else if (pad & 0x1000) {
        if (cur == first) {
            D_0035FD48 = i;
        } else {
            D_0035FD48 = cur - 1;
            while (D_00332FF0[D_0035FD48].unk_20 == 0) {
                D_0035FD48--;
            }
        }
    }
    if (old != D_0035FD48) {
        if (D_00332FF0[old].unk_20 != 0) {
            D_00332FF0[old].unk_00 = 0x20;
        }
        D_00332FF0[D_0035FD48].unk_00 = 0x3E;
    }
    return 0;
}
