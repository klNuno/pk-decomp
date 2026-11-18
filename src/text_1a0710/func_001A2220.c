/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001A2220_0 {
    u8 pad_00[8];
    struct unk_func_001A2220_0 *unk_08;
    u8 pad_0C[8];
    struct unk_func_001A2220_0 *unk_14;
} unk_func_001A2220_0;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_001A2220_1;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[8];
    unk_func_001A2220_1 *unk_10;
} unk_func_001A2220_2;

unk_func_001A2220_2 *HIE_fn_hGetSuperObjectObject(void *);
void func_0012C4B0();
void func_0012D980(void *);
s32 func_00155EE0(s32);
s32 func_001971C0(void *);
s32 func_001979C0(s32);
u8 func_00197E40(s32);
s32 func_0019ABC0(s32);
void func_001A1070(void *);
void func_001A1760(void *);
s32 func_001A1F50(s32);
void *func_001AEC70(s32);
s32 func_001B4C70(s32);
extern s32 D_005AB7F8[];
extern u8 D_005ACAD0[];

void func_001A2220(unk_func_001A2220_0 *arg0, u8 arg1) {
    unk_func_001A2220_0 *n;
    unk_func_001A2220_0 *c;
    u8 flag;
    s32 i;
    unk_func_001A2220_2 *obj;
    s32 s5;
    void *s6;
    s32 s7;
    s32 fp;
    s32 b8;
    unk_func_001A2220_0 *first;

    flag = 0;
    func_0012D980(arg0);
    if (func_001971C0(arg0) == 2 && (!D_005ACAD0[0] || (func_0019ABC0(HIE_fn_hGetSuperObjectObject(arg0)->unk_04) & 0x100000))) {
        obj = HIE_fn_hGetSuperObjectObject(arg0);
        if (arg1) {
            flag = 1;
        }
        if (func_00197E40(obj->unk_04) == 1 && D_005AB7F8[0] != func_001A1F50(obj->unk_04)) {
            b8 = 0;
            s6 = func_001AEC70(0);
            if (s6 != NULL) {
                s7 = func_001B4C70(HIE_fn_hGetSuperObjectObject(s6)->unk_10->unk_04);
                b8 = func_00155EE0(func_001979C0(s7));
            }
            s5 = HIE_fn_hGetSuperObjectObject(arg0)->unk_04;
            if (s5 != 0) {
                fp = func_0019ABC0(s5);
                if (fp & 0x4C0000) {
                    func_001A1760(arg0);
                }
            }
            func_001A1070(arg0);
            flag = 1;
        }
        func_0012C4B0();
        func_0012D980(arg0);
    }
    for (i = 0, c = first = arg0->unk_08; c != NULL; i++, c = c->unk_14, n = c) {
        func_001A2220(c, flag);
        n = n;
    }
    func_0012C4B0();
}
