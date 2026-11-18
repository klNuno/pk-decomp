/* profile: opt_300 */
#include "common.h"

extern "C" {
s32 func_0011D3F8(char *);
char *func_002D38F0(void *);
void func_002D3AD0(void *, char *, s32);
void func_002D3B30(void *, char *, s32);
void func_00308360(char *, char *, s32);
extern char D_0035AFB0[];
extern char D_0035AFC0[];
}

typedef struct unk_func_002D36D0_0 {
    s32 *unk_00;
    bool empty() { return *unk_00 == 0; }
} unk_func_002D36D0_0;

struct unk_func_002D36D0_1 {
    s32 unk_00;
};

class unk_func_002D36D0_2 : public unk_func_002D36D0_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32, s32, s32);
    virtual void unk_vf10();
    virtual u32 unk_vf14();
    virtual u32 unk_vf18(u32, s32);
    u8 pad_08[0x28];
    u8 unk_30;
    u8 pad_31[0xB];
    char *unk_3C;
    char *unk_40;
    char *unk_44;
    u8 pad_48[0x800];
    char *unk_848;
    u32 unk_84C;
    void fill(char *pos) {
        if (unk_30) {
            unk_vf0C((s32)pos, 1, 0x400);
        }
    }
    u32 size() {
        u32 r = -1;
        if (unk_30) {
            u32 pos = unk_vf14();
            r = unk_vf18(0, 1);
            unk_vf18(pos, 0);
        }
        return r;
    }
};

extern "C" {
bool func_002D36D0(unk_func_002D36D0_2 *arg0, unk_func_002D36D0_0 *arg1) {
    bool done = 0;
    s32 n;
    char *p;

    if (arg0->unk_30) {
    func_002D3AD0(arg1, D_0035AFB0, func_0011D3F8(D_0035AFB0));
    while (!done && arg0->unk_84C < arg0->size()) {
        p = func_002D38F0(arg0);
        if (p) {
            n = p - arg0->unk_848;
            func_002D3B30(arg1, arg0->unk_848, n);
            if (n == 0) {
                func_00308360(D_0035AFB0, D_0035AFC0, 0x90);
            }
        } else {
            n = 1;
            p = arg0->unk_848 + 1;
        }
        if (arg0->unk_848 < arg0->unk_40 && p >= arg0->unk_40) {
            arg0->fill(arg0->unk_3C);
        }
        if (p == arg0->unk_44) {
            arg0->fill(arg0->unk_40);
            p = arg0->unk_3C;
        }
        arg0->unk_848 = p;
        arg0->unk_84C += n;
        done = !arg1->empty() && (*arg0->unk_848 == '\n' || *arg0->unk_848 == '\r');
    }
    }
    return done;
}
}
