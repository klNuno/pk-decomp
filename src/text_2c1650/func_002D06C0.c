/* profile: opt_noprop */
#include "common.h"

typedef struct {
    u32 unk_00;
    u8 pad_04[8];
    char *unk_0C;
} unk_002D06C0_0;

typedef struct {
    u8 pad_00[0x2C];
    void *unk_2C;
    u8 pad_30[0x828];
} unk_002D06C0_1;

void c4sdk_malloc(void *, u32);
void func_0011CBB0(char *, char *, const char *, s32);
void func_0011CED8(char *, const char *);
char *func_0011DAB0(char *, s32);
char *func_001DA090(char *);
const char *func_001DB940(void);
unk_002D06C0_0 **func_002CD690(unk_002D06C0_0 **, unk_002D06C0_0 *const *, u32, u32);
void func_002CDB60(unk_002D06C0_0 **, char *, u32 *);
void func_002CE090(unk_002D06C0_0 **, s32, s32, s32, s32);
s32 func_002D0B60(unk_002D06C0_0 **, s8, u32);
void func_002D0BD0(unk_002D06C0_0 **, s32, s32, unk_002D06C0_0 **, s32, s32);
void func_002D0DA0(unk_002D06C0_0 **, u32 *);
s32 func_002D36D0(unk_002D06C0_1 *, unk_002D06C0_0 **);
void func_002D39A0(unk_002D06C0_1 *, const char *);
u8 func_002F5840(s32, unk_002D06C0_0 **);
void func_00309C60(unk_002D06C0_1 *, s32);
void func_00309E60(void);
void func_00309F30(char *, s32);
char *strcpy(char *, const char *);
extern char D_0035AE10[];
extern char D_0035AE20[];
extern char D_0035AE40[];
extern char D_0035AE60[];
extern s32 D_0036053C;
extern char D_007BDFD0[];
extern char D_007BE3D0[];

s32 func_002D06C0(s32 arg0) {
    unk_002D06C0_1 temp0;
    unk_002D06C0_0 *temp1;
    unk_002D06C0_0 *temp2;
    unk_002D06C0_0 *temp3;
    u32 temp4;
    u32 temp5;
    u32 temp6;
    s32 temp9;

    func_0011CBB0(D_007BDFD0, D_0035AE20, func_001DB940(), arg0);
    strcpy(D_007BDFD0, func_001DA090(D_007BDFD0));
    {
        s8 *temp7;
        s8 temp8;

        for (temp7 = (s8 *)D_007BDFD0; (temp8 = *temp7) != 0; ++temp7) {
            if (temp8 >= 'a' && temp8 <= 'z') {
                *temp7 -= 'a' - 'A';
            }
        }
    }
    func_0011CBB0(D_007BE3D0, D_0035AE40, func_001DB940(), arg0);
    strcpy(D_007BE3D0, func_001DA090(D_007BE3D0));
    {
        s8 *temp7;
        s8 temp8;

        for (temp7 = (s8 *)D_007BE3D0; (temp8 = *temp7) != 0; ++temp7) {
            if (temp8 >= 'a' && temp8 <= 'z') {
                *temp7 -= 'a' - 'A';
            }
        }
    }
    func_00309F30(D_007BE3D0, 0);
    func_002D39A0(&temp0, D_007BDFD0);
    func_0011DAB0(D_007BDFD0, '\\')[1] = 0;
    func_002CDB60(&temp1, D_0035AE10, &temp4);
    for (;;) {
        s32 temp11 = func_002D36D0(&temp0, &temp1);
        temp9 = 0;
        if (!temp11) {
            break;
        }
        if (temp1->unk_00 > 12) {
            s32 temp10;
            u32 temp12;

            func_002D0DA0(&temp2, &temp5);
            temp10 = func_002D0B60(&temp1, '.', 0);
            temp12 = -1;
            func_002CD690(&temp2, &temp1, 0, temp12);
            func_002CE090(&temp2, 8, -1, 0, 0);
            if (temp10 != 0) {
                func_002D0BD0(&temp1, 0, temp10, &temp2, 0, -1);
            }
            c4sdk_malloc(&temp2, 0);
        }
        func_0011CED8(D_007BDFD0, temp1->unk_0C);
        {
            s8 *temp7;
            s8 temp8;

            for (temp7 = (s8 *)D_007BDFD0; (temp8 = *temp7) != 0; ++temp7) {
                if (temp8 >= 'a' && temp8 <= 'z') {
                    *temp7 -= 'a' - 'A';
                }
            }
        }
        func_0011CED8(D_007BDFD0, D_0035AE60);
        func_002CDB60(&temp3, D_007BDFD0, &temp6);
        temp9 = func_002F5840(D_0036053C, &temp3);
        c4sdk_malloc(&temp3, 0);
        if (temp9) {
            func_0011DAB0(D_007BDFD0, '\\')[1] = 0;
        } else {
            temp9 = 0;
            break;
        }
    }
    c4sdk_malloc(&temp1, 0);
    if (&temp0.unk_2C != NULL) {
        c4sdk_malloc(&temp0.unk_2C, 0);
    }
    func_00309C60(&temp0, -1);
    func_00309E60();
    return temp9;
}
