/* profile: o0_301_p */
#include "common.h"

typedef struct unk_001D2A10_0 {
    struct unk_001D2A10_0 *unk_00;
} unk_001D2A10_0;

typedef struct unk_001D2A10_1 {
    u8 pad_00[8];
    struct unk_001D2A10_1 *unk_08;
    u8 pad_0C[8];
    struct unk_001D2A10_1 *unk_14;
} unk_001D2A10_1;

typedef struct {
    u8 pad_00[4];
    unk_001D2A10_0 *unk_04;
    u8 pad_08[0x110];
    u8 unk_118;
    u8 unk_119;
    u8 unk_11A;
    u8 unk_11B;
    u8 pad_11C[8];
    u8 unk_124;
    u8 pad_125[1];
    u16 unk_126;
    u8 unk_128;
    u8 pad_129[0xB];
    s32 unk_134;
    u8 unk_138;
    u8 pad_139[3];
    s32 unk_13C;
    u8 unk_140;
    u8 pad_141[3];
    s32 unk_144;
    u8 pad_148[0x14];
    u8 unk_15C;
    u8 unk_15D;
    u8 unk_15E;
    u8 unk_15F;
    s32 unk_160;
    s32 unk_164;
    s32 unk_168;
    s32 unk_16C;
} unk_001D2A10_2;

typedef struct {
    u8 pad_00[0x158];
    unk_001D2A10_0 *unk_158;
    u8 pad_15C[8];
    unk_001D2A10_2 *unk_164;
} unk_001D2A10_3;

typedef struct {
    unk_001D2A10_3 *unk_00;
    s32 unk_04;
    void *unk_08;
    void *unk_0C;
} unk_001D2A10_4;

typedef struct {
    u8 pad_00[4];
    void *unk_04;
    void *unk_08;
} unk_001D2A10_5;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_001D2A10_6;

typedef struct {
    u8 pad_00[0x108];
    unk_001D2A10_6 *unk_108;
    u8 pad_10C[0x1D];
    u8 unk_129;
} unk_001D2A10_7;

unk_001D2A10_4 *HIE_fn_hGetSuperObjectObject(unk_001D2A10_1 *);
unk_001D2A10_1 *fn_h_StandardGameGetSuperObject(s32);
unk_001D2A10_5 *fn_p_stBrainGetMind(void *);
void func_0012D450(unk_001D2A10_1 *);
void func_0012D550(unk_001D2A10_1 *);
void func_0012D940(unk_001D2A10_1 *);
void func_0012DAE0(unk_001D2A10_1 *);
void func_00139A90(void *, void *);
void func_00155FA0(void *, void *);
void *func_001979C0(unk_001D2A10_1 *);
u32 func_0019ABC0(s32);
s32 func_0019C730(unk_001D2A10_3 *);
unk_001D2A10_1 *func_001ACF40(s32, u16);
void *func_001B84B0(void *);
void func_001BEEE0(s32, u32);
void func_001BFBA0(s32, u32);
u32 func_001BFBD0(s32);
s32 func_001C2ED0(unk_001D2A10_3 *);
u8 func_001C4DF0(unk_001D2A10_3 *);
void func_001D3020(void *, s32);
void func_002CF8F0(unk_001D2A10_1 *, s32, s32, s32, s32, s32);

extern s32 D_0035F538;
extern s32 D_0035F53C;
extern s32 D_0035F544;
extern unk_001D2A10_1 *D_005ACB60[];

void func_001D2A10(unk_001D2A10_7 *arg0) {
    s32 temp;
    s32 temp2;
    s32 temp3;
    unk_001D2A10_1 *temp4;
    void *temp5;
    s32 temp6;
    unk_001D2A10_5 *temp7;
    unk_001D2A10_5 *temp8;
    unk_001D2A10_0 *temp9;
    unk_001D2A10_0 *temp21;
    unk_001D2A10_1 *temp10;
    u8 temp11;
    u8 temp12;
    unk_001D2A10_3 *temp13;
    unk_001D2A10_0 *temp14;
    unk_001D2A10_1 *temp15;
    unk_001D2A10_1 *temp16;
    u32 temp17;
    unk_001D2A10_0 *temp18;
    unk_001D2A10_0 *temp19;
    unk_001D2A10_1 *temp20;

    temp11 = 0;
    temp16 = fn_h_StandardGameGetSuperObject(arg0->unk_108->unk_04);
    temp13 = HIE_fn_hGetSuperObjectObject(temp16)->unk_00;
    if (arg0->unk_129) {
        temp12 = 0;
        temp2 = 0;
        temp14 = temp13->unk_158;
        if (temp14) {
            temp9 = temp14->unk_00;
        } else {
            temp9 = NULL;
        }
        temp21 = temp18 = temp9;
        while (temp14) {
            if (temp14 == temp13->unk_164->unk_04) {
                temp12 = 1;
            }
            temp2++;
            temp14 = temp18;
            temp19 = temp18 = temp14 ? temp14->unk_00 : NULL;
            (void)temp19;
        }
        if (!temp12) {
            temp11 = 1;
            temp13->unk_164->unk_128 = 0;
        }
    } else if (func_001C4DF0(temp13) && !(u8)func_001C2ED0(temp13)) {
        temp11 = 1;
        temp3 = HIE_fn_hGetSuperObjectObject(temp16)->unk_04;
        temp13->unk_164->unk_128 = 0;
        if (D_005ACB60[0] == temp16) {
            D_005ACB60[0] = NULL;
        }
        if (!temp13->unk_164->unk_11A && temp13->unk_164->unk_118) {
            temp17 = func_0019ABC0(temp3);
            temp17 &= ~0x10000;
            func_001BFBA0(temp3, temp17);
        }
        if (!temp13->unk_164->unk_11B && temp13->unk_164->unk_119) {
            temp17 = func_0019ABC0(temp3);
            temp17 &= ~0x8000;
            func_001BFBA0(temp3, temp17);
        }
        temp17 = func_001BFBD0(temp3);
        temp17 &= ~0x400000;
        func_001BEEE0(temp3, temp17);
        if (temp13->unk_164->unk_124) {
            temp4 = func_001ACF40(func_0019C730(temp13), temp13->unk_164->unk_126);
            if (temp4) {
                temp5 = HIE_fn_hGetSuperObjectObject(temp16)->unk_08;
                func_0012DAE0(temp16);
                func_0012DAE0(temp4);
                func_00155FA0(func_001979C0(temp16), func_001979C0(temp4));
                func_0012D940(temp16);
                temp6 = 0;
                temp10 = temp15 = temp16->unk_08;
                while (temp15) {
                    func_0012D450(temp15);
                    temp6++;
                    temp20 = temp15 = temp15->unk_14;
                    (void)temp20;
                }
                func_0012D550(temp16);
                if (temp5) {
                    func_00139A90(func_001B84B0(temp5), func_001979C0(temp16));
                }
            }
        }
        if (temp13->unk_164->unk_138 && temp13->unk_164->unk_13C) {
            temp7 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(temp16)->unk_0C);
            func_001D3020(temp7->unk_04, temp13->unk_164->unk_13C);
        }
        if (temp13->unk_164->unk_140 && temp13->unk_164->unk_134) {
            temp8 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(temp16)->unk_0C);
            func_001D3020(temp8->unk_08, temp13->unk_164->unk_144);
        }
    }
    if (temp11) {
        if (temp13->unk_164->unk_15C && temp13->unk_164->unk_160) {
            temp = temp13->unk_164->unk_160;
            func_002CF8F0(temp16, -1, D_0035F538, temp, 0, 0);
        }
        if (temp13->unk_164->unk_15E && temp13->unk_164->unk_168) {
            temp = temp13->unk_164->unk_168;
            func_002CF8F0((unk_001D2A10_1 *)-1, -1, D_0035F544, temp, 0, 0);
        }
        if (temp13->unk_164->unk_15D && temp13->unk_164->unk_164) {
            temp = temp13->unk_164->unk_164;
            func_002CF8F0(temp16, -1, D_0035F53C, temp, 0, 0);
        }
        if (temp13->unk_164->unk_15F && temp13->unk_164->unk_16C) {
            temp = temp13->unk_164->unk_160;
            func_002CF8F0((unk_001D2A10_1 *)-1, -1, D_0035F538, temp, 0, 0);
        }
    }
}
