#include "m2c.h"
#include "engine.h"

M2C_UNK func_020f7bd0(M2C_UNK, M2C_UNK);
void func_020f7c54(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020faa9c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020f7cf0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 temp_r4;

    temp_r4 = *(u16 *) func_020f7bd0(arg0, (s32) (u16) arg3);
    func_020f7c54(arg0, func_020faa9c(arg0, arg3 >> 0xC, arg1, arg2), (s32) (u8) temp_r4, (s32) temp_r4 >> 8);
}
