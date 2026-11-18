#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    u8 *unk_0C;
} unk_func_002D03D0_0;

typedef struct {
    u8 pad_00[0x2C];
    void *unk_2C;
    u8 pad_30[0x828];
} unk_func_002D03D0_1;

typedef struct {
    u32 unk_00;
    u32 unk_04;
} unk_func_002D03D0_2;

extern char D_0035ADF0[];
extern char D_0035AE10[];
extern u8 D_007BE7E0[];

void c4sdk_malloc(void *, u32);
void func_0011CBB0(char *, char *, const char *, s32);
char *func_001DA090(char *);
const char *func_001DB940(void);
void func_002CDB60(unk_func_002D03D0_0 **, char *, u32 *);
u8 func_002D0640(u8);
void func_002D0E80(unk_func_002D03D0_2 *, u8 *, unk_func_002D03D0_2 *);
s32 func_002D36D0(unk_func_002D03D0_1 *, unk_func_002D03D0_0 **);
void func_002D39A0(unk_func_002D03D0_1 *, const char *);
void func_00309C60(unk_func_002D03D0_1 *, s32);
char *strcpy(char *, const char *);

s32 func_002D03D0(s32 arg0)
{
    char sp40[0x400];
    unk_func_002D03D0_1 sp440;
    unk_func_002D03D0_2 spC98;
    unk_func_002D03D0_2 spCA0;
    unk_func_002D03D0_0 *spCA8;
    u32 spCAC;
    s8 *p;
    s8 c;
    u32 x;
    u8 *q;

    func_0011CBB0(sp40, D_0035ADF0, func_001DB940(), arg0);
    strcpy(sp40, func_001DA090(sp40));
    for (p = (s8 *)sp40; (c = *p) != 0; p++) {
        if (c >= 'a' && c <= 'z') {
            *p -= 'a' - 'A';
        }
    }
    func_002D39A0(&sp440, sp40);
    func_002CDB60(&spCA8, D_0035AE10, &spCAC);
    for (;;) {
        if (!func_002D36D0(&sp440, &spCA8)) {
            break;
        }
        q = spCA8->unk_0C;
        x = ((u32)func_002D0640(q[0x15]) << 28) |
            ((u32)func_002D0640(q[0x16]) << 24) |
            ((u32)func_002D0640(q[0x17]) << 20) |
            ((u32)func_002D0640(q[0x18]) << 16) |
            ((u32)func_002D0640(q[0x19]) << 12) |
            ((u32)func_002D0640(q[0x1A]) << 8) |
            ((u32)func_002D0640(q[0x1B]) << 4) |
            (u32)func_002D0640(q[0x1C]);
        spC98.unk_00 = ((u32)func_002D0640(q[0x9]) << 28) |
            ((u32)func_002D0640(q[0xA]) << 24) |
            ((u32)func_002D0640(q[0xB]) << 20) |
            ((u32)func_002D0640(q[0xC]) << 16) |
            ((u32)func_002D0640(q[0xD]) << 12) |
            ((u32)func_002D0640(q[0xE]) << 8) |
            ((u32)func_002D0640(q[0xF]) << 4) |
            (u32)func_002D0640(q[0x10]);
        spC98.unk_04 = x;
        func_002D0E80(&spCA0, D_007BE7E0, &spC98);
    }
    c4sdk_malloc(&spCA8, 0);
    if (&sp440.unk_2C != 0) {
        c4sdk_malloc(&sp440.unk_2C, 0);
    }
    func_00309C60(&sp440, -1);
    return 0;
}
