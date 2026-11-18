#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
    void *unk_18;
    u8 pad_1C[0xA];
    u8 unk_26;
} unk_func_002BD2D0_0;

typedef struct {
    u8 pad_00[0x24];
    unk_func_002BD2D0_0 *unk_24[7];
    u8 pad_40[8];
    void *unk_48;
} unk_func_002BD2D0_1;

extern void (*D_0035F64C)(void *);

void func_002BD2D0(unk_func_002BD2D0_1 *arg0) {
    s32 i;
    unk_func_002BD2D0_0 **temp;

    temp = arg0->unk_24;
    if (arg0 != NULL) {
        for (i = 0; i < 7; i++, temp++) {
            if (*temp != NULL) {
                if ((*temp)->unk_14 != NULL && (*temp)->unk_26 == 0) {
                    D_0035F64C((*temp)->unk_14);
                }
                if ((*temp)->unk_18 != NULL) {
                    D_0035F64C((*temp)->unk_18);
                }
                D_0035F64C(*temp);
            }
        }
        if (arg0->unk_48 != NULL) {
            D_0035F64C(arg0->unk_48);
        }
        D_0035F64C(arg0);
    }
}
