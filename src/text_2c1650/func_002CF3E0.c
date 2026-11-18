#include "common.h"

void func_00164B30(s32);
void func_00164B40(s32);
void func_002CF4C0(void *);
void func_002CF790(void *);
void func_002D49B0(void *);
void func_002D51C0(void *);
s32 func_002D6290(void);
void func_002D6500(s32);
s32 func_002DA550(void);
void func_002DA740(s32);
void func_0030EBE0(void);
void func_002CF550();
void func_002D5450();
void __register_global_object(void *, void *, void *);
extern s8 D_0036051C;
extern s8 D_00360520;
extern u8 D_007BDF50[];
extern u8 D_007BDF60[];
extern u8 D_007BDF70[];
extern u8 D_007BDF80[];

void func_002CF3E0(void) {
    func_00164B40(0);
    if (D_0036051C == 0) {
        func_002CF790(D_007BDF60);
        __register_global_object(D_007BDF60, func_002CF550, D_007BDF50);
        D_0036051C = 1;
    }
    func_002D49B0(D_007BDF60);
    func_002DA740(func_002DA550());
    func_002D6500(func_002D6290());
    if (D_00360520 == 0) {
        func_002CF4C0(D_007BDF80);
        __register_global_object(D_007BDF80, func_002D5450, D_007BDF70);
        D_00360520 = 1;
    }
    func_002D51C0(D_007BDF80);
    func_0030EBE0();
    func_00164B30(0);
}
