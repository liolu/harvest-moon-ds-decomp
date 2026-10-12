#include "m2c.h"

M2C_UNK func_020fb03c(void *);                      /* extern */
M2C_UNK func_020fb15c(void *);                      /* extern */
M2C_UNK func_020fb38c(void *);                      /* extern */
M2C_UNK func_020fb4d8(void *);                      /* extern */

void func_020faa5c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x114) != 0) {
        func_020fb03c(arg0 + 0x118);
    }
    func_020fb15c(arg0 + 0x1C);
    func_020fb38c(arg0 + 0x50);
    func_020fb4d8(arg0 + 0x68);
    func_020fb4d8(arg0 + 0x9C);
}
