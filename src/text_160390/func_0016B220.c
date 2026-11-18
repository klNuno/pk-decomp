#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0016B220_0;

typedef struct {
    u8 pad_00[4];
    s16 unk_04;
    u8 pad_06[6];
    s16 *unk_0C;
} unk_func_0016B220_1;

typedef struct {
    u8 pad_00[4];
    unk_func_0016B220_0 **unk_04;
} unk_func_0016B220_2;

extern unk_func_0016B220_2 *D_0035FB04;

#define ACC(idx) \
    v = &verts[idx]; \
    x = v->unk_00; \
    y = v->unk_04; \
    z = v->unk_08; \
    if (x < minx) minx = x; \
    if (y < miny) miny = y; \
    if (z < minz) minz = z; \
    if (x > maxx) maxx = x; \
    if (y > maxy) maxy = y; \
    if (z > maxz) maxz = z;

void func_0016B220(unk_func_0016B220_1 *arg0, unk_func_0016B220_0 *arg1, unk_func_0016B220_0 *arg2) {
    unk_func_0016B220_0 *verts;
    unk_func_0016B220_0 *v;
    s16 *tri;
    s32 n;
    f32 minx;
    f32 miny;
    f32 minz;
    f32 maxx;
    f32 maxy;
    f32 maxz;
    f32 x;
    f32 y;
    f32 z;

    tri = arg0->unk_0C;
    n = arg0->unk_04;
    verts = *D_0035FB04->unk_04;
    v = &verts[tri[0]];
    minx = v->unk_00;
    miny = v->unk_04;
    minz = v->unk_08;
    maxx = minx;
    maxy = miny;
    maxz = minz;
    for (; n != 0; n--) {
        ACC(tri[0])
        ACC(tri[1])
        ACC(tri[2])
        tri += 3;
    }
    arg1->unk_00 = minx;
    arg1->unk_04 = miny;
    arg1->unk_08 = minz;
    arg2->unk_00 = maxx;
    arg2->unk_04 = maxy;
    arg2->unk_08 = maxz;
}
