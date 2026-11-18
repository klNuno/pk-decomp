/* profile: o0 */
#include "common.h"

extern s32 D_003601DC;
extern s32 D_003601E0;
extern s32 D_003601E4;
extern s32 D_003601E8;
extern s32 D_003601EC;
extern s32 D_003601F0;
extern s32 D_003601F4;
extern s32 D_003601F8;

void func_0024FFE0(void *arg0) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    D_003601E8 = *(*(s32 **)((u8 *)arg0 + 0));
    D_003601E4 = *(*(s32 **)((u8 *)arg0 + 4));
    if ((*(s32 *)((u8 *)arg0 + 0x2BC)) != 0) {
        var_s0 = 0;
    } else {
        var_s0 = *(*(s32 **)((u8 *)arg0 + 8));
    }
    D_003601DC = var_s0;
    D_003601E0 = *(*(s32 **)((u8 *)arg0 + 0xC));
    var_s1 = 1;
    if ((D_003601E8 >= -0x19) && (D_003601E8 < 0x1A)) {
        var_s1 = 0;
    }
    D_003601F8 = var_s1;
    var_s2 = 1;
    if ((D_003601E4 >= -0x19) && (D_003601E4 < 0x1A)) {
        var_s2 = 0;
    }
    D_003601F4 = var_s2;
    var_s3 = 1;
    if ((D_003601DC >= -0x19) && (D_003601DC < 0x1A)) {
        var_s3 = 0;
    }
    D_003601F0 = var_s3;
    var_s4 = 1;
    if ((D_003601E0 >= -0x19) && (D_003601E0 < 0x1A)) {
        var_s4 = 0;
    }
    D_003601EC = var_s4;
}
