#include "common.h"

class unk_func_00302110_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(void *);
};

typedef struct {
    u8 pad_00[0xC];
    unk_func_00302110_0 *unk_0C;
} unk_func_00302110_1;

typedef struct {
    unk_func_00302110_1 *unk_00;
} unk_func_00302110_2;

extern "C" {
void func_003021B0(unk_func_00302110_2 *, unk_func_00302110_1 *);
unk_func_00302110_1 **func_003021C0(void *);
unk_func_00302110_1 *func_003021A0(void *);
void func_002CFEF0(unk_func_00302110_2 *);

void func_00302110(u8 *arg0) {
    unk_func_00302110_2 it;
    unk_func_00302110_2 begin;
    unk_func_00302110_2 end;

    func_003021B0(&begin, *func_003021C0(arg0 + 8));
    it = begin;
    while (func_003021B0(&end, func_003021A0(arg0 + 8)), it.unk_00 != end.unk_00) {
        it.unk_00->unk_0C->unk_vf10(arg0);
        func_002CFEF0(&it);
    }
}
}
