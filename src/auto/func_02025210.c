#include "m2c.h"

M2C_UNK func_020c77ac();                            /* extern */
M2C_UNK func_020c8b34(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0217c70c;

M2C_UNK **func_02025210(M2C_UNK **arg0) {
    *arg0 = &data_0217c70c;
    func_020c77ac();
    func_020c8b34(arg0);
    return arg0;
}
