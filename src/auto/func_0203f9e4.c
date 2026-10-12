#include "m2c.h"

M2C_UNK func_0202c20c(s32, s32, s32, s32, M2C_UNK *, s32); /* extern */
M2C_UNK func_0202c694(s32, u32, M2C_UNK);           /* extern */
M2C_UNK func_0202c6a0(s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_0203fac8(s32, s32);                    /* extern */
s32 func_020c4d58();                                /* extern */
s32 func_020c4e08();                                /* extern */
M2C_UNK func_020c4fc0();                            /* extern */
s32 func_0214c9fc(s32, s32);                        /* extern */
s32 func_0214cde8();                                /* extern */
s32 func_0214ce28();                                /* extern */
M2C_UNK func_0214ceb8(s32, s32);                    /* extern */
extern u32 data_02180f94;
extern M2C_UNK data_021870a4;

void func_0203f9e4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r0;

    func_0202c694(arg0 + 0x37F8, (u32) data_02180f94 >> 5, 9);
    func_0203fac8(arg0, arg3);
    func_020c4fc0();
    func_0214ceb8(0x42900000, func_0214c9fc(func_0214ce28(), 0x477FFF00));
    func_0202c6a0(arg0 + 0x37F8, arg0 + 0x3220, arg1 + 6, arg2, 9, func_0214cde8(), 0);
    if (arg3 == 7) {
        var_r0 = func_020c4d58();
    } else {
        var_r0 = func_020c4e08();
    }
    func_0202c20c(arg0 + 0x37F8, arg0 + 0x3220, arg1 + 0xD, arg2 + 1, &data_021870a4, var_r0);
}
