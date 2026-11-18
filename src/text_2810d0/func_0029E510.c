/* profile: opt_noprop */
#include "common.h"

typedef struct unk_func_0029E510_1 {
    f32 unk_00[4];
} __attribute__((aligned(16))) unk_func_0029E510_1;

typedef struct unk_func_0029E510_0 {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_0029E510_0;

extern u8 D_007B8488[];
extern s32 D_007B8EC4[];
extern s32 D_007B8EC8[];
extern unk_func_0029E510_1 *D_007B8ECC[];
extern unk_func_0029E510_1 *D_007B8ED0[];
extern unk_func_0029E510_1 *D_007B8ED4[];
extern unk_func_0029E510_1 *D_007B8ED8[];
extern unk_func_0029E510_1 *D_007B8EDC[];
extern unk_func_0029E510_1 *D_007B8EE0[];
extern unk_func_0029E510_1 D_007B8490[];
extern unk_func_0029E510_1 D_007B84A0[];
extern unk_func_0029E510_1 D_007B84C0[];
extern unk_func_0029E510_1 D_007B84D0[];
extern unk_func_0029E510_1 D_007B84E0[];
extern unk_func_0029E510_0 *D_007B8058[];
void func_0029D8F0();
void func_0029D500();
void func_0029BB40();

void func_0029E510(unk_func_0029E510_1 *arg0) {
    unk_func_0029E510_1 *q;
    unk_func_0029E510_1 *s4, *s3, *s2, *s1, *s0;

    if (D_007B8488[0] == 0) {
        func_0029D8F0(4, arg0);
        return;
    }
    if (D_007B8EC8[0] >= D_007B8EC4[0]) {
        if (D_007B8058[0]->unk_14 == 7) {
            func_0029D500();
        }
        func_0029BB40(0);
    }
    s0 = D_007B84C0;
    s1 = D_007B8490;
    s2 = D_007B84A0;
    s3 = D_007B84D0;
    s4 = D_007B84E0;
    q = D_007B8ECC[0];
    D_007B8ECC[0] = q + 1;
    *q = *arg0;
    q = D_007B8ED4[0];
    D_007B8ED4[0] = q + 1;
    *q = *s0;
    q = D_007B8ED0[0];
    D_007B8ED0[0] = q + 1;
    *q = *s1;
    q = D_007B8EDC[0];
    D_007B8EDC[0] = q + 1;
    *q = *s2;
    q = D_007B8ED8[0];
    D_007B8ED8[0] = q + 1;
    *q = *s3;
    q = D_007B8EE0[0];
    D_007B8EE0[0] = q + 1;
    *q = *s4;
    D_007B8EC8[0]++;
}
