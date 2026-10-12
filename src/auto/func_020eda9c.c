#include "m2c.h"

M2C_UNK func_02141720(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_022c1f6c;
extern M2C_UNK data_022c1f70;
extern M2C_UNK data_022c1fd0;

void func_020eda9c(void) {
    if (M2C_FIELD(&data_022c1f6c, u8 *, 0xC6) == 0) {
        return;
    }
    M2C_FIELD(&data_022c1f6c, u8 *, 0xC6) = 0U;
    func_02141720(&data_022c1f70, &data_022c1fd0, 0x60);
}
