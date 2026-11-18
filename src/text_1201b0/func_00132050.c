#include "common.h"

struct unk_func_00132050_1;

typedef struct unk_func_00132050_0 {
    s32 unk_00;
    struct unk_func_00132050_0 *unk_04;
    struct unk_func_00132050_0 *unk_08;
    struct unk_func_00132050_1 *unk_0C;
} unk_func_00132050_0;

typedef struct unk_func_00132050_1 {
    unk_func_00132050_0 *unk_00;
    unk_func_00132050_0 *unk_04;
    s32 unk_08;
} unk_func_00132050_1;

void func_00132050(unk_func_00132050_0 *arg0) {
    if (arg0->unk_04 != NULL) {
        arg0->unk_04->unk_08 = arg0->unk_08;
    }
    if (arg0->unk_08 != NULL) {
        arg0->unk_08->unk_04 = arg0->unk_04;
    }
    if (arg0->unk_0C != NULL) {
        arg0->unk_0C->unk_08--;
        if (arg0->unk_0C->unk_00 == arg0) {
            arg0->unk_0C->unk_00 = arg0->unk_04;
        }
        if (arg0->unk_0C->unk_04 == arg0) {
            arg0->unk_0C->unk_04 = arg0->unk_08;
        }
    }
    arg0->unk_04 = NULL;
    arg0->unk_08 = NULL;
    arg0->unk_0C = NULL;
}
