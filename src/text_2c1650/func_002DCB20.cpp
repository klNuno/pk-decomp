/* profile: opt_300 */
#include "common.h"

struct unk_func_002DCB20_0 {
    u8 pad_00[4];
    void *unk_04;
};

class unk_func_002DCB20_1 {
public:
    virtual unk_func_002DCB20_0 *unk_vf08(u8 *);
};

typedef struct unk_func_002DCB20_2 {
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
    unk_func_002DCB20_1 *unk_4C;
    unk_func_002DCB20_1 *unk_50;
} unk_func_002DCB20_2;

extern "C" {
void c4sdk_malloc(s32 *, s32);
void func_002CDB60(s32 *, char *, s32 *);
void func_002DCF60(unk_func_002DCB20_2 *, s32 *);
void func_002DD020(unk_func_002DCB20_2 *, s32 *);
s32 func_002DD160(unk_func_002DCB20_0 *);
s32 func_002FEDC0(void *);
s32 func_003019F0(void *);
extern char D_0035B7D0[];
extern char D_0035B800[];
extern char D_0035B820[];

void func_002DCB20(unk_func_002DCB20_2 *arg0, s32 *arg1) {
    s32 sp50, sp54, sp58, sp5C;
    s32 sp60, sp64, sp68, sp6C;
    s32 temp = arg0->unk_10 & 3;
    if (temp != 0) {
        arg0->unk_10 += 4 - temp;
    }
    s32 unk_0 = *(s32 *)(arg0->unk_24 + arg0->unk_10);
    switch (unk_0) {
    case 1: {
        *arg1 = *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4));
        arg0->unk_10 += 8;
        break;
    }
    case 14:
    case 13: {
        *arg1 = *(s32 *)(arg0->unk_18 + (arg0->unk_0C - *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4))));
        arg0->unk_10 += 8;
        break;
    }
    case 8:
    case 7: {
        *arg1 = *(s32 *)(arg0->unk_20 + *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4)));
        arg0->unk_10 += 8;
        break;
    }
    case 16: {
        *arg1 = *(s32 *)(arg0->unk_3C + *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4)));
        arg0->unk_10 += 8;
        break;
    }
    case 18:
    case 15: {
        s32 off = *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4));
        u8 *ptr = arg0->unk_3C;
        u8 unk_1 = ptr[off];
        bool flag;
        switch (unk_1) {
        case 1:
            flag = false;
            *arg1 = **(s32 **)(ptr + (off + 4));
            break;
        case 2: {
            unk_func_002DCB20_0 *p = *(unk_func_002DCB20_0 **)(ptr + (off + 4));
            flag = false;
            if (p != 0) {
                if (func_003019F0(p->unk_04) == 0) {
                    if (func_002FEDC0(p->unk_04) == 0) {
                        *arg1 = func_002DD160(p);
                    } else {
                        flag = true;
                    }
                } else {
                    flag = true;
                }
            } else {
                flag = true;
            }
            break;
        }
        default:
            flag = true;
            break;
        }
        if (flag) {
            func_002CDB60(&sp50, D_0035B7D0, &sp60);
            func_002DCF60(arg0, &sp50);
            *arg1 = 0;
            c4sdk_malloc(&sp50, 0);
        }
        arg0->unk_10 += 8;
        break;
    }
    case 10:
    case 9: {
        unk_func_002DCB20_1 *ptr = arg0->unk_4C;
        s32 off= *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4));
        bool flag = false;
        arg0->unk_10 += 8;
        if (ptr != 0) {
            unk_func_002DCB20_0 *p = ptr->unk_vf08(arg0->unk_1C + off);
            if (p != 0) {
                if (func_003019F0(p->unk_04) == 0) {
                    if (func_002FEDC0(p->unk_04) == 0) {
                        *arg1 = func_002DD160(p);
                    } else {
                        flag = true;
                    }
                } else {
                    flag = true;
                }
            } else {
                flag = true;
            }
        } else {
            flag = true;
        }
        if (flag) {
            func_002CDB60(&sp54, D_0035B800, &sp64);
            func_002DCF60(arg0, &sp54);
            *arg1 = 0;
            c4sdk_malloc(&sp54, 0);
        }
        break;
    }
    case 12:
    case 11: {
        unk_func_002DCB20_1 *ptr = arg0->unk_50;
        s32 off= *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4));
        bool flag = false;
        arg0->unk_10 += 8;
        if (ptr != 0) {
            unk_func_002DCB20_0 *p = ptr->unk_vf08(arg0->unk_1C + off);
            if (p != 0) {
                if (func_003019F0(p->unk_04) == 0) {
                    if (func_002FEDC0(p->unk_04) == 0) {
                        *arg1 = func_002DD160(p);
                    } else {
                        flag = true;
                    }
                } else {
                    flag = true;
                }
            } else {
                flag = true;
            }
        } else {
            flag = true;
        }
        if (flag) {
            func_002CDB60(&sp58, D_0035B800, &sp68);
            func_002DCF60(arg0, &sp58);
            *arg1 = 0;
            c4sdk_malloc(&sp58, 0);
        }
        break;
    }
    default: {
        func_002CDB60(&sp5C, D_0035B820, &sp6C);
        func_002DD020(arg0, &sp5C);
        arg0->unk_10 += 8;
        *arg1 = 0;
        c4sdk_malloc(&sp5C, 0);
        break;
    }
    }
}
}
