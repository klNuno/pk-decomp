/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_001DEBE0_1 {
    u8 pad_00[2];
    s16 unk_02;
    s16 unk_04;
    u8 pad_06[6];
    s16 *unk_0C;
    s32 *unk_10;
} unk_func_001DEBE0_1;

typedef struct unk_func_001DEBE0_0 {
    u8 pad_00[0x50];
    unk_func_001DEBE0_1 *unk_50;
    s32 unk_54;
    s32 unk_58;
    s16 unk_5C;
    u8 pad_5E[6];
    s32 unk_64;
    u8 pad_68[0x200];
    s32 unk_268;
    s32 unk_26C;
    u8 pad_270[0x4A8];
    s32 unk_718;
} unk_func_001DEBE0_0;

s32 func_001DE910();
s16 func_001DD030();
void func_001DF980();
void func_001DF380();
void func_001DE660();
void func_001DEDD0();

void func_001DEBE0(unk_func_001DEBE0_0 *arg0) {
    s32 sp20[52];
    unk_func_001DEBE0_1 *temp;
    s16 i;
    s16 idx;

    if (arg0->unk_50->unk_04 != 0) {
        if (func_001DE910(arg0, sp20, arg0->unk_64 != 0) == 0) {
            return;
        }
    }
    if (arg0->unk_64 == 0) {
        for (arg0->unk_5C = 0; arg0->unk_5C < arg0->unk_50->unk_02; arg0->unk_5C++) {
            if (arg0->unk_50->unk_04 != 0) {
                idx = func_001DD030(arg0->unk_50, arg0->unk_5C);
                arg0->unk_26C = (idx == -1) ? -1 : sp20[idx];
                if (arg0->unk_26C == 0) {
                    continue;
                }
            } else {
                arg0->unk_26C = -1;
            }
            temp = arg0->unk_50;
            i = arg0->unk_5C;
            switch (temp->unk_0C[i]) {
            case 1:
                if (arg0->unk_58 & 0x20000) {
                    arg0->unk_54 = temp->unk_10[i];
                    func_001DF980(arg0);
                }
                break;
            case 7:
                if (arg0->unk_58 & 0x80000) {
                    arg0->unk_268 = temp->unk_10[i];
                    func_001DF380(arg0);
                }
                break;
            case 8:
                if (arg0->unk_58 & 0x100000) {
                    arg0->unk_718 = temp->unk_10[i];
                    func_001DE660(arg0);
                }
                break;
            }
        }
    } else if (arg0->unk_58 & 0x1E0000) {
        func_001DEDD0(arg0);
    }
}
