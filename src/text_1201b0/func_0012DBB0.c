#include "common.h"

typedef struct unk_func_0012DBB0_0 {
    u8 pad_00[0x1C];
    struct unk_func_0012DBB0_0 *unk_1C;
    s32 unk_20;
    s32 unk_24;
} unk_func_0012DBB0_0;

void func_00153920(s32, s32, s32);
extern s32 D_0035F8A4;

void func_0012DBB0(unk_func_0012DBB0_0 *arg0) {
    unk_func_0012DBB0_0 *p0;
    unk_func_0012DBB0_0 *p1;
    unk_func_0012DBB0_0 *p2;
    unk_func_0012DBB0_0 *p3;

    p0 = arg0->unk_1C;
    if (p0 != NULL) {
        p1 = p0->unk_1C;
        if (p1 != NULL) {
            p2 = p1->unk_1C;
            if (p2 != NULL) {
                p3 = p2->unk_1C;
                if (p3 != NULL) {
                    func_0012DBB0(p3);
                    func_00153920(p3->unk_24, D_0035F8A4, p3->unk_20);
                    D_0035F8A4 = p3->unk_24;
                }
                func_00153920(p2->unk_24, D_0035F8A4, p2->unk_20);
                D_0035F8A4 = p2->unk_24;
            }
            func_00153920(p1->unk_24, D_0035F8A4, p1->unk_20);
            D_0035F8A4 = p1->unk_24;
        }
        func_00153920(p0->unk_24, D_0035F8A4, p0->unk_20);
        D_0035F8A4 = p0->unk_24;
    }
}
