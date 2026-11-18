#include "common.h"

typedef struct unk_func_0027A9A0_0 {
    s32 unk_00;
    s32 unk_04;
} unk_func_0027A9A0_0;

void func_0011B418();
extern char D_0034F258[];

s32 func_0027A9A0(s32 arg0, unk_func_0027A9A0_0 *arg1) {
    func_0011B418(D_0034F258, arg1->unk_04);
    return 1;
}
