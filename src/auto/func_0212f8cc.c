#include "m2c.h"

M2C_UNK func_020c8b40(s32);                         /* extern */
M2C_UNK func_0212f810();                            /* extern */
M2C_UNK func_0212f86c();                            /* extern */
extern M2C_UNK data_022c538c;

void func_0212f8cc(void) {
    func_0212f810();
    func_0212f86c();
    func_020c8b40(M2C_FIELD(&data_022c538c, s32 *, 0xD0));
    M2C_FIELD(&data_022c538c, s32 *, 0xD0) = 0;
    M2C_FIELD(&data_022c538c, s16 *, 0xD4) = 0;
    func_020c8b40(M2C_FIELD(&data_022c538c, s32 *, 0xE8));
    M2C_FIELD(&data_022c538c, s32 *, 0xE8) = 0;
    M2C_FIELD(&data_022c538c, s16 *, 0xEC) = 0;
    func_020c8b40(M2C_FIELD(&data_022c538c, s32 *, 0xF0));
    M2C_FIELD(&data_022c538c, s32 *, 0xF0) = 0;
    M2C_FIELD(&data_022c538c, s32 *, 0x100) = 0;
}
