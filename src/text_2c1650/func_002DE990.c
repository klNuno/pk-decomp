/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002DE990_1 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002DE990_1;

typedef struct unk_func_002DE990_0 {
    u8 pad_00[0x4];
    u8 *unk_04;
    u8 *unk_08;
} unk_func_002DE990_0;

void func_002DA280(s32 *, u8 *, s32 *);
void func_002D9630(unk_func_002DE990_1 **, s32 *);
s32 func_002D9620(u8 *);
void func_002D9610(unk_func_002DE990_1 **, s32);
s32 *func_002D9600(u8 *);
s32 *func_002DE980(u8 *);

u8 *func_002DE990(unk_func_002DE990_0 *arg0, s32 arg1) {
    u8 *map;
    unk_func_002DE990_1 *end;
    unk_func_002DE990_1 *it;
    unk_func_002DE990_1 *node;
    s32 idx;
    s32 key;
    s32 tmp;

    key = arg1;
    map = arg0->unk_08;
    func_002DA280(&tmp, map + 0x60, &key);
    func_002D9630(&it, &tmp);
    node = it;
    func_002D9610(&end, func_002D9620(map + 0x60));
    if (node == end) {
        idx = *func_002D9600(map + 0x60);
    } else {
        idx = node->unk_10;
    }
    if (idx == *func_002DE980(arg0->unk_08 + 0x60)) {
        return NULL;
    }
    return arg0->unk_04 + idx * 0x10;
}
