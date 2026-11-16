/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern s32 data_021c8c5c;

void func_020b9d48(void) {
    s32 temp_ip;
    s32 var_lr;
    u16 temp_r0;

    var_lr = 1;
    do {
        temp_ip = ((var_lr - 1) * 0x28) + (data_021c8c5c + 0x523C);
        temp_r0 = M2C_FIELD(temp_ip, u16 *, 2);
        var_lr += 1;
        M2C_FIELD(temp_ip, s16 *, 2) = (s16) (temp_r0 & ~1);
    } while (var_lr < 0x34);
}
