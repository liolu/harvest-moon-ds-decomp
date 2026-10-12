#include "m2c.h"

s32 func_020b0174();                                /* extern */
s32 func_020b01d0();                                /* extern */
extern s32 data_021c8c5c;

s32 func_020f69dc(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg0;
    if (var_r4 < 0xA) {
        if (arg1 == 3) {
            var_r4 += 0x4F;
        }
    } else if (var_r4 == 0x30) {
        temp_r0 = func_020b0174();
        switch (temp_r0) {                          /* irregular */
        case 2:
            var_r4 = 0x4C;
            break;
        case 0:
            var_r4 = 0x4A;
            break;
        case 1:
            var_r4 = 0x4B;
            break;
        }
    } else if ((var_r4 >= 0x31) && (var_r4 <= 0x33)) {
        if ((s32) (var_r4 - 0x30) < func_020b01d0()) {
            var_r4 = 0x4D;
        } else {
            var_r4 = 0x4E;
        }
    } else if ((var_r4 >= 0x41) && (var_r4 < 0x48)) {
        if (M2C_FIELD((data_021c8c5c + ((var_r4 - 0x41) * 8)), u8 *, 0x6171) == 1) {
            var_r4 = 0x48;
        } else {
            var_r4 = 0x49;
        }
    }
    return var_r4;
}
