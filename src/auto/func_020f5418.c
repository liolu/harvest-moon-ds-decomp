#include "m2c.h"

M2C_UNK func_020c8b34(M2C_UNK **);                  /* extern */
M2C_UNK func_020f56bc();                            /* extern */
extern M2C_UNK data_02194300;

M2C_UNK **func_020f5418(M2C_UNK **arg0) {
    *arg0 = &data_02194300;
    func_020f56bc();
    func_020c8b34(arg0);
    return arg0;
}
