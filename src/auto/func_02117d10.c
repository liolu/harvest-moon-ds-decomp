#include "m2c.h"

s16 func_02100a8c();                                /* extern */
s16 func_02100aa4();                                /* extern */
extern void *data_021c8c5c;

void func_02117d10(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    void *temp_r7;
    void *temp_r7_2;

    M2C_FIELD(data_021c8c5c, s32 *, 0xFC0) = arg3;
    temp_r7 = data_021c8c5c;
    temp_r0 = M2C_FIELD(temp_r7, s32 *, 0xFC0);
    if ((temp_r0 > 0x39) && (temp_r0 < 0x41)) {
        M2C_FIELD(temp_r7, s16 *, 0xFC4) = func_02100a8c();
        temp_r7_2 = data_021c8c5c + 0xFBC;
        M2C_FIELD(temp_r7_2, s16 *, 0xA) = func_02100aa4();
    }
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(data_021c8c5c, s32 *, 0xFC8) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(data_021c8c5c, s32 *, 0xFCC) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) (M2C_FIELD(arg0, u8 *, 0xE) | 1);
}
