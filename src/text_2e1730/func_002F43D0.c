#include "common.h"

typedef struct unk_func_002F43D0_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002F43D0_0;

void c4sdk_malloc(void *, s32);
void func_002CFEF0(unk_func_002F43D0_0 **);
void func_002D2BB0(void *);
unk_func_002F43D0_0 *func_002F4050(void *);
void func_002F4330(void *, s32);
unk_func_002F43D0_0 **func_002F4490(void *);
void func_002F4B10(s32, s32);

u8 *func_002F43D0(u8 *arg0, s16 arg1) {
    unk_func_002F43D0_0 *sp3C;
    unk_func_002F43D0_0 *end;

    if (arg0 != NULL) {
        sp3C = *func_002F4490(arg0 + 4);
        while (end = func_002F4050(arg0 + 4), sp3C != end) {
            func_002F4B10(sp3C->unk_10, 1);
            func_002CFEF0(&sp3C);
        }
        if (arg0 + 4 != NULL) {
            if (arg0 + 4 != NULL) {
                if (arg0 + 4 != NULL) {
                    func_002F4330(arg0 + 4, -1);
                }
            }
        }
        if (arg0 != NULL) {
            c4sdk_malloc(arg0, 0);
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
