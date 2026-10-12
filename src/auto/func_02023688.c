#include "m2c.h"

M2C_UNK func_02017840(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020178b8(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02023c20();                            /* extern */
extern M2C_UNK data_0217c658;
extern M2C_UNK data_0217c674;
extern M2C_UNK data_0217c684;
extern M2C_UNK data_02180e20;
extern M2C_UNK data_021986bc;

void *func_02023688(void *arg0) {
    void *temp_r4;

    func_02023c20(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02180e20;
    temp_r4 = arg0 + 0x16B4;
    M2C_FIELD(arg0, s32 *, 0x16AC) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(arg0, s8 *, 0x16B0) = 0;
    func_02017840(temp_r4, 0, 0, 0, 0, 0);
    M2C_FIELD(temp_r4, M2C_UNK **, 0x30) = &data_0217c684;
    M2C_FIELD(temp_r4, s16 *, 0x34) = -0x10;
    M2C_FIELD(temp_r4, s16 *, 0x36) = -4;
    M2C_FIELD(temp_r4, s16 *, 0x38) = 0x10;
    M2C_FIELD(temp_r4, s16 *, 0x3A) = 0x10;
    M2C_FIELD(temp_r4, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x16B4) = &data_0217c658;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x30) = &data_0217c674;
    func_020178b8(arg0 + 0x16B4, &data_021986bc, 0, 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x16AC);
    return arg0;
}
