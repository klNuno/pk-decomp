#include "common.h"

typedef struct unk_func_00131F70_1 unk_func_00131F70_1;

typedef struct unk_func_00131F70_0 {
    s32 unk_00;
    struct unk_func_00131F70_0 *unk_04;
    struct unk_func_00131F70_0 *unk_08;
    unk_func_00131F70_1 *unk_0C;
} unk_func_00131F70_0;

struct unk_func_00131F70_1 {
    unk_func_00131F70_0 *unk_00;
    unk_func_00131F70_0 *unk_04;
    s32 unk_08;
};

typedef struct {
    s32 unk_00;
    unk_func_00131F70_1 *unk_04;
} unk_func_00131F70_2;

void func_00131F70(unk_func_00131F70_2 *arg0, unk_func_00131F70_0 *arg1) {
    if (arg1->unk_04 != NULL) {
        arg1->unk_04->unk_08 = arg1->unk_08;
    }
    if (arg1->unk_08 != NULL) {
        arg1->unk_08->unk_04 = arg1->unk_04;
    }
    if (arg1->unk_0C != NULL) {
        arg1->unk_0C->unk_08--;
        if (arg1->unk_0C->unk_00 == arg1) {
            arg1->unk_0C->unk_00 = arg1->unk_04;
        }
        if (arg1->unk_0C->unk_04 == arg1) {
            arg1->unk_0C->unk_04 = arg1->unk_08;
        }
    }
    arg1->unk_04 = NULL;
    arg1->unk_08 = NULL;
    arg1->unk_0C = NULL;
    arg1->unk_04 = NULL;
    arg1->unk_08 = arg0->unk_04->unk_04;
    arg1->unk_0C = arg0->unk_04;
    if (arg0->unk_04->unk_00 == NULL) {
        arg0->unk_04->unk_00 = arg1;
    } else {
        arg0->unk_04->unk_04->unk_04 = arg1;
    }
    arg0->unk_04->unk_04 = arg1;
    arg0->unk_04->unk_08++;
}
