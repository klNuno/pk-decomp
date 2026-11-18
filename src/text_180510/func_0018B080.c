#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_0018B080_0;

void func_00119548();
extern u32 D_0035FE5C;
extern unk_func_0018B080_0 D_0051B280[];

void func_0018B080(void) {
    u32 i;

    for (i = 0; i < D_0035FE5C; i++) {
        func_00119548(D_0051B280[i].unk_04);
        D_0051B280[i].unk_04 = 0;
    }
    D_0035FE5C = 0;
}
