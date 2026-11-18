/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 unk_00[3];
} unk_func_002EF9A0_3;

typedef struct {
    s32 *unk_00;
    void *unk_04;
} unk_func_002EF9A0_0;

class unk_func_002EF9A0_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32, void *);
};

typedef struct {
    unk_func_002EF9A0_1 *unk_00;
    u8 pad_04[0x9];
    u8 unk_0D;
    u8 pad_0E[0x12];
    unk_func_002EF9A0_1 *unk_20;
} unk_func_002EF9A0_2;

extern "C" {
u8 func_002F1100(void *);
void func_002F11A0(void *);

void func_002EF9A0(unk_func_002EF9A0_2 *arg0, s32 arg1, void *arg2) {
    if (arg0->unk_20 != NULL && arg0->unk_0D != 0) {
        unk_func_002EF9A0_3 obj;
        unk_func_002EF9A0_0 args;

        func_002F11A0(&obj);
        args.unk_00 = &arg1;
        args.unk_04 = &obj;
        arg0->unk_20->unk_vf0C(0x3EA, &args);
        if (func_002F1100(&obj) == 1) {
            return;
        }
    }
    arg0->unk_00->unk_vf0C(arg1, arg2);
}
}
