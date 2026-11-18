#include "common.h"

typedef struct unk_func_002D1D50_0 {
    struct unk_func_002D1D50_0 *unk_00;
    struct unk_func_002D1D50_0 *unk_04;
} unk_func_002D1D50_0;

void func_002D1F20();
void func_002D1F10();
void func_002D2BB0();
void func_002D1D50(u8 *arg0, unk_func_002D1D50_0 *arg1);

void func_002D1D50(u8 *arg0, unk_func_002D1D50_0 *arg1) {
    unk_func_002D1D50_0 *temp_s2;
    unk_func_002D1D50_0 *temp_s3;

    temp_s2 = arg1->unk_00;
    if (temp_s2 != NULL) {
        temp_s3 = temp_s2->unk_00;
        if (temp_s3 != NULL) {
            if (temp_s3->unk_00 != NULL) {
                func_002D1D50(arg0, temp_s3->unk_00);
            }
            if (temp_s3->unk_04 != NULL) {
                func_002D1D50(arg0, temp_s3->unk_04);
            }
            func_002D1F20(arg0);
            func_002D1F10(arg0 + 4);
            func_002D2BB0(temp_s3);
        }
        temp_s3 = temp_s2->unk_04;
        if (temp_s3 != NULL) {
            if (temp_s3->unk_00 != NULL) {
                func_002D1D50(arg0, temp_s3->unk_00);
            }
            if (temp_s3->unk_04 != NULL) {
                func_002D1D50(arg0, temp_s3->unk_04);
            }
            func_002D1F20(arg0);
            func_002D1F10(arg0 + 4);
            func_002D2BB0(temp_s3);
        }
        func_002D2BB0(temp_s2);
    }
    temp_s2 = arg1->unk_04;
    if (temp_s2 != NULL) {
        temp_s3 = temp_s2->unk_00;
        if (temp_s3 != NULL) {
            if (temp_s3->unk_00 != NULL) {
                func_002D1D50(arg0, temp_s3->unk_00);
            }
            if (temp_s3->unk_04 != NULL) {
                func_002D1D50(arg0, temp_s3->unk_04);
            }
            func_002D1F20(arg0);
            func_002D1F10(arg0 + 4);
            func_002D2BB0(temp_s3);
        }
        temp_s3 = temp_s2->unk_04;
        if (temp_s3 != NULL) {
            if (temp_s3->unk_00 != NULL) {
                func_002D1D50(arg0, temp_s3->unk_00);
            }
            if (temp_s3->unk_04 != NULL) {
                func_002D1D50(arg0, temp_s3->unk_04);
            }
            func_002D1F20(arg0);
            func_002D1F10(arg0 + 4);
            func_002D2BB0(temp_s3);
        }
        func_002D2BB0(temp_s2);
    }
    func_002D2BB0(arg1);
}
