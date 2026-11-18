/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_003045E0_1 {
    u8 pad_00[0x18];
    struct unk_func_003045E0_1 *unk_18;
} unk_func_003045E0_1;

typedef struct {
    unk_func_003045E0_1 *unk_00;
} unk_func_003045E0_0;

void func_002F0F70();
void func_00304B00();

unk_func_003045E0_0 *func_003045E0(unk_func_003045E0_0 *arg0, s16 arg1) {
    unk_func_003045E0_1 *p;
    unk_func_003045E0_1 *next;

    if (arg0 != NULL) {
        p = arg0->unk_00;
        while (p != NULL) {
            next = p;
            p = p->unk_18;
            func_002F0F70(next, 1);
        }
        arg0->unk_00 = NULL;
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
