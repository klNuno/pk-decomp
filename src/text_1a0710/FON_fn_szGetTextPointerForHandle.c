/* profile: o0_p */
#include "common.h"

typedef struct {
    char **unk_00;
    u8 pad_04[4];
} unk_FON_fn_szGetTextPointerForHandle_0;

extern u8 D_005ACACE[];
extern unk_FON_fn_szGetTextPointerForHandle_0 *D_005AD94C[];
extern char ***D_005AD950[];

char *FON_fn_szGetTextPointerForHandle(s32 arg0) {
    char *ret;
    char *temp;

    if (arg0 == -1) {
        ret = NULL;
    } else {
        if (arg0 < 20000) {
            temp = D_005AD94C[0][D_005ACACE[0]].unk_00[arg0];
        } else {
            temp = (*D_005AD950[0])[arg0 - 20000];
        }
        ret = temp;
    }
    return ret;
}
