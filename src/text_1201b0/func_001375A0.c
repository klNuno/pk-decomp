#include "common.h"

void func_00136830(s32, char *, s32);
void func_001339C0(void *);
void func_00133980(void *);
void *malloc(u32);
void func_0011CBB0(char *, char *, void *, s32);
extern u8 D_0035F914;
extern char D_00347AE0[];
extern char D_00347B10[];
extern u8 D_00367100[];

void *func_001375A0(u32 arg0, s32 arg1) {
    char sp40[0x200];
    u32 temp_s1;
    u8 *temp_s0;
    u32 temp_v1;

    if (D_0035F914 == 0xFF) {
        func_00136830(0x11, D_00347AE0, arg1);
    }
    if (arg0 == 0) {
        return NULL;
    }
    func_001339C0(D_00367100);
    temp_s1 = arg0;
    if (temp_s1 & 0xF) {
        temp_s1 = (temp_s1 & ~0xF) + 0x10;
    }
    temp_s1 = (temp_s1 >> 4) + 1;
    temp_s0 = malloc(temp_s1 << 4);
    temp_v1 = (u32)temp_s0;
    if (temp_v1 & 0xF) {
        temp_v1 = (temp_v1 & ~0xF) + 0x10;
    }
    if ((u32)temp_s0 != temp_v1) {
        func_0011CBB0(sp40, D_00347B10, temp_s0, 0x10);
        func_00136830(3, sp40, arg1);
    }
    if (temp_s0 == NULL) {
        func_00136830(0x20, 0, arg1);
        func_00133980(D_00367100);
        return NULL;
    }
    *(__int128 *)temp_s0 = temp_s1;
    func_00133980(D_00367100);
    return temp_s0 + 0x10;
}
