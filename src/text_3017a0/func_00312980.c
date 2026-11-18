#include "common.h"

typedef struct unk_func_00312980_1 {
    s32 unk_00;
    struct unk_func_00312980_1 *unk_04;
} unk_func_00312980_1;

typedef struct unk_func_00312980_0 {
    unk_func_00312980_1 *unk_00;
    unk_func_00312980_1 *unk_04;
} unk_func_00312980_0;

void *malloc(u32);

void func_00312980(unk_func_00312980_0 *arg0, s32 arg1) {
    if (arg0->unk_00 != NULL) {
        arg0->unk_04->unk_04 = malloc(8);
        arg0->unk_04->unk_04->unk_00 = arg1;
        arg0->unk_04->unk_04->unk_04 = NULL;
        arg0->unk_04 = arg0->unk_04->unk_04;
    } else {
        arg0->unk_00 = arg0->unk_04 = malloc(8);
        arg0->unk_00->unk_00 = arg1;
        arg0->unk_00->unk_04 = NULL;
    }
}
