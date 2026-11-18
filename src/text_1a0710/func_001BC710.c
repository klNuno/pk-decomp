/* profile: o0 */
#include "common.h"

void func_001BD420(s32);
void func_001BD580(s32);

void func_001BC710(s32 arg0, u8 *arg1, u8 arg2) {
    if (arg2) {
        if (!arg1[4]) {
            func_001BD420(arg0);
        }
    } else if (arg1[4]) {
        func_001BD580(arg0);
    }
    arg1[4] = arg2;
}
