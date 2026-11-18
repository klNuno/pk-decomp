/* profile: o0_301 */
#include "common.h"

typedef union {
    f32 unk_00;
    s32 unk_00_s32;
} unk_func_001A9100_0;

typedef struct {
    u8 pad_00[4];
    unk_func_001A9100_0 unk_04;
} unk_func_001A9100_1;

unk_func_001A9100_1 *fn_hGetSuperObjectActorHandle(s32 *);
s32 func_0011D8F0(s32, char *, s32);
s32 fn_ucIsAnAlwaysObject(s32);
s32 func_0011D3F8(s32);
s32 func_0011D588(s32, char *, s32);
extern char D_0034B410[];
extern char D_0034B418[];
extern char D_0034B438[];
extern char D_0034B448[];

s32 fn_bObjectTypeVoiceInfo(s32 *arg0, s32 arg1, s32 arg2, u32 arg3) {
    s32 temp;
    unk_func_001A9100_1 *temp2;
    char *temp3;
    unk_func_001A9100_0 temp4;

    temp = 0;
    if (arg0 != (s32 *)-1) {
        temp2 = fn_hGetSuperObjectActorHandle(arg0);
        if (temp2 != NULL) {
            temp4 = temp2->unk_04;
            if (func_0011D8F0(arg2, D_0034B448, arg3) != 0 && *arg0 == 2) {
                temp3 = D_0034B410;
                if (fn_ucIsAnAlwaysObject(temp4.unk_00_s32) == 0) {
                    temp3 = D_0034B418;
                }
                temp = func_0011D588(arg2, temp3, arg3 - func_0011D3F8(arg2)) != 0;
            }
        }
    } else {
        temp = func_0011D8F0(arg2, D_0034B438, arg3) != 0;
    }
    return temp;
}
