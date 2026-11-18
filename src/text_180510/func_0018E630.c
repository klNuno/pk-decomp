/* profile: opt */
#include "common.h"

typedef struct unk_func_0018E630_2 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x28];
    void *unk_30;
} unk_func_0018E630_2;

typedef struct unk_func_0018E630_1 {
    u8 pad_00[8];
    void *unk_08;
    unk_func_0018E630_2 *unk_0C;
} unk_func_0018E630_1;

typedef struct unk_func_0018E630_0 {
    u32 unk_00;
    unk_func_0018E630_1 **unk_04;
} unk_func_0018E630_0;

void func_00119548(void *);
void func_0018E410(s32);
void func_0018FBE0(unk_func_0018E630_2 *);
extern u8 D_0035E470[];
extern s32 D_0035FDF8;

void func_0018E630(unk_func_0018E630_0 *arg0, unk_func_0018E630_1 *arg1) {
    u32 i;
    u32 j;
    unk_func_0018E630_2 *s3;

    i = 0;
    while (i < arg0->unk_00 && arg0->unk_04[i] != arg1) {
        i++;
    }
    if (i == arg0->unk_00) {
        return;
    }
    if (arg1->unk_08 != 0) {
        func_00119548(arg1->unk_08);
    }
    s3 = arg1->unk_0C;
    if (s3 != 0) {
        if (s3 != 0) {
            s3->unk_30 = D_0035E470;
            func_0018FBE0(s3);
            if (s3->unk_04 != 0) {
                func_0018E410(s3->unk_04);
                s3->unk_04 = 0;
                s3->unk_00 = 0;
            }
            D_0035FDF8--;
            func_00119548(s3);
        }
    }
    func_00119548(arg1);
    for (j = i + 1; j < arg0->unk_00; j++) {
        arg0->unk_04[j - 1] = arg0->unk_04[j];
    }
    arg0->unk_00--;
}
