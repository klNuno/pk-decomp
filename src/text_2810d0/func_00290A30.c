/* profile: opt_noprop */
#include "common.h"

typedef struct unk_func_00290A30_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00290A30_0;

typedef struct unk_func_00290A30_1 {
    __int128 unk_00;
} unk_func_00290A30_1;

void func_0028D0A0();
void func_00297760();
void func_002C96D0();
extern unk_func_00290A30_1 D_007B8420;
extern unk_func_00290A30_1 D_007B8430;
extern unk_func_00290A30_1 D_007B8450;
extern unk_func_00290A30_1 D_007B8460;
extern unk_func_00290A30_1 D_007B8470;
extern s32 D_007B8EBC[];
extern u8 D_007B8EC0[];
extern s32 D_007B8EC4[];
extern s32 D_007B8EC8[];
extern unk_func_00290A30_0 *D_007B8ECC[];
extern unk_func_00290A30_1 *D_007B8ED0[];
extern unk_func_00290A30_1 *D_007B8ED4[];
extern unk_func_00290A30_1 *D_007B8ED8[];
extern unk_func_00290A30_1 *D_007B8EDC[];
extern unk_func_00290A30_1 *D_007B8EE0[];

#define VTX(x, y, z)                         \
    {                                        \
        unk_func_00290A30_0 *p;              \
        unk_func_00290A30_1 *s4, *s3, *s2, *s1, *s0; \
        s32 w;                               \
        unk_func_00290A30_1 *q;              \
        if (D_007B8EC8[0] >= D_007B8EC4[0]) { \
            if (D_007B8EBC[0] == 7) {        \
                func_0028D0A0();             \
            }                                \
            func_002C96D0(0);                \
        }                                    \
        D_007B8ECC[0]->unk_00 = x;           \
        D_007B8ECC[0]->unk_04 = y;           \
        *(s32 *)&D_007B8ECC[0]->unk_08 = z;   \
        w = 0x3F800000;                      \
        s0 = &D_007B8450;                    \
        s1 = &D_007B8420;                    \
        s2 = &D_007B8430;                    \
        s3 = &D_007B8460;                    \
        s4 = &D_007B8470;                    \
        p = D_007B8ECC[0];                   \
        D_007B8ECC[0] = p + 1;               \
        *(s32 *)&p->unk_0C = w;              \
        q = D_007B8ED4[0];                   \
        D_007B8ED4[0] = q + 1;               \
        *q = *s0;                            \
        q = D_007B8ED0[0];                   \
        D_007B8ED0[0] = q + 1;               \
        *q = *s1;                            \
        q = D_007B8EDC[0];                   \
        D_007B8EDC[0] = q + 1;               \
        *q = *s2;                            \
        q = D_007B8ED8[0];                   \
        D_007B8ED8[0] = q + 1;               \
        *q = *s3;                            \
        q = D_007B8EE0[0];                   \
        D_007B8EE0[0] = q + 1;               \
        *q = *s4;                            \
        D_007B8EC8[0]++;                     \
    }

void func_00290A30(s16 *arg0, s16 *arg1) {
    f32 x0, y0, x1, y1;

    y1 = arg1[1];
    x1 = arg1[0];
    y0 = arg0[1];
    x0 = arg0[0];
    func_00297760(9);
    VTX(x0, y0, 0)
    VTX(x1, y0, 0)
    VTX(x1, y1, 0)
    VTX(x0, y1, 0)
    if (D_007B8EBC[0] == 7) {
        func_0028D0A0();
    }
    func_002C96D0(1);
    D_007B8EC0[0] = 0;
}
