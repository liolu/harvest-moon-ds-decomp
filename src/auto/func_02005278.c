#include "m2c.h"

M2C_UNK func_020c9880(M2C_UNK);                     /* extern */
M2C_UNK func_020f5f08(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_020f7a30(void *, s32, s32);            /* extern */
M2C_UNK func_020faa20(void *);                      /* extern */

void func_02005278(void *arg0) {
    func_020f5f08(arg0 + 0x1EC0, M2C_FIELD(arg0, s32 *, 0x1EC4), 0);
    func_020f7a30(arg0 + 0x1EC0, M2C_FIELD(arg0, s32 *, 0x1EB4), M2C_FIELD(arg0, s32 *, 0x1EB8));
    func_020faa20(arg0 + 0x1EC0);
    func_020c9880(1);
}
