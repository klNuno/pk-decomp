/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_001F1370_0;

void func_001559E0();
void func_00155EC0();
s32 func_0019E2E0();

void func_001F1370(unk_func_001F1370_0 *arg0, s32 arg1) {
    s32 temp;

    temp = func_0019E2E0(arg0);
    if (temp != 0) {
        func_001559E0(arg1, arg0->unk_24, temp);
    } else {
        func_00155EC0(arg0->unk_24, arg1);
    }
}
