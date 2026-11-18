/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00133C70_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00133C70_0;

s32 func_00133C70(u8 arg0, unk_func_00133C70_0 *arg1) {
    switch (arg0) {
    case 0:
        return arg1->unk_04;
    case 1:
        return arg1->unk_00;
    case 3:
        return arg1->unk_0C;
    case 2:
        return arg1->unk_08;
    }
    return 0;
}
