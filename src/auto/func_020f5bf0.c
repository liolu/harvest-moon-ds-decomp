#include "m2c.h"

M2C_UNK func_020f56bc(s32);                         /* extern */
M2C_UNK func_020fb250(s32);                         /* extern */
M2C_UNK func_020fb600(void *);                      /* extern */

void func_020f5bf0(void *arg0) {
    func_020f56bc(arg0 + 0x104);
    M2C_FIELD(arg0, s8 *, 0x5E) = 0;
    func_020fb250(arg0 + 0x1C);
    func_020fb600(arg0 + 0x68);
    func_020fb600(arg0 + 0x9C);
}
