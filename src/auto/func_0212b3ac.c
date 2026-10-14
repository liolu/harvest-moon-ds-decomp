#include "m2c.h"

M2C_UNK func_020f35b0(s32, s32);                    /* extern */
extern M2C_UNK data_02194ae4;
extern M2C_UNK data_02194b14;
extern M2C_UNK data_02194b44;
extern s32 data_021c8c5c;

void func_0212b3ac(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = arg2 - 0xB0;
    temp_r4 = (temp_r5 * 0x54) + *arg0;
    if (arg1 == 0) {
        if (temp_r4 == 0) {
            return;
        }
        func_020f35b0(temp_r4, arg2);
        M2C_FIELD(temp_r4, M2C_UNK **, 0) = &data_02194b44;
        M2C_FIELD(temp_r4, s8 *, 0x40)    = 1;
        M2C_FIELD(temp_r4, M2C_UNK **, 0) = &data_02194ae4;
        M2C_FIELD(temp_r4, s32 *, 0x44)   = arg2;
        M2C_FIELD(temp_r4, s32 *, 0x48)   = (s32) ((temp_r5 * 0xC) + (data_021c8c5c + 0x614C));
        return;
    }
    if (temp_r4 == 0) {
        return;
    }
    func_020f35b0(temp_r4, arg2);
    M2C_FIELD(temp_r4, M2C_UNK **, 0) = &data_02194b44;
    M2C_FIELD(temp_r4, s8 *, 0x40)    = 0;
    M2C_FIELD(temp_r4, M2C_UNK **, 0) = &data_02194b14;
    M2C_FIELD(temp_r4, s32 *, 0x44)   = arg2;
    M2C_FIELD(temp_r4, s32 *, 0x48)   = (s32) ((temp_r5 * 0xC) + (data_021c8c5c + 0x614C));
}
