/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001F55C0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001F55C0_0;

typedef struct unk_func_001F55C0_1 {
    u8 pad_00[0x7C];
} unk_func_001F55C0_1;

typedef struct unk_func_001F55C0_2 {
    u8 pad_00[0x75];
    u8 unk_75;
} unk_func_001F55C0_2;

typedef struct unk_func_001F55C0_3 {
    u8 pad_00[0x18];
    f32 unk_18;
    f32 unk_1C;
} unk_func_001F55C0_3;

typedef struct unk_func_001F55C0_4 {
    u8 pad_00[8];
    unk_func_001F55C0_2 *unk_08;
    void *unk_0C;
    u8 pad_10[8];
    void *unk_18;
    u8 pad_1C[0x10];
    unk_func_001F55C0_0 unk_2C;
    unk_func_001F55C0_0 unk_38;
    u8 pad_44[0x8C];
} unk_func_001F55C0_4;

void *memcpy(void *, void *, s32);
void func_001F6260(unk_func_001F55C0_4 *);
extern unk_func_001F55C0_1 D_006042A0;
extern f32 D_006042B8[];
extern f32 D_006042BC[];
extern u16 D_00604312[];

void func_001F55C0(unk_func_001F55C0_4 *arg0) {
    unk_func_001F55C0_4 sp10;

    memcpy(&sp10, arg0, 0xD0);
    if (arg0->unk_08->unk_75 & 2) {
        memcpy(&D_006042A0, arg0->unk_18, 0x7C);
        D_006042B8[0] = ((unk_func_001F55C0_3 *)arg0->unk_0C)->unk_18;
        D_006042BC[0] = ((unk_func_001F55C0_3 *)arg0->unk_0C)->unk_1C;
    } else {
        memcpy(&D_006042A0, arg0->unk_0C, 0x7C);
    }
    D_00604312[0] |= 0x40;
    sp10.unk_0C = &D_006042A0;
    func_001F6260(&sp10);
    ((unk_func_001F55C0_0 *)&arg0->unk_38)->unk_00 = ((unk_func_001F55C0_0 *)&sp10.unk_2C)->unk_00;
    ((unk_func_001F55C0_0 *)&arg0->unk_38)->unk_04 = ((unk_func_001F55C0_0 *)&sp10.unk_2C)->unk_04;
    ((unk_func_001F55C0_0 *)&arg0->unk_38)->unk_08 = ((unk_func_001F55C0_0 *)&sp10.unk_2C)->unk_08;
}
