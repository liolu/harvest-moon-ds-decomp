#include "m2c.h"

M2C_UNK func_0202c20c(s32, s32, M2C_UNK, M2C_UNK, s8 *); /* extern */
s32 func_0214c9fc(s32, s32);                        /* extern */
s32 func_0214cdb4();                                /* extern */
s32 func_0214ce28(s32);                             /* extern */
M2C_UNK func_0214ceb8(s32, s32);                    /* extern */

void func_0203a414(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    u8 sp4[12];
    s32 temp_r0;
    s32 temp_r7;
    s32 var_r3;
    s8 *var_r2;

    temp_r7 = func_0214ce28(arg3);
    func_0214ceb8(0x41200000, func_0214c9fc(temp_r7, func_0214ce28(arg4)));
    temp_r0 = func_0214cdb4();
    var_r3 = 0;
    if (temp_r0 > 0) {
        var_r2 = sp4;
        do {
            var_r3 += 1;
            *var_r2 = 0x48;
            var_r2 += 1;
        } while (var_r3 < temp_r0);
    }
    (sp4)[var_r3] = 0;
    func_0202c20c(arg0 + 0x2B60, arg0 + 0x2588, arg1, arg2, sp4);
}
