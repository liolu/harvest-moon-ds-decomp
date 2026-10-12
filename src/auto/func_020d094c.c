#include "m2c.h"

M2C_UNK func_020c8b40(s32);                         /* extern */
M2C_UNK func_020d34a0();                            /* extern */
extern M2C_UNK data_02193514;

void *func_020d094c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02193514;
    func_020d34a0();
    func_020c8b40(M2C_FIELD(arg0, s32 *, 4));
    return arg0;
}
