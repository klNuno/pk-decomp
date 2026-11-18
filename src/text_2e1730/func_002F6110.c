/* profile: opt */
#include "common.h"

typedef struct unk_func_002F6110_0 {
    struct unk_func_002F6110_0 *unk_00;
    struct unk_func_002F6110_0 *unk_04;
    u8 pad_08[4];
    u8 unk_0C[4];
    u8 unk_10[0xC];
    u8 unk_1C[1];
} unk_func_002F6110_0;

extern void func_002CD2A0(void *, s16);
extern void func_002D2190(void *, s16);
extern void func_002D2BB0(void *);
extern void func_002F56E0(void *, s16);
extern void func_002F6350(void *);
extern void func_002F6360(void *);

void func_002F6110(void *, unk_func_002F6110_0 *);

#define UNK_00(arg0, arg1) do {                                   \
    unk_func_002F6110_0 *temp = (arg1);                           \
    if (temp != 0) {                                              \
        if (temp->unk_00 != 0) {                                  \
            func_002F6110(arg0, temp->unk_00);                    \
        }                                                         \
        if (temp->unk_04 != 0) {                                  \
            func_002F6110(arg0, temp->unk_04);                    \
        }                                                         \
        func_002F6360(arg0);                                      \
        func_002F56E0(temp->unk_0C, -1);                          \
        func_002F6350((u8 *)arg0 + 4);                            \
        func_002D2BB0(temp);                                      \
    }                                                             \
} while (0)

#define UNK_01(arg0, arg1) do {                                   \
    unk_func_002F6110_0 *temp2 = (arg1);                          \
    if (temp2 != 0) {                                             \
        UNK_00(arg0, temp2->unk_00);                              \
        UNK_00(arg0, temp2->unk_04);                              \
        if (temp2->unk_0C != 0) {                                 \
            func_002D2190(temp2->unk_10, -1);                     \
        }                                                         \
        func_002D2BB0(temp2);                                     \
    }                                                             \
} while (0)

void func_002F6110(void *arg0, unk_func_002F6110_0 *arg1) {
    UNK_01(arg0, arg1->unk_00);
    UNK_01(arg0, arg1->unk_04);
    if (arg1->unk_0C != 0 && arg1->unk_10 != 0) {
        func_002CD2A0(arg1->unk_1C, -1);
    }
    func_002D2BB0(arg1);
}
