/* profile: opt_300 */
#include "common.h"

extern "C" {
void *func_002D2BC0(u32);
s32 *func_002CFCA0(...);
s32 func_002D5840(...);
void func_002D5C40(...);
void func_002D6090(...);
}

class unk_func_002D5A00_0 {
public:
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    unk_func_002D5A00_0(s32 a, s32 b, s32 c) {
        unk_00 = a;
        unk_04 = b;
        unk_08 = c;
    }
    void *operator new(u32 n) { return func_002D2BC0(n); }
};

typedef struct unk_func_002D5A00_1 {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_002D5A00_1;

typedef struct unk_func_002D5A00_2 {
    s32 unk_00;
    unk_func_002D5A00_0 *unk_04;
} unk_func_002D5A00_2;

extern "C" {
bool func_002D5A00(unk_func_002D5A00_1 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    bool result = false;
    s32 end;
    s32 *e;
    s32 found;
    unk_func_002D5A00_0 *node;
    u8 ret[8];

    e = func_002CFCA0();
    if (arg0->unk_14 != *e) {
        end = func_002D5840(arg0);
        func_002D5C40(&found, arg0, &arg3);
        if (found == end) {
            node = new unk_func_002D5A00_0(arg1, arg2, arg3);
            if (node != NULL) {
                unk_func_002D5A00_2 p;
                p.unk_00 = arg3;
                p.unk_04 = node;
                func_002D6090(ret, arg0, &p);
                result = true;
            }
        }
    }
    return result;
}
}
