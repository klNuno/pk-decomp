#include "common.h"

typedef struct unk_func_00136B10_0 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_00136B10_0;

void *malloc(s32);
extern u8 D_00367110[];
extern unk_func_00136B10_0 *D_00367210[];

void func_00136B10(u8 arg0, u8 arg1) {
    u8 var_a1;
    unk_func_00136B10_0 *var_a2;

    if (arg1 > 0) {
        D_00367210[arg0] = malloc(arg1 * 16);
        var_a2 = D_00367210[arg0];
        var_a1 = 0;
        while (var_a1 < arg1) {
            var_a2->unk_00 = -1;
            var_a1++;
            var_a2++;
        }
        D_00367110[arg0] = arg1;
    }
}
