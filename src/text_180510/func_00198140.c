/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00198140_0 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_00198140_0;

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
s32 func_00197430(s32);
s32 func_00198120(s32);
void func_0019A630(s32);
s32 fn_h_StandardGameGetSuperObject(s32);
void func_001C6300(s32, unk_func_00198140_0 *);
extern char D_00349E68[];
extern u8 D_0035F528;

void func_00198140(unk_func_00198140_0 *arg0) {
    if (func_00197430(arg0->unk_04) != -1) {
        if (func_00198120(arg0->unk_04) >= 0x10000) {
            func_0019A630(func_00198120(arg0->unk_04));
        } else {
            func_001C6300(fn_h_StandardGameGetSuperObject(arg0->unk_04), arg0);
        }
    } else {
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x38, -1, 0xFF, 0xFF, 0, D_00349E68, 0x1E0);
    }
}
