/* profile: o0_301_p */
#include "common.h"

typedef struct {
    char unk_00[0x10];
    s32 unk_10;
} unk_001CEE30_0;

typedef struct {
    unk_001CEE30_0 unk_00[13];
} unk_001CEE30_1;

typedef struct {
    s32 unk_00, unk_04, unk_08, unk_0C, unk_10;
} unk_001CEE30_2;

typedef struct {
    unk_001CEE30_2 unk_00[13];
} unk_001CEE30_3;

extern unk_001CEE30_1 D_00333AF0[] __attribute__((aligned(16)));
extern unk_001CEE30_3 D_005E5950[];
extern char D_0034BB80[], D_0034BBD0[], D_0034BC30[], D_0034BC60[], D_0034BCC0[];

void func_00118218(s32, const char *, ...);

void func_001CEE30(s32 arg0) {
    unk_001CEE30_1 temp __attribute__((aligned(16)));
    u16 temp0;
    u32 temp1;
    s32 temp2 = 0;
    s32 temp3 = 0;
    unk_001CEE30_0 *temp4;

    temp = *D_00333AF0;
    temp4 = temp.unk_00;
    (void)temp4;
    if (arg0 != 0) {
        func_00118218(arg0, D_0034BB80);
        for (temp1 = 0; temp1 < 100U; temp1++) {
            func_00118218(arg0, D_0034BBD0, temp1);
            for (temp0 = 0; temp0 < 13; temp0++) {
                func_00118218(arg0, D_0034BC30, temp.unk_00[temp0].unk_00,
                              D_005E5950[temp1].unk_00[temp0].unk_0C,
                              temp.unk_00[temp0].unk_10 * D_005E5950[temp1].unk_00[temp0].unk_0C,
                              D_005E5950[temp1].unk_00[temp0].unk_04 - D_005E5950[temp1].unk_00[temp0].unk_0C,
                              temp.unk_00[temp0].unk_10 *
                                  (D_005E5950[temp1].unk_00[temp0].unk_04 - D_005E5950[temp1].unk_00[temp0].unk_0C),
                              D_005E5950[temp1].unk_00[temp0].unk_04,
                              D_005E5950[temp1].unk_00[temp0].unk_08,
                              temp.unk_00[temp0].unk_10 * D_005E5950[temp1].unk_00[temp0].unk_04);
                temp2 += temp.unk_00[temp0].unk_10 * D_005E5950[temp1].unk_00[temp0].unk_0C;
                temp3 += temp.unk_00[temp0].unk_10 * D_005E5950[temp1].unk_00[temp0].unk_04;
            }
        }
        func_00118218(arg0, D_0034BC60);
        func_00118218(arg0, D_0034BCC0, temp2, temp3 - temp2, temp3);
    }
}
