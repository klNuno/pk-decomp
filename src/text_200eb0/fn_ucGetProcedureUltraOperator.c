/* profile: o0 */
#include "common.h"

typedef struct unk_fn_ucGetProcedureUltraOperator_0 {
    s32 unk_00;
    u8 unk_04;
    u8 pad_05[3];
} unk_fn_ucGetProcedureUltraOperator_0;

extern unk_fn_ucGetProcedureUltraOperator_0 D_00335630[];

u8 fn_ucGetProcedureUltraOperator(s32 arg0) {
    return D_00335630[arg0].unk_04;
}
