#include "m2c.h"

M2C_UNK func_02024740(void *);                      /* extern */
M2C_UNK func_0214efb4(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_0217c648;
extern M2C_UNK func_02004534;
extern M2C_UNK func_0200453c;

void *func_020641a8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x12C) = &data_0217c648;
    func_02024740(arg0 + 0x12C);
    M2C_FIELD(arg0, M2C_UNK **, 0xF0) = &data_0217c648;
    func_02024740(arg0 + 0xF0);
    M2C_FIELD(arg0, M2C_UNK **, 0xB4) = &data_0217c648;
    func_02024740(arg0 + 0xB4);
    M2C_FIELD(arg0, M2C_UNK **, 0x78) = &data_0217c648;
    func_02024740(arg0 + 0x78);
    func_0214efb4(arg0 + 0x18, 2, 0x30, &func_02004534);
    func_0214efb4(arg0, 2, 0xC, &func_0200453c);
    return arg0;
}
