/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001A03D0_0 {
    u8 pad_00[0x70];
} unk_func_001A03D0_0;

typedef struct unk_func_001A03D0_1 {
    u8 pad_00[0x1E];
} unk_func_001A03D0_1;

typedef struct unk_func_001A03D0_2 {
    u8 pad_00[0x106];
    s16 unk_106;
} unk_func_001A03D0_2;

extern char *D_00333A30[];
extern char D_0034A090[];
extern char D_0034A0A0[];
extern char D_0034A0C0[];
extern u8 D_0035F528;
extern u8 D_0035F8F0;
extern s64 D_0035F900;
extern s8 D_0035FF54;
extern u8 D_0035FFB0;
extern u8 D_0035FFBC;
extern u8 D_005AB790[];
extern s32 D_005AB7F0[];
extern s16 D_005AB894[];

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void func_0011CBB0(char *, char *, ...);
s32 func_0012C370(void);
void func_0012F5C0(void);
void func_00164F50(char *, s32, s32);
s32 func_00169620(s16, s16);
void func_00170010(void *);
void func_001A0710(void *, s32);
void func_001AF4C0(void);
void func_001D2560(u8);
void func_00265210(void *);
void func_00265560(void *);

#define AT_110(i) ((u8 *)&((unk_func_001A03D0_0 *)D_005AB790)[(u8)(i)] + 0x110)
#define AT_707(i) ((char *)&((unk_func_001A03D0_1 *)D_005AB790)[(s8)(i)] + 0x707)

void func_001A03D0(u8 arg0)
{
    char temp[0x70];

    if (D_0035FFB0) {
        func_001A0710(AT_110(arg0), D_005AB7F0[0]);
    }
    func_00170010(AT_110(arg0));
    if (func_00169620(D_005AB894[0], ((unk_func_001A03D0_2 *)&((s16 *)D_005AB790)[(u8)arg0])->unk_106) == 0) {
        Erm_fn_ClearLastError(0, D_0034A090, 0x25F);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x2B, -1, 0xFF, 0xFF, 0, D_0034A090, 0x25F);
    }
    D_0035F900 = 1;
    if (func_0012C370() == 0) {
        if ((u8)arg0 == 0) {
            func_00265560(AT_110(arg0));
        } else {
            func_00265210(AT_110(arg0));
        }
    }
    D_0035F900 = 0;
    func_00170010(AT_110(arg0));
    if (func_0012C370() == 0) {
        func_001D2560(arg0);
    }
    func_001AF4C0();
    if ((s8)D_0035FF54 > -1) {
        if ((s8)*AT_707(D_0035FF54) == 0) {
            func_0011CBB0(temp, D_0034A0A0, (s8)D_0035FF54);
        } else {
            func_0011CBB0(temp, D_0034A0C0, AT_707(D_0035FF54), (s8)D_0035FF54);
        }
        func_00164F50(temp, 0, 0);
    }
    if (D_0035FFBC) {
        func_00164F50(D_00333A30[(u8)D_0035FFBC - 1], 0x230, 0xA);
    }
    if (D_0035F8F0) {
        func_0012F5C0();
    }
}
