#include "m2c.h"

M2C_UNK func_02111cf4(void *);                      /* extern */
M2C_UNK func_02111de4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0212a5b8(M2C_UNK);                     /* extern */

void func_02111cbc(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1DC), u8 *, 1) == 0) {
        func_02111de4(arg0, 7);
    } else {
        func_0212a5b8(arg1);
    }
    func_02111cf4(arg0);
}
