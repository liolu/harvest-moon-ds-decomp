/* compiler: 2.0/sp1p5 -flag no-opt_common_subs */
#include "m2c.h"

extern void *data_021c8c5c;

void func_020b01a4(void) {
    void *temp_ip;

    temp_ip                                 = data_021c8c5c + 0x7804;
    M2C_FIELD(data_021c8c5c, s32 *, 0x7804) = (s32) M2C_FIELD(temp_ip, s32 *, 4);
    M2C_FIELD(temp_ip, s32 *, 4)            = 0;
}
