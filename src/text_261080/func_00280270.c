/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00280270_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00280270_0;

typedef struct unk_func_00280270_1 {
    u8 unk_00[0x200];
} unk_func_00280270_1;

char *strcpy(char *, const char *);
void *memcpy(void *, const void *, u32);
void func_0011CBB0();
void func_00271230();
extern char D_00350540[];
extern s32 D_003603C4;
extern char D_007B00F0[];
extern char D_007B01F0[];
extern char D_007B02F0[];

void func_00280270(s32 arg0, f32 arg1) {
    unk_func_00280270_1 buf;
    unk_func_00280270_0 v;
    char fmt[4];

    D_003603C4 = 1;
    strcpy(fmt, D_00350540);
    func_0011CBB0(&buf, (char *)arg0, fmt);
    v.unk_00 = 500.0f;
    v.unk_04 = arg1;
    v.unk_08 = 10.0f;
    func_00271230(&buf, &v);
    memcpy(D_007B02F0, D_007B01F0, 0xFF);
    memcpy(D_007B01F0, D_007B00F0, 0xFF);
    memcpy(D_007B00F0, &buf, 0xFF);
}
