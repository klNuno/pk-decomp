/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00250300_0 {
    u8 pad_00[4];
    u8 *unk_04;
    u8 *unk_08;
    u8 *unk_0C;
} unk_func_00250300_0;

typedef struct unk_func_00250300_1 {
    u8 pad_00[0xD8];
    s8 *unk_D8;
    u8 pad_DC[0x14C];
    f32 unk_228;
    u8 pad_22C[8];
    f32 unk_234;
    f32 unk_238;
    u8 pad_23C[0x80];
    s32 unk_2BC;
} unk_func_00250300_1;

u8 func_001A95B0(void);
void func_001FD710(unk_func_00250300_0 *, u8 *, u8 *, u8 *, s32, s32, u16);
void func_0024D750(unk_func_00250300_0 *, s32, s32, s32, f32 *);
void func_0024D860(unk_func_00250300_0 *, s32, s32, s32, f32);
void func_0024DE00(unk_func_00250300_1 *);
void func_00250770(unk_func_00250300_1 *);
extern unk_func_00250300_0 *D_003601D8;

#define UNK_00(offset, arg5, arg6) \
    func_001FD710(D_003601D8, D_003601D8->unk_04 + (offset), D_003601D8->unk_08 + (offset), \
                  D_003601D8->unk_0C + (offset), 0, (arg5), (arg6))

void func_00250300(unk_func_00250300_1 *arg0) {
    f32 temp[3];

    func_0024DE00(arg0);
    UNK_00(0x72, 0, 0x80);
    UNK_00(0x70, 0, 4);
    UNK_00(0x70, 0, 1);
    UNK_00(0x70, 0, 0x10);
    UNK_00(0x70, 0, 8);
    UNK_00(0x70, 0, 2);
    UNK_00(0x70, 0, 0x20);
    func_0024D860(D_003601D8, 0x23F, 0, 1, 0.5f);
    func_0024D860(D_003601D8, 0x240, 0, 1, 0.5f);
    func_0024D860(D_003601D8, 0x23C, 0, 1, 5.0f);
    func_0024D860(D_003601D8, 0x23D, 0, 1, 0.0f);
    func_0024D860(D_003601D8, 0x23B, 0, 1, 24.0f);
    func_0024D860(D_003601D8, 0x241, 0, 1, 24.0f);
    UNK_00(0x70, 1, 0x40);
    UNK_00(0x72, 1, 8);
    func_0024D860(D_003601D8, 0x237, 0, 1, 0.0f);
    if (func_001A95B0() == 2) {
        temp[0] = 0.0f;
        temp[1] = 0.0f;
        temp[2] = 4.5f;
    } else {
        temp[0] = 0.0f;
        temp[1] = 0.0f;
        temp[2] = 3.0f;
    }
    func_0024D750(D_003601D8, 0x232, 0, 1, temp);
    func_00250770(arg0);
    arg0->unk_238 = arg0->unk_234 = arg0->unk_228;
    func_0024D860(D_003601D8, 0x239, 0, 1, arg0->unk_234);
    arg0->unk_2BC = (s8)*arg0->unk_D8;
}
