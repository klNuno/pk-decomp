#include "common.h"

typedef struct unk_func_00279AA0_1 {
    s64 unk_00;
    s64 unk_08;
    s32 unk_10;
    s32 unk_14;
} unk_func_00279AA0_1;

typedef struct unk_func_00279AA0_0 {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[0x44];
    unk_func_00279AA0_1 *unk_50;
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
} unk_func_00279AA0_0;

typedef struct unk_func_00279AA0_2 {
    u8 pad_00[0x10];
    s32 unk_10;
    s32 unk_14;
} unk_func_00279AA0_2;

s32 func_00279AA0(unk_func_00279AA0_0 *arg0, unk_func_00279AA0_2 *arg1) {
    unk_func_00279AA0_1 *e;
    s32 i;
    s32 rem;
    s32 len;
    s32 start;
    s32 size;
    s32 n;
    s32 pos;
    s32 more;

    more = 1;
    i = (arg0->unk_54 + (arg0->unk_5C - arg0->unk_58)) % arg0->unk_54;
    size = arg0->unk_08 << 11;
    if (arg0->unk_58 > 0) {
        do {
            e = &arg0->unk_50[i];
            n = e->unk_14;
            if (n == 0) {
                break;
            }
            len = arg1->unk_14;
            if (len == 0) {
                break;
            }
            pos = e->unk_10;
            start = arg1->unk_10;
            if ((pos + size - start) % size < len) {
                rem = start + len - pos;
                n = (n < rem) ? n : rem;
                e->unk_10 = (pos + n) % size;
                e->unk_14 -= n;
                if (e->unk_14 == 0) {
                    if (e->unk_00 >= 0) {
                        e->unk_00 = -1;
                        e->unk_08 = -1;
                        e->unk_10 = 0;
                        e->unk_14 = 0;
                    }
                    rem = arg0->unk_58 - 1;
                    arg0->unk_58 = (rem < 0) ? 0 : rem;
                }
            } else {
                more = 0;
            }
            i = (i + 1) % arg0->unk_54;
        } while (more);
    }
    return 0;
}
