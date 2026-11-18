/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002F0B20_0 {
    u8 pad_00[0xC];
} unk_func_002F0B20_0;

typedef struct unk_func_002F0B20_1 {
    s32 *unk_00;
    unk_func_002F0B20_0 *unk_04;
} unk_func_002F0B20_1;

class unk_func_002F0B20_2 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32, void *);
};

typedef struct unk_func_002F0B20_3 {
    unk_func_002F0B20_2 *unk_00;
    u8 pad_04[4];
    u8 unk_08;
    u8 pad_09[4];
    u8 unk_0D;
    u8 pad_0E[0x12];
    unk_func_002F0B20_2 *unk_20;
} unk_func_002F0B20_3;

extern "C" {
u8 func_002F1100(unk_func_002F0B20_0 *);
void func_002F11A0(unk_func_002F0B20_0 *);

u8 func_002F0B20(unk_func_002F0B20_3 *arg0) {
    unk_func_002F0B20_0 sp28;
    unk_func_002F0B20_1 sp38;
    unk_func_002F0B20_0 sp40;
    s32 sp4C;

    if (arg0->unk_08 == 0) {
        return 1;
    }
    func_002F11A0(&sp28);
    sp4C = 4;
    if (arg0->unk_20 != 0 && arg0->unk_0D != 0) {
        func_002F11A0(&sp40);
        sp38.unk_00 = &sp4C;
        sp38.unk_04 = &sp40;
        arg0->unk_20->unk_vf0C(0x3EA, &sp38);
        if (func_002F1100(&sp40) == 1) {
            goto end;
        }
    }
    arg0->unk_00->unk_vf0C(sp4C, &sp28);
end:
    return func_002F1100(&sp28);
}
}
