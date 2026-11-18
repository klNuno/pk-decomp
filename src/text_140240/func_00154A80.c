/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00154A80_0;

void func_0011B418();
extern char D_00348090[];
extern char D_003480B0[];

void func_00154A80(unk_func_00154A80_0 *arg0, unk_func_00154A80_0 *arg1) {
    if (!(arg1->unk_0C == 1.0f)) {
        func_0011B418(D_00348090, 0x9A);
        func_0011B418(D_003480B0);
        for (;;) {
        }
    }
    arg0->unk_00 = -arg1->unk_00;
    arg0->unk_04 = -arg1->unk_04;
    arg0->unk_08 = -arg1->unk_08;
    arg0->unk_0C = 1.0f;
}
