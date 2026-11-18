/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00313940_0;

void func_00316690(s32, unk_func_00313940_0 *);
extern s32 D_003608AC;

void func_00313940(s32 arg0, unk_func_00313940_0 *arg1) {
    unk_func_00313940_0 temp;

    temp = *arg1;
    if (D_003608AC != 0) {
        func_00316690(D_003608AC, &temp);
    }
}
