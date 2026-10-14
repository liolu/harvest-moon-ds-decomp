#include "m2c.h"

M2C_UNK func_020b6ad8(s32);                         /* extern */
M2C_UNK func_020ca974();                            /* extern */
extern M2C_UNK data_021925d8;
extern M2C_UNK data_02192600;

void *func_020b6a50(void *arg0) {
    func_020ca974();
    func_020b6ad8(arg0 + 0x18);
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_021925d8;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &data_02192600;
    return arg0;
}
