#include "common.h"

typedef struct {
    s16 unk_00;
    s16 unk_02;
} unk_func_00164F50_0;

void func_00165070();
void func_001652C0();
void func_00170070();
s32 func_00170080();
extern unk_func_00164F50_0 D_003315A0[];
extern s32 D_0035F458;
extern s32 D_0035FAA4;
extern s32 D_0035FAA8;
extern s32 D_0035FAAC;

void func_00164F50(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp68;
    s32 sp6C;
    s32 a;
    s32 b;
    unk_func_00164F50_0 *entry;
    s32 c;

    if (D_0035F458 != 0) {
        if (D_0035FAAC != 0) {
            func_00165070();
        }
    } else if (func_00170080(&sp6C, &sp68) != 0) {
        b = sp68;
        a = sp6C;
        if (D_0035FAA4 != 0) {
            goto test;
        }
        goto end;
        do {
            if (c < 0x80) {
                entry = &D_003315A0[(u8)c];
                if (entry->unk_02 != -1) {
                    func_001652C0(arg1, arg2, 8, 0x10, D_0035FAA4 + (entry->unk_00 + D_0035FAA8 * entry->unk_02), D_0035FAA8, a, b);
                }
            }
            arg0++;
            arg1 += 8;
test:
            c = *arg0;
        } while (c != 0);
end:
        func_00170070();
    }
}
