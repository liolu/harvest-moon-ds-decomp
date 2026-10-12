#include "m2c.h"

M2C_UNK func_0202c020(void *, u16, void *, s32, s32, M2C_UNK *, s32); /* extern */
M2C_UNK func_0203a278(void *, s32, s32, s32, s32);  /* extern */
s32 func_020ba190();                                /* extern */
extern M2C_UNK data_02185698;

void func_02038ab4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_ip;
    u16 temp_r4;

    if (arg3 == 0x17) {
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x2FA4) * 4)), s32 *, 0x2B94) = 6;
        temp_ip = M2C_FIELD(arg0, s32 *, 0x2FA4);
        M2C_FIELD(arg0, s32 *, 0x2FA4) = (s32) (temp_ip + 1);
        func_0203a278(arg0, (arg1 * 8) + 0x28, (arg2 * 8) + 8, (temp_ip * 0x2C) + (s32) (arg0 + 0x2BE4), 0x29);
    }
    if ((arg3 != 0x17) && (arg3 != 0xE)) {
        return;
    }
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x2B90);
    func_0202c020(arg0 + 0x2B60, temp_r4, arg0 + 0x2588, arg1 + 6, arg2, &data_02185698, func_020ba190());
}
