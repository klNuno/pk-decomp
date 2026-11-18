#include "common.h"

typedef struct unk_func_0015C410_0 {
    f32 unk_00;
    u8 pad_04[0x100];
} unk_func_0015C410_0;

extern unk_func_0015C410_0 D_00367BB0[];

f32 func_0015C410(u8 arg0) {
    return D_00367BB0[arg0].unk_00;
}
