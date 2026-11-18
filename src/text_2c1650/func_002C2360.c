/* profile: opt_300 */
#include "common.h"

extern u8 D_007B7B90[];
extern s32 D_007B800C[];
extern f32 D_007B8020[];
extern f32 D_007B8024[];
extern f32 D_007B8028[];
extern f32 D_007B802C[];

void func_002C2360(s32 arg0, s32 arg1) {
    switch (arg0) {
    case 0xB65:
        D_007B800C[0] = arg1;
        break;
    case 0xB62:
        D_007B8020[0] = arg1;
        break;
    case 0xB63:
        D_007B8024[0] = arg1;
        break;
    case 0xB64:
        D_007B8028[0] = arg1;
        break;
    case 0xB61:
        D_007B802C[0] = arg1;
        break;
    default:
        return;
    }
    D_007B7B90[0] = 1;
}
