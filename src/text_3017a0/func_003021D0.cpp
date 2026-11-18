#include "common.h"

extern "C" {
class unk_func_003021D0_0 {
public:
    virtual void unk_vf08(void *);
};

typedef struct unk_func_003021D0_1 {
    u8 pad_00[0xC];
    unk_func_003021D0_0 *unk_0C;
} unk_func_003021D0_1;

unk_func_003021D0_1 **func_003021C0(void *);
unk_func_003021D0_1 *func_003021A0(void *);
unk_func_003021D0_1 **func_003021B0(unk_func_003021D0_1 **, unk_func_003021D0_1 *);
void func_002CFEF0(unk_func_003021D0_1 **);

void func_003021D0(u8 *arg0) {
    unk_func_003021D0_1 *sp24;
    unk_func_003021D0_1 *sp28;
    unk_func_003021D0_1 *sp2C;

    func_003021B0(&sp28, *func_003021C0(arg0 + 8));
    for (sp24 = sp28; func_003021B0(&sp2C, func_003021A0(arg0 + 8)), sp24 != sp2C; func_002CFEF0(&sp24)) {
        sp24->unk_0C->unk_vf08(arg0);
    }
}
}
