#include "common.h"

s32 fn_bSetVolumeModifier(const char *, int);

extern "C" {
s32 func_002CD350(s32, char *, s32);

void SND_fn_vSetVolumeLineSound(s32 arg0, s32 arg1) {
    char buf[0x100];
    if (func_002CD350(arg0, buf, 0x100) != 0) {
        fn_bSetVolumeModifier(buf, arg1);
    }
}
}
