#include "m2c.h"

extern M2C_UNK data_0215d634;
extern void *data_021c8c5c;

void func_020f133c(void) {
    u8 temp_r1;
    void *temp_r3;

    temp_r3 = data_021c8c5c + 0x7420;
    temp_r1 = ((s8 *)&data_0215d634)[M2C_FIELD(data_021c8c5c, s8 *, 0x1A)];
    if ((u32) M2C_FIELD(temp_r3, u8 *, 2) > (u32) temp_r1) {
        M2C_FIELD(temp_r3, u8 *, 2) = temp_r1;
    }
}
