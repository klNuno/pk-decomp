/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001A4EA0_0 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001A4EA0_0;

unk_func_001A4EA0_0 *HIE_fn_hGetSuperObjectObject();
s32 *fn_p_stBrainGetMind();
s32 func_001A4FE0();
void func_001A5030();
void func_001D47E0();
s32 func_001D4870();
void func_001E7A90();
s32 func_001E7B00();
void func_001F0C40();
void func_0020BF10();
void func_0020DC30();
extern s8 D_0035FF80;

void func_001A4EA0(s32 arg0) {
    s32 brain;
    s32 *mind;
    s32 m;

    func_001D47E0(arg0);
    if (func_001D4870(arg0) != 0) {
        brain = HIE_fn_hGetSuperObjectObject(arg0)->unk_0C;
        if (brain != 0 && (mind = fn_p_stBrainGetMind(brain)) != NULL) {
            m = *mind;
            func_001A5030(HIE_fn_hGetSuperObjectObject(arg0)->unk_00);
            D_0035FF80 = (s8)func_001A4FE0(HIE_fn_hGetSuperObjectObject(arg0)->unk_00);
            func_001F0C40();
            func_0020BF10();
            func_0020DC30();
            if (func_001E7B00(arg0) == 0) {
                brain = HIE_fn_hGetSuperObjectObject(arg0)->unk_0C;
                if (brain != 0 && (mind = fn_p_stBrainGetMind(brain)) != NULL) {
                    func_001E7A90(arg0);
                }
            }
        }
    }
}
