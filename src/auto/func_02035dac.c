#include "m2c.h"

M2C_UNK func_020172e8(void *);                      /* extern */
M2C_UNK func_02024740(s32);                         /* extern */
M2C_UNK func_020c8b34(void *);                      /* extern */
M2C_UNK func_0214efb4(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_0217c648;
extern M2C_UNK func_02017a34;

void *func_02035dac(void *arg0) {
    func_0214efb4(arg0 + 0x5450, 0xA, 0x1C, &func_02017a34);
    M2C_FIELD(arg0, M2C_UNK **, 0x53C0) = &data_0217c648;
    func_02024740(arg0 + 0x53C0);
    func_020172e8(arg0);
    func_020c8b34(arg0);
    return arg0;
}
