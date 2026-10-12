#include "m2c.h"

M2C_UNK func_0202c020(void *, u16, void *, s32, s32, s32, s32); /* extern */
M2C_UNK func_0203230c(s32, s32 *, M2C_UNK);         /* extern */
M2C_UNK func_0203a278(void *, s32, s32, s32, s32);  /* extern */
extern M2C_UNK data_021854bc;
extern void *data_021c8c5c;

void func_02039fd8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 spC;
    s32 temp_r4;
    s32 var_r3;
    s32 var_r6;
    s32 var_r7;

    if (arg3 != 0x17) {
        return;
    }
    var_r6 = 0;
    var_r7 = 0;
    do {
        func_0203230c(var_r7, &spC, 0);
        var_r7 += 1;
        var_r6 += spC;
    } while (var_r7 < 5);
    if (var_r6 != 0) {
        var_r3 = 0x23;
    } else {
        var_r3 = 0;
    }
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x2FA4) * 4)), s32 *, 0x2B94) = var_r3;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2FA4);
    M2C_FIELD(arg0, s32 *, 0x2FA4) = (s32) (temp_r4 + 1);
    func_0203a278(arg0, ((arg1 - 3) * 8) + 0x28, (arg2 * 8) + 8, (temp_r4 * 0x2C) + (s32) (arg0 + 0x2BE4), 2);
    func_0202c020(arg0 + 0x2B60, (u16) (M2C_FIELD(arg0, u16 *, 0x2B90) + 0x370), arg0 + 0x2588, arg1 + 3, arg2, ((s32 *)&data_021854bc)[(M2C_FIELD(data_021c8c5c, u8 *, 0x8E5C) - 1)], var_r6);
}
