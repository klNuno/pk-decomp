/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0xA8];
    u32 unk_A8;
} unk_001C8920_0;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_001C8920_1;

typedef struct {
    u8 pad_00[0x20];
    s16 unk_20;
} unk_001C8920_2;

typedef struct {
    u8 pad_00[0xC];
    unk_001C8920_2 **unk_0C;
} unk_001C8920_3;

typedef struct {
    s32 unk_00;
    unk_001C8920_3 **unk_04;
} unk_001C8920_4;

typedef struct {
    unk_001C8920_4 *unk_00, *unk_04;
} unk_001C8920_5;

typedef struct {
    u8 pad_00[0x118];
    unk_001C8920_3 ***unk_118;
    u8 pad_11C[0x2C];
    s32 unk_148;
} unk_001C8920_6;

typedef struct {
    s32 unk_00;
    void *unk_04;
} unk_001C8920_7;

extern u8 D_0035F56C;
extern s32 D_0035FFD8;
extern u32 D_0035FFDC;
extern unk_001C8920_0 *D_0035FFE0;
extern u32 D_0035FFE4;
extern unk_001C8920_6 D_005AD960[];

unk_001C8920_0 **HIE_fn_hGetSuperObjectObject(s32);
void func_001670A0(unk_001C8920_6 *, u8);
void func_00176580(unk_001C8920_6 *);
unk_001C8920_1 *func_00197880(unk_001C8920_0 *);
void *func_0019C730(unk_001C8920_0 *);
s32 func_001C05D0(s32);
unk_001C8920_5 *func_001C2590(void *, u16);
void func_001C83D0(unk_001C8920_6 *, unk_001C8920_3 ***, s32);
void func_001C84E0(unk_001C8920_6 *, s16);
void func_001C8560(s16, unk_001C8920_6 *, s32 *);
unk_001C8920_6 *func_001C85B0(void);
void func_001C85E0(unk_001C8920_6 *, unk_001C8920_3 ***);
s32 func_001C8720(unk_001C8920_2 *);
void func_001C87E0(u32, unk_001C8920_7 *);
void func_001D5600(unk_001C8920_6 *, s16, u32, unk_001C8920_7 *, s32);

void func_001C8920(s32 arg0)
{
    unk_001C8920_7 spA8;
    unk_001C8920_1 *spB0;
    s32 spB4;
    s8 spBE;
    u8 spBF;
    u32 i;
    s32 found;
    unk_001C8920_6 *p;
    unk_001C8920_3 ***q;
    unk_001C8920_5 *obj;
    u16 n = 0;
    unk_001C8920_4 *obj0;
    s16 count;
    unk_001C8920_2 **v;

    D_0035FFD8 = arg0;
    D_0035FFE0 = *HIE_fn_hGetSuperObjectObject(D_0035FFD8);
    D_0035FFDC = D_0035FFE0->unk_A8;
    spB0 = func_00197880(D_0035FFE0);
    if (spB0->unk_14 != 0 && func_001C05D0(arg0) != 0) {
        spBF = 1;
    } else {
        spBF = 0;
    }
    spBF = (u8)(spBF && D_0035F56C);

    if (spBF) {
        for (;;) {
            if (!(n < D_0035FFDC)) {
                break;
            }
            obj = func_001C2590(func_0019C730(D_0035FFE0), n);
            if (obj->unk_04 != 0) {
                obj0 = obj->unk_04;
                goto next;
            }
            if (obj->unk_00 != 0) {
                obj0 = obj->unk_00;
                goto next;
            }
            n++;
            continue;

next:
            if (obj0->unk_00 != 8) {
                n++;
                continue;
            }

            q = &obj0->unk_04;
            found = 0;
            i = 0;
            while (found == 0 && i < D_0035FFE4) {
                if ((void *)D_005AD960[i].unk_148 == (void *)arg0 && D_005AD960[i].unk_118 == q) {
                    found++;
                } else {
                    i++;
                }
            }

            if (found != 0) {
                p = &D_005AD960[i];
                func_001C85E0(p, q);
                func_001670A0(p, 0);
                n++;
                continue;
            }

            v = (*obj0->unk_04)->unk_0C;
            p = 0;
            spBE = 1;
            count = (*v)->unk_20;
            spB4 = func_001C8720(*v);
            if (spB4 != 0) {
                func_001C87E0(n, &spA8);
                if (spA8.unk_00 != 0) {
                    if (p == 0) {
                        p = func_001C85B0();
                        func_001C83D0(p, q, arg0);
                        func_001C8560(count, p, (s32 *)p + 1);
                        func_001C84E0(p, count);
                    }
                    func_001D5600(p, count, n, &spA8, spB4);
                    func_00176580(p);
                    func_001670A0(p, 0);
                    spBE = 0;
                }
            }
            n++;
        }
    }
}
