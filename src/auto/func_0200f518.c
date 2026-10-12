#include "m2c.h"

M2C_UNK func_0202143c(s32);                         /* extern */
M2C_UNK func_0202cb5c(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_0202d83c(void *);                      /* extern */
extern M2C_UNK func_0213eb3c;

void func_0200f518(void *arg0) {
    func_0202143c(arg0 + 0xC);
    if (M2C_FIELD(arg0, u8 *, 0x3D00) == 0) {
        return;
    }
    func_0202cb5c(arg0 + 0x1FE4, &func_0213eb3c, 0);
    func_0202d83c(arg0 + 0x25F4);
}
