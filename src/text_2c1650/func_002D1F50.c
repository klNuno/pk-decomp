#include "common.h"

typedef struct unk_002D1F50_0 {
    struct unk_002D1F50_0 *unk_00;
    struct unk_002D1F50_0 *unk_04;
    u8 pad_08[4];
    u8 unk_0C[8];
    u8 unk_14[0xC];
    u8 unk_20[4];
} unk_002D1F50_0;

void func_002CD2A0(void *, s32);
void func_002D2190(void *, s32);
void func_002D21F0(void *);
void func_002D2200(void *, s32);
void func_002D2270(void *);
void func_002D2BB0(void *);

void func_002D1F50(u8 *arg0, unk_002D1F50_0 *arg1);

#define UNK_002D1F50_0(arg0, node)                            \
    {                                                         \
        unk_002D1F50_0 *temp1 = (node);                       \
        if (temp1) {                                          \
            unk_002D1F50_0 *temp2 = temp1->unk_00;            \
            if (temp2) {                                      \
                func_002D1F50(arg0, temp2);                   \
            }                                                 \
            temp2 = temp1->unk_04;                            \
            if (temp2) {                                      \
                func_002D1F50(arg0, temp2);                   \
            }                                                 \
            func_002D2270(arg0);                              \
            func_002D2200(temp1->unk_0C, -1);                 \
            func_002D21F0(arg0 + 4);                          \
            func_002D2BB0(temp1);                             \
        }                                                     \
    }

#define UNK_002D1F50_1(arg0, node)                            \
    {                                                         \
        unk_002D1F50_0 *temp0 = (node);                       \
        if (temp0) {                                          \
            UNK_002D1F50_0(arg0, temp0->unk_00)               \
            UNK_002D1F50_0(arg0, temp0->unk_04)               \
            if ((u32)temp0 + 0xC != 0) {                      \
                func_002D2190(temp0->unk_14, -1);             \
            }                                                 \
            func_002D2BB0(temp0);                             \
        }                                                     \
    }

void func_002D1F50(u8 *arg0, unk_002D1F50_0 *arg1) {
    UNK_002D1F50_1(arg0, arg1->unk_00)
    UNK_002D1F50_1(arg0, arg1->unk_04)
    if ((u32)arg1 + 0xC != 0) {
        if ((u32)arg1 + 0x14 != 0) {
            func_002CD2A0(arg1->unk_20, -1);
        }
    }
    func_002D2BB0(arg1);
}
