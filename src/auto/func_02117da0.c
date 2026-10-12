#include "m2c.h"

s32 func_02100a8c();                                /* extern */
s32 func_02100aa4();                                /* extern */
extern void *data_021c8c5c;

s32 func_02117da0(void *arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 var_r5;
    s32 var_r6;
    void *temp_r4;
    void *temp_r4_2;

    temp_r4 = data_021c8c5c;
    temp_r1 = M2C_FIELD(temp_r4, s32 *, 0xFC0);
    var_r6 = arg2;
    var_r5 = arg3;
    if (temp_r1 != M2C_FIELD(temp_r4, s8 *, 0xFE0)) {
        return 0;
    }
    if ((temp_r1 > 0x39) && (temp_r1 < 0x41) && ((M2C_FIELD(temp_r4, u16 *, 0xFC4) != func_02100a8c()) || (temp_r4_2 = data_021c8c5c + 0xFBC, (M2C_FIELD(temp_r4_2, u16 *, 0xA) != func_02100aa4())))) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0xBD) != 0) {
        return 0;
    }
    switch (arg1) {
    default:
        break;
    case 0:
        var_r5 -= 0x1000;
        break;
    case 1:
        var_r6 += 0x1000;
        break;
    case 2:
        var_r5 += 0x1000;
        break;
    case 3:
        var_r6 -= 0x1000;
        break;
    }
    temp_r1_2 = M2C_FIELD(arg0, s32 *, 0);
    if (((s32) (temp_r1_2 + 0x800) < var_r6) || ((s32) (temp_r1_2 - 0x800) > var_r6) || (temp_r1_3 = M2C_FIELD(arg0, s32 *, 4), ((s32) (temp_r1_3 + 0x800) < var_r5)) || ((s32) (temp_r1_3 - 0x800) > var_r5)) {
        return 0;
    }
    return 1;
}
