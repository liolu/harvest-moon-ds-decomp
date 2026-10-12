#include "m2c.h"

s32 func_020b00f0(M2C_UNK);                         /* extern */
s32 func_020b2950();                                /* extern */
u32 func_020b3480(M2C_UNK);                         /* extern */
s32 func_020c325c(M2C_UNK, s32);                    /* extern */
s32 func_020c332c(M2C_UNK, s32);                    /* extern */
s32 func_020c3634(M2C_UNK, s32);                    /* extern */
s32 func_020c368c(M2C_UNK, s32);                    /* extern */
s32 func_020c36e4(M2C_UNK, s32);                    /* extern */
s32 func_020c373c(M2C_UNK, s32);                    /* extern */
s32 func_020c3ab4(M2C_UNK, s32);                    /* extern */
s32 func_020c3be4(M2C_UNK, s32);                    /* extern */
s32 func_020c3d14(M2C_UNK, s32);                    /* extern */

s32 func_020c3794(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;
    u32 temp_r0_2;

    var_r4 = arg1;
    temp_r0 = func_020b2950();
    switch (temp_r0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_r4 -= func_020c3ab4(arg0, arg1);
        break;
    case 1:                                         /* switch 1 */
        var_r4 -= func_020c3be4(arg0, arg1);
        break;
    case 2:                                         /* switch 1 */
        var_r4 -= func_020c3d14(arg0, arg1);
        break;
    }
    if (var_r4 != 0) {
        var_r4 = func_020c332c(arg0, var_r4);
    }
    if (var_r4 != 0) {
        temp_r0_2 = func_020b3480(arg0);
        switch (temp_r0_2) {                        /* switch 2 */
        default:                                    /* switch 2 */
            break;
        case 0:                                     /* switch 2 */
            if (func_020b00f0(8) != 0) {
                var_r4 = func_020c3634(arg0, var_r4);
            }
            break;
        case 1:                                     /* switch 2 */
            if (func_020b00f0(0) != 0) {
                var_r4 = func_020c368c(arg0, var_r4);
            }
            break;
        case 2:                                     /* switch 2 */
            if (func_020b00f0(7) != 0) {
                var_r4 = func_020c36e4(arg0, var_r4);
            }
            break;
        case 3:                                     /* switch 2 */
            if (func_020b00f0(1) != 0) {
                var_r4 = func_020c373c(arg0, var_r4);
            }
            break;
        case 4:                                     /* switch 2 */
            var_r4 = func_020c325c(0, var_r4);
            if ((var_r4 != 0) && (func_020b00f0(7) != 0)) {
                var_r4 = func_020c36e4(arg0, var_r4);
            }
            break;
        case 5:                                     /* switch 2 */
            var_r4 = func_020c325c(1, var_r4);
            if ((var_r4 != 0) && (func_020b00f0(7) != 0)) {
                var_r4 = func_020c36e4(arg0, var_r4);
            }
            break;
        case 6:                                     /* switch 2 */
            var_r4 = func_020c325c(2, var_r4);
            if ((var_r4 != 0) && (func_020b00f0(7) != 0)) {
                var_r4 = func_020c36e4(arg0, var_r4);
            }
            break;
        case 7:                                     /* switch 2 */
            var_r4 = func_020c325c(3, var_r4);
            if ((var_r4 != 0) && (func_020b00f0(7) != 0)) {
                var_r4 = func_020c36e4(arg0, var_r4);
            }
            break;
        case 8:                                     /* switch 2 */
            var_r4 = func_020c325c(4, var_r4);
            if ((var_r4 != 0) && (func_020b00f0(7) != 0)) {
                var_r4 = func_020c36e4(arg0, var_r4);
            }
            break;
        case 9:                                     /* switch 2 */
            var_r4 = func_020c325c(5, var_r4);
            if ((var_r4 != 0) && (func_020b00f0(8) != 0)) {
                var_r4 = func_020c3634(arg0, var_r4);
            }
            break;
        case 10:                                    /* switch 2 */
            var_r4 = func_020c325c(6, var_r4);
            if ((var_r4 != 0) && (func_020b00f0(8) != 0)) {
                var_r4 = func_020c3634(arg0, var_r4);
            }
            break;
        case 11:                                    /* switch 2 */
            var_r4 = func_020c325c(7, var_r4);
            if ((var_r4 != 0) && (func_020b00f0(8) != 0)) {
                var_r4 = func_020c3634(arg0, var_r4);
            }
            break;
        }
    }
    return arg1 - var_r4;
}
