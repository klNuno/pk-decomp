#include "common.h"

typedef struct {
    u8 pad_00[0x18];
    void *unk_18;
} unk_func_00307320_0;

void *func_002D2BC0(s32);
void *func_00305520(void *, unk_func_00307320_0 *);

void *func_00307320(unk_func_00307320_0 *arg0) {
    void *p;

    arg0->unk_18 = func_002D2BC0(0x10);
    p = arg0->unk_18;
    if (p != NULL) {
        p = func_00305520(p, arg0);
    }
    arg0->unk_18 = p;
    return arg0->unk_18;
}
