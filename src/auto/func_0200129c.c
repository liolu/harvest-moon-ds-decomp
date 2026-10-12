#include "m2c.h"

M2C_UNK func_020013bc(void *, M2C_UNK);             /* extern */
M2C_UNK func_02001464();                            /* extern */
s32 func_020c8b28(M2C_UNK);                         /* extern */
extern M2C_UNK data_0217c424;

void *func_0200129c(void *arg0) {
    func_02001464();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0217c424;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = func_020c8b28(0x3900);
    func_020013bc(arg0, 0);
    return arg0;
}
