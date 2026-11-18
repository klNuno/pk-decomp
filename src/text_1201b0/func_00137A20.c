#include "common.h"

typedef struct unk_func_00137A20_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x158];
    void *unk_168;
} unk_func_00137A20_0;

s32 func_00138680(unk_func_00137A20_0 *);
void *memcpy(void *, const void *, u32);
extern s32 D_0035F934;

static inline s32 func_00137A20_has(unk_func_00137A20_0 *arg0) {
    return (arg0->unk_0C & 0x4000) ? 1 : 0;
}

static inline void *func_00137A20_get(unk_func_00137A20_0 *arg0) {
    s32 temp;

    if (func_00137A20_has(arg0) == 0) {
        temp = func_00138680(arg0);
        if (temp != D_0035F934) {
            D_0035F934 = temp;
        }
    }
    return arg0->unk_168;
}

void func_00137A20(unk_func_00137A20_0 *arg0, unk_func_00137A20_0 *arg1) {
    void *saved = NULL;

    if (func_00137A20_has(arg0)) {
        saved = func_00137A20_get(arg0);
    }
    if (((arg1->unk_0C & 4) ? 1 : 0) != 0) {
        memcpy(arg0, arg1, 0x370);
    } else if (((arg1->unk_0C & 2) ? 1 : 0) != 0) {
        memcpy(arg0, arg1, 0x200);
    } else {
        memcpy(arg0, arg1, 0x170);
    }
    if (saved != NULL) {
        arg0->unk_168 = saved;
        if (func_00137A20_has(arg1)) {
            memcpy(saved, func_00137A20_get(arg1), 0x16C);
        }
    }
}
