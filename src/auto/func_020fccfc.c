#include "m2c.h"

void func_020fccfc(void *arg0, s32 arg1) {
    void *temp_r1;
    void *temp_r2;

    M2C_FIELD(arg0, s32 *, 0x80) = arg1;
    M2C_FIELD(arg0, s8 *, 0x70) = 1;
    M2C_FIELD(arg0, u8 *, 0x71) = (u8) (M2C_FIELD(arg0, u8 *, 0x71) & ~0xF);
    M2C_FIELD(arg0, s8 *, 0x74) = 0;
    M2C_FIELD(arg0, s8 *, 0x75) = 0;
    M2C_FIELD(arg0, s16 *, 0x7E) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0x55;
    M2C_FIELD(arg0, s8 *, 9) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    temp_r2 = M2C_FIELD(arg0, void **, 0x84);
    temp_r1 = M2C_FIELD(temp_r2, void **, 0);
    if (temp_r1 == NULL) {
        return;
    }
    M2C_FIELD(temp_r2, s8 *, 0xF) = (s8) M2C_FIELD(temp_r1, s32 *, 8);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), s8 *, 0xE) = 0;
}
