/* profile: opt_300 */
#include "common.h"

typedef struct unk_AGO2_MEM_Alloc_0 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} unk_AGO2_MEM_Alloc_0;

typedef struct unk_AGO2_MEM_Alloc_1 {
    s32 unk_00;
    u32 unk_04;
    s32 *unk_08;
    s32 unk_0C;
} unk_AGO2_MEM_Alloc_1;

void func_0011B418(char *);
void AGO2_MEM_Shrink(void);
void memset(void *, s32, u32);

extern char D_0034EB20[];
extern s32 D_0035F5C0;
extern u32 D_0035F5C4;
extern u32 D_003602BC;
extern unk_AGO2_MEM_Alloc_1 D_00644CF0[];
extern unk_AGO2_MEM_Alloc_0 D_00758570[];

s32 AGO2_MEM_Alloc(s32 arg0) {
    u32 size;
    u32 i;
    u32 j;
    u32 best;
    u32 d;
    u32 k;
    s32 *p;

    if (D_003602BC >= 5000) {
        func_0011B418(D_0034EB20);
        return 0;
    }
    size = (arg0 + 0x1F) & ~0xF;
    for (i = 0; i < D_0035F5C4 && D_00758570[i].unk_08 < size; i++) {
    }
    if (i == D_0035F5C4) {
        if (D_0035F5C4 < 2) {
            return 0;
        }
        AGO2_MEM_Shrink();
        return AGO2_MEM_Alloc(arg0);
    }
    best = D_00758570[i].unk_08 - size;
    for (j = i + 1; j < D_0035F5C4; j++) {
        if (D_00758570[j].unk_08 < size) {
            d = D_00758570[j].unk_08 - size;
            if (d < best) {
                best = d;
                i = j;
            }
        }
    }
    D_00644CF0[D_003602BC].unk_08 = (s32 *)D_00758570[i].unk_00;
    memset(D_00644CF0[D_003602BC].unk_08, 0, size);
    k = D_003602BC;
    D_00644CF0[k].unk_00 = D_0035F5C0;
    D_00644CF0[k].unk_04 = size;
    p = D_00644CF0[k].unk_08;
    p[0] = D_0035F5C0;
    p[1] = size;
    D_00758570[i].unk_00 += size;
    D_00758570[i].unk_08 -= size;
    D_003602BC++;
    D_0035F5C0++;
    return D_0035F5C0 - 1;
}
