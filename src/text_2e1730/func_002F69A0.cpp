#include "common.h"

class unk_func_002F69A0_0 {
public:
    virtual void unk_vf08(void *, s32, s32);
};

class unk_func_002F69A0_4 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
};

typedef struct {
    u8 pad_00[2];
    u16 unk_02;
    s32 unk_04;
} unk_func_002F69A0_2;

typedef struct {
    void *vt;
    u8 pad_04[4];
    s32 unk_08;
    u8 pad_0C[0x20];
    unk_func_002F69A0_2 *unk_2C;
    u8 pad_30[8];
    unk_func_002F69A0_0 *unk_38;
} unk_func_002F69A0_1;

typedef struct {
    void *vt;
    u8 pad_04[0xC];
} unk_func_002F69A0_3;

extern "C" {
void *func_002D2BC0(s32);
void func_00305A20(unk_func_002F69A0_3 *, s32);
void func_00305AB0(unk_func_002F69A0_3 *, s32);
void func_00305DA0(unk_func_002F69A0_0 *);
unk_func_002F69A0_0 *func_00306080(void *, s32, u16, s32, s32);
}
extern u8 D_0035EDC0[];
extern s32 D_003606F8;

extern "C" s32 func_002F69A0(unk_func_002F69A0_1 *arg0, s32 arg1) {
    unk_func_002F69A0_3 sp30;
    void *p;

    p = func_002D2BC0(0x14);
    if (p != NULL) {
        p = (void *)func_00306080(p, arg0->unk_08, arg0->unk_2C->unk_02, arg0->unk_2C->unk_04, 0);
    }
    arg0->unk_38 = (unk_func_002F69A0_0 *)p;

    D_003606F8 += (u32)arg0->unk_08;
    func_00305A20(&sp30, arg1);
    arg0->unk_38->unk_vf08(&sp30, 0, 0);
    func_00305DA0(arg0->unk_38);
    ((unk_func_002F69A0_4 *)arg0)->unk_vf18();
    sp30.vt = D_0035EDC0;
    func_00305AB0(&sp30, 0);
    return 1;
}
