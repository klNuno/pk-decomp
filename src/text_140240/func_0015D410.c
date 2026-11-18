#include "common.h"

typedef struct {
    u8 pad_0[0x10];
    s32 unk_10;
    f32 unk_14;
} unk_func_0015D410_0;

void func_0015D070(unk_func_0015D410_0 *, f32);
void func_0015CDE0(unk_func_0015D410_0 *, f32, f32);
void func_001765C0();
extern s8 D_0035F978;
extern s32 D_0035F97C;
extern f32 D_0035F990;

void func_0015D410(unk_func_0015D410_0 *arg0, f32 arg1) {
    f32 temp;

    if (D_0035F978 == 1) {
        func_0015D070(arg0, arg1);
        arg0->unk_14 = D_0035F990;
        arg0->unk_10 = D_0035F97C;
        func_001765C0(arg0);
    } else if (D_0035F978 == 2) {
        if (D_0035F978 == 2) {
            if (arg0->unk_10 != D_0035F97C) {
                temp = 0.0f;
            } else {
                temp = arg0->unk_14;
            }
        } else if (D_0035F978 == 1) {
            temp = 0.0f;
        } else {
            temp = 0.0f;
        }
        func_0015CDE0(arg0, arg1, temp);
        arg0->unk_14 = D_0035F990;
        arg0->unk_10 = D_0035F97C;
        func_001765C0(arg0);
    }
}
