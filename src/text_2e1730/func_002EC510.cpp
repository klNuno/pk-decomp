/* profile: opt */
#include "common.h"

typedef struct {
    u32 unk_00;
} unk_func_002EC510_0;

typedef struct {
    u8 pad_00[0x44];
    unk_func_002EC510_0 *unk_44;
} unk_func_002EC510_1;

class unk_func_002EC510_2 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32, void *);
};

class unk_func_002EC510_3 : public unk_func_002EC510_2 {
public:
    unk_func_002EC510_1 *unk_04;
};

typedef struct unk_func_002EC510_4 {
    unk_func_002EC510_3 *unk_00;
    u8 pad_04[0xA];
    u8 unk_0E;
    u8 pad_0F[9];
    struct unk_func_002EC510_4 *unk_18;
    u8 pad_1C[8];
    s32 unk_24;
} unk_func_002EC510_4;

typedef struct {
    u8 pad_00[0x28];
    unk_func_002EC510_4 *unk_28;
} unk_func_002EC510_5;

extern "C" {
extern s8 D_00360654;
extern unk_func_002EC510_0 *D_0035BD28[];
extern char D_0035BD30[];
extern u8 D_007BEE60[];
void func_002CDB60(unk_func_002EC510_0 **, const char *, void *);
void __register_global_object(void *, void (*)(void), void *);
void func_002CD2A0(void);
char *func_002CEA20(unk_func_002EC510_0 *);
s32 func_002CEAF0(unk_func_002EC510_0 **, u32, u32, char *, u32);
void func_002F0A20(unk_func_002EC510_4 *);
void func_002F0AC0(unk_func_002EC510_4 *);
void *func_00304590(void);
void func_00304530(void *, unk_func_002EC510_4 *);

void func_002EC510(unk_func_002EC510_5 *arg0) {
    s32 temp;
    unk_func_002EC510_4 *p;
    s32 temp4;
    unk_func_002EC510_4 *temp9;
    s32 temp3;
    unk_func_002EC510_4 *temp2;

    if (!D_00360654) {
        func_002CDB60(D_0035BD28, D_0035BD30, &temp);
        __register_global_object(D_0035BD28, func_002CD2A0, D_007BEE60);
        D_00360654 = 1;
    }

    for (p = arg0->unk_28; p != 0; p = p->unk_18) {
        unk_func_002EC510_1 *temp5;
        unk_func_002EC510_0 **temp7;
        bool temp8;
        u32 temp6;
        temp5 = p->unk_00->unk_04;
        temp6 = D_0035BD28[0]->unk_00;
        temp7 = &temp5->unk_44;
        temp8 = false;
        if (temp5->unk_44->unk_00 == temp6) {
            if (func_002CEAF0(temp7, 0, (*temp7)->unk_00, func_002CEA20(D_0035BD28[0]), temp6) == 0) {
                temp8 = true;
            }
        }
        if (temp8) {
            p->unk_00->unk_vf0C(0x3F0, 0);
        }
    }

    temp3 = 10000;
    while ((temp9 = arg0->unk_28) != 0 && temp9->unk_0E == 0) {
        temp4 = 0;
        while (temp9 != 0 && temp9->unk_0E == 0) {
            temp2 = temp9;
            temp9 = temp9->unk_18;
            if (temp2->unk_24 == 0) {
                func_002F0A20(temp2);
                func_002F0AC0(temp2);
                func_00304530(func_00304590(), temp2);
            } else {
                temp4++;
            }
        }
        if (temp4 == temp3) {
            for (temp2 = arg0->unk_28; temp2 != 0 && temp2->unk_0E == 0; temp2 = temp2->unk_18) {
                while (temp2->unk_24 != 0) {
                    temp2->unk_24--;
                }
            }
        }
        temp3 = temp4;
    }

    for (; temp9 != 0; temp9 = temp9->unk_18) {
        temp9->unk_00->unk_vf0C(0x3E8, arg0);
        temp9->unk_00->unk_vf0C(0x3E9, 0);
    }
}
}
