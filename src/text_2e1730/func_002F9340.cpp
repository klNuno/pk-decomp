/* profile: opt_300 */
#include "common.h"

class unk_func_002F9340_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(s32, s32);
};

class unk_func_002F9340_1 {
public:
    unk_func_002F9340_0 *unk_00;
    virtual void unk_vf08();
    virtual u32 unk_vf0C(void *, u32, u32);
};

typedef struct {
    s32 unk_00;
    void *unk_04;
    u8 pad_08[0x14];
    s32 unk_1C;
} unk_func_002F9340_2;

class unk_func_002F9340_3 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();

    s32 unk_04;
    s64 unk_08;
    u8 pad_10[4];
    u32 unk_14;
    s32 unk_18;
    u8 unk_1C[0x10];
    void *unk_2C;
    void *unk_30;
    unk_func_002F9340_2 *unk_34;
};

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} unk_func_002F9340_4;

typedef struct {
    u32 unk_00;
    s32 unk_04;
} unk_func_002F9340_5;

extern "C" void c4sdk_malloc(void *, s32);
extern "C" void func_002CDC10(void *, void *);

struct unk_func_002F9340_6 {
    u8 pad_00[8];
    unk_func_002F9340_6(void *p) { func_002CDC10(this, p); }
    ~unk_func_002F9340_6() { c4sdk_malloc(this, 0); }
};

struct unk_func_002F9340_7 {
    s32 unk_00;
    unk_func_002F9340_6 unk_04;
    unk_func_002F9340_7(s32 a, void *p) : unk_00(a), unk_04(p) {}
};

extern "C" {
extern char D_007BF0A0[];
void c4sdk_malloc(void *, s32);
s32 func_0011D3F8(const char *);
void func_002CDC10(void *, void *);
void func_002D2BB0(void *);
void *func_002D2BC0(s32);
void func_002D3AD0(void *, const char *, s32);
void func_002F9BE0(void);
void func_002F9C60(void);
void func_002F9EF0(void *);
void func_002FA020(void *, void *, s32 *);
void func_003048F0(void *, void (*)());
unk_func_002F9340_2 *func_00304990(void *, void (*)(), void (*)(), s32, s32);
void *func_00304B50(s32);
s32 *func_00304C50(s32);

s32 func_002F9340(unk_func_002F9340_3 *arg0, unk_func_002F9340_1 *arg1)
{
    unk_func_002F9340_4 sp60;
    unk_func_002F9340_5 sp70;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 *temp0;
    s32 temp1;
    s32 temp2;
    u32 temp3;

    if (arg0->unk_2C != NULL) {
        func_002D2BB0(arg0->unk_2C);
        arg0->unk_2C = NULL;
        arg0->unk_04 = 0;
    }
    if (arg0->unk_30 != NULL) {
        func_002D2BB0(arg0->unk_30);
        arg0->unk_30 = NULL;
    }
    if (arg0->unk_34 != NULL) {
        func_003048F0(arg0->unk_34, func_002F9BE0);
        arg0->unk_34 = 0;
    }
    func_002F9EF0(arg0->unk_1C);
    arg0->unk_vf18();
    func_002F9EF0(arg0->unk_1C);
    arg1->unk_vf0C(&sp60, 12, 1);
    if (sp60.unk_00 != 0x46464952) {
        return 0;
    }
    if (sp60.unk_08 != 0x45564157) {
        return 0;
    }

    temp3 = 4;
    while (temp3 < sp60.unk_04) {
        temp3 += arg1->unk_vf0C(&sp70, 1, 8);
        switch (sp70.unk_00) {
        case 0x20746D66: {
            temp0 = &sp70.unk_04;
            arg0->unk_04 = *temp0;
            arg0->unk_2C = func_002D2BC0(arg0->unk_04);
            void *q = *(void *volatile *)&arg0->unk_2C;
            s32 temp4 = *(volatile s32 *)&arg0->unk_04;
            arg1->unk_vf0C(q, temp4, 1);
            temp3 += *temp0;
            break;
        }
        case 0x33706D75: {
            temp0 = &sp70.unk_04;
            arg0->unk_30 = func_002D2BC0(*temp0);
            void *q = *(void *volatile *)&arg0->unk_30;
            s32 temp4 = *(volatile s32 *)temp0;
            arg1->unk_vf0C(q, temp4, 1);
            temp3 += *temp0;
            break;
        }
        case 0x61746164: {
            temp0 = &sp70.unk_04;
            arg0->unk_08 = *temp0;
            arg0->unk_14 = temp3 + 8;
            arg1->unk_00->unk_vf10(*temp0, 2);
            temp3 += *temp0;
            break;
        }
        case 0x78746164:
            temp3 += arg1->unk_vf0C(&arg0->unk_08, 1, 4);
            temp3 += arg1->unk_vf0C(&arg0->unk_14, 1, 4);
            break;
        case 0x20657563: {
            temp3 += arg1->unk_vf0C(&arg0->unk_18, 1, 4);
            temp1 = arg0->unk_18;
            arg0->unk_34 = func_00304990(func_00304B50(temp1 * 0x20 + 0x10), func_002F9C60, func_002F9BE0, 0x20, temp1);
            for (temp2 = 0; temp2 < arg0->unk_18; ++temp2) {
                temp3 += arg1->unk_vf0C(&arg0->unk_34[temp2].unk_04 + 1, 1, 0x18);
            }
            break;
        }
        case 0x5453494C:
            temp3 += arg1->unk_vf0C(&sp84, 1, 4);
            break;
        case 0x7478746C: {
            s32 *p = func_00304C50(0x14);
            temp3 += arg1->unk_vf0C(p, 1, 0x14);
            s32 temp5 = *p - 1;
            arg0->unk_34[temp5].unk_04 = p;
            break;
        }
        case 0x6C62616C: {
            temp3 += arg1->unk_vf0C(&sp88, 1, 4);
            unk_func_002F9340_2 *p = &arg0->unk_34[sp88 - 1];
            temp0 = &sp70.unk_04;
            if (*temp0 % 2 != 0) {
                ++*temp0;
            }
            temp3 += arg1->unk_vf0C(D_007BF0A0, 1, *temp0 - 4);
            func_002D3AD0(p, D_007BF0A0, func_0011D3F8(D_007BF0A0));
            unk_func_002F9340_7 sp78(p->unk_1C, p);
            func_002FA020(&sp8C, arg0->unk_1C, &sp78.unk_00);
            break;
        }
        default: {
            temp0 = &sp70.unk_04;
            arg1->unk_00->unk_vf10(*temp0, 2);
            temp3 += *temp0;
            break;
        }
        }
    }
    return 1;
}
}
