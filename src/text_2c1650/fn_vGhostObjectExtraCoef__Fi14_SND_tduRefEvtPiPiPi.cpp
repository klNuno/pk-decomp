#include "common.h"

enum _SND_tduRefEvt {
    unk_00
};

void fn_vGhostObjectExtraCoef(int arg0, _SND_tduRefEvt arg1, int *arg2, int *arg3, int *arg4) {
    if (arg2 != NULL) {
        *arg2 = 0x10000;
    }
    if (arg3 != NULL) {
        *arg3 = 0x400000;
    }
    if (arg4 != NULL) {
        *arg4 = 0x400000;
    }
}
