/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002B4230_0 {
    u32 unk_00 : 10;
    s32 unk_01 : 11;
    s32 unk_02 : 11;
} unk_func_002B4230_0;

typedef struct unk_func_002B4230_1 {
    u8 pad_00[0xD];
    u8 unk_0D;
    u8 pad_0E[0xE];
} unk_func_002B4230_1;

typedef struct unk_func_002B4230_2 {
    u8 pad_00[0x38C];
    unk_func_002B4230_1 unk_38C[0x200];
    u8 pad_3B8C[0x14];
    s32 unk_3BA0;
    unk_func_002B4230_0 unk_3BA4[1];
} unk_func_002B4230_2;

extern unk_func_002B4230_2 D_007B2370;

unk_func_002B4230_0 *func_002B4230(s32 arg0, s32 arg1) {
    unk_func_002B4230_0 tmp;
    unk_func_002B4230_0 *p;
    unk_func_002B4230_0 *q;
    s32 start;
    s32 end;
    s32 i;
    s32 id;

    if (arg0 < 0 || arg0 >= D_007B2370.unk_3BA0) {
        return NULL;
    }
    p = &D_007B2370.unk_3BA4[arg0];
    start = p->unk_01;
    end = start + p->unk_02;
    if (arg1 <= 0) {
        arg1 = p->unk_02;
    }
    if (start + arg1 > D_007B2370.unk_3BA0) {
        arg1 = D_007B2370.unk_3BA0 - start;
    }
    if (arg1 > 0) {
        do {
            id = p->unk_00;
            if (id != 0x3FF) {
                D_007B2370.unk_38C[id].unk_0D = 0;
            }
            arg1 -= p->unk_02;
            end = p->unk_01 + p->unk_02;
            p = &D_007B2370.unk_3BA4[end];
        } while (arg1 > 0);
    }
    for (p = &D_007B2370.unk_3BA4[start] - 1; p >= D_007B2370.unk_3BA4 && p->unk_00 == 0x3FF; p = &D_007B2370.unk_3BA4[start] - 1) {
        start = p->unk_01;
    }
    for (p = &D_007B2370.unk_3BA4[end]; p < &D_007B2370.unk_3BA4[D_007B2370.unk_3BA0] && p->unk_00 == 0x3FF; p = &D_007B2370.unk_3BA4[end]) {
        end = p->unk_01 + p->unk_02;
    }
    tmp.unk_00 = 0x3FF;
    tmp.unk_01 = start;
    tmp.unk_02 = (s16)(end - start);
    q = &D_007B2370.unk_3BA4[start];
    p = q;
    for (i = start; i < end; i++) {
        *q++ = tmp;
    }
    return p;
}
