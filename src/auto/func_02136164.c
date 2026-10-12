#include "m2c.h"

M2C_UNK func_020ca5b4();                            /* extern */
M2C_UNK func_0213e980(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0213e9d4(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02140988(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK (*data_022c3f78)(M2C_UNK);
extern M2C_UNK data_022c3f8c;
extern M2C_UNK data_022c438c;

void func_02136164(void) {
    func_02140988(&data_022c3f8c, 0x400);
    func_0213e980(&data_022c3f8c, 0, 0x400);
    func_02140988(&data_022c438c, 0x400);
    func_0213e9d4(&data_022c438c, 0, 0x400);
    data_022c3f78(0);
    func_020ca5b4();
}
