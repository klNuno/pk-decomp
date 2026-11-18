#include "common.h"

typedef struct unk_func_002D6500_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002D6500_0;

unk_func_002D6500_0 **func_002CF820(void *);
unk_func_002D6500_0 *func_002CF7C0(void *);
void func_002CFEF0(unk_func_002D6500_0 **);
void func_002D76A0(s32);

void func_002D6500(void *arg0) {
    unk_func_002D6500_0 *it;
    unk_func_002D6500_0 *temp;

    it = *func_002CF820(arg0);
    while (temp = func_002CF7C0(arg0), it != temp) {
        func_002D76A0(it->unk_10);
        func_002CFEF0(&it);
    }
}
