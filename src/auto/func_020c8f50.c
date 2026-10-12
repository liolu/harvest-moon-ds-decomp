#include "m2c.h"

M2C_UNK func_02140988(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0214131c(M2C_UNK, M2C_UNK *, s32, M2C_UNK); /* extern */
extern M2C_UNK data_021c8d28;
extern M2C_UNK data_021cb928;
extern M2C_UNK data_021ce528;

void func_020c8f50(void) {
    if (M2C_FIELD(&data_021ce528, u8 *, 0) != 0) {
        func_02140988(&data_021c8d28, 0x200);
        func_0214131c(3, &data_021c8d28, 0x05000000, 0x200);
        M2C_FIELD(&data_021ce528, u8 *, 0) = 0U;
    }
    if (M2C_FIELD(&data_021ce528, u8 *, 4) == 0) {
        return;
    }
    func_02140988(&data_021cb928, 0x200);
    func_0214131c(3, &data_021cb928, 0x05000400, 0x200);
    M2C_FIELD(&data_021ce528, u8 *, 4) = 0U;
}
