#include "m2c.h"

s32 func_020c8b28();                                /* extern */
M2C_UNK func_0214442c();                            /* extern */
s32 func_02144b74(s32, s32);                        /* extern */
extern s32 data_021c8cc8;

void func_020c7680(void) {
    s32 temp_r0;
    s32 temp_r4;

    func_0214442c();
    temp_r4 = func_02144b74(0, 0);
    temp_r0 = func_020c8b28();
    data_021c8cc8 = temp_r0;
    func_02144b74(temp_r0, temp_r4);
}
