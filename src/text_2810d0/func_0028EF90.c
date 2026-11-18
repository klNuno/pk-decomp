/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00[4];
} __attribute__((aligned(16))) unk_func_0028EF90_1;

typedef struct unk_func_0028EF90_0 {
    unk_func_0028EF90_1 unk_00;
    unk_func_0028EF90_1 unk_10;
    unk_func_0028EF90_1 unk_20;
    unk_func_0028EF90_1 unk_30;
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
} unk_func_0028EF90_0;

extern s8 D_007B7B8F[];
extern unk_func_0028EF90_0 D_007B7F60;
extern unk_func_0028EF90_0 D_007B7FB0;

void func_0028EF90(s32 arg0, s32 arg1, void *arg2) {
    unk_func_0028EF90_0 *p;

    if (arg0 == 0x408) {
        func_0028EF90(0x404, arg1, arg2);
        func_0028EF90(0x405, arg1, arg2);
        return;
    }
    if (arg0 == 0x404) {
        p = &D_007B7F60;
    } else {
        p = &D_007B7FB0;
    }
    switch (arg1) {
    case 0x1602:
        p->unk_10 = *(unk_func_0028EF90_1 *)arg2;
    case 0x1200:
        p->unk_00 = *(unk_func_0028EF90_1 *)arg2;
        break;
    case 0x1201:
        p->unk_10 = *(unk_func_0028EF90_1 *)arg2;
        break;
    case 0x1202:
        p->unk_20 = *(unk_func_0028EF90_1 *)arg2;
        break;
    case 0x1600:
        p->unk_30 = *(unk_func_0028EF90_1 *)arg2;
        break;
    case 0x1601:
        p->unk_40 = *(f32 *)arg2;
        break;
    case 0x1603:
        p->unk_44 = ((f32 *)arg2)[0];
        p->unk_48 = ((f32 *)arg2)[1];
        p->unk_4C = ((f32 *)arg2)[2];
        break;
    }
    D_007B7B8F[0] = 1;
}
