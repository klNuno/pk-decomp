#include "common.h"

typedef struct {
    f32 unk_00[4];
} __attribute__((aligned(16))) unk_func_0028DFE0_0;

extern unk_func_0028DFE0_0 *D_007B8484[];

void func_0028DFE0(unk_func_0028DFE0_0 *arg0) {
    *D_007B8484[0] = *arg0;
}
