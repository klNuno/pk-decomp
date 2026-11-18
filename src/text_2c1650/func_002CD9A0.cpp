/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002CD9A0_1 {
    u32 unk_00;
    u8 pad_04[0x8];
    u8 *unk_0C;
} unk_func_002CD9A0_1;

typedef struct unk_func_002CD9A0_0 {
    unk_func_002CD9A0_1 *unk_00;
} unk_func_002CD9A0_0;

inline const u32 &func_002CD9A0_min(const u32 &a, const u32 &b) {
    return a < b ? a : b;
}

extern "C" {

void func_00116450(void);
void func_00118218(s32, char *);
void func_002CDD10(unk_func_002CD9A0_0 *, u32, bool);
void *memcpy(void *, const void *, u32);
extern s32 *D_0032F73C[];
extern char D_0035ABF0[];

unk_func_002CD9A0_0 *func_002CD9A0(unk_func_002CD9A0_0 *arg0, const unk_func_002CD9A0_0 *arg1, u32 arg2, u32 arg3) {
    u32 n;
    u32 len;

    if (arg1->unk_00->unk_00 < arg2) {
        func_00118218(D_0032F73C[0][3], D_0035ABF0);
        func_00116450();
    }
    n = func_002CD9A0_min(arg1->unk_00->unk_00 - arg2, arg3);
    if (n != 0) {
        len = arg0->unk_00->unk_00;
        func_002CDD10(arg0, len + n, 1);
        memcpy(arg0->unk_00->unk_0C + len, arg1->unk_00->unk_0C + arg2, n);
    }
    return arg0;
}

}
