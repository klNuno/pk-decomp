#include "common.h"

typedef struct unk_func_0018D3C0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0018D3C0_0;

f32 *func_00155EE0(s32);
void func_0018D6A0(unk_func_0018D3C0_0 *, unk_func_0018D3C0_0 *);
void func_0018D790(void *, void *, void *);
void *func_001A7D60(s32);
s32 func_001A7D80();
void *func_001AEC70(s32);
f32 func_001E60E0(f32);
extern s32 D_0035F838;
extern f32 D_0035FE08;
extern f32 D_0035FE0C;
extern f32 D_005050D0[];
extern f32 D_005050E0[];
extern u8 D_005AB8A0[];

void func_0018D3C0(u8 *arg0, s32 arg1) {
    unk_func_0018D3C0_0 sp40;
    unk_func_0018D3C0_0 sp50;
    f32 *a;
    f32 *b;
    s32 *p;
    s32 *q;
    f32 dx;
    f32 dy;

    if (arg0 == func_001A7D60(func_001A7D80())) {
        if (*(s32 *)(arg0 + 0x30) & 2) {
            D_0035FE08 = 200.0f;
            return;
        }
        p = *(s32 **)(**(u8 ***)(arg0 + 4) + 0xA4);
        if (p != NULL) {
            q = (s32 *)*p;
        } else {
            q = NULL;
        }
        if (q == NULL) {
            D_0035FE08 = 200.0f;
            return;
        }
        a = func_00155EE0(q[9]);
        func_0018D790(D_005AB8A0, a, D_005050D0);
        b = func_00155EE0(*(s32 *)((u8 *)func_001AEC70(0) + 0x24));
        sp40.unk_00 = a[0] - b[0];
        sp40.unk_04 = a[1] - b[1];
        sp40.unk_08 = a[2] - b[2];
        func_0018D6A0(&sp40, &sp40);
        sp40.unk_00 = 2.5f * sp40.unk_00 + a[0];
        sp40.unk_04 = 2.5f * sp40.unk_04 + a[1];
        sp40.unk_08 = 2.5f * sp40.unk_08 + a[2];
        func_0018D790(D_005AB8A0, &sp40, &sp50);
        dy = sp50.unk_04 - D_005050D0[1];
        dx = sp50.unk_00 - D_005050D0[0];
        D_0035FE08 = func_001E60E0(dx * dx + dy * dy);
        return;
    }
    if (arg1 & 0x400) {
        p = *(s32 **)(**(u8 ***)(arg0 + 4) + 0xA4);
        if (p != NULL) {
            q = (s32 *)*p;
        } else {
            q = NULL;
        }
        if (q != NULL) {
            a = func_00155EE0(q[9]);
            func_0018D790(D_005AB8A0, a, D_005050E0);
            b = func_00155EE0(*(s32 *)((u8 *)func_001AEC70(0) + 0x24));
            sp40.unk_00 = a[0] - b[0];
            sp40.unk_04 = a[1] - b[1];
            sp40.unk_08 = a[2] - b[2];
            func_0018D6A0(&sp40, &sp40);
            sp40.unk_00 = 4.5f * sp40.unk_00 + a[0];
            sp40.unk_04 = 4.5f * sp40.unk_04 + a[1];
            sp40.unk_08 = 4.5f * sp40.unk_08 + a[2];
            func_0018D790(D_005AB8A0, &sp40, &sp50);
            dy = sp50.unk_04 - D_005050E0[1];
            dx = sp50.unk_00 - D_005050E0[0];
            D_0035FE0C = func_001E60E0(dx * dx + dy * dy);
            D_0035F838 = 1;
        }
    } else {
        D_0035F838 = 0;
    }
}
