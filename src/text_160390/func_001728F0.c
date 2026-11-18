#include "common.h"

s32 rand();

f32 func_001728F0(f32 fparg0, f32 fparg1) {
    return fparg0 + ((fparg1 - fparg0) * ((f32) rand() / 2.1474836e9f));
}
