/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_001DA800_0;

void func_001DAEE0();
void func_0010C9A0(s32);
void func_0031CBC8(s32);
void func_0010CE78(s32);
extern s32 D_003600D4;
extern unk_func_001DA800_0 D_005ECF50[];

void func_001DA800(void) {
    s32 i;

    D_003600D4 = 0;
    func_001DAEE0();
    func_0010C9A0(0);
    func_0031CBC8(0);
    func_0010CE78(1);
    for (i = 0; i < 20; i++) {
        D_005ECF50[i].unk_00 = 0;
    }
}
