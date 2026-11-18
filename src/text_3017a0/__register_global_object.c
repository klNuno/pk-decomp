#include "common.h"

typedef struct unk___register_global_object_0 {
    struct unk___register_global_object_0 *unk_00;
    void *unk_04;
    void *unk_08;
} unk___register_global_object_0;

extern unk___register_global_object_0 *D_007BF7D8[];

void *__register_global_object(void *arg0, void *arg1, unk___register_global_object_0 *arg2) {
    arg2->unk_00 = D_007BF7D8[0];
    arg2->unk_04 = arg1;
    arg2->unk_08 = arg0;
    D_007BF7D8[0] = arg2;
    return arg0;
}
