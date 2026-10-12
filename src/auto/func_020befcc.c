#include "m2c.h"

s32 func_020c5828(s32);                             /* extern */
M2C_UNK func_020c5844(s32, u8);                     /* extern */

s32 func_020befcc(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 var_r6;
    s32 var_r7;

    var_r6 = 0x14;
    var_r7 = 0;
loop_1:
    temp_r0 = func_020c5828(var_r6);
    if (arg0 == temp_r0) {
        temp_r4 = func_020c5828(var_r6 + 1);
        temp_r0_2 = func_020c5828(var_r6 + 2);
        if ((arg1 == temp_r4) && (arg2 == temp_r0_2)) {
            func_020c5844(var_r6, (u8) (temp_r0 | 0x80));
            return var_r7;
        }
        goto block_7;
    }
block_7:
    var_r7 += 1;
    var_r6 += 3;
    if (var_r7 >= 3) {
        return -1;
    }
    goto loop_1;
}
