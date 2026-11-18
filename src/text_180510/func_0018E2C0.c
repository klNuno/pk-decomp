#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    void *unk_08;
} unk_func_0018E2C0_0;

void func_00119548();
void func_00285CD0();
extern unk_func_0018E2C0_0 D_005070F0[];

void func_0018E2C0(void) {
    u32 i;
    s32 off;
    unk_func_0018E2C0_0 *p;
    void **q;

    for (i = 0, off = 0; i < 500; i++, off += 0xC) {
        p = (unk_func_0018E2C0_0 *)((u8 *)D_005070F0 + off);
        if (p->unk_00 != NULL) {
            func_00119548(p->unk_00);
            p->unk_00 = NULL;
        }
        q = &p->unk_08;
        if (*q != NULL) {
            func_00285CD0(*q, 1);
            *q = NULL;
        }
    }
}
