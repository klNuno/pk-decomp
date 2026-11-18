#include "common.h"

f32 int2dB__Fi(void *);
extern f32 D_007B8460[];
extern f32 D_007B8464[];

void func_0028E670(void *arg0, void *arg1) {
    D_007B8460[0] = int2dB__Fi(arg0);
    D_007B8464[0] = int2dB__Fi(arg1);
}
