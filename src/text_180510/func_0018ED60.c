/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0018ED60_0 {
    u8 pad_00[0x30];
    void *unk_30;
} unk_func_0018ED60_0;

extern u8 D_0035E470[];
void *malloc(u32);
void func_0018FC90();

unk_func_0018ED60_0 *func_0018ED60(void) {
    unk_func_0018ED60_0 *temp = malloc(0x34);

    if (temp != 0) {
        temp->unk_30 = D_0035E470;
        func_0018FC90(temp);
    }
    return temp;
}
