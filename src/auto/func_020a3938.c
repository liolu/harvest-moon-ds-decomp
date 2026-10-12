#include "m2c.h"

s32 func_020a391c();                         /* extern */
M2C_UNK func_020a3964();                /* extern */

void func_020a3938(M2C_UNK arg0, s32 arg1) {
    func_020a3964(arg0, arg1 + func_020a391c());
    func_020a391c(arg0);
}
