/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 unk_00_0 : 3;
    u8 unk_00_3 : 1;
    u8 unk_00_4 : 1;
    u8 unk_00_5 : 3;
} unk_func_002C2220_0;

typedef struct {
    __int128 unk_00;
} unk_func_002C2220_1;

extern unk_func_002C2220_1 D_007B8010;
extern s8 D_007B0900[];
extern unk_func_002C2220_0 D_007B09D2[];
extern s32 D_007B800C[];
extern f32 D_007B8020[];
extern f32 D_007B8024[];
extern f32 D_007B8028[];
extern f32 D_007B802C[];
extern u8 D_007B7B90[];

void func_002C2220(s32 arg0, s32 *arg1) {
    s32 v;

    if (arg0 == 0xB66) {
        D_007B8010 = *(unk_func_002C2220_1 *)arg1;
        D_007B0900[0] = arg1[0];
        D_007B09D2[1].unk_00_4 = 1;
        D_007B0900[1] = arg1[1];
        D_007B09D2[1].unk_00_4 = 1;
        D_007B0900[2] = arg1[2];
        D_007B09D2[1].unk_00_4 = 1;
        return;
    }
    v = arg1[0];
    switch (arg0) {
    case 0xB65:
        D_007B800C[0] = v;
        break;
    case 0xB62:
        D_007B8020[0] = v;
        break;
    case 0xB63:
        D_007B8024[0] = v;
        break;
    case 0xB64:
        D_007B8028[0] = v;
        break;
    case 0xB61:
        D_007B802C[0] = v;
        break;
    default:
        goto end;
    }
    D_007B7B90[0] = 1;
end:;
}
