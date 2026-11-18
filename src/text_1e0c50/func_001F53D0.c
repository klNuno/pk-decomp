/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001F53D0_0;

typedef struct {
    f32 unk_00;
    unk_func_001F53D0_0 unk_04;
} unk_func_001F53D0_1;

void func_001388F0(unk_func_001F53D0_1 *, unk_func_001F53D0_0 *, unk_func_001F53D0_0 *);
f32 func_00151360(f32);
f32 func_001E60E0(f32);

void func_001F53D0(unk_func_001F53D0_0 *arg0, f32 arg1, f32 arg2, unk_func_001F53D0_0 *arg3) {
    unk_func_001F53D0_1 q;
    f32 len;

    q.unk_00 = arg1;
    ((s32 *)&q.unk_04)[0] = ((s32 *)arg3)[0];
    ((s32 *)&q.unk_04)[1] = ((s32 *)arg3)[1];
    ((s32 *)&q.unk_04)[2] = ((s32 *)arg3)[2];
    func_001388F0(&q, arg0, arg0);
    q.unk_04.unk_00 = arg0->unk_04 * arg3->unk_08 - arg0->unk_08 * arg3->unk_04;
    q.unk_04.unk_04 = arg0->unk_08 * arg3->unk_00 - arg0->unk_00 * arg3->unk_08;
    q.unk_04.unk_08 = arg0->unk_00 * arg3->unk_04 - arg0->unk_04 * arg3->unk_00;
    len = func_001E60E0(func_00151360(q.unk_04.unk_00) + func_00151360(q.unk_04.unk_04) + func_00151360(q.unk_04.unk_08));
    if (len != 0.0f) {
        len = 1.0f / len;
        q.unk_04.unk_00 = len * q.unk_04.unk_00;
        q.unk_04.unk_04 = len * q.unk_04.unk_04;
        q.unk_04.unk_08 = len * q.unk_04.unk_08;
    } else {
        q.unk_04 = q.unk_04;
    }
    q.unk_00 = arg2;
    func_001388F0(&q, arg0, arg0);
}
