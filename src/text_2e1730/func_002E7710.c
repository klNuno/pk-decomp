#include "common.h"

typedef struct {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
} unk_func_002E7710_0;

unk_func_002E7710_0 *func_002E7710(unk_func_002E7710_0 *arg0) {
    void *temp;

    arg0->unk_00 = 0;
    temp = &arg0->unk_04;
    arg0->unk_08 = temp;
    arg0->unk_04 = temp;
    return arg0;
}
