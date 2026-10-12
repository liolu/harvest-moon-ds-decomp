#include "m2c.h"

M2C_UNK func_0212ea20(void *, M2C_UNK, u8);         /* extern */

void func_0212ea84(void *arg0, M2C_UNK arg1) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x17);
    func_0212ea20(arg0, arg1, M2C_FIELD(arg0, u8 *, 0x14));
    M2C_FIELD(arg0, u8 *, 0x17) = temp_r4;
}
