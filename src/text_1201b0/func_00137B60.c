#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 *unk_04;
} unk_func_00137B60_0;

extern char D_00347B40[];
extern char D_00347B80[];
extern char D_00347B90[];
s32 func_00138680();
s32 func_001E7900(s32);
void func_0011CBB0(char *, char *, s32);
void Erm_SCE_fn_iMessageBox(char *, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
void func_00137C20(unk_func_00137B60_0 *, s32 *);
void func_00313790(unk_func_00137B60_0 *, s32 *);

void func_00137B60(unk_func_00137B60_0 *arg0, s32 *arg1) {
    char buf[0x200];

    if (arg1 == NULL) {
        func_0011CBB0(buf, D_00347B40, func_001E7900(func_00138680()));
        Erm_SCE_fn_iMessageBox(buf, D_00347B80, 0x10);
        Erm_fn_ClearLastError(0, D_00347B90, 0x18C);
        return;
    }
    if (*arg1 == 1) {
        func_00137C20(arg0, arg1);
    } else if (*arg1 == 2) {
        func_00313790(arg0, arg1);
    }
    arg0->unk_04 = arg1;
}
