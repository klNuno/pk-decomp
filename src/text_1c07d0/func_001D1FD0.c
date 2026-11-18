/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_001D1FD0_1;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x6C];
    u32 unk_70;
    u8 pad_74[4];
    void **unk_78;
    s32 *unk_7C;
} unk_func_001D1FD0_0;

s32 fn_h_StandardGameGetSuperObject(s32);
void func_001D1540();
void func_001D1650();
void func_001D1EF0(s32, s32);

void func_001D1FD0(unk_func_001D1FD0_0 *arg0, s32 arg1) {
    u32 i;
    s32 obj;

    func_001D1540(arg0->unk_00, arg1);
    for (i = 0; i < arg0->unk_70; i++) {
        switch (arg0->unk_7C[i]) {
        case 1:
            func_001D1540(arg0->unk_78[i], arg1);
            break;
        case 2:
            obj = fn_h_StandardGameGetSuperObject(((unk_func_001D1FD0_1 *)arg0->unk_78[i])->unk_04);
            if (obj != 0) {
                func_001D1EF0(obj, arg1);
            }
            break;
        case 3:
            func_001D1650(arg0->unk_78[i], arg1);
            break;
        default:
            return;
        }
    }
}
