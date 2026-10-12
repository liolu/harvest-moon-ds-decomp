#include "m2c.h"

M2C_UNK func_020f3fe0(s32, s32);                    /* extern */
extern M2C_UNK data_021936cc;
extern M2C_UNK data_02193708;
extern M2C_UNK data_02193744;
extern s32 data_021c8c5c;

void func_020ebb5c(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = arg2 - 0xB3;
    temp_r4 = (temp_r5 * 0x88) + *arg0;
    if (arg1 == 0) {
        if (temp_r4 == 0) {
            return;
        }
        func_020f3fe0(temp_r4, arg2);
        M2C_FIELD(temp_r4, M2C_UNK **, 0) = &data_02193744;
        M2C_FIELD(temp_r4, s8 *, 0x70) = 1;
        M2C_FIELD(temp_r4, M2C_UNK **, 0) = &data_021936cc;
        M2C_FIELD(temp_r4, s32 *, 0x74) = arg2;
        M2C_FIELD(temp_r4, s32 *, 0x78) = (s32) (data_021c8c5c + 0x61A8 + (temp_r5 * 4));
        return;
    }
    if (temp_r4 == 0) {
        return;
    }
    func_020f3fe0(temp_r4, arg2);
    M2C_FIELD(temp_r4, M2C_UNK **, 0) = &data_02193744;
    M2C_FIELD(temp_r4, s8 *, 0x70) = 0;
    M2C_FIELD(temp_r4, M2C_UNK **, 0) = &data_02193708;
    M2C_FIELD(temp_r4, s32 *, 0x74) = arg2;
    M2C_FIELD(temp_r4, s32 *, 0x78) = (s32) (data_021c8c5c + 0x61A8 + (temp_r5 * 4));
}
