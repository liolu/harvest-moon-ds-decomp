#include "m2c.h"

M2C_UNK func_0213df90(s32);                         /* extern */
M2C_UNK func_0213e274(s32);                         /* extern */
s32 func_0213e3a8();                                /* extern */
s32 func_0213e3f0();                                /* extern */
M2C_UNK func_02140988(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0214131c(M2C_UNK, void *, s32, M2C_UNK); /* extern */
extern M2C_UNK data_021c9128;
extern M2C_UNK data_021cbd28;
extern M2C_UNK data_021ce528;

void func_020c9074(void) {
    s32 temp_r4;
    s32 temp_r4_2;
    u8 var_r8;
    u8 var_r8_2;

    if (M2C_FIELD(&data_021ce528, u8 *, 1) != 0) {
        temp_r4 = func_0213e3a8();
        func_02140988(&data_021c9128, 0x200);
        var_r8 = 0;
        do {
            func_0214131c(3, (M2C_UNK *) ((s8 *) &data_021c9128 + (var_r8 << 5)), (var_r8 << 9) + 0x06894000, 0x20);
            var_r8 += 1;
        } while ((u32) var_r8 < 0x10U);
        M2C_FIELD(&data_021ce528, u8 *, 1) = 0U;
        func_0213df90(temp_r4);
    }
    if (M2C_FIELD(&data_021ce528, u8 *, 5) == 0) {
        return;
    }
    temp_r4_2 = func_0213e3f0();
    func_02140988(&data_021cbd28, 0x200);
    var_r8_2 = 0;
    do {
        func_0214131c(3, (M2C_UNK *) ((s8 *) &data_021cbd28 + (var_r8_2 << 5)), (var_r8_2 << 9) + 0x0689C000, 0x20);
        var_r8_2 += 1;
    } while ((u32) var_r8_2 < 0x10U);
    M2C_FIELD(&data_021ce528, u8 *, 5) = 0U;
    func_0213e274(temp_r4_2);
}
