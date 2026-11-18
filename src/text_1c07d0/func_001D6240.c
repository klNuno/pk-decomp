/* profile: o0 */
#include "common.h"

void func_001D61E0(f32 *, f32 *);

void func_001D6240(f32 (*arg0)[4], f32 (*arg1)[3]) {
    func_001D61E0(arg0[0], arg1[0]);
    func_001D61E0(arg0[1], arg1[1]);
    func_001D61E0(arg0[2], arg1[2]);
    arg0[3][0] = 0.0f;
    arg0[3][1] = 0.0f;
    arg0[3][2] = 0.0f;
    arg0[3][3] = 1.0f;
}
