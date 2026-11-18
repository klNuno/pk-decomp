/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_001A1F70_0;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[8];
    unk_func_001A1F70_0 *unk_10;
} unk_func_001A1F70_1;

unk_func_001A1F70_1 *HIE_fn_hGetSuperObjectObject();
void func_0012C4B0(void);
void func_0012D980();
s32 func_0012DCA0();
s32 func_00155EE0();
s32 func_001971C0();
s32 func_001971E0();
s32 func_001979C0();
s32 func_00197CC0();
s32 func_0019ABC0();
u8 func_0019ABE0();
void func_001A1070();
void func_001A1760();
void func_001A1AA0();
s32 func_001A1F50();
s32 func_001AEC70();
s32 func_001B4C70();
extern s32 D_005AB7F8[];
extern u8 D_005ACAD0[];

void func_001A1F70(s32 arg0)
{
    s32 p, a, b, next, other, c, i, d;
    unk_func_001A1F70_1 *obj;
    volatile s32 spB8, spBC;

    c = 0;
    spB8 = 0;
    d = func_001AEC70(0);
    if (d) {
        c = func_001B4C70(HIE_fn_hGetSuperObjectObject(d)->unk_10->unk_04);
        spB8 = func_00155EE0(func_001979C0(c));
    }
    func_0012D980(arg0);
    for (i = 0, p = func_001971E0(arg0), spBC = next = func_0012DCA0(p);
         p; i++, p = next, other = next = func_0012DCA0(p), (void)other) {
        if (func_001971C0(p) == 2) {
            a = HIE_fn_hGetSuperObjectObject(p)->unk_04;
            obj = HIE_fn_hGetSuperObjectObject(p);
            if (a && func_0019ABE0(obj->unk_04) == 1 &&
                (!D_005ACAD0[0] || !(func_0019ABC0(a) ^ 0x100000))) {
                if (!(func_00197CC0(a) & 0xFF)) {
                    break;
                }
                if (D_005AB7F8[0] != func_001A1F50(obj->unk_04)) {
                    if (p == c) {
                        func_001A1AA0(a, 0);
                    } else {
                        b = func_0019ABC0(a);
                        if (b & 0x4C0000) {
                            func_001A1760(p);
                        }
                    }
                    func_0012D980(p);
                    func_001A1070(p);
                    func_0012C4B0();
                }
            }
        }
    }
    func_0012C4B0();
}
