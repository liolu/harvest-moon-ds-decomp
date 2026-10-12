#include "m2c.h"

M2C_UNK func_0202c20c(M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_0218e9c0;

void func_02073e84(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s8 temp_r2;
    s8 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s8 *, 0xA);
    if (M2C_FIELD(arg0, s8 *, 0xB) != temp_r3) {
        func_0202c20c(arg2, arg1, M2C_FIELD(arg0, u8 *, 0x14) + 1, (M2C_FIELD(arg0, s8 *, 6) * M2C_FIELD(arg0, u8 *, 0x16)) + M2C_FIELD(arg0, u8 *, 0x17) + 1, &data_0218e9c0, (s32) temp_r3);
    }
    temp_r2 = M2C_FIELD(arg0, s8 *, 8);
    if (M2C_FIELD(arg0, s8 *, 9) != temp_r2) {
        func_0202c20c(arg2, arg1, M2C_FIELD(arg0, u8 *, 0x14) + 2, (M2C_FIELD(arg0, s8 *, 6) * M2C_FIELD(arg0, u8 *, 0x16)) + M2C_FIELD(arg0, u8 *, 0x17) + 1, &data_0218e9c0, (s32) temp_r2);
    }
    M2C_FIELD(arg0, s8 *, 0xB) = (s8) M2C_FIELD(arg0, s8 *, 0xA);
    M2C_FIELD(arg0, s8 *, 9) = (s8) M2C_FIELD(arg0, s8 *, 8);
}
