#include "m2c.h"

M2C_UNK func_020173f4();                            /* extern */
extern M2C_UNK data_0217c684;
extern M2C_UNK data_0217f2ac;
extern M2C_UNK data_0217f2c8;
extern M2C_UNK data_02183730;
extern M2C_UNK data_0218374c;

void *func_0202f2b4(void *arg0) {
    func_020173f4();
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &data_0217c684;
    M2C_FIELD(arg0, s16 *, 0x20)      = 0;
    M2C_FIELD(arg0, s16 *, 0x22)      = 0;
    M2C_FIELD(arg0, s16 *, 0x24)      = 0;
    M2C_FIELD(arg0, s16 *, 0x26)      = 0;
    M2C_FIELD(arg0, s32 *, 0x28)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02183730;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &data_0218374c;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0217f2ac;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &data_0217f2c8;
    return arg0;
}
