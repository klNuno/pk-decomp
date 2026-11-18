/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0019ED20_1 {
    u8 unk_00[0x1E];
} unk_func_0019ED20_1;

typedef struct unk_func_0019ED20_0 {
    u8 pad_00[0x707];
    unk_func_0019ED20_1 unk_707[1];
} unk_func_0019ED20_0;

typedef struct unk_func_0019ED20_2 {
    u8 unk_00[0x32];
} unk_func_0019ED20_2;

s32 func_00133410(s32, s32, s32);
extern s32 D_0035FEDC;
extern s8 D_0035FEEC;
extern s32 D_0035FF2C;
extern s32 D_0035FED8;
extern u8 D_005ACAC8[];
extern unk_func_0019ED20_0 D_005AB790;
extern unk_func_0019ED20_2 D_005A8E20[];

s32 func_0019ED20(void **arg0) {
    u8 idx;

    if (D_0035FEDC-- == 0) {
        *arg0 = NULL;
        return 1;
    }
    switch (D_0035FEEC) {
    case 0:
    case 1:
        if (D_0035FF2C + 1 < D_005ACAC8[0]) {
            D_0035FF2C++;
            *arg0 = &D_005AB790.unk_707[D_0035FF2C];
            return 0;
        }
        switch (D_0035FEEC) {
        case 0:
            idx = (u8)func_00133410(0, 0, D_005ACAC8[0] - 1);
            *arg0 = &D_005AB790.unk_707[idx];
            return 0;
        case 1:
            *arg0 = NULL;
            return 1;
        }
        break;
    case 2:
        if (D_0035FF2C < D_0035FED8) {
            *arg0 = &D_005A8E20[D_0035FF2C];
            D_0035FF2C++;
            return 0;
        }
        *arg0 = NULL;
        return 1;
    }
    return 0;
}
