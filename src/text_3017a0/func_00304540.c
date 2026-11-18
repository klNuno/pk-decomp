#include "common.h"

typedef struct unk_func_00304540_0 {
    u8 pad_00[0x18];
    struct unk_func_00304540_0 *unk_18;
} unk_func_00304540_0;

unk_func_00304540_0 *func_002D2BC0(s32);
unk_func_00304540_0 *func_002F0FE0(unk_func_00304540_0 *);

unk_func_00304540_0 *func_00304540(unk_func_00304540_0 **arg0) {
    unk_func_00304540_0 *p;

    p = *arg0;
    if (p != NULL) {
        *arg0 = p->unk_18;
        p->unk_18 = NULL;
        return p;
    }
    p = func_002D2BC0(0x28);
    if (p != NULL) {
        p = func_002F0FE0(p);
    }
    return p;
}
