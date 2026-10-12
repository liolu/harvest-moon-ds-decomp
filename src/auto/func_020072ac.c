#include "m2c.h"

M2C_UNK func_02025060();                            /* extern */
extern M2C_UNK data_0217cc0c;

M2C_UNK **func_020072ac(M2C_UNK **arg0) {
    *arg0 = &data_0217cc0c;
    func_02025060();
    return arg0;
}
