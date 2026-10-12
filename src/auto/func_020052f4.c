#include "m2c.h"

M2C_UNK func_02024740();                            /* extern */
M2C_UNK func_020c8b34(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0217c648;

M2C_UNK **func_020052f4(M2C_UNK **arg0) {
    *arg0 = &data_0217c648;
    func_02024740();
    func_020c8b34(arg0);
    return arg0;
}
