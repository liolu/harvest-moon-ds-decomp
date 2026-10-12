#include "m2c.h"

M2C_UNK func_0213e090(s32);                         /* extern */
M2C_UNK func_0213e2f4(s32);                         /* extern */
s32 func_0213e3cc();                                /* extern */
s32 func_0213e418();                                /* extern */
M2C_UNK func_02140988(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0214131c(M2C_UNK, M2C_UNK *, s32, M2C_UNK); /* extern */
extern M2C_UNK data_021c9328;
extern M2C_UNK data_021cbf28;
extern M2C_UNK data_021ce528;

void func_020c9170(void) {
    s32 temp_r4;
    s32 temp_r4_2;

    if (M2C_FIELD(&data_021ce528, u8 *, 3) != 0) {
        temp_r4 = func_0213e3cc();
        func_02140988(&data_021c9328, 0x1000);
        func_0214131c(3, &data_021c9328, 0x06890000, 0x1000);
        M2C_FIELD(&data_021ce528, u8 *, 3) = 0U;
        func_0213e090(temp_r4);
    }
    if (M2C_FIELD(&data_021ce528, u8 *, 7) == 0) {
        return;
    }
    temp_r4_2 = func_0213e418();
    func_02140988(&data_021cbf28, 0x1000);
    func_0214131c(3, &data_021cbf28, 0x068A0000, 0x1000);
    M2C_FIELD(&data_021ce528, u8 *, 7) = 0U;
    func_0213e2f4(temp_r4_2);
}
