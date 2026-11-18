/* profile: o0_301 */
#include "common.h"

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void GAM_fn_vTreatExeParameters(void);
void func_001328E0(void);
void func_00133630(void);
void func_00133AC0(void);
void func_0015BDC0(void);
void func_00161950(s32);
void func_00161CE0(s32);
void func_00161D50(s32);
void func_00161DC0(void);
void func_00192890(void);
void func_0019AF60(void);
void func_0019BF30(void);
void func_001C0140(void);
void func_001D0640(void);
void func_001D6600(void);
void func_001DAF80(void);
u8 func_001DB790(char *, char *);
void func_001E79F0(void);
extern char D_00333630[];
extern char D_00333640[];
extern char D_0034B3C0[];
extern u8 D_0035F528;
extern u8 D_0035F57C;
extern s32 D_0035FF94;
extern s8 D_005AB790[];

void func_001A6280(void) {
    s32 temp;

    func_00161DC0();
    if (D_0035F528 == 0xFF) {
        D_0035F528 = func_001DB790(D_00333630, D_00333640);
    } else {
        Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 4, -1, 0xFF, 0xFF, 0, D_0034B3C0, 0x1E6);
    }
    func_001D0640();
    GAM_fn_vTreatExeParameters();
    D_005AB790[0] = 1;
    func_00192890();
    func_0015BDC0();
    func_00133630();
    func_001328E0();
    func_001DAF80();
    func_001C0140();
    func_001E79F0();
    func_001D6600();
    func_00133AC0();
    func_0019AF60();
    func_00161D50(0x61A80);
    func_00161CE0(0x1B7740);
    temp = 0xD662D0;
    func_00161950(temp);
    D_0035FF94 = 1;
    func_0019BF30();
}
