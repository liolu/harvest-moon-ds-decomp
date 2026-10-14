#include "m2c.h"

s32 func_020408ac(s32 arg0, s32 arg1) {
    if (((arg1 >= 0xE3) && (arg1 <= 0xF6)) || ((arg1 >= 0xF7) && (arg1 <= 0x104)) || ((arg1 >= 0x166) && (arg1 <= 0x174)) ||
        ((arg1 >= 0x176) && (arg1 <= 0x178)) || ((arg1 >= 0x2B) && (arg1 <= 0x30))) {
        return 1;
    }
    return 0;
}
