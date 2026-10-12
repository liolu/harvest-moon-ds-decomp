#include "m2c.h"

M2C_UNK func_0212d6d8();                            /* extern */

void func_0212d790(void *arg0, s32 arg1, s32 arg2) {
    func_0212d6d8();
    M2C_FIELD(arg0, s32 *, 0x658) = arg1;
    M2C_FIELD(arg0, s32 *, 0x65C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x660) = (s32) (M2C_FIELD(arg0, s32 *, 0x648) + (arg1 << 8));
    M2C_FIELD(arg0, s32 *, 0x664) = (s32) (M2C_FIELD(arg0, s32 *, 0x64C) + (arg2 << 8));
    M2C_FIELD(arg0, s32 *, 0x668) = (s32) (M2C_FIELD(arg0, s32 *, 0x660) + M2C_FIELD(arg0, s32 *, 0x650));
    M2C_FIELD(arg0, s32 *, 0x66C) = (s32) (M2C_FIELD(arg0, s32 *, 0x664) + M2C_FIELD(arg0, s32 *, 0x654));
}
