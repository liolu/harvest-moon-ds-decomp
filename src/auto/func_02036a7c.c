#include "m2c.h"

M2C_UNK func_0202fe04(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202fe64(void *, s32, s32);            /* extern */
extern M2C_UNK data_02153028;
extern M2C_UNK data_0215302c;

void func_02036a7c(void *arg0) {
    s32 temp_r2;

    func_0202fe04(arg0, 9);
    func_0202fe64(arg0, 4, 5);
    temp_r2 = M2C_FIELD(arg0, s32 *, 0xBAA4) - 1;
    func_0202fe64(arg0, *((M2C_UNK *) ((s8 *) &data_02153028 + (temp_r2 * 8))),
                  *((M2C_UNK *) ((s8 *) &data_0215302c + (temp_r2 * 8))));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xBB1C) < 2) {
        return;
    }
    func_0202fe64(arg0, 6, 0x11);
    func_0202fe64(arg0, 5, 0x12);
}
