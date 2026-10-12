#include "m2c.h"

s32 func_020aae40(s32);                             /* extern */

s32 func_020ab6c0(void) {
    if (func_020aae40(0x10A) != 0) {
        return 2;
    }
    if (func_020aae40(0xCB) != 0) {
        return 3;
    }
    if (func_020aae40(0xD1) != 0) {
        return 4;
    }
    if (func_020aae40(0xD8) != 0) {
        return 7;
    }
    if (func_020aae40(0xDF) != 0) {
        return 0xE;
    }
    if (func_020aae40(0x106) != 0) {
        return 0x2D;
    }
    if (func_020aae40(0x10D) != 0) {
        return 0x33;
    }
    if (func_020aae40(0x118) != 0) {
        return 0x32;
    }
    if (func_020aae40(0x11E) != 0) {
        return 0x31;
    }
    return -1;
}
