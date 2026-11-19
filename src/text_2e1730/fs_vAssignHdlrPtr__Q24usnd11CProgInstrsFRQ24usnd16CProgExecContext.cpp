/* profile: opt_300 */
#include "common.h"

class unk_fs_vAssignHdlrPtr_0 {
public:
    virtual s32 unk_vf08(u8 *);
};

namespace usnd {
class CProgExecContext {
public:
    u8 pad_00[4];
    unk_fs_vAssignHdlrPtr_0 *unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    u8 *unk_18;
    u8 *unk_1C;
    u8 *unk_20;
    u8 *unk_24;

    void unk_00() {
        s32 temp = unk_10 & 3;
        if (temp != 0) {
            unk_10 += 4 - temp;
        }
    }
};

class CProgInstrs {
public:
    static void fs_vAssignHdlrPtr(CProgExecContext &);
};
}

extern "C" {
void func_002CDB60(void *, void *, void *);
void func_002DD020(usnd::CProgExecContext &, s32 &);
void c4sdk_malloc(void *, s32);
extern char D_0035B940[];
extern char D_0035BAE0[];
}

void usnd::CProgInstrs::fs_vAssignHdlrPtr(CProgExecContext &arg0) {
    s32 temp_s0;
    u8 *temp_s1;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;

    arg0.unk_10 += 4;
    arg0.unk_00();
    switch (*(s32 *)(arg0.unk_24 + arg0.unk_10)) {
    case 13:
        temp_s0 = arg0.unk_0C - *(s32 *)(arg0.unk_24 + (arg0.unk_10 + 4));
        temp_s1 = arg0.unk_18;
        arg0.unk_10 += 8;
        break;
    case 7:
        temp_s0 = *(s32 *)(arg0.unk_24 + (arg0.unk_10 + 4));
        temp_s1 = arg0.unk_20;
        arg0.unk_10 += 8;
        break;
    default:
        func_002CDB60(&sp40, D_0035BAE0, &sp48);
        func_002DD020(arg0, sp40);
        c4sdk_malloc(&sp40, 0);
        arg0.unk_10 += 8;
        arg0.unk_00();
        arg0.unk_10 += 8;
        return;
    }

    arg0.unk_00();
    switch (*(s32 *)(arg0.unk_24 + arg0.unk_10)) {
    case 17: {
        s32 temp = *(s32 *)(arg0.unk_24 + (arg0.unk_10 + 4));
        arg0.unk_10 += 8;
        *(s32 *)(temp_s1 + temp_s0) = arg0.unk_04->unk_vf08(arg0.unk_1C + temp);
        break;
    }
    case 14:
    case 13:
        *(s32 *)(temp_s1 + temp_s0) = *(s32 *)(arg0.unk_18 +
            (arg0.unk_0C - *(s32 *)(arg0.unk_24 + (arg0.unk_10 + 4))));
        arg0.unk_10 += 8;
        break;
    case 8:
    case 7:
        *(s32 *)(temp_s1 + temp_s0) = *(s32 *)(arg0.unk_20 +
            *(s32 *)(arg0.unk_24 + (arg0.unk_10 + 4)));
        arg0.unk_10 += 8;
        break;
    default:
        func_002CDB60(&sp44, D_0035B940, &sp4C);
        func_002DD020(arg0, sp44);
        arg0.unk_10 += 8;
        c4sdk_malloc(&sp44, 0);
        break;
    }
}
