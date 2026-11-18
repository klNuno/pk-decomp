#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
} unk_func_003047A0_0;

void __register_global_object(void *, void *, void *);
s32 func_002D2BC0(s32);
s32 func_00308CA0(void);
void func_00304850();
extern s8 D_0036078C;
extern u8 D_007BF7B0[];
extern unk_func_003047A0_0 D_007BF7C0;

unk_func_003047A0_0 *func_003047A0(void) {
    if (D_0036078C == 0) {
        unk_func_003047A0_0 *volatile p = &D_007BF7C0;
        p->unk_00 = func_00308CA0();
        p->unk_04 = 0;
        p->unk_08 = 0;
        p->unk_0C = 0;
        p->unk_10 = 0;
        p->unk_04 = 0x1388;
        p->unk_08 = func_002D2BC0(p->unk_04);
        {
            unk_func_003047A0_0 *q = p;
            q->unk_0C = q->unk_08;
        }
        __register_global_object(p, func_00304850, D_007BF7B0);
        D_0036078C = 1;
    }
    return &D_007BF7C0;
}
