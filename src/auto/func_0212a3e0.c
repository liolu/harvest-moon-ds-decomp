#include "m2c.h"

M2C_UNK func_0212a414(M2C_UNK);                     /* extern */
extern M2C_UNK data_022c3f80;

void func_0212a3e0(void) {
    if (M2C_FIELD(&data_022c3f80, u8 *, 2) & 1) {
        return;
    }
    func_0212a414(1);
    M2C_FIELD(&data_022c3f80, u8 *, 2) = (u8) (M2C_FIELD(&data_022c3f80, u8 *, 2) | 7);
}
