/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x168];
    s8 unk_168;
} unk_func_00203160_1;

typedef struct {
    u8 pad_00[0x60];
    s32 unk_60;
    f32 unk_64;
    u8 pad_68[0xC];
    u8 unk_74;
} unk_func_00203160_2;

typedef struct {
    u8 pad_00[0x72];
    u16 unk_72;
} unk_func_00203160_3;

typedef struct {
    unk_func_00203160_1 *unk_00;
    u8 pad_04[4];
    unk_func_00203160_2 *unk_08;
    unk_func_00203160_3 *unk_0C;
} unk_func_00203160_0;

typedef struct {
    s32 unk_00[4];
} unk_func_00203160_4;

s32 func_002023F0(unk_func_00203160_0 *, unk_func_00203160_4 *, s8);
void func_00202620(unk_func_00203160_0 *);
void func_002034B0(unk_func_00203160_0 *, unk_func_00203160_4 *);

void func_00203160(unk_func_00203160_0 *arg0) {
    s8 var_s0;
    s32 var_s1;
    s32 var_s2;
    unk_func_00203160_4 sp40;

    if (arg0->unk_08->unk_60 == 0 || arg0->unk_08->unk_60 == 1) {
        if ((arg0->unk_0C->unk_72 & 0x1000) || (arg0->unk_0C->unk_72 & 0x2000) || (arg0->unk_08->unk_74 & 2)) {
            return;
        }
        if (arg0->unk_00->unk_168 & 1) {
            var_s1 = 1;
        } else {
            var_s1 = 0;
        }
        if (var_s1) {
            if (arg0->unk_00->unk_168 & 2) {
                var_s2 = 1;
            } else {
                var_s2 = 0;
            }
            if (var_s2) {
                arg0->unk_08->unk_64 = 0.0f;
                var_s0 = 3;
                if (arg0->unk_0C->unk_72 & 8) {
                    var_s0 &= ~1;
                }
                if (func_002023F0(arg0, &sp40, var_s0) == 0) {
                    func_00202620(arg0);
                    return;
                }
                func_002034B0(arg0, &sp40);
            }
        }
    }
}
