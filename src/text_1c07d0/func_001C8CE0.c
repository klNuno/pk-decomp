/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    u16 unk_50;
    u8 unk_52;
    u8 unk_53;
} unk_func_001C8CE0_0;

typedef struct unk_func_001C8CE0_1 {
    char unk_00[0x50];
    unk_func_001C8CE0_0 *unk_50;
    u8 pad_54[0x10];
    struct unk_func_001C8CE0_1 *unk_64;
    s32 unk_68;
    u8 pad_6C[9];
    u8 unk_75;
} unk_func_001C8CE0_1;

s32 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_001C8CE0_1 *func_001ABD70(void);
s32 func_001C5E40(s32);
void *func_001C5E60(s32);
void func_001C6F10(unk_func_001C8CE0_0 *, s32);
void *func_001CD790(unk_func_001C8CE0_0 *, s32, s32 *);
unk_func_001C8CE0_0 *func_001CD8A0(unk_func_001C8CE0_0 *, unk_func_001C8CE0_0 *, u16, s32, f32);
void func_001CDDA0(unk_func_001C8CE0_0 *);
s32 func_001CDE00(unk_func_001C8CE0_0 *, unk_func_001C8CE0_0 *, u16);
s32 memcmp(const void *, const void *, u32);
char *strcpy(char *, const char *);
extern char D_0034BAD0[];

unk_func_001C8CE0_1 *func_001C8CE0(unk_func_001C8CE0_0 *arg0, u16 arg1, unk_func_001C8CE0_1 *arg2,
                                 s32 arg3, s32 arg4, f32 arg5) {
    unk_func_001C8CE0_1 *temp_s0;
    unk_func_001C8CE0_0 *temp_s1;
    void *temp_s2;
    void *temp_s3;
    s32 temp_s4;
    unk_func_001C8CE0_0 *temp_s5;
    s32 unk_8C;

    temp_s1 = arg2->unk_50;
    if (arg0->unk_53 != temp_s1->unk_53 || temp_s1->unk_53 < 2) {
        return NULL;
    }
    temp_s4 = *HIE_fn_hGetSuperObjectObject(arg3);
    temp_s3 = func_001C5E60(temp_s4);
    temp_s2 = func_001CD790(temp_s1, 0, &unk_8C);
    if (temp_s3 != NULL && temp_s2 == NULL) {
        return NULL;
    }
    if (temp_s3 == NULL && temp_s2 != NULL) {
        return NULL;
    }
    if (unk_8C != func_001C5E40(temp_s4)) {
        return NULL;
    }
    if (temp_s3 != NULL && temp_s2 != NULL &&
        memcmp(temp_s3, temp_s2, func_001C5E40(temp_s4) * 4) != 0) {
        return NULL;
    }
    if (arg1 >= arg0->unk_50) {
        arg1 = (u16)((s16)arg0->unk_50 - 1);
    }
    if (func_001CDE00(arg0, temp_s1, arg1) != 0) {
        return NULL;
    }
    temp_s5 = func_001CD8A0(arg0, temp_s1, arg1, arg4, arg5);
    if (temp_s5 == NULL) {
        return NULL;
    }
    temp_s0 = func_001ABD70();
    if (temp_s0 == NULL) {
        func_001CDDA0(temp_s5);
        return NULL;
    }
    strcpy(temp_s0->unk_00, D_0034BAD0);
    temp_s0->unk_50 = temp_s5;
    temp_s0->unk_64 = arg2;
    temp_s0->unk_75 = temp_s0->unk_50->unk_52;
    temp_s0->unk_68 = arg2->unk_68;
    func_001C6F10(temp_s0->unk_50, 1);
    return temp_s0;
}
