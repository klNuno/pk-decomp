#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    u8 unk_14[4];
} unk_func_002F21B0_0;

void func_002F3F00(unk_func_002F21B0_0 *);
void func_002D0DA0(u8 *, s32 *);
extern char D_0035E7C0[];

unk_func_002F21B0_0 *func_002F21B0(unk_func_002F21B0_0 *volatile arg0) {
    s32 temp;

    func_002F3F00(arg0);
    arg0->unk_00 = D_0035E7C0;
    arg0->unk_10 = 0;
    func_002D0DA0(arg0->unk_14, &temp);
    return arg0;
}
