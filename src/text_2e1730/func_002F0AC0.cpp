#include "common.h"

class unk_func_002F0AC0_1 {
public:
    virtual ~unk_func_002F0AC0_1();
};

typedef struct {
    unk_func_002F0AC0_1 *unk_00;
} unk_func_002F0AC0_0;

extern "C" {
void func_002F0940(...);

void func_002F0AC0(unk_func_002F0AC0_0 *arg0) {
    if (arg0->unk_00 != 0) {
        delete arg0->unk_00;
        arg0->unk_00 = 0;
        func_002F0940(arg0, 0, 0, 1);
    }
}
}
