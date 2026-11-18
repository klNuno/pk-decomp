#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E3F90_0;

void func_002DBF50(unk_func_002E3F90_0 *, u8 **, s32 *);
void c4sdk_malloc(void *, s32);
void func_002D2BB0(void *);

void func_002E3F90(unk_func_002E3F90_0 *arg0) {
    u8 *sp28;
    s32 sp2C;
    void *temp;

    arg0->unk_10 += 4;
    func_002DBF50(arg0, &sp28, &sp2C);
    if (sp28 != NULL) {
        temp = *(void **)(sp28 + sp2C);
        if (temp != NULL) {
            if (temp != NULL) {
                c4sdk_malloc(temp, 0);
            }
            func_002D2BB0(temp);
            *(void **)(sp28 + sp2C) = NULL;
        }
    }
}
