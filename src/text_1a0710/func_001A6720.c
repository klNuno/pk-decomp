/* profile: o0_301 */
#include "common.h"

void func_0012E330(void);
void func_00134C30(void);
void func_0015E030(void);
s32 func_001619C0(void);
void func_001766F0(void);
void func_00196EB0(s32);
void func_00199840(void);
void func_001998B0(void);
void func_0019F9F0(s32);
void func_001A57C0(void);
void func_001AAEA0(void);
void func_001B3490(void);
void func_001BD720(void);
void func_00274340(void);
void func_00313910(void);
extern s32 D_0035FF74;
extern s32 D_0035FF84;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0x10];
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
} unk_func_001A6720_0;

extern unk_func_001A6720_0 D_005ABD88;

void func_001A6720(void) {
    func_00313910();
    func_001766F0();
    func_0015E030();
    func_001A57C0();
    func_0012E330();
    func_001998B0();
    func_00199840();
    func_00274340();
    func_0019F9F0(func_001619C0());
    func_00196EB0(D_0035FF74);
    func_00134C30();
    D_0035FF84 = 0;
    func_001BD720();
    func_001AAEA0();
    func_001B3490();
    D_005ABD88.unk_00 = 0;
    D_005ABD88.unk_04 = 0;
    D_005ABD88.unk_08 = 0;
    D_005ABD88.unk_28 = 0;
    D_005ABD88.unk_2C = 0;
    D_005ABD88.unk_30 = 0;
    D_005ABD88.unk_1C = 0;
    D_005ABD88.unk_20 = 0;
    D_005ABD88.unk_24 = 0;
}
