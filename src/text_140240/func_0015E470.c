/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0015E470_0 {
    u16 unk_00;
    u8 pad_02[6];
    u8 *unk_08;
    u8 pad_0C[4];
    s16 (*unk_10)(struct unk_func_0015E470_0 *);
} unk_func_0015E470_0;

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
void func_0015E3F0(unk_func_0015E470_0 *);
s16 func_0015E110(unk_func_0015E470_0 *);
s32 func_001DB620(u8, s32);

extern char D_00348D40[];
extern u8 D_0035F3F8;
extern u8 D_0035F9B0;
extern s16 D_0035F9B4;
extern unk_func_0015E470_0 *D_0035F9C0[2];

static inline s32 func_0015E470_inline0(void)
{
    if (D_0035F9B0 == 0) {
        Erm_fn_v_UpdateLastError(6, D_0035F3F8, 0, 4, -1, 0xFF, 0xFF, 0, D_00348D40, 0x37);
        return 0;
    }
    return 1;
}

s16 func_0015E470(u16 arg0, s16 arg1)
{
    unk_func_0015E470_0 **temp;
    s16 i;
    s16 j;
    unk_func_0015E470_0 **temp2;
    s16 temp_s6 = -1;
    s16 temp_s4 = 1;
    unk_func_0015E470_0 *temp_s5;
    s16 temp_v0;

    if (!func_0015E470_inline0()) {
        return -1;
    }
    for (i = D_0035F9B4 - 1, temp = &D_0035F9C0[i]; i >= 0; i--, temp--) {
        func_0015E3F0(*temp);
    }
    for (j = D_0035F9B4 - 1, temp2 = &D_0035F9C0[j]; j >= 0; j--, temp2--) {
        temp_s5 = *temp2;
        if ((temp_s5->unk_00 & arg0) && (*temp_s5->unk_08 & 2)) {
            switch (arg1) {
                case 1:
                    switch (temp_s5->unk_00) {
                        case 0x10:
                            temp_v0 = func_0015E110(temp_s5);
                            break;
                        default:
                            temp_v0 = -1;
                            break;
                    }
                    if (temp_v0 == 1) {
                        *temp_s5->unk_08 |= 1;
                    } else {
                        *temp_s5->unk_08 &= ~1;
                    }
                    break;
                case 2:
                    break;
            }
            if (*temp_s5->unk_08 & 1) {
                s16 temp = temp_s5->unk_10 != NULL ? temp_s5->unk_10(temp_s5) : -1;
                temp_s6 = 1;
                if (temp_s4 != -1) {
                    temp_s4 = temp == -1 ? -1 : temp_s4 & temp;
                }
            }
            if (func_001DB620(D_0035F3F8, 0)) {
                Erm_fn_ClearLastError(0, D_00348D40, 0x174);
            }
        }
    }
    if (temp_s6 == -1 && arg1 != 1) {
        return func_0015E470(arg0, 1);
    }
    return temp_s4;
}
