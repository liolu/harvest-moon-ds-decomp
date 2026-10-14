#include "m2c.h"

void *func_020f43b0(s8, s32);                       /* extern */
M2C_UNK func_020f43f4(s8, s32, s32, s32);           /* extern */

void func_020f4660(s8 arg0, s32 arg1, s32 arg2, s8 arg3, s32 arg4, s32 arg5) {
    void *temp_r0;
    void *temp_r4;

    func_020f43f4(arg0, arg2, arg1, arg2);
    func_020f43f4(arg3, arg5, arg4, arg5);
    temp_r4                        = func_020f43b0(arg0, arg2);
    temp_r0                        = func_020f43b0(arg3, arg5);
    M2C_FIELD(temp_r4, s8 *, 4)    = arg3;
    M2C_FIELD(temp_r4, s8 *, 5)    = (s8) arg5;
    M2C_FIELD(temp_r4, s16 *, 8)   = (s16) ((M2C_FIELD(temp_r0, u8 *, 0) - M2C_FIELD(temp_r4, u8 *, 0)) * 8);
    M2C_FIELD(temp_r4, s16 *, 0xA) = (s16) (((M2C_FIELD(temp_r0, u8 *, 1) - M2C_FIELD(temp_r4, u8 *, 1)) * 8) + 8);
    M2C_FIELD(temp_r0, s8 *, 4)    = arg0;
    M2C_FIELD(temp_r0, s8 *, 5)    = (s8) arg2;
    M2C_FIELD(temp_r0, s16 *, 8)   = (s16) ((M2C_FIELD(temp_r4, u8 *, 0) - M2C_FIELD(temp_r0, u8 *, 0)) * 8);
    M2C_FIELD(temp_r0, s16 *, 0xA) = (s16) (((M2C_FIELD(temp_r4, u8 *, 1) - M2C_FIELD(temp_r0, u8 *, 1)) * 8) - 8);
}
