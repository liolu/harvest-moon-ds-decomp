#include "m2c.h"

M2C_UNK func_020177e8(void *);                      /* extern */
M2C_UNK func_02017814(void *);                      /* extern */
M2C_UNK func_02017904(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_02024720(void *);                      /* extern */
M2C_UNK func_0202475c(void *, M2C_UNK, u16, M2C_UNK, s32); /* extern */
M2C_UNK func_02024ba8(void *, M2C_UNK, M2C_UNK, u16, s32); /* extern */
M2C_UNK func_020515e8(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_0217c658;
extern M2C_UNK data_0217c674;
extern M2C_UNK data_0217c684;
extern M2C_UNK data_0217f26c;
extern M2C_UNK data_0217f288;
extern M2C_UNK data_02189d24;

void *func_0204c078(void *arg0, M2C_UNK arg1) {
    void *temp_r4;

    func_020515e8(arg0, arg1, 0x38, 5, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02189d24;
    func_02024720(arg0 + 0x1E38);
    func_02017814(arg0 + 0x1E44);
    func_02024720(arg0 + 0x1E74);
    temp_r4 = arg0 + 0x1E80;
    func_020177e8(temp_r4);
    M2C_FIELD(temp_r4, M2C_UNK **, 0x30) = &data_0217c684;
    M2C_FIELD(temp_r4, s16 *, 0x34)      = 0;
    M2C_FIELD(temp_r4, s16 *, 0x36)      = 0;
    M2C_FIELD(temp_r4, s16 *, 0x38)      = 0;
    M2C_FIELD(temp_r4, s16 *, 0x3A)      = 0;
    M2C_FIELD(temp_r4, s32 *, 0x3C)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1E80)  = &data_0217c658;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x30) = &data_0217c674;
    M2C_FIELD(arg0, M2C_UNK **, 0x1E80)  = &data_0217f26c;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x30) = &data_0217f288;
    func_02024ba8(arg0 + 0x1E38, 0x17, 8, (u16) (M2C_FIELD(arg0, u16 *, 0x1E00) + M2C_FIELD(arg0, u16 *, 0x1E02)), 4);
    func_02017904(arg0 + 0x1E44, arg0 + 0x1E38, 1);
    M2C_FIELD(arg0, s32 *, 0x1E48) = 0x5000;
    M2C_FIELD(arg0, s32 *, 0x1E4C) = 0x5000;
    func_0202475c(arg0 + 0x1E74, 2, (u16) (M2C_FIELD(arg0, u16 *, 0x1E40) + M2C_FIELD(arg0, u16 *, 0x1E42)), 6, 0);
    func_02017904(arg0 + 0x1E80, arg0 + 0x1E74, 0);
    M2C_FIELD(arg0, s32 *, 0x1E84) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x1E88) = 0x9C00;
    M2C_FIELD(arg0, s16 *, 0x1EB4) = -0x10;
    M2C_FIELD(arg0, s16 *, 0x1EB6) = -0xC;
    M2C_FIELD(arg0, s16 *, 0x1EB8) = 0x20;
    M2C_FIELD(arg0, s16 *, 0x1EBA) = 0x18;
    M2C_FIELD(arg0, s32 *, 0x1EC0) = 0;
    M2C_FIELD(arg0, s8 *, 0x1EC4)  = 0;
    return arg0;
}
