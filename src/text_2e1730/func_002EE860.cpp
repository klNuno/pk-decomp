#include "common.h"

class unk_func_002EE860_0 {
public:
    virtual void unk_vf08(s32);
};

typedef struct unk_func_002EE860_1 {
    u8 pad_00[0x10];
    unk_func_002EE860_0 *unk_10;
} unk_func_002EE860_1;

typedef struct unk_func_002EE860_2 {
    unk_func_002EE860_1 *unk_00;
} unk_func_002EE860_2;

typedef struct unk_func_002EE860_3 {
    u8 *unk_00;
    u8 pad_04[0x18];
    u8 unk_1C[0xC];
    u8 unk_28[0xC];
} unk_func_002EE860_3;

extern "C" {
void func_002CFEF0(unk_func_002EE860_2 *);
void func_002D2BB0(void *);
s32 func_002EE470(void *);
s32 *func_002EE480(void *);
void func_002EE980(void *, s32);
void func_002EE9E0(void *, s32);
void func_002EEA40(unk_func_002EE860_2 *, s32);
void func_002EF3E0(void *);
void func_002F2130(void *, s32);
extern u8 D_0035E730[];

unk_func_002EE860_3 *func_002EE860(unk_func_002EE860_3 *arg0, s16 arg1) {
    unk_func_002EE860_2 end;
    unk_func_002EE860_2 tmp;
    unk_func_002EE860_2 it;
    unk_func_002EE860_0 *obj;
    void *p;

    if (arg0 != NULL) {
        arg0->unk_00 = D_0035E730;
        func_002EEA40(&tmp, *func_002EE480(arg0->unk_28));
        it = tmp;
        while (func_002EEA40(&end, func_002EE470(arg0->unk_28)), it.unk_00 != end.unk_00) {
            obj = it.unk_00->unk_10;
            if (obj != NULL) {
                obj->unk_vf08(1);
            }
            func_002CFEF0(&it);
        }
        func_002EF3E0(arg0->unk_28);
        p = arg0->unk_28;
        if (p != NULL) {
            if (p != NULL) {
                if (p != NULL) {
                    func_002EE9E0(p, -1);
                }
            }
        }
        p = arg0->unk_1C;
        if (p != NULL) {
            if (p != NULL) {
                func_002EE980(p, -1);
            }
        }
        func_002F2130(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
