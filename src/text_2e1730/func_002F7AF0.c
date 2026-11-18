/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002F7AF0_0 {
    void *unk_00;
    u8 pad_04[0x48];
    s32 unk_4C;
    s32 unk_50;
    s32 unk_54;
} unk_func_002F7AF0_0;

extern u8 D_0035E890[];
unk_func_002F7AF0_0 *func_002D2BC0(s32);
void func_002FBA70(unk_func_002F7AF0_0 *);

unk_func_002F7AF0_0 *func_002F7AF0(void) {
    unk_func_002F7AF0_0 *temp;

    temp = func_002D2BC0(0x58);
    if (temp != NULL) {
        func_002FBA70(temp);
        temp->unk_00 = D_0035E890;
        temp->unk_4C = 0;
        temp->unk_50 = 0;
        temp->unk_54 = 0;
    }
    return temp;
}
