/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0018E410_0;

void func_0011B418();
void func_00285CD0();
extern char D_00349AC0[];
extern s32 D_0035FA10;
extern s32 D_0035FE24;
extern unk_func_0018E410_0 D_005070F0[];

static inline void func_0018E410_init(void) {
    u32 i;

    D_0035FE24 = 1;
    for (i = 0; i < 500; i++) {
        D_005070F0[i].unk_00 = 0;
        D_005070F0[i].unk_08 = 0;
    }
}

void func_0018E410(s32 arg0) {
    u32 i;

    if (D_0035FE24 == 0) {
        func_0018E410_init();
    }
    for (i = 0; i < 500 && (D_005070F0[i].unk_08 != 0 || D_005070F0[i].unk_00 != 0); i++) {
    }
    if (i == 500) {
        func_0011B418(D_00349AC0);
        func_00285CD0(arg0, 1);
        return;
    }
    D_005070F0[i].unk_08 = arg0;
    D_005070F0[i].unk_04 = D_0035FA10;
}
