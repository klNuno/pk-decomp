/* profile: opt_300 */
#include "common.h"

class unk_func_002F0030_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(f32, f32, f32);
};

typedef struct unk_func_002F0030_1 {
    u8 pad_00[0x18];
    struct unk_func_002F0030_1 *unk_18;
} unk_func_002F0030_1;

extern "C" {
void func_002EBBA0(void *, f32);
void func_002EC510(...);
void func_002EF9A0(...);
void func_002F0030(unk_func_002F0030_0 *arg0, s32 arg1, f32 *arg2);
}

void func_002F0030(unk_func_002F0030_0 *arg0, s32 arg1, f32 *arg2) {
    unk_func_002F0030_1 *p;

    switch (arg1) {
    case 1:
    case 2:
    case 3:
        for (p = *(unk_func_002F0030_1 **)((u8 *)arg0 + 0xD4); p != 0; p = p->unk_18) {
            func_002EF9A0(p, arg1, arg2);
        }
        break;
    case 6:
        func_002EBBA0((u8 *)arg0 + 0x88, arg2[0]);
        break;
    case 7:
        arg2[0] = *(f32 *)((u8 *)arg0 + 0xA0);
        break;
    case 5:
        for (p = *(unk_func_002F0030_1 **)((u8 *)arg0 + 0xD4); p != 0; p = p->unk_18) {
            func_002EF9A0(p, arg1, arg2);
        }
        break;
    case 0x18:
        arg0->unk_vf10(arg2[0], arg2[1], arg2[2]);
        break;
    case 0x1A:
    case 0x1C:
        for (p = *(unk_func_002F0030_1 **)((u8 *)arg0 + 0xD4); p != 0; p = p->unk_18) {
            func_002EF9A0(p, arg1, arg2);
        }
        break;
    case 0x44C:
        *(f32 *)((u8 *)arg0 + 0x60) = arg2[0];
        *(f32 *)((u8 *)arg0 + 0x64) = arg2[1];
        *(f32 *)((u8 *)arg0 + 0x68) = arg2[2];
        break;
    case 0x44D:
        func_002EC510((u8 *)arg0 + 0xAC);
        break;
    default:
        for (p = *(unk_func_002F0030_1 **)((u8 *)arg0 + 0xD4); p != 0; p = p->unk_18) {
            func_002EF9A0(p, arg1, arg2);
        }
        break;
    }
}
