/* profile: o0_301 */
#include "common.h"

void func_00117BC0(s32);
s32 func_001181E8(char *, char *);
void func_00118250(s32, s32, s32, s32);
void func_0011CBB0(char *, char *, s32, s32);
void func_001D66D0(s32, char *);
s32 func_001DB930();
extern char D_0034C0D8[];
extern char D_0034C0E8[];
extern char D_0034C0F0[];

s32 func_001D90D0(s32 arg0, s32 arg1) {
    s32 fp;
    char buf[256];

    func_0011CBB0(buf, D_0034C0D8, func_001DB930(), arg0);
    fp = func_001181E8(buf, D_0034C0E8);
    if (fp != 0) {
        func_00118250(arg1, 0x14, 1, fp);
        func_00117BC0(fp);
        return 1;
    }
    func_001D66D0(0, D_0034C0F0);
    return 0;
}
