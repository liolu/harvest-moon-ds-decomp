#include "m2c.h"

M2C_UNK func_02042ff0();                            /* extern */
extern M2C_UNK data_021880d4;
extern s8 data_021c7790;

M2C_UNK **func_02045380(M2C_UNK **arg0) {
    func_02042ff0();
    *arg0 = &data_021880d4;
    data_021c7790 = 0;
    return arg0;
}
