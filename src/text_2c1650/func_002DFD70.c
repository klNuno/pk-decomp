#include "common.h"

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
} unk_func_002DFD70_0;

typedef struct {
    u8 pad_00[0x20];
} unk_func_002DFD70_1;

void func_002DF670(unk_func_002DFD70_1 *, unk_func_002DFD70_0 *);
s32 func_002DF380(unk_func_002DFD70_1 *);
void func_002DF2D0(unk_func_002DFD70_1 *, s32);

void func_002DFD70(unk_func_002DFD70_0 *arg0) {
    unk_func_002DFD70_1 v;

    func_002DF670(&v, arg0);
    if (func_002DF380(&v) != 0) {
        func_002DF2D0(&v, arg0->unk_38);
    }
}
