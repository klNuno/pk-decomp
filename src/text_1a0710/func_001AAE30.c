/* profile: o1 */
#include "common.h"

typedef struct {
    u8 pad_00[0x354];
    s16 unk_354;
} unk_func_001AAE30_0;

void func_001693B0();
extern s16 D_005AB790[];
extern s16 D_005AB894[];

void func_001AAE30(void) {
    u8 i;
    unk_func_001AAE30_0 *p;

    for (i = 0; i < 4; i++) {
        p = (unk_func_001AAE30_0 *)&D_005AB790[i];
        func_001693B0(D_005AB894[0], p->unk_354);
    }
}
