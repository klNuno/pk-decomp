#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} unk_func_0018FBE0_1;

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
    s32 unk_0C;
    u8 pad_10[8];
    unk_func_0018FBE0_1 **unk_18;
} unk_func_0018FBE0_0;

void func_00119548(void *);
extern u8 D_0035E4B0[];

void func_0018FBE0(unk_func_0018FBE0_0 *arg0) {
    u32 i;
    unk_func_0018FBE0_1 *p;

    if (arg0->unk_0C != 0) {
        for (i = 0; i < arg0->unk_08; i++) {
            p = arg0->unk_18[i];
            if (p != NULL) {
                if (p != NULL) {
                    p->unk_10 = D_0035E4B0;
                    func_00119548(p);
                }
                arg0->unk_18[i] = NULL;
            }
        }
        func_00119548(arg0->unk_18);
        arg0->unk_18 = NULL;
    }
    arg0->unk_0C = 0;
    arg0->unk_08 = 0;
}
