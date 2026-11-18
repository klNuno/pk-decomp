#include "common.h"

void *func_002D6290();
void *func_002D6950(void *, s32);
void *func_002D79D0(void *, s32);
void *func_002D86D0(void *, s32, s32);
s32 func_002D92F0(void *, s32);

s32 func_002CF830(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    if (arg2 == -2) {
        return -1;
    }
    temp_v0 = func_002D6950(func_002D6290(), arg1);
    if (temp_v0 == NULL) {
        return 3;
    }
    temp_v0 = func_002D79D0(temp_v0, arg0);
    if (temp_v0 == NULL) {
        return 3;
    }
    temp_v0 = func_002D86D0(temp_v0, -1, 0);
    if (temp_v0 == NULL) {
        return 3;
    }
    return (func_002D92F0(temp_v0, arg2) != 0) ? 0 : 2;
}
