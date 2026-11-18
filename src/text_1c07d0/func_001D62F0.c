/* profile: o0 */
#include "common.h"

void func_001D6370(u8 *, u8 *);

void func_001D62F0(u8 *arg0, u8 *arg1) {
    func_001D6370(arg0, arg1);
    func_001D6370(arg0 + 0x10, arg1 + 0x10);
    func_001D6370(arg0 + 0x20, arg1 + 0x20);
    func_001D6370(arg0 + 0x30, arg1 + 0x30);
}
