#include "engine.h"
#include "m2c.h"

s32 func_020f3610(void *);
void func_0212ea84(void *, M2C_UNK);

void func_020f3bb8(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        func_0212ea84(arg0 + 0x20, M2C_FIELD((void *) func_020f3610((void *) arg0), s8 *, 5) + (arg1 * 4));
        return;
    }
    func_0212ea84(arg0 + 0x20,
                  (M2C_FIELD((void *) func_020f3610((void *) arg0), s8 *, 5) & 3) | (M2C_FIELD(arg0, s32 *, 0x3C) * 4));
}
