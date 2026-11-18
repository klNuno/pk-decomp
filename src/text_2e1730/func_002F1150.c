#include "common.h"

typedef struct {
    s32 unk_00;
    void *unk_04;
} unk_func_002F1150_0;

void func_002DD6C0(void *, s8);

void func_002F1150(unk_func_002F1150_0 *arg0, s8 arg1) {
    switch (arg0->unk_00) {
    case 1:
        *(s32 *)arg0->unk_04 = arg1;
        break;
    case 2:
        func_002DD6C0(arg0->unk_04, arg1);
        break;
    }
}
