#include "m2c.h"

M2C_UNK func_020213d0();                            /* extern */
M2C_UNK func_020c8b34(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0217c628;

M2C_UNK **func_02005330(M2C_UNK **arg0) {
    *arg0 = &data_0217c628;
    func_020213d0();
    func_020c8b34(arg0);
    return arg0;
}
