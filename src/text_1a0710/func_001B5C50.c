/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10;
    u8 pad_11[3];
} unk_func_001B5C50_0;

typedef struct {
    u8 pad_00[0x180];
    unk_func_001B5C50_0 unk_180[9];
    u8 pad_234[0x14];
    s16 unk_248;
} unk_func_001B5C50_1;

void func_001B5C50(unk_func_001B5C50_1 *arg0) {
    unk_func_001B5C50_0 *p;
    unk_func_001B5C50_0 *end;

    p = arg0->unk_180;
    end = p + arg0->unk_248;
    while (p < end) {
        p->unk_10 = 0;
        p++;
    }
}
