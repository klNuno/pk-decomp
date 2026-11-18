/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0022A250_0 {
    u8 pad_00[0x20];
    u8 unk_20;
    u8 pad_21[0x3];
} unk_func_0022A250_0;

void func_00229C50(unk_func_0022A250_0 *);
void func_00229EF0(unk_func_0022A250_0 *);
void func_0022A0D0(unk_func_0022A250_0 *);
extern u16 D_003601B8;
extern unk_func_0022A250_0 D_00605970[];

void func_0022A250(void) {
    unk_func_0022A250_0 *p;
    u16 i;

    for (i = 0; i < D_003601B8; i++) {
        p = &D_00605970[i];
        switch (p->unk_20) {
        case 0:
            func_00229C50(p);
            break;
        case 1:
            func_00229EF0(p);
            break;
        case 2:
            func_0022A0D0(p);
            break;
        }
    }
    D_003601B8 = 0;
}
