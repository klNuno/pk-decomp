#include "common.h"

void func_0011CBB0();
u8 func_0011F0D0(s8);
void func_001DB950(char *);
void memset(void *, s32, s32);
void strcpy(char *, u8 *);
extern u8 D_00331800[][30];
extern char D_003323C0[][30];
extern char D_00349440[];
extern s8 D_0035FC48;

void func_00172AB0(void) {
    char buf[0x800];
    char name[0x100];
    s32 cnt;
    s32 j;
    s32 n;
    s32 i;

    cnt = 0;
    D_0035FC48 = 1;
    for (n = 0; n < 100 && D_00331800[n][0] != 0; n++) {
    }
    for (i = 0; i < n; i++) {
        for (j = 0; D_00331800[i][j] != 0; j++) {
            D_00331800[i][j] = func_0011F0D0(D_00331800[i][j]);
        }
        memset(name, 0, 0xFF);
        for (j = 0; D_00331800[i][j] != ':'; j++) {
            name[j] = D_00331800[i][j];
        }
        func_001DB950(name);
        func_0011CBB0(buf, D_00349440, &D_00331800[i][j + 1], &D_00331800[i][j + 1]);
        strcpy(D_003323C0[cnt++], &D_00331800[i][j + 1]);
    }
    D_003323C0[cnt][0] = 0;
}
