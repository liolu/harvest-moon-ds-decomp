#include "m2c.h"

M2C_UNK func_0213e980(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0213e9d4(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0213eadc(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0213ec5c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0213ee9c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02140988(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_022c3f8c;
extern M2C_UNK data_022c438c;

void func_0209b634(s32 arg0) {
    func_02140988(&data_022c3f8c, 0x400);
    func_0213e980(&data_022c3f8c, 0, 0x400);
    func_02140988(&data_022c438c, 0x400);
    func_0213e9d4(&data_022c438c, 0, 0x400);
    func_02140988(arg0 + 0x92E, 0x600);
    func_0213eadc(arg0 + 0x92E, 0, 0x600);
    func_02140988(arg0 + 0xF2E, 0x600);
    func_0213ec5c(arg0 + 0xF2E, 0, 0x600);
    func_02140988(arg0 + 0x1530, 0x6000);
    func_0213ee9c(arg0 + 0x1530, 0, 0x6000);
}
