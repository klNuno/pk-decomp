#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
} unk_func_0012D980_0;

void func_0012C450(s32);
void func_00153920(s32, s32, s32);
extern s32 D_0035F858;
extern s32 D_0035F8A8;
extern s32 D_00364BCC[];

void func_0012D980(unk_func_0012D980_0 *arg0) {
    if ((u8)(arg0->unk_28 == D_0035F8A8 || arg0->unk_28 == -1)) {
        func_0012C450(arg0->unk_24);
        return;
    }
    func_00153920(arg0->unk_24, D_00364BCC[D_0035F858], arg0->unk_20);
    func_0012C450(arg0->unk_24);
    arg0->unk_28 = D_0035F8A8;
}
