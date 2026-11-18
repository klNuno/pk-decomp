/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_001DAD10_0 {
    s64 unk_00;
    s8 unk_08;
    u8 pad_09[0x7];
    u64 unk_10;
} unk_func_001DAD10_0;

void func_0010C720();
void func_0010C9A0();
void func_0010CC80();
void func_0010CE78();
s32 func_0010CF40();
s32 func_0010D1B8();
void *memcpy(void *, const void *, u32);
extern u64 D_003600D8;
extern s32 D_003600E4;
extern unk_func_001DAD10_0 D_005F5800[];
extern u8 D_005F6000[];

s32 func_001DAD10(s64 arg0, void *arg1) {
    s32 i;
    s64 best;
    u64 min;
    u8 *buf;

    D_003600D8++;
    for (i = 0; i < 16; i++) {
        if (D_005F5800[i].unk_08 && arg0 == D_005F5800[i].unk_00) {
            memcpy(arg1, &D_005F6000[i << 11], 0x800);
            D_005F5800[i].unk_10 = D_003600D8;
            return 1;
        }
    }
    best = 0;
    min = D_005F5800[0].unk_10;
    for (i = 1; i < 16; i++) {
        if (D_005F5800[i].unk_10 < min) {
            min = D_005F5800[i].unk_10;
            best = i;
        }
    }
    func_0010C9A0(0);
    func_0010CE78(1);
    do {
        do {
            func_0010CC80(0);
        } while (func_0010CF40((s32)arg0, 1, buf = &D_005F6000[best << 11], &D_003600E4) == 0);
        func_0010C720(0);
    } while (func_0010D1B8() != 0);
    D_005F5800[best].unk_00 = arg0;
    D_005F5800[best].unk_08 = 1;
    D_005F5800[best].unk_10 = D_003600D8;
    memcpy(arg1, buf, 0x800);
    return 1;
}
