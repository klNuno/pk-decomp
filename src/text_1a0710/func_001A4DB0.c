/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} V;

typedef struct {
    u8 pad[0x54];
    V unk_54;
} T;

typedef struct {
    u8 pad[8];
    s32 unk_08;
} O;

O *HIE_fn_hGetSuperObjectObject(s32);
void func_00139980(T *, s32);
T *func_001B84B0(s32);
V *func_001C7570(s32, s16);
s32 func_001C7B00(s32, s16);

void func_001A4DB0(s32 arg0, s16 arg1) {
    T *t;
    V *v;
    s32 w;
    s32 obj;

    obj = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    if (obj != 0) {
        if ((t = func_001B84B0(obj)) != 0) {
            v = func_001C7570(arg0, arg1);
            w = func_001C7B00(arg0, arg1);
            if (v != 0) {
                ((s32 *)&t->unk_54)[0] = ((s32 *)v)[0];
                ((s32 *)&t->unk_54)[1] = ((s32 *)v)[1];
                ((s32 *)&t->unk_54)[2] = ((s32 *)v)[2];
            }
            if (w != 0) {
                func_00139980(t, w);
            }
        }
    }
}
