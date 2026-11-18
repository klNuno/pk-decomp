#include "common.h"

typedef struct unk_func_002706E0_0 {
    u8 pad_00[0x18];
    void (*unk_18)(struct unk_func_002706E0_0 *);
    void (*unk_1C)(struct unk_func_002706E0_0 *);
    void (*unk_20)(struct unk_func_002706E0_0 *);
    u8 pad_24[0xAC];
} unk_func_002706E0_0;

void func_00270780(void);
extern u32 D_003602C0;
extern unk_func_002706E0_0 D_0075BA40[];

void func_002706E0(void) {
    u32 i;
    unk_func_002706E0_0 *p;

    func_00270780();
    for (i = 0; i < D_003602C0; i++) {
        p = &D_0075BA40[i];
        if (p->unk_18 != NULL) {
            p->unk_18(p);
        }
        if (p->unk_1C != NULL) {
            p->unk_1C(p);
        }
        if (p->unk_20 != NULL) {
            p->unk_20(p);
        }
    }
}
