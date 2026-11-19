/* profile: opt */
#include "common.h"

typedef struct unk_func_002D8230_0 {
    u8 pad_00[4];
    struct unk_func_002D8230_0 *unk_04;
    s32 unk_08;
} unk_func_002D8230_0;

typedef struct {
    unk_func_002D8230_0 *unk_00[1];
} unk_func_002D8230_1;

typedef struct {
    u8 pad_00[4];
    unk_func_002D8230_0 *unk_04;
} unk_func_002D8230_2;

extern "C" {
unk_func_002D8230_2 *func_002CF800(void *);
void func_002CF7F0(unk_func_002D8230_1 *, unk_func_002D8230_0 *);
void func_002CF7E0(unk_func_002D8230_1 *, unk_func_002D8230_2 *);
s32 func_002D9890(s32, s32);

u8 func_002D8230(u8 *arg0) {
    u8 r = 0;
    unk_func_002D8230_1 it;
    unk_func_002D8230_1 copy;
    unk_func_002D8230_1 temp;
    unk_func_002D8230_1 end;

    func_002CF7F0(&temp, func_002CF800(arg0 + 0xC)->unk_04);
    copy.unk_00[0] = temp.unk_00[0];
    it = copy;
    while (func_002CF7E0(&end, func_002CF800(arg0 + 0xC)),
           it.unk_00[0] != end.unk_00[0]) {
        r = func_002D9890(it.unk_00[0]->unk_08, 0) || r;
        it.unk_00[0] = it.unk_00[0]->unk_04;
    }
    return r;
}
}
