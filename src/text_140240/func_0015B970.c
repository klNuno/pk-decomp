#include "common.h"

typedef struct unk_func_0015B970_0 {
    u8 pad_00[0x4];
    u8 unk_04;
    u8 pad_05[0x3];
    s32 unk_08;
    u8 pad_0C[0xF8];
} unk_func_0015B970_0;

void func_0015E750();
extern unk_func_0015B970_0 D_003678B0[];

void func_0015B970(void) {
    u32 i;
    s32 off;
    u8 *a;
    unk_func_0015B970_0 *p;

    for (i = 2, off = 0x208; i <= 17; i++, off += 0x104) {
        p = (unk_func_0015B970_0 *)((u8 *)D_003678B0 + off);
        a = &p->unk_04;
        if (*a == 3 || *a == 4) {
            *a = 1;
            func_0015E750(p->unk_08);
        }
    }
}
