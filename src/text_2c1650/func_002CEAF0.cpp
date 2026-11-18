#include "common.h"

typedef struct unk_func_002CEAF0_0 {
    u32 unk_00;
    u8 pad_04[8];
    u8 *unk_0C;
} unk_func_002CEAF0_0;

typedef struct unk_func_002CEAF0_1 {
    unk_func_002CEAF0_0 *unk_00;
} unk_func_002CEAF0_1;

typedef struct unk_func_002CEAF0_2 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002CEAF0_2;

extern "C" {
void func_00116450();
void func_00118218(s32, char *);
s32 memcmp(u8 *, char *, u32);
extern unk_func_002CEAF0_2 *D_0032F73C[];
extern char D_0035AD20[];
}

static inline const u32 &func_002CEAF0_inl(const u32 &a, const u32 &b) {
    return (b < a) ? b : a;
}

extern "C" s32 func_002CEAF0(unk_func_002CEAF0_1 *arg0, u32 arg1, u32 arg2, char *arg3, u32 arg4) {
    s32 temp;

    if (arg0->unk_00->unk_00 < arg1) {
        func_00118218(D_0032F73C[0]->unk_0C, D_0035AD20);
        func_00116450();
    }
    {
        u32 rlen = func_002CEAF0_inl(arg0->unk_00->unk_00 - arg1, arg2);
        temp = memcmp(arg0->unk_00->unk_0C + arg1, arg3, func_002CEAF0_inl(rlen, arg4));
        if (temp == 0) {
            if (rlen < arg4) {
                return -1;
            }
            return (s32)(rlen == arg4) ^ 1;
        }
        return temp;
    }
}
