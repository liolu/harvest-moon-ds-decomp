#include "m2c.h"

M2C_UNK func_02002174(void *);                      /* extern */
M2C_UNK func_020ca5b4();                            /* extern */
M2C_UNK func_020f5dc0(void *);                      /* extern */
M2C_UNK func_021293ac();                            /* extern */
M2C_UNK func_0213e980(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0213e9d4(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02140988(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_022c3f70;
extern M2C_UNK data_022c3f8c;
extern M2C_UNK data_022c438c;

void func_021209ec(void *arg0) {
    func_02140988(&data_022c3f8c, 0x400);
    func_0213e980(&data_022c3f8c, 0, 0x400);
    func_02140988(&data_022c438c, 0x400);
    func_0213e9d4(&data_022c438c, 0, 0x400);
    if (M2C_FIELD(arg0, u8 *, 0x36A4) == 0) {
        func_020f5dc0(arg0 + 0xC8C);
        func_021293ac();
        M2C_FIELD(&data_022c3f70, M2C_UNK(**)(void *), 8)(arg0);
    }
    func_02002174(arg0 + 0x367C);
    func_020ca5b4();
}
