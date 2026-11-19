/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00138680_0 {
    s32 unk_00;
    u8 pad_04[0x10];
    struct unk_func_00138680_0 *unk_14;
} unk_func_00138680_0;

typedef struct {
    u8 pad_00[8];
    unk_func_00138680_0 *unk_08;
} unk_func_00138680_1;

unk_func_00138680_0 *func_0012DCA0(unk_func_00138680_0 *);
s32 func_001B8580(unk_func_00138680_0 *);
extern unk_func_00138680_1 *D_0035FF68;
extern unk_func_00138680_1 *D_0035FF70;

unk_func_00138680_0 *func_00138680(s32 arg0) {
    unk_func_00138680_0 *n;
    unk_func_00138680_0 *p;

    p = D_0035FF70->unk_08;
    n = func_0012DCA0(p);
    while (p != NULL) {
        if (p->unk_00 == 2) {
            s32 value = func_001B8580(p);
            if (value == arg0) {
                return p;
            }
        }
        p = n;
        n = func_0012DCA0(n);
    }
    for (n = D_0035FF68->unk_08; n != NULL; n = n->unk_14) {
        if (n->unk_00 == 2) {
            s32 value = func_001B8580(n);
            if (value == arg0) {
                return n;
            }
        }
    }
    return NULL;
}
