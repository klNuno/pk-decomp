/* profile: o0 */
#include "common.h"

typedef struct unk_func_00209D50_0 {
    u8 pad_00[0x6];
    u16 unk_06;
    u16 unk_08;
    u16 unk_0A;
    u16 unk_0C;
    u8 pad_0E[0x2];
} unk_func_00209D50_0;

typedef struct unk_func_00209D50_1 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00209D50_1;

void func_00208EA0(unk_func_00209D50_0 *);

s32 func_00209D50(s32 arg0, unk_func_00209D50_1 *arg1) {
    unk_func_00209D50_0 t;
    s32 total;

    arg0 = arg0;
    func_00208EA0(&t);
    total = t.unk_08 * 60 * 1000 + t.unk_06 * 60 * 60 * 1000 + t.unk_0A * 1000 + t.unk_0C;
    arg1->unk_00 = total;
    arg1->unk_0C = 6;
    return 1;
}
