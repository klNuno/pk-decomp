/* profile: o0_301 */
#include "common.h"

typedef struct unk_VMS_lGetVmsCommentFromFile_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_VMS_lGetVmsCommentFromFile_0;

void func_00119548(void *);
s32 func_0027CD60(s32, s32, s32, void *, s32);
void *malloc(s32);
void *memcpy(void *, void *, s32);
extern unk_VMS_lGetVmsCommentFromFile_0 D_003313F0[];
extern s32 D_003603B8;

s32 VMS_lGetVmsCommentFromFile(s32 arg0, s32 arg1, void *arg2) {
    void *buf;
    s32 ret;

    buf = malloc(0x200);
    if (D_003603B8 != 1 || buf == NULL) {
        return -1;
    }
    ret = func_0027CD60(D_003313F0[arg0].unk_00, D_003313F0[arg0].unk_04, arg1, buf, 0x10);
    if (ret != 1) {
        func_00119548(buf);
        return -1;
    }
    memcpy(arg2, buf, 0x10);
    func_00119548(buf);
    return ret;
}
