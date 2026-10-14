#include "m2c.h"

s32 func_020b2950(s16 *);                           /* extern */
s32 func_020b2e18(s16 *);                           /* extern */

s32 func_020b3480(s16 *arg0) {
    s16 temp_r2;
    s32 temp_r0;
    s32 var_r0;

    temp_r2 = *arg0;
    switch ((s32) temp_r2) {                        /* switch 1; irregular */
        case 0x18D:                                     /* switch 1 */
            return 4;
        case 0x18E:                                     /* switch 1 */
            return 5;
        case 0x18F:                                     /* switch 1 */
            return 6;
        case 0xF:                                       /* switch 1 */
            return 7;
        case 0x1C:                                      /* switch 1 */
            return 8;
        case 0x13F:                                     /* switch 1 */
            return 0xB;
        case 0x140:                                     /* switch 1 */
            return 0xA;
        case 0x141:                                     /* switch 1 */
            return 9;
        default:                                        /* switch 1 */
            temp_r0 = func_020b2950(arg0);
            switch (temp_r0) {                          /* switch 2; irregular */
                case 0:                                     /* switch 2 */
                    return 1;
                case 2:                                     /* switch 2 */
                    return 3;
                case 1:                                     /* switch 2 */
                    if (func_020b2e18(arg0) != 0) {
                        var_r0 = 0;
                    } else {
                        var_r0 = 2;
                    }
                    return var_r0;
                default:                                    /* switch 2 */
                    return -1;
            }
            break;
    }
}
