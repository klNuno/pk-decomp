/* profile: opt_300 */
#include "common.h"

class unk_fs_vPushRef_0 {
public:
    virtual u32 unk_vf08(u8 *);
};

namespace usnd {
class CProgExecContext {
public:
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    u8 *unk_18;
    u8 *unk_1C;
    u8 *unk_20;
    u8 *unk_24;
    u8 pad_28[0x14];
    u8 *unk_3C;
    u8 pad_40[0xC];
    unk_fs_vPushRef_0 *unk_4C;
    unk_fs_vPushRef_0 *unk_50;
};

class CProgInstrs2 {
public:
    static void fs_vPushRef(CProgExecContext &);
};
}

extern "C" {
extern char D_0035B8C0[];
extern char D_0035B8F0[];
extern char D_0035B910[];

void func_002CDB60(s32 *, const char *, s32 *);
void func_002DCF60(usnd::CProgExecContext *, s32 *);
void func_002DD020(usnd::CProgExecContext *, s32 *);
void c4sdk_malloc(s32 *, s32);
}

void usnd::CProgInstrs2::fs_vPushRef(CProgExecContext &arg0) {
    s32 temp1;
    u8 *temp0;
    s32 temp2;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;

    arg0.unk_10 += 4;
    if (arg0.unk_10 & 3) {
        arg0.unk_10 += 4 - (arg0.unk_10 & 3);
    }
    temp0 = arg0.unk_24;
    temp1 = arg0.unk_10;
    temp2 = *(s32 *)(temp0 + temp1);
    switch (temp2) {
    case 13: {
        s32 temp3 = *(s32 *)(temp0 + (temp1 + 4));
        s32 temp4 = arg0.unk_0C;
        u8 *temp5 = arg0.unk_18;

        *(s32 *)(temp5 + temp4) = 1;
        *(u8 **)(arg0.unk_18 + (arg0.unk_0C + 4)) = temp5 + (temp4 - temp3);
        arg0.unk_0C += 8;
        arg0.unk_10 += 8;
        break;
    }
    case 7:
        *(s32 *)(arg0.unk_18 + arg0.unk_0C) = 1;
        *(u8 **)(arg0.unk_18 + (arg0.unk_0C + 4)) =
            arg0.unk_20 + *(s32 *)(arg0.unk_24 + (arg0.unk_10 + 4));
        arg0.unk_0C += 8;
        arg0.unk_10 += 8;
        break;
    case 15: {
        s32 temp3 = *(s32 *)(temp0 + (temp1 + 4));

        *(s32 *)(arg0.unk_18 + arg0.unk_0C) = *(s32 *)(arg0.unk_3C + temp3);
        *(s32 *)(arg0.unk_18 + (arg0.unk_0C + 4)) = *(s32 *)(arg0.unk_3C + (temp3 + 4));
        arg0.unk_0C += 8;
        arg0.unk_10 += 8;
        break;
    }
    case 9: {
        unk_fs_vPushRef_0 *temp7 = arg0.unk_4C;
        s32 temp6 = temp1 + 4;
        s32 temp8 = temp1 + 8;
        bool temp4 = false;
        s32 temp3 = *(s32 *)(temp0 + temp6);

        arg0.unk_10 = temp8;
        if (temp7 != NULL) {
            u32 temp5 = temp7->unk_vf08(arg0.unk_1C + temp3);
            if (temp5 != 0) {
                *(s32 *)(arg0.unk_18 + arg0.unk_0C) = 2;
                *(u32 *)(arg0.unk_18 + (arg0.unk_0C + 4)) = temp5;
                arg0.unk_0C += 8;
            } else {
                temp4 = true;
            }
        } else {
            temp4 = true;
        }
        if (temp4) {
            func_002CDB60(&sp38, D_0035B8C0, &sp44);
            func_002DCF60(&arg0, &sp38);
            *(s32 *)(arg0.unk_18 + arg0.unk_0C) = 1;
            *(s32 *)(arg0.unk_18 + (arg0.unk_0C + 4)) = 0;
            arg0.unk_0C += 8;
            c4sdk_malloc(&sp38, 0);
            return;
        }
        break;
    }
    case 11: {
        unk_fs_vPushRef_0 *temp7 = arg0.unk_50;
        s32 temp6 = temp1 + 4;
        s32 temp8 = temp1 + 8;
        bool temp4 = false;
        s32 temp3 = *(s32 *)(temp0 + temp6);

        arg0.unk_10 = temp8;
        if (temp7 != NULL) {
            u32 temp5 = temp7->unk_vf08(arg0.unk_1C + temp3);
            if (temp5 != 0) {
                *(s32 *)(arg0.unk_18 + arg0.unk_0C) = 2;
                *(u32 *)(arg0.unk_18 + (arg0.unk_0C + 4)) = temp5;
                arg0.unk_0C += 8;
            } else {
                temp4 = true;
            }
        } else {
            temp4 = true;
        }
        if (temp4) {
            func_002CDB60(&sp3C, D_0035B8F0, &sp48);
            func_002DCF60(&arg0, &sp3C);
            *(s32 *)(arg0.unk_18 + arg0.unk_0C) = 1;
            *(s32 *)(arg0.unk_18 + (arg0.unk_0C + 4)) = 0;
            arg0.unk_0C += 8;
            c4sdk_malloc(&sp3C, 0);
        }
        break;
    }
    default: {
        func_002CDB60(&sp40, D_0035B910, &sp4C);
        func_002DD020(&arg0, &sp40);
        *(s32 *)(arg0.unk_18 + arg0.unk_0C) = 1;
        *(s32 *)(arg0.unk_18 + (arg0.unk_0C + 4)) = 0;
        arg0.unk_0C += 8;
        arg0.unk_10 += 8;
        c4sdk_malloc(&sp40, 0);
        break;
    }
    }
}
