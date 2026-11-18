#include "common.h"

typedef struct unk_func_002FE280_0 {
    u8 pad_00[0xC];
    u8 unk_0C[0xC];
    void *unk_18;
} unk_func_002FE280_0;

void func_002FE330();
void func_002FE300();
void func_002FE360();
void __register_global_object();
extern s8 D_0036074C;
extern unk_func_002FE280_0 D_007BF230;
extern u8 D_007BF218[];
extern u8 D_0035EA80[];

unk_func_002FE280_0 *func_002FE280(void) {
    if (D_0036074C == 0) {
        unk_func_002FE280_0 *volatile p;

        func_002FE330(p = &D_007BF230);
        func_002FE300(p->unk_0C);
        D_007BF230.unk_18 = D_0035EA80;
        __register_global_object(&D_007BF230, func_002FE360, D_007BF218);
        D_0036074C = 1;
    }
    return &D_007BF230;
}
