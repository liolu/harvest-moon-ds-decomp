#include "m2c.h"

M2C_UNK func_02025060();                            /* extern */
M2C_UNK func_020c8b34(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0217cc0c;

M2C_UNK **func_02008b48(M2C_UNK **arg0) {
    *arg0 = &data_0217cc0c;
    func_02025060();
    func_020c8b34(arg0);
    return arg0;
}
