#include "m2c.h"

M2C_UNK func_020301bc(M2C_UNK **, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_02187280;

M2C_UNK **func_0204098c(M2C_UNK **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_020301bc(arg0, arg1, arg2, 1, 0);
    *arg0 = &data_02187280;
    return arg0;
}
