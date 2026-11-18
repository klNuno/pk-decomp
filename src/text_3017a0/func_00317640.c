#include "common.h"

typedef struct {
    u32 unk_00;
    void *unk_04;
    void *unk_08;
} unk_func_00317640_0;

void *malloc(u32);
void func_00317710();
extern u8 D_0035F230[];

unk_func_00317640_0 *func_00317640(unk_func_00317640_0 *arg0, u32 arg1) {
    arg0->unk_08 = D_0035F230;
    if (arg1 == 0) {
        arg1 = 1;
    }
    arg0->unk_00 = arg1;
    arg0->unk_04 = malloc(arg0->unk_00 * (arg0->unk_00 + 1) / 2 * 4);
    func_00317710(arg0);
    return arg0;
}
