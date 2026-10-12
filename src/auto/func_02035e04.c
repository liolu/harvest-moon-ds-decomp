#include "m2c.h"

M2C_UNK func_020301bc(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_02184a94;

void *func_02035e04(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_020301bc(arg0, arg1, arg2, 1, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02184a94;
    M2C_FIELD(arg0, s32 *, 0xBAA4) = arg3;
    M2C_FIELD(arg0, s32 *, 0xBB18) = 0;
    return arg0;
}
