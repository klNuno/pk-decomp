/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
    s32 unk_0C;
    void *unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
} unk_func_0030C470_0;

s32 func_0031A120(unk_func_0030C470_0 *);
s32 func_0031A140(s32, s32);
void func_0030C620();
extern s32 D_0036085C;
extern s32 D_00367370;
extern u8 D_007D8180[];

s32 func_0030C470(s32 arg0, s32 arg1) {
    unk_func_0030C470_0 param;

    param.unk_04 = func_0030C620;
    param.unk_08 = D_007D8180;
    param.unk_0C = 0x4000;
    param.unk_10 = &D_00367370;
    param.unk_14 = arg0;
    D_0036085C = func_0031A120(&param);
    if (func_0031A140(D_0036085C, arg1) < 0) {
        return -1;
    }
    return D_0036085C;
}
