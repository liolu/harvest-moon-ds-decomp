#include "m2c.h"

extern s32 data_021c8c5c;

s8 func_020b25d0(s32 arg0) {
    s32 var_r1;
    s8 var_ip;
    void *temp_r3;

    var_ip = 0;
    var_r1 = 0x41;
    do {
        temp_r3 = data_021c8c5c + 0x6170 + ((var_r1 - 0x41) * 8);
        switch (arg0) {                             /* irregular */
            case 0:
                if (M2C_FIELD(temp_r3, u8 *, 1) != 0xFF) {
                    var_ip += 1;
                }
                break;
            case 1:
                if (M2C_FIELD(temp_r3, u8 *, 1) == 1) {
                    var_ip += 1;
                }
                break;
            case 2:
                if (M2C_FIELD(temp_r3, u8 *, 1) == 2) {
                    var_ip += 1;
                }
                break;
        }
        var_r1 += 1;
    } while (var_r1 < 0x48);
    return var_ip;
}
