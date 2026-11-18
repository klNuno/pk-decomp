#include "common.h"

typedef struct {
    void *unk_00;
} unk_func_002CF640_1;

typedef struct {
    u8 pad_00[0x4];
    u8 unk_04[0x4];
    void *unk_08;
} unk_func_002CF640_0;

void func_002CF6F0(unk_func_002CF640_0 *, s32);
void func_002CF740(void *, s32);
void func_002CFE20(unk_func_002CF640_1 *, unk_func_002CF640_0 *, unk_func_002CF640_1 *, unk_func_002CF640_1 *);
void func_00304B00(unk_func_002CF640_0 *);

unk_func_002CF640_0 *func_002CF640(unk_func_002CF640_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            unk_func_002CF640_1 last;
            unk_func_002CF640_1 first;
            unk_func_002CF640_1 ret;

            last.unk_00 = arg0->unk_04;
            first.unk_00 = arg0->unk_08;
            func_002CFE20(&ret, arg0, &first, &last);
            if (arg0->unk_04 != NULL) {
                if (arg0->unk_04 != NULL) {
                    func_002CF740(arg0->unk_04, 0);
                }
            }
            if (arg0 != NULL) {
                if (arg0 != NULL) {
                    func_002CF6F0(arg0, 0);
                }
            }
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
