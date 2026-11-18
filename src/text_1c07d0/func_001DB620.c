#include "common.h"

typedef struct {
    u16 unk_00;
    u8 unk_02;
    u8 pad_03[5];
    s32 unk_08;
    u8 pad_0C[8];
} unk_func_001DB620_0;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_001DB620_1;

void func_0011CBB0(char *, char *, ...);
u32 func_0011D3F8(char *);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void func_001DB8C0(char *, char *);
extern unk_func_001DB620_0 D_005FF200[];
extern unk_func_001DB620_1 *D_005FF640[];
extern char D_0034C840[];
extern char D_0034C8C8[];
extern char D_0034C6C0[];
extern u8 D_0035F57C;

u16 func_001DB620(u8 arg0, s32 arg1) {
    char buf[0x200];
    u8 i;

    for (i = 0; i < 3 && D_005FF200[i].unk_00 != 0 && arg1 != D_005FF200[i].unk_08; i++) {
    }
    if (i >= 3) {
        return 0;
    }
    if (arg1 == D_005FF200[i].unk_08 && D_005FF200[i].unk_00 != 0 && arg0 != D_005FF200[i].unk_02) {
        func_0011CBB0(buf, D_0034C840, D_005FF640[arg0]->unk_04);
        if (func_0011D3F8(buf) > 0x1FF) {
            Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 2, -1, 0xFF, 0xFF, 0, D_0034C8C8, 0xB7);
        }
        func_001DB8C0(buf, D_0034C6C0);
    }
    return D_005FF200[i].unk_00;
}
