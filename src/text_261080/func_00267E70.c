#include "common.h"

typedef struct {
    void *unk_00;
    void *unk_04;
    s32 unk_08;
} unk_func_00267E70_0;

extern s32 D_0035F5C0;
extern s32 D_0035F5C4;
extern s32 D_003602BC;
extern u8 D_00658570[];
extern unk_func_00267E70_0 D_00758570;

void func_00267E70(void) {
    D_0035F5C0 = 1;
    D_00758570.unk_00 = D_00658570;
    D_003602BC = 0;
    D_00758570.unk_04 = &D_00758570;
    D_00758570.unk_08 = 0x100000;
    D_0035F5C4 = 1;
}
