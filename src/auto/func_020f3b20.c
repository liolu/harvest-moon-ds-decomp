#include "engine.h"
#include "m2c.h"

M2C_UNK func_020f3610(M2C_UNK);
M2C_UNK func_020f3630(M2C_UNK);
void func_0212e9f4(M2C_UNK, M2C_UNK);
void func_0212ea20(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0212fc60(M2C_UNK);

void func_020f3b20(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;

    M2C_FIELD((void *) func_020f3630(arg0), s8 *, 5) = (s8) arg2;
    M2C_FIELD(arg0, s32 *, 0x3C)                     = arg1;
    if (M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        func_0212e9f4(arg0 + 0x20, func_0212fc60(M2C_FIELD(arg0, s32 *, 0x3C)));
        func_0212ea20(arg0 + 0x20, (s32) M2C_FIELD((void *) func_020f3610(arg0), s8 *, 5), 0);
        return;
    }
    temp_r1 = (M2C_FIELD((void *) func_020f3610(arg0), s8 *, 5) & 3) | (M2C_FIELD(arg0, s32 *, 0x3C) * 4);
    if (temp_r1 == M2C_FIELD(arg0, u8 *, 0x2F)) {
        return;
    }
    func_0212ea20(arg0 + 0x20, temp_r1, 0);
}
