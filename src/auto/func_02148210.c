#include "m2c.h"

M2C_UNK func_0214825c(M2C_UNK);                     /* extern */
M2C_UNK func_0214ee64();                            /* extern */
extern M2C_UNK data_022c9860;

void func_02148210(M2C_UNK arg0) {
    if (M2C_FIELD(&data_022c9860, s32 *, 0xC) == 0) {
        func_0214ee64();
        if (M2C_FIELD(&data_022c9860, M2C_UNK (**)(), 4) != NULL) {
            M2C_FIELD(&data_022c9860, M2C_UNK (**)(), 4)();
            M2C_FIELD(&data_022c9860, M2C_UNK (**)(), 4) = NULL;
        }
    }
    func_0214825c(arg0);
}
