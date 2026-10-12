#include "m2c.h"

extern u32 data_02193010;

u16 func_020c9f18(void) {
    u32 temp_r2;

    temp_r2 = (data_02193010 * 0x41C64E6D) + 0x3039;
    data_02193010 = temp_r2;
    return (u16) (temp_r2 >> 0x10);
}
