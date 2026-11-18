/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    u8 *unk_04;
    u8 *unk_08;
    u8 *unk_0C;
} unk_0024DF70_0;

typedef struct {
    u8 pad_00[0x228];
    f32 unk_228;
    u8 pad_22C[8];
    f32 unk_234;
    f32 unk_238;
    u8 pad_23C[0xDC];
    s32 unk_318;
} unk_0024DF70_1;

void func_001FD710(unk_0024DF70_0 *, u8 *, u8 *, u8 *, s32, s32, u16);
void func_0024D750(unk_0024DF70_0 *, s32, s32, s32, f32 *);
void func_0024D860(unk_0024DF70_0 *, s32, s32, s32, f32);
void func_0024DE00(unk_0024DF70_1 *);
void func_0024E2F0(unk_0024DF70_1 *);
extern unk_0024DF70_0 *D_003601D8;
extern s32 D_00617350[];

#define CALL(offset, arg5, arg6) \
    func_001FD710(D_003601D8, D_003601D8->unk_04 + (offset), D_003601D8->unk_08 + (offset), \
                  D_003601D8->unk_0C + (offset), 0, (arg5), (arg6))

void func_0024DF70(unk_0024DF70_1 *arg0) {
    f32 temp[3];

    func_0024DE00(arg0);
    temp[0] = 0.0f;
    temp[1] = 0.0f;
    temp[2] = 2.5f;
    CALL(0x72, 1, 0x80);
    CALL(0x70, 0, 4);
    func_0024D860(D_003601D8, 0x23E, 0, 1, 35.7f);
    CALL(0x70, 0, 1);
    CALL(0x70, 1, 0x10);
    CALL(0x70, 0, 8);
    CALL(0x70, 1, 2);
    CALL(0x70, 1, 0x20);
    CALL(0x70, 1, 0x40);
    CALL(0x72, 1, 8);
    func_0024D750(D_003601D8, 0x232, 0, 1, temp);
    func_0024D860(D_003601D8, 0x237, 0, 1, 0.0f);
    func_0024D860(D_003601D8, 0x23B, 0, 1, 56.0f);
    func_0024E2F0(arg0);
    arg0->unk_238 = arg0->unk_234 = arg0->unk_228;
    func_0024D860(D_003601D8, 0x239, 0, 1, arg0->unk_234);
    arg0->unk_318 = D_00617350[0];
}
