/* profile: opt */
#include "common.h"

extern "C" {
extern s8 D_00360630;
extern u8 D_0035BCC0[];
extern u8 D_0035BCD0[];
extern u8 D_0035BCD8[];
extern u8 D_007BEC50[];
extern u8 D_007BEC40[];

void func_002CDB60(void *, void *, void *);
void func_002F2410(void *, void *, void *);
void func_002F15F0(void *, s32, void *, s32);
void c4sdk_malloc(void *, s32);
void func_002EBAC0();
void __register_global_object(void *, void *, void *);
}

namespace usnd {
class CEventResType {
public:
    static u8 *fs_roGetInst();
};

u8 *CEventResType::fs_roGetInst() {
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    u8 *volatile sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;

    if (D_00360630 == 0) {
        sp20 = D_007BEC50;
        func_002CDB60(&sp1C, D_0035BCC0, &sp24);
        func_002CDB60(&sp18, D_0035BCD0, &sp28);
        func_002F2410(sp20, &sp1C, &sp18);
        c4sdk_malloc(&sp18, 0);
        c4sdk_malloc(&sp1C, 0);
        func_002CDB60(&sp14, D_0035BCD8, &sp2C);
        func_002F15F0(sp20 + 0x10, 0, &sp14, 0);
        c4sdk_malloc(&sp14, 0);
        __register_global_object(sp20, (void *)func_002EBAC0, D_007BEC40);
        D_00360630 = 1;
    }
    return D_007BEC50;
}
}
