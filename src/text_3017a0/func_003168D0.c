#include "common.h"

typedef struct unk_func_003168D0_0 {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
} unk_func_003168D0_0;

void func_00119548(void *);
void func_00304B00(void *);
extern u8 D_0035F1F8[];

unk_func_003168D0_0 *func_003168D0(unk_func_003168D0_0 *arg0, s16 arg1) {
    if (arg0 != 0) {
        arg0->unk_08 = D_0035F1F8;
        if (arg0->unk_04 != 0) {
            func_00119548(arg0->unk_04);
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
