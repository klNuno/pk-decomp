#include "common.h"

namespace usnd {
class CProgramResType {
public:
    void *fs_roGetInst();
};
}

extern "C" {
extern s8 D_00360618;
extern u8 D_007BEBA0[];
extern u8 D_007BEBB0[];
void func_002E8EB0();
void __register_global_object(void *, void *, void *);
u8 *func_002E8E60(void);
}

u8 *func_002E8E60(void) {
    if (D_00360618 == 0) {
        __register_global_object(((usnd::CProgramResType *)D_007BEBB0)->fs_roGetInst(), (void *)func_002E8EB0, D_007BEBA0);
        D_00360618 = 1;
    }
    return D_007BEBB0;
}
