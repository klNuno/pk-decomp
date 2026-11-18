/* profile: o0_301 */
#include "common.h"

void func_002D0370();
void func_002D06B0();
void func_0027B250();
char *strcpy(char *, const char *);
void func_00119548();
extern char D_0034EC30[];
extern char D_005AB791[];
extern char D_005AB7AF[];
extern s32 D_00360318;

void func_002741E0(void) {
    func_002D0370(D_0034EC30);
    func_002D06B0();
    func_0027B250(0);
    strcpy(D_005AB791, D_005AB7AF);
    if (D_00360318 != 0) {
        func_00119548(D_00360318);
    }
    D_00360318 = 0;
}
