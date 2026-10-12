#include "m2c.h"

M2C_UNK func_02004b0c(void *, M2C_UNK);             /* extern */
M2C_UNK func_02017840(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020178b8(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02021530(s32);                         /* extern */
s32 func_02021720(s8);                              /* extern */
s32 func_02021750(s8);                              /* extern */
M2C_UNK func_02021e50(void *, s32);                 /* extern */
M2C_UNK func_02023240(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0217c658;
extern M2C_UNK data_0217c674;
extern M2C_UNK data_0217c684;
extern M2C_UNK data_02180ad0;
extern M2C_UNK data_0219a2b8;

void *func_02021f3c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_r4;

    func_02023240(arg0, 2, arg1, arg2);
    temp_r4 = arg0 + 0x1694;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02180ad0;
    func_02017840(temp_r4, 0, 0, 0, 0xF4, 0x38);
    M2C_FIELD(temp_r4, M2C_UNK **, 0x30) = &data_0217c684;
    M2C_FIELD(temp_r4, s16 *, 0x34) = -0xA;
    M2C_FIELD(temp_r4, s16 *, 0x36) = -0x12;
    M2C_FIELD(temp_r4, s16 *, 0x38) = 0x14;
    M2C_FIELD(temp_r4, s16 *, 0x3A) = 0x12;
    M2C_FIELD(temp_r4, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1694) = &data_0217c658;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x30) = &data_0217c674;
    M2C_FIELD(arg0, s32 *, 0x16D4) = 0;
    M2C_FIELD(arg0, s32 *, 0x16D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x16DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x16E0) = 0;
    M2C_FIELD(arg0, s32 *, 0x16E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x16E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x16EC) = func_02021720(M2C_FIELD(arg0, s8 *, 0x10));
    M2C_FIELD(arg0, s32 *, 0x16F0) = func_02021750(M2C_FIELD(arg0, s8 *, 0x10));
    func_02021530(M2C_FIELD(arg0, s32 *, 8));
    func_020178b8(arg0 + 0x1694, &data_0219a2b8, 0, 0);
    func_02004b0c(arg0 + 0x1698, 0);
    func_02021e50(arg0, M2C_FIELD(arg0, s32 *, 0xC));
    return arg0;
}
