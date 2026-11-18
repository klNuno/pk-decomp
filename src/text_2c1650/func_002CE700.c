#include "common.h"

typedef struct {
    u8 pad_00[4];
    void *unk_04;
} unk_func_002CE700_0;

void func_002CEBF0(unk_func_002CE700_0 *, void *);
void func_00304B00(void *);

unk_func_002CE700_0 *func_002CE700(unk_func_002CE700_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk_04 != NULL) {
            func_002CEBF0(arg0, arg0->unk_04);
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
