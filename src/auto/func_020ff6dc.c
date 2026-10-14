#include "engine.h"
#include "m2c.h"

M2C_UNK func_020f3630(M2C_UNK);
void func_020f3b20(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020ff6dc(s32 arg0) {
    M2C_FIELD(arg0, s8 *, 0x70) = 7;
    func_020f3b20(arg0, 0, (s32) M2C_FIELD((void *) func_020f3630(arg0), s8 *, 5));
}
