#include "m2c.h"

M2C_UNK func_02024740(s32);                         /* extern */
M2C_UNK func_0202f9cc(void *);                      /* extern */
extern M2C_UNK data_0217c648;

void *func_02032ec8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0xBAB0) = &data_0217c648;
    func_02024740(arg0 + 0xBAB0);
    func_0202f9cc(arg0);
    return arg0;
}
