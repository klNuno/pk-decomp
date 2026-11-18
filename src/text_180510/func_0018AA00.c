#include "common.h"

typedef struct unk_func_0018AA00_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_0018AA00_0;

void func_0018AAE0(s32, s32);
void func_00192700(void);
void func_00285E70(s32, s32, s32);
void func_0018A6D0(s32, s32, s32);
extern u8 D_0035FB0C;
extern s32 D_0035FD9C;
extern u8 D_0035FDA8;
extern u32 D_0035FDB0;
extern unk_func_0018AA00_0 D_00402F00[];

void func_0018AA00(void) {
    unk_func_0018AA00_0 *p;
    s32 fmt;
    u32 i;

    if (D_0035FDA8 == 0) {
        func_0018AAE0(1, 2);
        func_00192700();
        for (i = 0; i < D_0035FDB0; i++) {
            p = &D_00402F00[i];
            if (p->unk_08 & 0x10000000) {
                fmt = 0x1908;
            } else {
                fmt = 0x1907;
            }
            func_00285E70(0xDE1, p->unk_04, p->unk_08);
            D_0035FB0C = p->unk_08 & 0xEFFFFFFF;
            D_0035FD9C = p->unk_00;
            func_0018A6D0(p->unk_0C, 0, fmt);
        }
        D_0035FDB0 = 0;
    }
}
