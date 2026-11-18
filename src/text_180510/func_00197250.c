/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    void (*unk_10)();
    u8 pad_14[0x4];
} unk_func_00197250_0;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void func_00197400(s32);
s32 func_00197430(s32);
extern unk_func_00197250_0 D_00333510[];
extern char D_00349E68[];
extern u8 D_0035F528;

void func_00197250(s32 *arg0, s32 arg1) {
    u32 i;

    if (arg0[0] == 0 || arg0[1] == 0) {
        Erm_fn_ClearLastError(0, D_00349E68, 0x149);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xC, -1, 0xFF, 0xFF, 0, D_00349E68, 0x149);
    }
    if (func_00197430(arg0[1]) == -1) {
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x47, -1, 0, 0, 0, D_00349E68, 0x14C);
        Erm_fn_ClearLastError(0, D_00349E68, 0x14C);
    }
    for (i = 0; i < 0xB; i++) {
        if (*(s32 *)((u8 *)arg0 + i * 4) != 0) {
            D_00333510[i].unk_10(arg0, arg1);
        }
    }
    if (arg1 == 1) {
        func_00197400(arg0[1]);
    }
}
