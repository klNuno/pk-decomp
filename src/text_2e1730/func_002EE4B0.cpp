/* profile: opt_300 */
#include "common.h"

class unk_func_002EE4B0_0 {
public:
    s32 unk_00;
    virtual void unk_vf08();
    virtual void unk_vf0C(void *, s32, s32);
};

typedef struct unk_func_002EE4B0_1 {
    u8 pad_00[0x10];
    u32 unk_10;
    u8 unk_14[4];
    u8 unk_18;
    u8 pad_19[3];
    u8 unk_1C[0xC];
    u8 unk_28[0x10];
    u8 unk_38[4];
} unk_func_002EE4B0_1;

typedef struct unk_func_002EE4B0_2 {
    s32 unk_00;
    u8 unk_04;
} unk_func_002EE4B0_2;

typedef struct unk_func_002EE4B0_3 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002EE4B0_3;

extern "C" {
void c4sdk_malloc(void *, s32);
void func_002D0DA0(s32 *, s32 *);
void func_002F20D0(unk_func_002EE4B0_1 *, unk_func_002EE4B0_0 *);
void func_003044A0(unk_func_002EE4B0_0 *, s32 *);
void func_002CD690(u8 *, s32 *, s32, s32);
void func_002F52E0(unk_func_002EE4B0_3 *);
void func_002F5220(unk_func_002EE4B0_3 *, unk_func_002EE4B0_0 *);
void func_002EECD0(s32 *, unk_func_002EE4B0_3 *);
void func_002EF070(unk_func_002EE4B0_2 *, u8 *, s32 *);
void func_002EE710(s32 *, s32 *);
void func_002EED20(s32 *, s32);
s32 func_00302CA0(void);
s32 func_00302CC0(s32, unk_func_002EE4B0_0 *);
void func_002CDC10(unk_func_002EE4B0_3 *, s32 *);
void func_002EF500(unk_func_002EE4B0_2 *, u8 *, unk_func_002EE4B0_3 *);
void func_002FE9B0(u8 *, unk_func_002EE4B0_0 *);

void func_002EE4B0(unk_func_002EE4B0_1 *arg0, unk_func_002EE4B0_0 *arg1) {
    unk_func_002EE4B0_3 sp50;
    unk_func_002EE4B0_2 sp58;
    unk_func_002EE4B0_3 sp60;
    unk_func_002EE4B0_2 sp68;
    unk_func_002EE4B0_2 sp70;
    unk_func_002EE4B0_2 sp78;
    s32 sp80;
    u32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s32 sp94;
    u32 sp98;
    s32 sp9C;
    u32 i;
    s32 obj;
    u32 j;

    func_002F20D0(arg0, arg1);
    if (arg0->unk_10 > 1) {
        func_002D0DA0(&sp80, &sp8C);
        func_003044A0(arg1, &sp80);
        func_002CD690(arg0->unk_14, &sp80, 0, -1);
        c4sdk_malloc(&sp80, 0);
    }
    arg1->unk_vf0C(&sp84, 4, 1);
    for (i = 0; i < sp84; i++) {
        func_002F52E0(&sp50);
        func_002F5220(&sp50, arg1);
        func_002EECD0(&sp90, &sp50);
        func_002EF070(&sp70, arg0->unk_1C, &sp90);
        sp78 = sp70;
        func_002EE710(&sp9C, &sp78.unk_00);
        func_002EE710(&sp58.unk_00, &sp9C);
        sp58.unk_04 = sp78.unk_04;
        func_002EED20(&sp90, -1);
    }
    arg1->unk_vf0C(&sp84, 4, 1);
    for (j = 0; j < sp84; j++) {
        func_002D0DA0(&sp88, &sp94);
        func_003044A0(arg1, &sp88);
        obj = func_00302CC0(func_00302CA0(), arg1);
        func_002CDC10(&sp60, &sp88);
        sp60.unk_04 = obj;
        func_002EF500(&sp68, arg0->unk_28, &sp60);
        c4sdk_malloc(&sp60, 0);
        c4sdk_malloc(&sp88, 0);
    }
    func_002FE9B0(arg0->unk_38, arg1);
    arg1->unk_vf0C(&sp98, 4, 1);
    arg0->unk_18 = sp98 != 0;
}
}
