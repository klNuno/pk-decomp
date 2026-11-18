/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_fn_bSaveFileInSlot_0;

s32 SVG_fn_s32SaveGame(s32, s32, s32, char *, u8 *, u32);
void fn_iMakeSaveNameFromFileName(char *, s32);
s32 fn_vCheckSum(void *, u32);
void fn_vEncryptBuffer(void *, u32);
u32 func_0011D3F8(char *);
void memcpy(void *, void *, u32);
extern unk_fn_bSaveFileInSlot_0 D_003313F0[];

s32 fn_bSaveFileInSlot(s32 arg0, s32 arg1, char *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, u16 arg7, u16 arg8, s32 arg9, u16 arg10, void *arg11, u32 arg12) {
    char name[0x2C];
    s32 sum;
    u8 *buf;
    u32 n;

    buf = __alloca(arg12 + 0x14);
    if (func_0011D3F8(arg2) + 1 > 16) {
        n = 16;
    } else {
        n = func_0011D3F8(arg2) + 1;
    }
    memcpy(buf, arg2, n);
    sum = fn_vCheckSum(arg11, arg12);
    memcpy(buf + 0x10, arg11, arg12);
    memcpy(buf + arg12 + 0x10, &sum, 4);
    fn_iMakeSaveNameFromFileName(name, arg1);
    fn_vEncryptBuffer((void *)(buf + 0x10), arg12 + 4);
    if (SVG_fn_s32SaveGame(D_003313F0[arg0].unk_00, D_003313F0[arg0].unk_04, arg1, name, buf, arg12 + 0x14) == 1) {
        return 1;
    }
    return 0;
}
