#include "common.h"

typedef struct unk_func_002D1B70_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_002D1B70_0;

void func_002D1D50(unk_func_002D1B70_0 *, s32);
void func_002D1C10(s32 *, s16);
void func_002D1C60(unk_func_002D1B70_0 *, s16);
void func_00304B00(unk_func_002D1B70_0 *);

unk_func_002D1B70_0 *func_002D1B70(unk_func_002D1B70_0 *arg0, s16 arg1) {
    s32 *temp_a0;

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            if (arg0->unk_04 != 0) {
                func_002D1D50(arg0, arg0->unk_04);
            }
            temp_a0 = &arg0->unk_04;
            if (temp_a0 != NULL) {
                if (temp_a0 != NULL) {
                    func_002D1C10(temp_a0, 0);
                }
            }
            if (arg0 != NULL) {
                if (arg0 != NULL) {
                    func_002D1C60(arg0, 0);
                }
            }
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
