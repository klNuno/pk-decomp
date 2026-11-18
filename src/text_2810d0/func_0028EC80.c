/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0028EC80_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} __attribute__((aligned(16))) unk_func_0028EC80_0;

extern unk_func_0028EC80_0 D_007B07B0;
extern unk_func_0028EC80_0 D_007B7F40;
extern u8 D_007B7F54[];
extern u8 D_007B7F30[];
extern u8 D_007B7F31[];
extern u8 D_007B7B8E[];

void func_0028EC80(s32 arg0, s32 *arg1) {
    unk_func_0028EC80_0 temp;

    switch (arg0) {
    case 0xF00:
        D_007B7F54[0] = arg1[0] != 0;
        break;
    case 0xB51:
        D_007B7F30[0] = arg1[0] != 0;
        break;
    case 0xB52:
        D_007B7F31[0] = arg1[0] != 0;
        break;
    case 0xB53:
        temp = D_007B07B0;
        temp.unk_00 = arg1[0] / 2147483648.0f;
        temp.unk_04 = arg1[1] / 2147483648.0f;
        temp.unk_08 = arg1[2] / 2147483648.0f;
        temp.unk_0C = arg1[3] / 2147483648.0f;
        D_007B7F40 = temp;
        break;
    }
    D_007B7B8E[0] = 1;
}
