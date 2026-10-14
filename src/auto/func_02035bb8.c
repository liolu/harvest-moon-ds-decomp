#include "m2c.h"

s32 func_02035bb8(s32 arg0) {
    switch (arg0) {                                 /* irregular */
        case 0:
            return 0x20;
        case 1:
            return 0x30;
        default:
            return ((arg0 - 2) * 0x18) + 0x30;
    }
}
