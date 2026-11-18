/* profile: o0 */
#include "common.h"

typedef struct unk_func_00197B50_0 {
    u8 pad_00[0x14];
    struct unk_func_00197B50_0 *unk_14;
    struct unk_func_00197B50_0 *unk_18;
    struct unk_func_00197B50_1 *unk_1C;
} unk_func_00197B50_0;

typedef struct unk_func_00197B50_1 {
    u8 pad_00[8];
    unk_func_00197B50_0 *unk_08;
    unk_func_00197B50_0 *unk_0C;
    s32 unk_10;
} unk_func_00197B50_1;

void func_00197B50(unk_func_00197B50_1 *arg0, unk_func_00197B50_0 *arg1) {
    if (arg1->unk_14 != NULL) {
        arg1->unk_14->unk_18 = arg1->unk_18;
    }
    if (arg1->unk_18 != NULL) {
        arg1->unk_18->unk_14 = arg1->unk_14;
    }
    if (arg1->unk_1C != NULL) {
        arg1->unk_1C->unk_10--;
        if (arg1->unk_1C->unk_08 == arg1) {
            arg1->unk_1C->unk_08 = arg1->unk_14;
        }
        if (arg1->unk_1C->unk_0C == arg1) {
            arg1->unk_1C->unk_0C = arg1->unk_18;
        }
    }
    arg1->unk_14 = NULL;
    arg1->unk_18 = NULL;
    arg1->unk_1C = NULL;
    arg1->unk_18 = NULL;
    arg1->unk_14 = arg0->unk_08;
    arg1->unk_1C = arg0;
    if (arg0->unk_0C == NULL) {
        arg0->unk_0C = arg1;
    } else {
        arg0->unk_08->unk_18 = arg1;
    }
    arg0->unk_08 = arg1;
    arg0->unk_10++;
}
