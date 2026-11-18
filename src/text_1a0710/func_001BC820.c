/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BC820_0 {
    f32 x;
    f32 y;
    f32 z;
} unk_func_001BC820_0;

typedef struct unk_func_001BC820_1 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_001BC820_1;

s32 fn_h_StandardGameGetSuperObject(s32);
void func_00155EC0(s32, unk_func_001BC820_0 *);
s32 func_001979C0(s32);
unk_func_001BC820_1 *func_001BC790(s32);

s32 func_001BC820(s32 arg0, unk_func_001BC820_0 *arg1) {
    unk_func_001BC820_0 v;
    s32 ret = 0;
    s32 obj;
    unk_func_001BC820_1 *p;

    if (arg1 != NULL) {
        p = func_001BC790(arg0);
        if (p != NULL) {
            obj = fn_h_StandardGameGetSuperObject(p->unk_04);
            if (obj != 0) {
                func_00155EC0(func_001979C0(obj), &v);
                arg1->x = v.x;
                arg1->y = v.y;
                arg1->z = v.z;
                ret = 1;
            }
        }
    }
    return ret;
}
