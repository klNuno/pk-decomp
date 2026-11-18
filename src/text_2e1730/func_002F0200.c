#include "common.h"

typedef struct {
    void *unk_00;
} unk_func_002F0200_1;

typedef struct {
    void *unk_00;
    u8 pad_04[0x38];
    unk_func_002F0200_1 unk_3C;
    u8 pad_40[0x40];
    s32 unk_80;
    u8 pad_84[0x4];
    unk_func_002F0200_1 unk_88;
    u8 pad_8C[0x20];
    s32 unk_AC;
} unk_func_002F0200_0;

extern u8 D_0035E760[];
extern u8 D_0035E780[];
extern u8 D_0035E7A0[];
void func_002ED5A0(s32 *, s32);
void func_002EBCE0(unk_func_002F0200_1 *, s32);
void c4sdk_malloc(void *, s32);
void func_002F23A0(void *, s32);
void func_002D2BB0(void *);

unk_func_002F0200_0 *func_002F0200(unk_func_002F0200_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035E760;
        func_002ED5A0(&arg0->unk_AC, -1);
        {
            unk_func_002F0200_1 *q = &arg0->unk_88;
            if (q != NULL) {
                arg0->unk_88.unk_00 = D_0035E7A0;
                func_002EBCE0(q, 0);
            }
        }
        {
            s32 *q = &arg0->unk_80;
            if (q != NULL) {
                c4sdk_malloc(q, 0);
            }
        }
        {
            unk_func_002F0200_1 *q = &arg0->unk_3C;
            if (q != NULL) {
                arg0->unk_3C.unk_00 = D_0035E780;
                func_002EBCE0(q, 0);
            }
        }
        func_002F23A0(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
