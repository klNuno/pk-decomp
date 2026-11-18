/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0027EE40_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0027EE40_0;

void func_0011CBB0(char *, char *, s32);
s32 func_0027BC20(char *);
s32 func_0027ECD0(s32, s32, char *, s32, char *);
char *strcpy(char *, char *);
extern unk_func_0027EE40_0 D_003313F0[];
extern char D_0034F4C0[];
extern char D_0034F4C8[];
extern s32 D_003603B8;
extern s32 D_003603BC;
extern char D_007AEBC0[][0x21];

s32 func_0027EE40(s32 arg0, s32 *arg1) {
    s32 ret;
    char buf[0x30];
    char path[0x30];

    if (D_003603B8 != 1) {
        return 0;
    }
    D_003603BC = 0;
    *arg1 = -1;
    func_0011CBB0(path, D_0034F4C0, func_0027BC20(D_0034F4C8));
    if ((ret = func_0027ECD0(D_003313F0[arg0].unk_00, D_003313F0[arg0].unk_04, path, 0, buf)) == 0) {
        return 0;
    }
    if (buf[0] == 0) {
        return 0;
    }
    strcpy(D_007AEBC0[D_003603BC++], buf);
    while (D_003603BC < 0xA0) {
        ret = func_0027ECD0(D_003313F0[arg0].unk_00, D_003313F0[arg0].unk_04, path, 1, buf);
        switch (ret) {
        case 0:
            *arg1 = D_003603BC;
            return 1;
        case 1:
            strcpy(D_007AEBC0[D_003603BC++], buf);
            break;
        }
    }
    return ret;
}
