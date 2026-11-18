#include "common.h"

void func_0030B940();
s32 strcmp();
extern u8 D_007CB700[];
extern s32 D_00360838;

s32 func_0030BF60(s32 *arg0, s32 *arg1, char *arg2) {
    char sp70[16];
    s32 i;
    s32 j;
    s32 end;
    s32 k;
    s32 off;
    s64 size;

    for (i = 0; i < *arg1; i++) {
        u32 temp = (u32)D_007CB700;
        const s32 temp1 = 1;
        off = 0;
        func_0030B940(*arg0 + i, temp1, (u8 *)temp, &D_00360838);
        do {
            end = off + 0x20 + D_007CB700[off + 0x20];
            k = 0;
            for (j = off + 0x21; j <= end; j++) {
                sp70[k++] = D_007CB700[j];
            }
            sp70[k] = 0;
            if (strcmp(sp70, arg2) == 0) {
                size = D_007CB700[off + 10] + (D_007CB700[off + 11] << 8) + (D_007CB700[off + 12] << 16) + (D_007CB700[off + 13] << 24);
                *arg0 = D_007CB700[off + 2] + (D_007CB700[off + 3] << 8) + (D_007CB700[off + 4] << 16) + (D_007CB700[off + 5] << 24);
                *arg1 = ((u64)(size + 0xFFFFFFFFFFFFFFFFUL) >> 11) + 1;
                return size;
            }
            off += D_007CB700[off];
        } while (off != 0 && D_007CB700[off] != 0);
    }
    return 0;
}
