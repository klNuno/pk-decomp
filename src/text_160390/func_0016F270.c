#include "common.h"

typedef struct unk_func_0016F270_0 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    u8 pad_10[8];
    s32 unk_18;
    u8 pad_1C[0x60];
    s32 unk_7C;
    s32 unk_80;
    u8 pad_84[0x6C];
    u8 unk_F0[0xA4];
    s32 unk_194;
} unk_func_0016F270_0;

s32 func_0012C380();
void func_00155FA0(void *, s32);
void func_0016F320();
extern s32 D_0035F820;
extern unk_func_0016F270_0 *D_0035FB04;
extern s32 D_0035FBC8;
extern u8 D_0036EF80[];

void func_0016F270(s32 **arg0) {
    s32 temp_s0;
    s32 temp_a1;
    temp_s0 = *arg0[3];
    temp_a1 = D_0035FB04->unk_194 + 0x10;
    D_0035FB04->unk_7C = temp_a1;
    D_0035FB04->unk_18 = 0;
    D_0035FB04->unk_04 = temp_s0;
    func_00155FA0(D_0036EF80, temp_a1);
    D_0035FBC8 = 1;
    D_0035FB04->unk_00 = 0;
    D_0035FB04->unk_0C = -1;
    D_0035FB04->unk_18 = 0;
    D_0035FB04->unk_04 = temp_s0;
    D_0035FB04->unk_80 = D_0035F820;
    func_00155FA0(D_0035FB04->unk_F0, func_0012C380());
    func_0016F320();
}
