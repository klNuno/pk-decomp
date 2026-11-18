#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    void (*unk_08)(void);
} unk_func_002CCB70_0;

extern s32 D_003604D0;
extern unk_func_002CCB70_0 D_007BD5A0[];

s32 func_002CCB70(s32 arg0, s32 arg1) {
    s32 ret;
    s32 i;

    ret = 0;
    if (D_003604D0 != 0) {
        for (i = 0; i < D_003604D0; i++) {
            if (arg0 == D_007BD5A0[i].unk_00 && arg1 == D_007BD5A0[i].unk_04) {
                D_007BD5A0[i].unk_08();
                ret |= 1;
            }
        }
    }
    return ret;
}
