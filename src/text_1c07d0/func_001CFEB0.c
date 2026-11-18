/* profile: o0_301_p */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} unk_func_001CFEB0_0;

typedef struct {
    s32 unk_00;
    char unk_04[9];
    u8 unk_0D;
    u8 pad_0E[0xA];
} unk_func_001CFEB0_1;

s32 SVG_fn_bGetActiveVms(void);
void fn_vMakeSlotNameFromFileName(char *, char *);
s32 func_0011D3F8(char *);
s32 func_0011D738(char *, char *, s32);
void func_001CFC60(void);
void func_001CFCA0(void);
char *func_0027BC20(char *);
s32 func_0027EE40(s32, s32 *);
void func_0027F060(s32, char *);
void func_0027F340(s32, char *, unk_func_001CFEB0_0 *);
s32 strcmp(char *, char *);
char *strcpy(char *, char *);
extern char D_0034BD18[];
extern char D_0034BD30[];
extern s32 D_0034F480[];
extern unk_func_001CFEB0_1 D_005EC0E0[];
extern u32 D_005ECA40[];
extern unk_func_001CFEB0_0 D_005ECA70[] __attribute__((aligned(16)));

s32 func_001CFEB0(void) {
    s32 temp_s0;
    unk_func_001CFEB0_1 *var_s1;
    s32 var_s2;
    s32 temp_s3;
    char sp50[0x80];
    char spD0[0x80];
    unk_func_001CFEB0_0 sp150 __attribute__((aligned(16)));
    s32 sp16C;

    func_001CFCA0();
    temp_s3 = SVG_fn_bGetActiveVms();
    if (temp_s3 == -1) {
        return 0;
    }
    if (func_0027EE40(D_0034F480[temp_s3], &sp16C) != 1) {
        return 0;
    }
    var_s1 = D_005EC0E0;
    strcpy(spD0, func_0027BC20(D_0034BD18));
    for (var_s2 = 0; var_s2 < sp16C; var_s2++) {
        func_0027F060(var_s2, sp50);
        if (func_0011D738(sp50, spD0, func_0011D3F8(spD0)) == 0 &&
            strcmp(sp50, func_0027BC20(D_0034BD30)) != 0 && D_005ECA40[0] < 100) {
            sp150 = D_005ECA70[0];
            func_0027F340(D_0034F480[temp_s3], sp50, &sp150);
            temp_s0 = sp150.unk_00 - 0x7C6;
            temp_s0 = (temp_s0 << 4) | sp150.unk_04;
            temp_s0 = (temp_s0 << 5) | sp150.unk_08;
            temp_s0 = (temp_s0 << 5) | sp150.unk_0C;
            temp_s0 = (temp_s0 << 6) | sp150.unk_10;
            temp_s0 = (temp_s0 << 6) | sp150.unk_14;
            var_s1->unk_00 = temp_s0;
            fn_vMakeSlotNameFromFileName(var_s1->unk_04, sp50);
            var_s1->unk_0D = 0;
            D_005ECA40[0]++;
            var_s1++;
        }
    }
    func_001CFC60();
    return 1;
}
