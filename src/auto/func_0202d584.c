#include "m2c.h"

M2C_UNK func_0202d5c8(void *, u16);                 /* extern */

void func_0202d584(void *arg0, u32 arg1) {
    u16 temp_r2;
    u16 temp_r2_2;
    u32 var_r1;

    var_r1 = arg1;
    temp_r2 = M2C_FIELD(arg0, u16 *, 0x26);
    if (var_r1 < (u32) temp_r2) {
        var_r1 = (u32) temp_r2;
    }
    M2C_FIELD(arg0, u16 *, 0x1A) = (u16) var_r1;
    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) ((M2C_FIELD(arg0, u16 *, 0x1A) - M2C_FIELD(arg0, u16 *, 0x26)) * 8);
    temp_r2_2 = M2C_FIELD(arg0, u16 *, 0x1E);
    if ((u32) M2C_FIELD(arg0, u16 *, 0x1C) > (u32) temp_r2_2) {
        M2C_FIELD(arg0, u16 *, 0x1C) = temp_r2_2;
    }
    func_0202d5c8(arg0, M2C_FIELD(arg0, u16 *, 0x1C));
}
