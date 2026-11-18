/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00136010_7 {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0xC];
} unk_func_00136010_7;

typedef struct unk_func_00136010_5 {
    u8 pad_00[0x10];
    unk_func_00136010_7 **unk_10;
} unk_func_00136010_5;

typedef struct unk_func_00136010_4 {
    unk_func_00136010_5 *unk_00;
} unk_func_00136010_4;

typedef struct unk_func_00136010_3 {
    u8 pad_00[0x14];
    struct unk_func_00136010_3 *unk_14;
} unk_func_00136010_3;

typedef struct unk_func_00136010_2 {
    s32 unk_00;
    unk_func_00136010_4 *unk_04;
    unk_func_00136010_3 *unk_08;
} unk_func_00136010_2;

typedef struct unk_func_00136010_6 {
    u8 pad_00[0xD4];
    s32 unk_D4;
} unk_func_00136010_6;

typedef struct unk_func_00136010_1 {
    u8 pad_00[0x4];
    unk_func_00136010_6 **unk_04;
} unk_func_00136010_1;

typedef struct unk_func_00136010_0 {
    u8 unk_00;
    u8 pad_01[0x3];
    unk_func_00136010_1 *unk_04;
    u8 pad_08[0x2];
    s16 unk_0A;
    u8 pad_0C[0x18];
    s16 unk_24;
    u8 pad_26[0x7E];
    unk_func_00136010_4 *unk_A4;
} unk_func_00136010_0;

void func_00133D10(unk_func_00136010_4 *);
s32 func_001348D0(unk_func_00136010_3 *, unk_func_00136010_4 *, s32);
void func_0019CEC0(s32, u16);
s16 func_0019D070(s32);
void *memset(void *, s32, u32);
extern s32 D_0035F3A8;
extern unk_func_00136010_0 D_00365030[];

s32 func_00136010(unk_func_00136010_1 *arg0, s16 arg1) {
    unk_func_00136010_0 *p;
    unk_func_00136010_3 *q;
    unk_func_00136010_4 *s2;
    s32 s3;
    s16 i;
    u16 id;
    s16 idx;
    unk_func_00136010_4 *cur;
    unk_func_00136010_2 *obj;

    id = arg1;
    p = NULL;
    idx = func_0019D070((*arg0->unk_04)->unk_D4);
    if (idx == -1 || D_00365030[idx].unk_00 == 0) {
        return -1;
    }
    for (i = 0; i <= D_0035F3A8; i++) {
        p = &D_00365030[i];
        if (p->unk_00 != 0 && p->unk_04 == arg0 && p->unk_24 == arg1) {
            break;
        }
        p = NULL;
    }
    if (p == NULL) {
        return -1;
    }
    obj = (unk_func_00136010_2 *)p->unk_04;
    s2 = p->unk_A4;
    cur = obj->unk_04;
    s3 = (*cur->unk_00->unk_10)[p->unk_0A].unk_04;
    if (cur == s2) {
        obj->unk_00 = s3 != 0 ? 8 : 1;
        *(s32 *)&obj->unk_04 = s3;
    } else {
        for (q = obj->unk_08; q != NULL; q = q->unk_14) {
            if (func_001348D0(q, s2, s3) != 0) {
                break;
            }
        }
    }
    func_00133D10(p->unk_A4);
    p->unk_A4 = NULL;
    if (p->unk_00 != 0) {
        memset(p, 0, 0xA8);
        p->unk_00 = 0;
    }
    if (i == D_0035F3A8) {
        D_0035F3A8--;
    }
    func_0019CEC0((*arg0->unk_04)->unk_D4, id);
    return 0;
}
