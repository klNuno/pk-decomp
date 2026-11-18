#include "common.h"

typedef struct unk_func_002CDB60_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002CDB60_0;

struct unk_func_002CDB60_1 {
};

struct unk_func_002CDB60_2 {
    s32 unk_00;
};

extern "C" {
void func_00116450();
void func_00118218(s32, char *);
u32 func_0011D3F8(const char *);
extern unk_func_002CDB60_0 *D_0032F73C[];
extern char D_0035AC20[];
void func_002CDFC0(unk_func_002CDB60_2 *, const char *, const char *, s32, unk_func_002CDB60_1);
}


extern "C" unk_func_002CDB60_2 *func_002CDB60(unk_func_002CDB60_2 *volatile arg0, const char *arg1, s32 arg2) {
    unk_func_002CDB60_1 a;
    u32 len;

    arg0->unk_00 = 0;
    len = func_0011D3F8(arg1);
    if (len > 0xFFFFFFFEU) {
        func_00118218(D_0032F73C[0]->unk_0C, D_0035AC20);
        func_00116450();
    }
    func_002CDFC0(arg0, arg1, arg1 + len, arg2, a);
    return arg0;
}
