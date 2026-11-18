/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_Q_0;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x18];
    s32 unk_1C;
} unk_Q_1;

typedef struct {
    u8 pad_00[0x53];
    u8 unk_53;
} unk_Q_2;

typedef struct {
    u8 pad_00[0x50];
    unk_Q_2 *unk_50;
} unk_Q_3;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_Q_4;

typedef struct {
    s32 unk_00[4];
} unk_Q_5;

s32 fn_h_StandardGameGetSuperObject(s32);
s32 HIE_fn_hGetSuperObjectFather(s32);
unk_Q_4 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00197CC0(s32);
void func_00197B50(s32, s32);
void func_001979E0(s32, s32);
s32 func_001979C0(s32);
s32 func_001979A0(s32);
void func_00155EC0();
void func_001559E0();
void func_001BE120();
void func_00197950(s32, s32);
void func_00197900(s32, s32);
void func_001978D0(s32, s32);
void func_001978A0(s32, s32);
unk_Q_1 *func_00197880(s32);
unk_Q_3 *func_00197860(s32);
void func_001D4B50(s32, s32);
extern s32 D_0035FF68;
extern s32 D_0035FF70;
extern s32 D_005AB800[];

void func_001975E0(unk_Q_0 *arg0) {
    unk_Q_5 sp40;
    s32 temp_s1;
    unk_Q_2 *temp_s0;

    s32 temp_s2;

    temp_s2 = HIE_fn_hGetSuperObjectFather(fn_h_StandardGameGetSuperObject(arg0->unk_04));
    if (temp_s2 == D_0035FF68) {
        if ((u8)func_00197CC0(HIE_fn_hGetSuperObjectObject(fn_h_StandardGameGetSuperObject(arg0->unk_04))->unk_04)) {
            func_00197B50(D_0035FF70, fn_h_StandardGameGetSuperObject(arg0->unk_04));
        } else {
            func_001979E0(D_0035FF70, fn_h_StandardGameGetSuperObject(arg0->unk_04));
        }
    }
    temp_s1 = func_001979C0(HIE_fn_hGetSuperObjectFather(fn_h_StandardGameGetSuperObject(arg0->unk_04)));
    func_00155EC0(func_001979A0(fn_h_StandardGameGetSuperObject(arg0->unk_04)), &sp40);
    func_001559E0(&sp40, temp_s1, &sp40);
    func_001BE120(fn_h_StandardGameGetSuperObject(arg0->unk_04), &sp40);
    func_00197950(arg0->unk_04, 1);
    func_00197900(arg0->unk_04, 1);
    func_001978D0(arg0->unk_00, D_005AB800[0]);
    func_001978A0(arg0->unk_00, D_005AB800[0]);
    if (func_00197880(arg0->unk_00)->unk_00 == 0) {
        if (func_00197860(arg0->unk_00) != NULL) {
            temp_s0 = func_00197860(arg0->unk_00)->unk_50;
            if (temp_s0 != NULL) {
                func_00197880(arg0->unk_00)->unk_1C = 0;
                func_001D4B50(arg0->unk_00, (u8)temp_s0->unk_53);
            }
        }
        func_00197880(arg0->unk_00)->unk_1C = 0;
    }
}
