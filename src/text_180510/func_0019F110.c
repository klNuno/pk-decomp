/* profile: o0_301 */
#include "common.h"

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void fn_vValidateAllOption(void);
void func_0011CBB0(char *, char *, ...);
void func_00164BA0(s32);
void func_0019AD50(u8);
void func_0019B130(void);
s32 func_0019C120(void);
void func_0019D570(void);
void func_0019D9C0(void);
void func_0019FE00(void);
void func_001A2480(void);
void func_001A5420(void);
void func_001A5510(void);
void func_001A5CA0(void);
void func_001A63E0(void);
void func_001AB410(void);
void func_001E6120(char *);
extern char D_00349FD8[];
extern char D_00349FE8[];
extern char D_00349FF8[];
extern void (*D_0035F51C)(void);
extern void (*D_0035F520)(void);
extern u8 D_0035F528;
extern u8 D_0035FF8C;
extern u8 D_005AB790[];
extern u8 D_005ACAD0[];
extern u8 D_005ACAD3[];

void func_0019F110(void) {
    char sp20[0x100];

    D_005ACAD3[0] = 0xA;
    switch (D_005AB790[0]) {
    case 0xA:
        D_005AB790[0] = 1;
        /* fall through */
    case 1:
        func_001A5CA0();
        if (func_0019C120()) {
            func_0011CBB0(sp20, D_00349FD8, D_00349FE8);
            func_001E6120(sp20);
        } else {
            func_001E6120(D_00349FE8);
        }
        func_0019B130();
        func_0019AD50(3);
        /* fall through */
    case 3:
        func_001AB410();
        func_001A5420();
        D_0035F51C = func_001A2480;
        D_0035F520 = func_0019FE00;
        func_0019AD50(9);
        fn_vValidateAllOption();
        func_0019B130();
        func_0019D570();
        if (D_0035FF8C) {
            func_0019D9C0();
            D_005ACAD0[0] = 1;
        }
        func_00164BA0(4);
        break;
    case 5:
        D_0035F51C = func_001A2480;
        D_0035F520 = func_0019FE00;
        func_001A63E0();
        func_0019AD50(9);
        fn_vValidateAllOption();
        func_00164BA0(4);
        break;
    case 7:
        func_001A5510();
        fn_vValidateAllOption();
        func_0019AD50(9);
        func_00164BA0(4);
        break;
    default:
        Erm_fn_ClearLastError(0, D_00349FF8, 0x27F);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x11, -1, 0xFF, 0xFF, 0, D_00349FF8, 0x27F);
        break;
    }
}
