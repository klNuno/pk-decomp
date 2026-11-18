#include "common.h"

typedef struct unk_func_00136CF0_0 {
    u32 unk_00;
    u32 unk_04;
    u8 pad_08[0x8];
} unk_func_00136CF0_0;

extern u8 D_003600EC;
extern u8 D_00367110[];
extern unk_func_00136CF0_0 *D_00367210[];

void func_00136CF0(u32 arg0, u16 *arg1, u32 *arg2) {
    u8 i;
    u8 j;
    unk_func_00136CF0_0 *p;

    *arg1 = 0xFFFF;
    for (i = 0; i < D_003600EC && *arg1 == 0xFFFF; i++) {
        p = D_00367210[i];
        if (p != NULL) {
            for (j = 0; j < D_00367110[i] && *arg1 == 0xFFFF; j++, p++) {
                if (p != NULL && p->unk_00 != -1 && arg0 >= p->unk_00 && arg0 <= p->unk_04) {
                    *arg1 = (i << 8) | j;
                    *arg2 = p->unk_00;
                }
            }
        }
    }
}
