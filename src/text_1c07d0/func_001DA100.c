/* profile: opt_300 */
#include "common.h"

char *func_001E6250(char *, s32);
void strcpy(char *, char *);
s32 func_0011D3F8(char *);
void func_0011F058(char *);
s32 func_0011DB00(char *, char *);
void func_001E6190(char *, char *);
char func_0011F0B0(char);
extern char D_0034C278[];
extern char D_0034C280[];
extern char D_005ECD50[];

char *func_001DA100(char *arg0) {
    char *p;
    char *dst;
    char *src;

    if ((src = func_001E6250(arg0, ':')) != NULL) {
        src++;
    } else {
        src = arg0;
    }
    strcpy(D_005ECD50, D_0034C278);
    dst = D_005ECD50 + func_0011D3F8(D_005ECD50);
    if (*src != '\\' && *src != '/') {
        *dst++ = '\\';
    }
    do {
        if (*src == '/') {
            *dst = '\\';
            if (dst > D_005ECD50 && dst[-1] == '\\') {
                dst--;
            }
        } else if (*src == -23 || *src == -24) {
            *dst = 'e';
        } else if (*src == ' ') {
            *dst = '_';
        } else {
            *dst = func_0011F0B0(*src);
        }
        dst++;
    } while (*src++ != 0);
    p = func_001E6250(D_005ECD50, ':');
    func_0011F058(p);
    if (func_0011DB00(p, D_0034C280) == 0) {
        func_001E6190(p, D_0034C280);
    }
    return D_005ECD50;
}
