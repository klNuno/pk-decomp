#include "common.h"

typedef struct {
    u32 unk_00;
    void *unk_04;
} unk_func_00316C10_0;

void func_00119548(void *);
void *malloc(u32);
void memcpy(void *, void *, u32);

unk_func_00316C10_0 *func_00316C10(unk_func_00316C10_0 *arg0, unk_func_00316C10_0 *arg1) {
    if (arg0->unk_00 != arg1->unk_00) {
        func_00119548(arg0->unk_04);
        if (arg1->unk_00 != 0) {
            arg0->unk_00 = arg1->unk_00;
            arg0->unk_04 = malloc(arg1->unk_00 * 0xC);
            memcpy(arg0->unk_04, arg1->unk_04, arg0->unk_00 * 0xC);
            return arg0;
        }
        arg0->unk_04 = NULL;
        arg0->unk_00 = 0;
    } else {
        memcpy(arg0->unk_04, arg1->unk_04, arg0->unk_00 * 0xC);
    }
    return arg0;
}
