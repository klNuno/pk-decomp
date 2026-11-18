/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    s32 unk_50;
} unk_func_00203B50_0;

unk_func_00203B50_0 *func_001F19D0();
s32 func_00203AA0(s32, u16);

s32 func_00203B50(s32 arg0, u16 arg1) {
    unk_func_00203B50_0 *temp;


    if ((temp = func_001F19D0(arg0)) == NULL) {
        return 0;
    }
    return func_00203AA0(temp->unk_50, arg1);
}
