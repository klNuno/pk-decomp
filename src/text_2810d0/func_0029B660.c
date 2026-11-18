/* profile: opt_300 */
#include "common.h"

typedef struct {
    u32 unk_00;
    void *unk_04;
} unk_func_0029B660_0;
typedef struct unk_func_0029B660_1 {
    struct unk_func_0029B660_1 *unk_00;
    u32 unk_04;
    s32 unk_08;
    void *unk_0C[1];
} unk_func_0029B660_1;

void func_0029DC80(void *);
void *memcpy(void *, const void *, u32);

extern void *(*D_0035F644)(s32);
extern void (*D_0035F64C)(void *);
extern unk_func_0029B660_0 D_007B8070[];
extern unk_func_0029B660_1 *D_007B8270[], *D_007B8274[];

void func_0029B660(u32 arg0, s32 arg1) {
    unk_func_0029B660_1 *p = D_007B8270[0];
    unk_func_0029B660_0 *temp = D_007B8070;
    unk_func_0029B660_1 *prev = NULL;
    s32 i;

    if (arg1 <= 0) {
        return;
    }
    if (arg1 == 1) {
        for (i = 0; i < 64; i++, temp++) {
            if (temp->unk_00 == arg0) {
                func_0029DC80(temp->unk_04);
                temp->unk_00 = 0;
                temp->unk_04 = NULL;
                return;
            }
        }
    }
    for (; p; prev = p, p = p->unk_00) {
        if (p->unk_04 < arg0 && arg0 < p->unk_04 + p->unk_08) {
            s32 n = arg0 - p->unk_04;
            s32 size = 0x10 + (n - 1) * 4;
            unk_func_0029B660_1 *temp = D_0035F644(size);
            memcpy(temp, p, size);
            temp->unk_08 = n;
            temp->unk_00 = p;
            if (prev == NULL) {
                D_007B8270[0] = temp;
            } else {
                prev->unk_00 = temp->unk_00;
            }
            p->unk_04 = arg0;
            p->unk_08 -= n;
            memcpy(p->unk_0C, p->unk_0C[n], n * 4);
        }
        if (p->unk_04 == arg0) {
            s32 count = p->unk_08;
            s32 n = count < arg1 ? count : arg1;
            void **temp = p->unk_0C;
            for (; n > 0; n--) {
                func_0029DC80(*temp++);
            }
            if (arg1 < count) {
                void **out = p->unk_0C;
                s32 left = count - arg1;
                for (; left > 0; left--) {
                    *out++ = *temp++;
                }
                return;
            }
            if (p->unk_00 == NULL) {
                D_007B8274[0] = prev;
            }
            if (prev == NULL) {
                D_007B8270[0] = p->unk_00;
            } else {
                prev->unk_00 = p->unk_00;
            }
            D_0035F64C(p);
            if (count < arg1) {
                func_0029B660(arg0 + count, arg1 - count);
            }
            return;
        }
    }
}
