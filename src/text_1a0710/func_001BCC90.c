/* profile: o0 */
#include "common.h"

f32 func_001BCC90(f32 arg0) {
    f32 temp;

    if (arg0 >= 32000.0f) {
        temp = 32000.0f;
    } else if (arg0 <= -32000.0f) {
        temp = -32000.0f;
    } else {
        temp = arg0;
    }
    return arg0;
}
