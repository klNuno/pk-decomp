/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BBF90_0 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001BBF90_0;

typedef struct unk_func_001BBF90_1 {
    unk_func_001BBF90_0 *unk_00;
    u8 pad_04[4];
    s8 unk_08;
} unk_func_001BBF90_1;

s32 func_001BBA90(unk_func_001BBF90_1 *, s32);
s32 func_001EEC40(unk_func_001BBF90_0 *, s32, s32, s32);

s32 func_001BBF90(unk_func_001BBF90_1 *arg0, s32 arg1, s32 arg2) {
    s32 count;
    s32 b;
    s32 a;

    if (arg0 != NULL && arg0->unk_00 != NULL) {
        count = arg0->unk_00->unk_08;
        if (arg0->unk_08) {
            arg1 %= count;
            if (arg1 < 0) {
                arg1 += count;
            }
        }
        if (arg1 >= 0 && arg1 < count) {
            a = func_001BBA90(arg0, arg1);
            b = func_001BBA90(arg0, arg1 + 1);
            if (b) {
                return func_001EEC40(arg0->unk_00, a, b, arg2);
            }
        }
    }
    return -1;
}
