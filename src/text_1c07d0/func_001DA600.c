/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_001DA600_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[4];
} unk_func_001DA600_0;

typedef struct unk_func_001DA600_1 {
    s32 unk_00;
    s32 unk_04;
} unk_func_001DA600_1;

void func_0010CC80();
char *func_0011DB00(char *, char *);
s8 func_0011F0D0(s8);
char *func_001DA090(char *);
s32 func_001DAB50(unk_func_001DA600_1 *, char *);
void func_001E6190(char *, char *);
char *strcpy(char *, const char *);
extern char D_0034C288[];
extern char D_0034C290[];
extern unk_func_001DA600_0 D_005ECF50[];

s32 func_001DA600(char *arg0) {
    char buf[0x400];
    char tmp[0x400];
    unk_func_001DA600_1 info;
    s32 i;
    unk_func_001DA600_0 *entry;
    s32 j;
    char *p;
    s32 ret;

    for (i = 0; i < 0x14 && D_005ECF50[i].unk_00 != 0; i++) {
    }
    if (i == 0x14) {
        return -1;
    }
    entry = &D_005ECF50[i];
    func_0010CC80(0);
    for (j = 0; arg0[j] != 0; j++) {
        buf[j] = func_0011F0D0(arg0[j]);
        if (buf[j] == '/') {
            buf[j] = '\\';
        }
    }
    buf[j] = 0;
    strcpy(buf, func_001DA090(buf));
    if (func_0011DB00(buf, D_0034C288) != 0) {
        p = func_0011DB00(buf, D_0034C288) + 1;
    } else {
        p = buf;
    }
    if (*p != '\\') {
        strcpy(tmp, p);
        *p = '\\';
        strcpy(p + 1, tmp);
    }
    if (func_0011DB00(p, D_0034C290) == 0) {
        func_001E6190(p, D_0034C290);
    }
    func_0010CC80(0);
    ret = func_001DAB50(&info, p);
    if (ret != 1) {
        j = 0;
        do {
            func_0010CC80(0);
            ret = func_001DAB50(&info, p);
            j++;
        } while (ret != 1 && j < 0x32);
        if (ret == 0) {
            return -1;
        }
    }
    entry->unk_00 = info.unk_00;
    entry->unk_04 = info.unk_04;
    entry->unk_08 = 0;
    return i;
}
