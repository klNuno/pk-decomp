/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0019FC70_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} __attribute__((aligned(16))) unk_func_0019FC70_0;

typedef struct unk_func_0019FC70_1 {
    u8 pad_00[0x60];
} unk_func_0019FC70_1;

extern u8 D_0034A010[];
extern u8 D_0034A030[];
extern u8 D_0034A060[];
extern s32 D_0035FF40;
extern u8 D_0035FFA0;
extern u8 D_0035FFAC;
extern u8 D_005AB8A0[];

void func_0011CBB0();
void func_00164F50();
s32 func_001979A0();
void func_00155FA0();
void func_00150580(f32, void *, void *);
void func_001565B0();
void func_0012C3E0();
void func_00167A70(f32);
void func_0012C3D0();
void func_00167450();
void func_0012C3C0();

void func_0019FC70(s32 arg0, s32 arg1, s32 arg2) {
    char sp10[0x100];
    unk_func_0019FC70_1 sp110;
    unk_func_0019FC70_0 sp170;
    unk_func_0019FC70_0 sp180;

    func_0011CBB0(sp10, D_0034A010, D_0035FFA0);
    func_00164F50(sp10, 0x1C2, 0x1B3);
    if (D_0035FFAC) {
        func_0011CBB0(sp10, D_0034A030);
    } else {
        func_0011CBB0(sp10, D_0034A060);
    }
    func_00164F50(sp10, 0x190, 0x1D1);
    func_00155FA0(&sp110, func_001979A0(arg2));
    sp170.unk_00 = 1.0f;
    sp170.unk_04 = 0.0f;
    sp170.unk_08 = 0.0f;
    func_00150580(-1.5707964f, &sp110, &sp170);
    sp180.unk_00 = 8.0f;
    sp180.unk_04 = 8.0f;
    sp180.unk_08 = 8.0f;
    func_001565B0(&sp110, &sp180);
    func_0012C3E0(D_005AB8A0);
    func_00167A70(255.0f);
    func_0012C3D0(&sp110);
    func_00167450(arg0, D_0035FF40, -1);
    func_0012C3C0();
}
