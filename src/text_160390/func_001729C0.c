/* profile: opt_300 */
#include "common.h"

void func_00172AB0();
void *memset(void *, s32, u32);
char *strcpy(char *, const char *);
extern u8 D_00331800[];
extern u8 D_003323C0[][30];
extern u8 D_0035FC48;
extern char D_00363290[];
extern char D_005AB791[];

void func_001729C0(void) {
    u8 buf[0xFF];
    u32 i;

    i = 0;
    if (D_00363290[0] != 0) {
        strcpy(D_005AB791, D_00363290);
        D_00363290[0] = 0;
        return;
    }
    if (D_0035FC48 == 0) {
        func_00172AB0();
    }
    while (i < 100 && D_003323C0[i][0] != 0) {
        i++;
    }
    i = 0;
    memset(buf, 0, 0xFF);
    while (D_00331800[i] != ':') {
        buf[i] = D_00331800[i];
        i++;
    }
    strcpy(D_005AB791, (char *)&D_00331800[i + 1]);
}
