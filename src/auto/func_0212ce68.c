#include "m2c.h"

s32 func_0212ce68(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = 0;
    if (arg1 < 0x34) {
        switch (arg1) {                             /* switch 1; irregular */
            case 0x33:                                  /* switch 1 */
            case 0x32:                                  /* switch 1 */
            case 0x1:                                   /* switch 1 */
            case 0x2:                                   /* switch 1 */
            case 0x3:                                   /* switch 1 */
            case 0x4:                                   /* switch 1 */
            case 0x7:                                   /* switch 1 */
            case 0xE:                                   /* switch 1 */
                return 0x10;
            case 0x2F:                                  /* switch 1 */
                return 0x20;
            default:                                    /* switch 1 */
                return 8;
        }
    } else if (arg1 < 0x37) {
        switch (arg1) {                             /* switch 2; irregular */
            case 0x36:                                  /* switch 2 */
                var_r0 = 1;
            /* fallthrough */
            default:                                    /* switch 2 */
                return var_r0;
            case 0x34:                                  /* switch 2 */
                return 6;
            case 0x35:                                  /* switch 2 */
                return 1;
        }
    } else {
        if (arg1 < 0x53) {
            return 8;
        }
        if (arg1 < 0xAF) {
            var_r0 = 8;
        }
        return var_r0;
    }
}
