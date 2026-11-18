/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[6];
} unk_fn_p_vGenAlloc_0;

void *func_00137150(u32, u8);
void *func_001375A0(u32, u8);
void memset(void *, s32, u32);
extern u8 D_0035F918;
extern unk_fn_p_vGenAlloc_0 *D_0035F928;

void *fn_p_vGenAlloc(u32 arg0, u8 arg1) {
    void *temp_v0;

    if (D_0035F928[arg1].unk_01 != 0xFF) {
        if (D_0035F918 != 0) {
            temp_v0 = func_00137150(arg0, arg1);
            if (temp_v0 != NULL) {
                if (arg0 & 0xF) {
                    arg0 = (arg0 & ~0xF) + 0x10;
                }
                memset(temp_v0, 0, arg0);
            }
            return temp_v0;
        }
        return func_00137150(arg0, arg1);
    }
    return func_001375A0(arg0, arg1);
}
