/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00223920_0 {
    u8 pad_00[0x4];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 unk_10;
} unk_func_00223920_0;

typedef struct unk_func_00223920_1 {
    u8 pad_00[0x4];
    s32 *unk_04;
} unk_func_00223920_1;

typedef struct unk_func_00223920_2 {
    u8 pad_00[0x4];
    s32 unk_04;
    unk_func_00223920_1 *unk_08;
} unk_func_00223920_2;

unk_func_00223920_0 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_00223920_0 *fn_p_stBrainGetMind(s32);
void func_00137B60(s32, s32);
void func_001988B0(void);
s32 func_001A4D40(s32);
s32 func_001B84B0(s32);
void func_001E77A0(unk_func_00223920_2 *);
void func_001EB640(s32);
extern s32 D_0035F598;
extern s32 D_003601A4;

s32 *func_00223920(s32 arg0, s32 *arg1) {
    unk_func_00223920_2 *s0;
    unk_func_00223920_1 *s1;
    s32 s2;
    s32 s3;
    s32 s4;
    unk_func_00223920_2 *s5;
    s32 s6;

    s6 = arg1[-2];
    switch (s6) {
    case 0x5F:
        D_0035F598 = 0;
        return arg1;
    case 0x5E:
        if (fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C)->unk_10) {
            s5 = (unk_func_00223920_2 *)fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C)->unk_04;
        } else {
            s5 = (unk_func_00223920_2 *)fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C)->unk_08;
        }
        s0 = s5;
        s1 = s0->unk_08;
        func_001E77A0(s0);
        if (s1->unk_04 == NULL) {
            s0->unk_04 = 0;
        } else {
            s0->unk_04 = *s1->unk_04;
        }
        D_003601A4 = 0;
        func_001EB640(0xB);
        return arg1;
    case 0x5D:
        s2 = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
        if (s2 != 0) {
            s3 = func_001B84B0(s2);
            if (s3 != 0) {
                s4 = func_001A4D40(arg0);
                if (s4 != 0) {
                    func_00137B60(s3, s4);
                }
            }
        }
        return arg1;
    case 0x5C:
        func_001988B0();
        return arg1;
    default:
        return arg1;
    }
}
