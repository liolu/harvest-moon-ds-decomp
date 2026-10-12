#include "m2c.h"

s32 func_020c5794();                                /* extern */
extern void *data_021c8c5c;

u32 func_020c5a4c(u32 arg0) {
    u32 var_r4;

    var_r4 = 0;
    switch (arg0) {
    default:
        break;
    case 0:
        var_r4 = (u32) (M2C_FIELD(data_021c8c5c, u16 *, 0x7800) << 0x1D) >> 0x1D;
        break;
    case 1:
        var_r4 = (u32) (M2C_FIELD(data_021c8c5c, u16 *, 0x7800) << 0x1A) >> 0x1D;
        break;
    case 3:
        var_r4 = (u32) (M2C_FIELD(data_021c8c5c, u16 *, 0x7800) << 0x17) >> 0x1D;
        break;
    case 4:
        var_r4 = (u32) (M2C_FIELD(data_021c8c5c, u16 *, 0x7800) << 0x14) >> 0x1D;
        break;
    case 5:
        var_r4 = (u32) (M2C_FIELD(data_021c8c5c, u16 *, 0x7800) << 0x11) >> 0x1D;
        break;
    case 2:
    case 6:
    case 7:
    case 8:
    case 9:
        if (func_020c5794() == 0) {
            var_r4 = 1;
        }
        break;
    }
    return var_r4;
}
