/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B4750_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001B4750_0;

typedef struct unk_func_001B4750_1 {
    u8 pad_00[0x68];
    s32 unk_68;
} unk_func_001B4750_1;

typedef struct unk_func_001B4750_2 {
    u8 pad_00[0xC];
    unk_func_001B4750_1 *unk_0C;
    u8 pad_10[0x68];
    u8 unk_78[0x60];
    u8 unk_D8[0x60];
    u8 unk_138[0x20];
} unk_func_001B4750_2;

void func_001B5210(unk_func_001B4750_2 *, unk_func_001B4750_0 *);
void func_001B5290(unk_func_001B4750_2 *, unk_func_001B4750_0 *);
void func_001B5310(unk_func_001B4750_2 *, unk_func_001B4750_0 *);
void *memset(void *, s32, u32);

void func_001B4750(unk_func_001B4750_2 *arg0) {
    unk_func_001B4750_0 v;
    s32 temp;

    temp = arg0->unk_0C->unk_68;
    if (temp != 0) {
        memset(arg0->unk_78, 0, 0x60);
        memset(arg0->unk_D8, 0, 0x60);
        memset(arg0->unk_138, 0, 0x20);
        v.unk_00 = 0.0f;
        v.unk_04 = -1.0f;
        v.unk_08 = 0.0f;
        func_001B5210(arg0, &v);
        v.unk_00 = -1.0f;
        v.unk_04 = 0.0f;
        v.unk_08 = 0.0f;
        func_001B5290(arg0, &v);
        v.unk_00 = 0.0f;
        v.unk_04 = 0.0f;
        v.unk_08 = -1.0f;
        func_001B5310(arg0, &v);
    }
}
