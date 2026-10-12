#include "m2c.h"

M2C_UNK func_020052d0(void *);                      /* extern */
M2C_UNK func_020052d4(void *);                      /* extern */
M2C_UNK func_020172e8(void *);                      /* extern */
M2C_UNK func_02024740(s32);                         /* extern */
M2C_UNK func_0214efb4(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_0217c648;
extern M2C_UNK func_02017a34;

void *func_020438d8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x5EA4) = &data_0217c648;
    func_02024740(arg0 + 0x5EA4);
    func_020052d0(arg0 + 0x5764);
    func_020052d4(arg0 + 0x5758);
    func_0214efb4(arg0 + 0x2464, 0x15, 0x1C, &func_02017a34);
    func_020172e8(arg0);
    return arg0;
}
