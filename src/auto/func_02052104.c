#include "m2c.h"

M2C_UNK func_020177e8();                            /* extern */
extern M2C_UNK data_0217c658;
extern M2C_UNK data_0217c674;
extern M2C_UNK data_0217c684;
extern M2C_UNK data_0217f26c;
extern M2C_UNK data_0217f288;

void *func_02052104(void *arg0) {
    func_020177e8();
    M2C_FIELD(arg0, M2C_UNK **, 0x30) = &data_0217c684;
    M2C_FIELD(arg0, s16 *, 0x34)      = 0;
    M2C_FIELD(arg0, s16 *, 0x36)      = 0;
    M2C_FIELD(arg0, s16 *, 0x38)      = 0;
    M2C_FIELD(arg0, s16 *, 0x3A)      = 0;
    M2C_FIELD(arg0, s32 *, 0x3C)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0217c658;
    M2C_FIELD(arg0, M2C_UNK **, 0x30) = &data_0217c674;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0217f26c;
    M2C_FIELD(arg0, M2C_UNK **, 0x30) = &data_0217f288;
    return arg0;
}
