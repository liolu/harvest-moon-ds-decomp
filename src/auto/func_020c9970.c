#include "m2c.h"

M2C_UNK func_020c9364(u16, M2C_UNK);                /* extern */
M2C_UNK func_020c93a0(u8, u16, M2C_UNK);            /* extern */
M2C_UNK func_020c99d8();                            /* extern */
M2C_UNK func_020c9dbc(s8, M2C_UNK);                 /* extern */
extern M2C_UNK data_021ce528;

void func_020c9970(s8 arg0, s8 arg1) {
    M2C_FIELD(&data_021ce528, s8 *, 0x1E) = 1;
    M2C_FIELD(&data_021ce528, s8 *, 0x1F) = arg0;
    M2C_FIELD(&data_021ce528, s8 *, 0x20) = arg1;
    func_020c99d8();
    if (M2C_FIELD(&data_021ce528, u8 *, 0x14) == 0) {
        return;
    }
    func_020c9dbc(arg1, 0);
    func_020c9364(M2C_FIELD(&data_021ce528, u16 *, 0x1C), 1);
    func_020c93a0(M2C_FIELD(&data_021ce528, u8 *, 0x19), M2C_FIELD(&data_021ce528, u16 *, 0x1A), 1);
}
