#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    u8 unk_0C[0xC];
    s32 unk_18;
    s32 unk_1C;
} unk_func_002D88E0_0;

void func_002CFED0(void *);
void func_002D8490(unk_func_002D88E0_0 *, s32, s32);
extern u8 D_0035E508[];

unk_func_002D88E0_0 *func_002D88E0(unk_func_002D88E0_0 *volatile arg0, s32 arg1, s32 arg2) {
    arg0->unk_08 = D_0035E508;
    arg0->unk_00 = arg2;
    arg0->unk_04 = arg1;
    func_002CFED0(arg0->unk_0C);
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_04 = arg1;
    func_002D8490(arg0, -1, 0);
    return arg0;
}
