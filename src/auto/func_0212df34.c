#include "m2c.h"

s32 func_020c8b28(M2C_UNK);                         /* extern */
M2C_UNK func_020c8b40(s32);                         /* extern */
s32 func_020c934c(u8);                              /* extern */
M2C_UNK func_0212e01c(M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_0212f468(M2C_UNK *, s32, u16, M2C_UNK); /* extern */
M2C_UNK func_0213f234();                            /* extern */
M2C_UNK func_0213f27c(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0213f2e8();                            /* extern */
M2C_UNK func_0213f32c();                            /* extern */
M2C_UNK func_0213f344(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0213f3a8();                            /* extern */
M2C_UNK func_02140988(s32, M2C_UNK);                /* extern */

void func_0212df34(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, u32 arg3, u8 arg4) {
    u8 sp0[128];
    s32 temp_r0;
    s32 var_r1;

    if (arg3 < 0x80U) {
        func_0212e01c(arg0, arg1, sp0, func_020c934c(arg4) + (arg3 << 5));
    } else {
        temp_r0 = func_020c8b28(0x20);
        func_0212e01c(arg0, arg1, sp0, temp_r0);
        func_02140988(temp_r0, 0x20);
        if (arg4 != 0) {
            func_0213f234();
            func_0213f27c(temp_r0, arg3 << 5, 0x20);
            func_0213f2e8();
        } else {
            func_0213f32c();
            func_0213f344(temp_r0, arg3 << 5, 0x20);
            func_0213f3a8();
        }
        func_020c8b40(temp_r0);
    }
    if (arg4 != 0) {
        var_r1 = 0x06400000;
    } else {
        var_r1 = 0x06600000;
    }
    func_0212f468(sp0, var_r1 + (arg2 << 7), (u16) arg3, 4);
}
