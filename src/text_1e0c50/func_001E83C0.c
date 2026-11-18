/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    void *unk_04;
    void *unk_08;
} unk_func_001E83C0_0;

void func_001EDC10(void *);
void func_00222F50(s32, s32);

void func_001E83C0(unk_func_001E83C0_0 *arg0) {
    void *temp;

    func_00222F50(0, 0);
    if (arg0 != NULL) {
        temp = arg0->unk_04;
        if (temp != NULL) {
            func_001EDC10(temp);
        }
        temp = arg0->unk_08;
        if (temp != NULL) {
            func_001EDC10(temp);
        }
    }
}
