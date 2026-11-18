#include "common.h"

typedef struct unk_func_0018A260_0 {
    char unk_00[0x18];
} unk_func_0018A260_0;

typedef struct unk_func_0018A260_1 {
    u32 unk_00;
    unk_func_0018A260_0 unk_04[1];
} unk_func_0018A260_1;

s32 func_0011DB00(char *, char *);
s8 func_0011F0D0(s8);
void func_0018A330(void);
char *strcpy(char *, const char *);
extern s32 D_0035FDC4;
extern unk_func_0018A260_1 D_00402CA0;
extern char D_00404E40[];

void func_0018A260(char *arg0) {
    char buf[16];
    u32 i;

    i = 0;
    func_0018A330();
    while (arg0[i] != 0) {
        buf[i] = func_0011F0D0(arg0[i]);
        i++;
    }
    buf[i] = 0;
    for (i = 0; i < D_00402CA0.unk_00 && func_0011DB00(D_00402CA0.unk_04[i].unk_00, buf) == 0; i++) {
    }
    D_0035FDC4 = i;
    if (i == D_00402CA0.unk_00) {
        D_0035FDC4 = -1;
    }
    strcpy(D_00404E40, buf);
}
