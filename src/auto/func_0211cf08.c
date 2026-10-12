#include "m2c.h"

s32 func_020aae40(M2C_UNK);                         /* extern */
s32 func_020c5828(M2C_UNK);                         /* extern */
M2C_UNK func_020c5844(M2C_UNK, u8);                 /* extern */
M2C_UNK func_0212fe94(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */

s32 func_0211cf08(void *arg0) {
    s32 temp_r0;
    u8 temp_r4;

    temp_r4 = func_020c5828(0x10) + 1;
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E0), s32 *, 0x364);
    if (temp_r0 != 0) {
        return 0;
    }
    if (((u32) temp_r4 >= 0xAU) && (temp_r0 == 0) && (func_020aae40(0x47) == 0)) {
        func_0212fe94(M2C_FIELD(arg0, void **, 0x1E0) + 8, 0x47, 0, 0, 0, 0, 0, 0, 0);
        return 1;
    }
    func_020c5844(0x10, temp_r4);
    return 0;
}
