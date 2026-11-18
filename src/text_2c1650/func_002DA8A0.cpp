/* profile: opt_300 */
#include "common.h"

extern "C" {
void func_002D2BB0(void *);
s32 func_002D9BF0(...);
void func_002DA980(...);
void func_002DAA80(...);
void func_002DACE0(...);
void func_002FD3F0(...);
s32 func_002FE280(...);
}

class unk_func_002DA8A0_0 {
public:
    u8 pad_00[8];
    s32 unk_08;
    ~unk_func_002DA8A0_0() {}
    void operator delete(void *p) { func_002D2BB0(p); }
};

typedef struct unk_func_002DA8A0_1 {
    u8 pad_00[0x10];
    unk_func_002DA8A0_0 *unk_10;
} unk_func_002DA8A0_1;

extern "C" {
bool func_002DA8A0(void *arg0, s32 arg1) {
    bool result = false;
    unk_func_002DA8A0_0 *node = 0;
    unk_func_002DA8A0_1 *it;
    unk_func_002DA8A0_1 *it2;
    unk_func_002DA8A0_1 *e;

    {
        unk_func_002DA8A0_1 *t;
        s32 key = arg1;
        func_002DAA80(&t, arg0, &key);
        it = t;
    }
    func_002DA980(&e, func_002D9BF0(arg0));
    if (it != e) {
        node = it->unk_10;
    }
    if (node != 0) {
        func_002DAA80(&it2, arg0, &arg1);
        func_002DACE0(arg0, it2);
        func_002FD3F0(func_002FE280(), node->unk_08);
        delete node;
        result = true;
    }
    return result;
}
}
