#include "common.h"

struct unk_func_002E7A30_0;
typedef void (*unk_func_002E7A30_fn1)(unk_func_002E7A30_0 *);
typedef unk_func_002E7A30_fn1 (*unk_func_002E7A30_fn0)(u16);

typedef struct unk_func_002E7A30_0 {
    unk_func_002E7A30_fn0 *unk_00;
    u8 pad_04[0xC];
    u32 unk_10;
    u8 pad_14[0x10];
    u8 *unk_24;
    u8 pad_28[0x4];
    u32 unk_2C;
    u8 pad_30[0x30];
} unk_func_002E7A30_0;

class unk_func_002E7A30_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(unk_func_002E7A30_0 *, s32);
};

extern "C" {
void *func_002DE810(s32);
void func_002DF6D0(...);
s32 func_002DFA00(...);
s32 func_002DFB00(...);
void func_002DFBF0(...);
void func_002DFC90(...);
unk_func_002E7A30_1 *func_002E0780(void);
s32 func_002E5E40(s32);
s32 func_002F2390(void *);
void func_00304110(...);

void func_002E7A30(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
}

void func_002E7A30(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk_func_002E7A30_0 obj;
    s32 temp;
    u32 rem;

    func_002DFC90(&obj, arg0, arg0 + 0x38);
    temp = func_002F2390(arg0);
    if (func_002DE810(arg1) != arg0) {
        func_002DFBF0(&obj, -1);
        return;
    }
    if (func_002DFB00(&obj, temp + 0x1C, func_002E5E40(temp), arg0 + 0x24, arg2) != 0) {
        func_002DF6D0(&obj, *(s32 *)(arg0 + 0x40));
        if (func_002DFA00(&obj, arg1) == 0) {
            func_002DFBF0(&obj, -1);
            return;
        }
        func_00304110();
        func_002E0780()->unk_vf0C(&obj, arg3);
        for (;;) {
            if (obj.unk_10 >= obj.unk_2C) {
                break;
            }
            (*obj.unk_00)(*(u16 *)(obj.unk_24 + obj.unk_10))(&obj);
            rem = obj.unk_10 & 3;
            if (rem != 0) {
                obj.unk_10 += 4 - rem;
            }
        }
    } else {
        func_002DFBF0(&obj, -1);
        return;
    }
    func_002DFBF0(&obj, -1);
}
