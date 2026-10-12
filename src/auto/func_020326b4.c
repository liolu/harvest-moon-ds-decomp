#include "m2c.h"

M2C_UNK func_02024740(void *);                      /* extern */
M2C_UNK func_0202f9cc(void *);                      /* extern */
M2C_UNK func_0214efb4(s32, M2C_UNK, s32, M2C_UNK *); /* extern */
extern M2C_UNK data_0217c648;
extern M2C_UNK func_02031834;

void *func_020326b4(void *arg0) {
    func_0214efb4(arg0 + 0x38E4, 6, 0x908, &func_02031834);
    M2C_FIELD(arg0, M2C_UNK **, 0x38D8) = &data_0217c648;
    func_02024740(arg0 + 0x38D8);
    M2C_FIELD(arg0, M2C_UNK **, 0x38CC) = &data_0217c648;
    func_02024740(arg0 + 0x38CC);
    func_0202f9cc(arg0);
    return arg0;
}
