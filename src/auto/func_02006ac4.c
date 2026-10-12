#include "m2c.h"

M2C_UNK func_02006dec();                            /* extern */
extern M2C_UNK data_0217c99c;

void *func_02006ac4(void *arg0) {
    func_02006dec();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0217c99c;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    return arg0;
}
