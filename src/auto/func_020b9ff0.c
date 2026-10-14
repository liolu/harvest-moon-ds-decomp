#include "m2c.h"

s32 func_020aae40(s32);                             /* extern */

s32 func_020b9ff0(s32 arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;

    switch (arg0) {                                 /* irregular */
        case 0x2:
            if (func_020aae40(0x389) == 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            return var_r0;
        case 0x3:
            if (func_020aae40(0x38E) == 0) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }
            return var_r0_2;
        case 0x4:
            if (func_020aae40(0x37A) == 0) {
                var_r0_3 = 1;
            } else {
                var_r0_3 = 0;
            }
            return var_r0_3;
        case 0x7:
            if (func_020aae40(0x37F) == 0) {
                var_r0_4 = 1;
            } else {
                var_r0_4 = 0;
            }
            return var_r0_4;
        case 0xE:
            if (func_020aae40(0x384) == 0) {
                var_r0_5 = 1;
            } else {
                var_r0_5 = 0;
            }
            return var_r0_5;
        case 0x2D:
            return 1;
        case 0x31:
            return 1;
        case 0x32:
            return 1;
        case 0x33:
            return 1;
        default:
            return 0;
    }
}
