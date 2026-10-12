#include "m2c.h"

s32 func_020c9f74(s32);                             /* extern */

void func_020faba4(void *arg0, void *arg1) {
    s8 temp_r0_3;
    s8 temp_r6;
    u16 temp_r0;
    u32 temp_r0_2;

    if (M2C_FIELD(arg0, volatile u8 *, 1) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, volatile u16 *, 2);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, volatile u16 *, 2) = (u16) (temp_r0 - 1);
        temp_r6 = M2C_FIELD(arg0, volatile s8 *, 0);
        if ((s32) temp_r6 < 0) {
            temp_r0_2 = 0 - temp_r6;
            M2C_FIELD(arg1, volatile s32 *, 0x10) = (s32) ((temp_r6 + func_020c9f74((s32) (temp_r0_2 + (temp_r0_2 >> 0x1F)) >> 1)) << 5);
        } else {
            M2C_FIELD(arg1, volatile s32 *, 0x10) = (s32) ((temp_r6 - func_020c9f74((s32) (temp_r6 + ((u32) temp_r6 >> 0x1F)) >> 1)) << 5);
        }
    } else {
        M2C_FIELD(arg1, volatile s32 *, 0x10) = (s32) (M2C_FIELD(arg0, volatile s8 *, 0) << 5);
        temp_r0_3 = M2C_FIELD(arg0, volatile s8 *, 0);
        if ((s32) temp_r0_3 > 0) {
            M2C_FIELD(arg0, volatile s8 *, 0) = (s8) (temp_r0_3 - 1);
        } else if ((s32) temp_r0_3 < 0) {
            M2C_FIELD(arg0, volatile s8 *, 0) = (s8) (temp_r0_3 + 1);
        } else {
            M2C_FIELD(arg0, volatile u8 *, 1) = 0U;
        }
    }
    M2C_FIELD(arg0, volatile s8 *, 0) = (s8) (M2C_FIELD(arg0, volatile s8 *, 0) * -1);
    if (M2C_FIELD(arg0, volatile s8 *, 0) == 0) {
        M2C_FIELD(arg0, volatile u8 *, 1) = 0U;
    }
}
