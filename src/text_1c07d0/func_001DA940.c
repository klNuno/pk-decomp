#include "common.h"

void func_001DAD10(s64, u8 *);
s32 strcmp(char *, char *);
extern u8 D_003600E4;
extern u8 D_003600E5;
extern u8 D_003600E6;
extern u8 D_005FE000[];

s64 func_001DA940(s32 *arg0, s32 *arg1, char *arg2) {
    char buf[16];
    s32 i;
    s32 off;
    s32 j;
    s32 k;
    s32 end;
    u8 *rec;
    s64 r;

    for (i = 0; i < *arg1; i++) {
        k = *arg0 + i;
        off = 0;
        D_003600E4 = 0x14;
        D_003600E5 = 0;
        D_003600E6 = 0;
        func_001DAD10(k, D_005FE000);
        while ((rec = &D_005FE000[off])[0] != 0) {
            k = 0;
            end = off + 0x20 + rec[0x20];
            for (j = off + 0x21; j <= end; j++) {
                buf[k++] = D_005FE000[j];
            }
            buf[k] = 0;
            if (strcmp(buf, arg2) == 0) {
                r = D_005FE000[off + 0xA] + (D_005FE000[off + 0xB] << 8) + (D_005FE000[off + 0xC] << 16) + (D_005FE000[off + 0xD] << 24);
                *arg0 = D_005FE000[off + 2] + (D_005FE000[off + 3] << 8) + (D_005FE000[off + 4] << 16) + (D_005FE000[off + 5] << 24);
                *arg1 = (*arg1 + 0x7FF) / 0x800;
                return r;
            }
            off += rec[0];
        }
    }
    return 0;
}
