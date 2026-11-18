/* profile: opt_noprop */
#include "common.h"

typedef struct unk_func_002AA880_1 {
    __int128 unk_00;
} unk_func_002AA880_1;

typedef struct unk_func_002AA880_0 {
    struct unk_func_002AA880_0 *unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[3];
    u8 *unk_0C;
    unk_func_002AA880_1 *unk_10;
    s32 *unk_14;
} unk_func_002AA880_0;

void func_0028D0A0();
void func_002C96D0();
typedef struct unk_func_002AA880_2 {
    u8 pad_00[0x60B0];
    unk_func_002AA880_1 unk_60B0[4];
    unk_func_002AA880_1 unk_60F0[4];
} unk_func_002AA880_2;

extern unk_func_002AA880_2 D_007B2370;
extern unk_func_002AA880_1 D_007B8420;
extern unk_func_002AA880_1 D_007B8430;
extern unk_func_002AA880_1 D_007B8450;
extern unk_func_002AA880_1 D_007B8460;
extern unk_func_002AA880_1 D_007B8470;
extern s32 D_007B8EBC[];
extern s32 D_007B8EC4[];
extern s32 D_007B8EC8[];
extern unk_func_002AA880_1 *D_007B8ECC[];
extern unk_func_002AA880_1 *D_007B8ED0[];
extern unk_func_002AA880_1 *D_007B8ED4[];
extern unk_func_002AA880_1 *D_007B8ED8[];
extern unk_func_002AA880_1 *D_007B8EDC[];
extern unk_func_002AA880_1 *D_007B8EE0[];

void func_002AA880(unk_func_002AA880_0 *arg0) {
    unk_func_002AA880_0 *next;
    s32 n;
    unk_func_002AA880_1 *data;
    u8 *ops;
    s32 *idx;
    unk_func_002AA880_1 *q;
    unk_func_002AA880_1 *s4, *s3, *s2, *s1, *s0;

    while (arg0 != 0) {
        n = arg0->unk_04;
        next = arg0->unk_00;
        data = arg0->unk_10;
        ops = arg0->unk_0C;
        idx = arg0->unk_14;
        while (n--) {
            switch (*ops++) {
            case 0:
                D_007B8420 = *data++;
                break;
            case 1:
                break;
            case 2:
                D_007B8450 = *data++;
                break;
            case 3:
                D_007B8460 = *data++;
                break;
            case 4:
                if (D_007B8EC8[0] >= D_007B8EC4[0]) {
                    if (D_007B8EBC[0] == 7) {
                        func_0028D0A0();
                    }
                    func_002C96D0(0);
                }
                s0 = &D_007B8420;
                s1 = &D_007B8430;
                s2 = &D_007B8450;
                s3 = &D_007B8460;
                s4 = &D_007B8470;
                q = D_007B8ED0[0];
                D_007B8ED0[0] = q + 1;
                *q = *s0;
                q = D_007B8EDC[0];
                D_007B8EDC[0] = q + 1;
                *q = *s1;
                q = D_007B8ED4[0];
                D_007B8ED4[0] = q + 1;
                *q = *s2;
                q = D_007B8ED8[0];
                D_007B8ED8[0] = q + 1;
                *q = *s3;
                q = D_007B8EE0[0];
                D_007B8EE0[0] = q + 1;
                *q = *s4;
                q = D_007B8ECC[0];
                D_007B8ECC[0] = q + 1;
                *q = *data++;
                D_007B8EC8[0]++;
                break;
            case 5:
                D_007B2370.unk_60F0[*idx] = *data++;
                break;
            case 6:
                D_007B2370.unk_60B0[*idx] = *data++;
                break;
            }
        }
        {
            u8 f = arg0->unk_08;
            arg0 = next;
            if (f != 0) {
                break;
            }
        }
    }
    if (D_007B8EBC[0] == 7) {
        func_0028D0A0();
    }
    func_002C96D0(1);
}
