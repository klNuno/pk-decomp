#include "common.h"

namespace usnd {
class CActorResType {
public:
    void *fs_roGetInst();
};
}

extern "C" {
extern s8 D_00360668;
extern u8 D_007BEE80[];
extern u8 D_007BEE90[];
void func_002F04D0();
void __register_global_object(void *, void *, void *);
u8 *func_002F0480(void);
}

u8 *func_002F0480(void) {
    if (D_00360668 == 0) {
        __register_global_object(((usnd::CActorResType *)D_007BEE90)->fs_roGetInst(), (void *)func_002F04D0, D_007BEE80);
        D_00360668 = 1;
    }
    return D_007BEE90;
}
