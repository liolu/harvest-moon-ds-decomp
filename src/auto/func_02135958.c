#include "m2c.h"

M2C_UNK func_020c8b40(s32);                         /* extern */
extern M2C_UNK data_02194f58;

void *func_02135958(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02194f58;
    func_020c8b40(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}
