/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0027D140_0 {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x2C];
} unk_func_0027D140_0;

void func_00119548(void *);
void func_0011CBB0(char *, char *, s32, s32);
s32 func_0027BE90(s32, s32, char *, unk_func_0027D140_0 *);
s32 func_0027CD60(s32, s32, s32, void *, s32);
void *malloc(u32);
extern char D_0034F3D8[];

s32 func_0027D140(s32 arg0, s32 arg1, s32 arg2, void **arg3, s32 *arg4) {
    unk_func_0027D140_0 sp30;
    char sp70[0x100];
    s32 var_s0;
    s32 var_s1;

    var_s1 = -1;
    func_0011CBB0(sp70, D_0034F3D8, arg2, arg2);
    var_s0 = func_0027BE90(arg0, arg1, sp70, &sp30);
    if (var_s0 == 1) {
        *arg4 = sp30.unk_10;
        *arg3 = malloc(*arg4);
        if (*arg3 == 0) {
            return 0;
        }
        var_s0 = func_0027CD60(arg0, arg1, arg2, *arg3, *arg4);
        if (var_s0 != 1) {
            func_00119548(*arg3);
            *arg3 = 0;
            *arg4 = 0;
        }
    }
    return var_s0;
}
