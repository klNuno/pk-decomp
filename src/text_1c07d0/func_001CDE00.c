/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x5C];
    u16 unk_5C;
} unk_001CDE00_0;

typedef struct {
    u8 pad_00[0xE];
    u16 unk_0E;
    u8 pad_10[0x24];
    u16 unk_34;
    u16 unk_36;
} unk_001CDE00_1;

typedef struct {
    u8 pad_00[2];
    u16 unk_02;
    u8 pad_04[2];
    u16 unk_06;
    s32 unk_08;
    u8 pad_0C[4];
} unk_001CDE00_2;

typedef struct {
    u8 pad_00[0xC];
    u16 unk_0C;
} unk_001CDE00_3;

typedef struct {
    u8 pad_00[0x12];
    u16 unk_12;
    u16 unk_14;
    u16 unk_16;
    u16 unk_18;
    u16 unk_1A;
    u8 pad_1C[8];
} unk_001CDE00_4;

unk_001CDE00_1 *func_001CAAA0(u16, s32);
s32 memcmp(const void *, const void *, u32);
void *memset(void *, s32, u32);
extern unk_001CDE00_4 *D_00360040;
extern s32 *D_00360044;
extern u16 *D_00360048;
extern unk_001CDE00_2 *D_0036004C;
extern unk_001CDE00_3 *D_00360050;
extern u8 *D_0036005C;
extern u8 *D_00360060;

s32 func_001CDE00(unk_001CDE00_0 *arg0, unk_001CDE00_0 *arg1, u16 arg2)
{
    unk_001CDE00_4 *spA0[0x100];
    unk_001CDE00_4 *sp4A0[0x100];
    unk_001CDE00_1 *volatile sp8AC;
    u16 *volatile sp8B0;
    u16 *volatile sp8B4;
    s32 *volatile sp8B8;
    u16 sp8BC;
    u16 sp8BE;
    u16 i;
    unk_001CDE00_4 *temp1;
    unk_001CDE00_4 *temp2;
    unk_001CDE00_2 *temp3;
    unk_001CDE00_2 *temp4;
    unk_001CDE00_4 *temp5;
    unk_001CDE00_4 *temp6;
    unk_001CDE00_1 *temp7;
    s32 *temp8;

    memset((void *)spA0, 0, 0x400);
    memset((void *)sp4A0, 0, 0x400);
    temp7 = func_001CAAA0(arg0->unk_5C, (u16)arg2);
    temp3 = &D_0036004C[(u16)temp7->unk_36];
    sp8BC = D_00360050[(u16)temp7->unk_34 + (u16)arg2].unk_0C;
    for (i = 0; (u16)i < (u16)temp7->unk_0E; i++) {
        if ((u16)temp3->unk_02 != 0xFFFF) {
            sp8B0 = &D_00360048[(u16)temp3->unk_06 + (u16)sp8BC];
            temp8 = &D_00360044[temp3->unk_08 + (u16)arg2];
            temp1 = &D_00360040[*temp8];
            if ((u16)temp1->unk_12 & 0x80) {
                if ((u16)temp1->unk_12 & 0x200) {
                    temp5 = &D_00360040[D_00360044[temp3->unk_08]];
                } else {
                    temp5 = temp1;
                }
            } else {
                temp5 = temp1;
            }
            spA0[(u16)i] = temp5;
        }
    }
    sp8AC = func_001CAAA0(arg1->unk_5C, 0);
    temp4 = &D_0036004C[(u16)sp8AC->unk_36];
    sp8BE = D_00360050[(u16)sp8AC->unk_34].unk_0C;
    for (i = 0; (u16)i < (u16)sp8AC->unk_0E; i++) {
        if ((u16)temp4->unk_02 != 0xFFFF) {
            sp8B4 = &D_00360048[(u16)temp4->unk_06 + (u16)sp8BE];
            sp8B8 = &D_00360044[temp4->unk_08];
            temp2 = &D_00360040[*sp8B8];
            if ((u16)temp2->unk_12 & 0x80) {
                if ((u16)temp2->unk_12 & 0x200) {
                    temp6 = &D_00360040[D_00360044[temp4->unk_08]];
                } else {
                    temp6 = temp2;
                }
            } else {
                temp6 = temp2;
            }
            sp4A0[(u16)i] = temp6;
        }
    }
    for (i = 0; (u16)i < (u16)temp7->unk_0E; i++) {
        if (memcmp(D_00360060 + (u16)spA0[(u16)i]->unk_1A * 0xC,
                   D_00360060 + (u16)sp4A0[(u16)i]->unk_1A * 0xC, 0xC) != 0) {
            return 0;
        }
        if (memcmp(D_0036005C + (u16)spA0[(u16)i]->unk_14 * 8,
                   D_0036005C + (u16)sp4A0[(u16)i]->unk_14 * 8, 8) != 0) {
            return 0;
        }
        if (memcmp(D_00360060 + (u16)spA0[(u16)i]->unk_18 * 0xC,
                   D_00360060 + (u16)sp4A0[(u16)i]->unk_18 * 0xC, 0xC) != 0 ||
            memcmp(D_0036005C + (u16)spA0[(u16)i]->unk_16 * 8,
                   D_0036005C + (u16)sp4A0[(u16)i]->unk_16 * 8, 8) != 0) {
            return 0;
        }
    }
    return 1;
}
