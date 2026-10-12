#include "m2c.h"

M2C_UNK func_020caf70(M2C_UNK *, M2C_UNK, s32, s32, s32); /* extern */
s32 func_0214ce28(s32);                             /* extern */
extern M2C_UNK data_022beb04;

void func_020bbd64(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r6;
    s32 temp_r6_2;

    if (arg1 == 0x19) {
        return;
    }
    temp_r0 = arg2 << 0xC;
    if (arg1 & 0x80) {
        temp_r6 = func_0214ce28(temp_r0 + 0x1000);
        func_020caf70(&data_022beb04, arg0, arg1 & 0x7F, temp_r6, func_0214ce28((arg3 << 0xC) + 0x2000));
        return;
    }
    temp_r6_2 = func_0214ce28(temp_r0 + 0x800);
    func_020caf70(&data_022beb04, arg0, arg1 & 0x7F, temp_r6_2, func_0214ce28((arg3 << 0xC) + 0x1000));
}
