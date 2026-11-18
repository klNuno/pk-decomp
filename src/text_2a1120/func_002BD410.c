#include "common.h"

typedef struct unk_func_002BD410_0 {
    u8 unk_00;
    u8 pad_01[0x1B];
} unk_func_002BD410_0;

extern unk_func_002BD410_0 D_007B2708[];

u8 func_002BD410(u32 arg0) {
    if (arg0 >= 0x200) {
        return 0;
    }
    return D_007B2708[arg0].unk_00;
}
