#include "engine.h"
#include "m2c.h"

s32 func_020f3610(void *);
s32 func_020f3630(void *);
void func_0212e9f4(void *, void *);
void func_0212ea20(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0212ea84(void *, M2C_UNK);
M2C_UNK func_0212fc60(M2C_UNK);

void func_020f39e4(s32 arg0, s32 arg1) {
    s32 temp_r0;

    if (arg1 == M2C_FIELD((void *) func_020f3610((void *) arg0), s8 *, 5)) {
        return;
    }
    M2C_FIELD((void *) func_020f3630((void *) arg0), s8 *, 5) = (s8) arg1;
    if (M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 == 0) {
        func_0212e9f4(arg0 + 0x20, (void *) func_0212fc60(M2C_FIELD(arg0, s32 *, 0x3C)));
        func_0212ea84(arg0 + 0x20, (s32) M2C_FIELD((void *) func_020f3610((void *) arg0), s8 *, 5));
        return;
    }
    if (temp_r0 == 0xAE) {
        func_0212ea20(arg0 + 0x20, (s32) M2C_FIELD((void *) func_020f3610((void *) arg0), s8 *, 5), 0);
        return;
    }
    func_0212ea84(arg0 + 0x20,
                  (M2C_FIELD((void *) func_020f3610((void *) arg0), s8 *, 5) & 3) | (M2C_FIELD(arg0, s32 *, 0x3C) * 4));
}
