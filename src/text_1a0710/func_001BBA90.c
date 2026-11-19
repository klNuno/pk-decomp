/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001BBA90_0 {
    struct unk_func_001BBA90_0 *unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_001BBA90_0;

typedef struct {
    unk_func_001BBA90_0 *unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
} unk_func_001BBA90_1;

typedef struct {
    unk_func_001BBA90_1 *unk_00;
    u8 pad_04[0x4];
    s8 unk_08;
} unk_func_001BBA90_2;

s32 func_001BBA90(unk_func_001BBA90_2 *arg0, s32 arg1) {
    unk_func_001BBA90_0 *p;
    s32 i;
    unk_func_001BBA90_0 *b;
    s32 count;
    s32 limit;
    unk_func_001BBA90_0 *a;

    if (arg0 != NULL && arg0->unk_00 != NULL) {
        count = arg0->unk_00->unk_08;
        if (arg0->unk_08) {
            if (count == 0) {
                return 0;
            }
            arg1 %= count;
            if (arg1 < 0) {
                arg1 += count;
            }
        } else if (arg1 < 0 || arg1 >= count) {
            return 0;
        }
        limit = count - arg1 - 1;
        for (i = 0, a = p = arg0->unk_00->unk_00; i < limit;) {
            i++;
            b = p = p->unk_00;
            (void)b;
        }
        return p->unk_0C;
    }
    return 0;
}
