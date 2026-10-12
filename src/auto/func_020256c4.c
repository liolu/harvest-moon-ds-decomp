#include "m2c.h"

M2C_UNK func_020172e8(void *);                      /* extern */
M2C_UNK func_02024740(void *);                      /* extern */
extern M2C_UNK data_0217c648;
extern M2C_UNK data_0218127c;
extern u8 data_021c8cd1;

void *func_020256c4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0218127c;
    if (M2C_FIELD(arg0, u8 *, 0x2580) != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 *, 0xC) = (u8) data_021c8cd1;
    }
    data_021c8cd1 = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x2504) = &data_0217c648;
    func_02024740(arg0 + 0x2504);
    M2C_FIELD(arg0, M2C_UNK **, 0x23B4) = &data_0217c648;
    func_02024740(arg0 + 0x23B4);
    func_020172e8(arg0);
    return arg0;
}
