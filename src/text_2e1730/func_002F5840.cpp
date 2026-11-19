#include "common.h"

class unk_func_002F5840_0 {
public:
    s32 unk_00;
    virtual void unk_vf08();
    virtual void unk_vf0C(void *, s32, s32);
};

typedef struct unk_func_002F5840_6 {
    u8 pad_00[0x30];
} unk_func_002F5840_6;

struct unk_func_002F5840_1 {
    u8 pad_00[0xC];
};

struct unk_func_002F5840_2 {
    s32 unk_00;
};

struct unk_func_002F5840_3 {
    u8 pad_00[0x8];
};

struct unk_func_002F5840_4 {
    u8 pad_00[0xC];
    s32 unk_0C;
};

struct unk_func_002F5840_7 {
    u8 pad_00[0xC];
};

typedef struct unk_func_002F5840_5 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002F5840_5;

extern "C" {
void func_00309DC0(unk_func_002F5840_6 *, s32);
s32 func_00309700(unk_func_002F5840_6 *, s32, s32);
void func_00309C60(unk_func_002F5840_6 *, s32);
void func_00309BC0(unk_func_002F5840_6 *, s32, s32);
void func_00304440(unk_func_002F5840_1 *, void *, s32);
void func_00304240(unk_func_002F5840_1 *, unk_func_002F5840_6 *);
void func_002CD690(unk_func_002F5840_2 *, unk_func_002F5840_5 **, s32, s32);
void func_002F52C0(unk_func_002F5840_3 *, unk_func_002F5840_1 *);
void func_003043C0(unk_func_002F5840_4 *, unk_func_002F5840_1 *);
void func_002F6010(unk_func_002F5840_7 *, void *, unk_func_002F5840_3 *);
void c4sdk_malloc(void *, s32);
extern u8 D_0035C728[];
extern s32 D_00360780;

s32 func_002F5840(u8 *arg0, unk_func_002F5840_5 **arg1) {
    unk_func_002F5840_6 sp60;
    s32 spC4;
    s32 spC8;
    u32 spCC;
    u32 var_s2;

    func_00309DC0(&sp60, 1);
    if (func_00309700(&sp60, (*arg1)->unk_0C, 0) == 0) {
        func_00309C60(&sp60, -1);
        return 0;
    }
    ((unk_func_002F5840_0 *)&sp60)->unk_vf0C(&spC4, 4, 1);
    func_00309BC0(&sp60, spC4 - 4, 2);
    ((unk_func_002F5840_0 *)&sp60)->unk_vf0C(&spC8, 4, 1);
    ((unk_func_002F5840_0 *)&sp60)->unk_vf0C(&D_00360780, 4, 1);
    ((unk_func_002F5840_0 *)&sp60)->unk_vf0C(&spCC, 4, 1);
    for (var_s2 = 0; var_s2 < spCC; var_s2++) {
        struct {
            unk_func_002F5840_1 sp90;
            unk_func_002F5840_2 sp9C;
        } temp;
        struct {
            unk_func_002F5840_3 spA0;
            unk_func_002F5840_4 spA8;
        } temp2;
        u8 spB8[0xC];
        unk_func_002F5840_4 *temp_s3;
        unk_func_002F5840_2 *temp_s4;

        func_00304440(&temp.sp90, D_0035C728, 0);
        func_00304240(&temp.sp90, &sp60);
        temp_s4 = &temp.sp9C;
        func_002CD690(temp_s4, arg1, 0, -1);
        func_002F52C0(&temp2.spA0, &temp.sp90);
        temp_s3 = &temp2.spA8;
        func_003043C0(temp_s3, &temp.sp90);
        func_002F6010((unk_func_002F5840_7 *)spB8, arg0 + 0x10, &temp2.spA0);
        if (temp_s3 != NULL && &temp_s3->unk_0C != NULL) {
            c4sdk_malloc(&temp_s3->unk_0C, 0);
        }
        if (temp_s4 != NULL) {
            c4sdk_malloc(temp_s4, 0);
        }
    }
    func_00309C60(&sp60, -1);
    return 1;
}
}
