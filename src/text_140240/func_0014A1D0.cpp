/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0x2];
    u16 unk_02;
} unk_func_0014A1D0_0;

typedef struct {
    u8 pad_00[0x4];
    unk_func_0014A1D0_0 *unk_04;
} unk_func_0014A1D0_1;

typedef struct {
    u8 pad_00[0x4];
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    u8 pad_10[0x10];
    unk_func_0014A1D0_1 *unk_20;
    u8 pad_24[0xA];
    s16 unk_2E;
    u8 pad_30[0x38];
} unk_func_0014A1D0_2;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0014A1D0_3;

inline s32 unk_inl_0(unk_func_0014A1D0_2 *e) { return e->unk_2E != 0x63; }
inline bool unk_inl_1(unk_func_0014A1D0_0 *p) { return p != (unk_func_0014A1D0_0 *)-1; }
inline u8 unk_inl_2(unk_func_0014A1D0_0 *p) { return unk_inl_1(p) && (p->unk_02 & 0x40) == 0x40; }
inline u8 unk_inl_3(unk_func_0014A1D0_0 *p) { return unk_inl_1(p) && ((p->unk_02 & 0x8000) == 0x8000) != 0; }

extern "C" {
void func_0014FEA0(u8 *, unk_func_0014A1D0_3 *);

void func_0014A1D0(s32 arg0, unk_func_0014A1D0_2 *arg1, u8 *arg2, unk_func_0014A1D0_3 *arg3) {
    unk_func_0014A1D0_3 sp80;
    unk_func_0014A1D0_0 *p;
    f32 d;
    s32 i;
    unk_func_0014A1D0_2 *e;

    for (i = 0; i < arg0; i++) {
        e = &arg1[i];
        if (unk_inl_0(e)) {
            func_0014FEA0(arg2 + 0xE0, &sp80);
            p = e->unk_20->unk_04;
            d = e->unk_04 * sp80.unk_00 + e->unk_08 * sp80.unk_04 + e->unk_0C * sp80.unk_08;
            if (unk_inl_2(p) & 0xFF) {
                if (!(unk_inl_3(p) & 0xFF)) {
                    if (d < -0.707f) {
                        e->unk_2E = 0x63;
                    }
                    continue;
                }
            }
            if (d < -0.95f) {
                e->unk_2E = 0x63;
            } else if (!(e->unk_04 * arg3->unk_00 + e->unk_08 * arg3->unk_04 + e->unk_0C * arg3->unk_08 <= 0.001f)) {
                e->unk_2E = 0x63;
            }
        }
    }
}
}
