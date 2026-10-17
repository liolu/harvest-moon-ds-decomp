#include "m2c.h"

u8 func_020f7abc(void *arg0, u32 arg1, u32 arg2) {
    u16 temp_ip;

    temp_ip = M2C_FIELD(arg0, u16 *, 0x14);
    if ((arg1 < (u32) temp_ip) && (arg2 < (u32) M2C_FIELD(arg0, u16 *, 0x16))) {
        return *(s8 *) (arg1 + ((temp_ip * arg2) + M2C_FIELD(arg0, s32 *, 0xD8)));
    }
    return 0U;
}