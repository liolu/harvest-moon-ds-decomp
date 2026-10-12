#include "m2c.h"

M2C_UNK func_0203086c(void *);                      /* extern */
M2C_UNK func_020309c4();                            /* extern */
M2C_UNK func_02030c3c(void *);                      /* extern */
M2C_UNK func_0203b71c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0203bb80(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0203bf54(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0203b6c0(void *arg0) {
    func_020309c4();
    M2C_FIELD(arg0, s32 *, 0xA0F0) = 0;
    func_0203b71c(arg0, 2, 1);
    func_0203bb80(arg0, 0, 8);
    func_02030c3c(arg0);
    func_0203086c(arg0);
    func_0203bf54(arg0, 0, 8);
}
