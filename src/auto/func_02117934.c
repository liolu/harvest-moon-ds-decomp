#include "m2c.h"

M2C_UNK func_020f3c7c(void *, s32);                 /* extern */

void func_02117934(void *arg0, s32 arg1) {
    s32 var_r2;
    s8 temp_r1;
    s8 temp_r1_2;
    s8 temp_r1_3;
    s8 temp_r1_4;

    var_r2 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x18);
    if (arg1 == 0x24) {
        temp_r1 = M2C_FIELD(arg0, volatile s8 *, 0xE);
        if (temp_r1 == 0) {
            temp_r1_2 = M2C_FIELD(arg0, volatile s8 *, 0x10);
            if ((s32) temp_r1_2 > 0) {
                if (var_r2 < 0x1400) {
                    var_r2 += 0x400;
                }
            } else if ((s32) temp_r1_2 < 0) {
                var_r2 -= 0x400;
            }
            M2C_FIELD(arg0, volatile s8 *, 0xE) = (s8) (M2C_FIELD(arg0, volatile s8 *, 0xE) + 1);
        } else if ((s32) temp_r1 < 0xB) {
            M2C_FIELD(arg0, volatile s8 *, 0xE) = (s8) (temp_r1 + 1);
        } else {
            M2C_FIELD(arg0, volatile s8 *, 0xE) = 0;
            M2C_FIELD(arg0, volatile s8 *, 0x10) = (s8) (M2C_FIELD(arg0, volatile s8 *, 0x10) * -1);
        }
    } else if (arg1 == 0x22) {
        temp_r1_3 = M2C_FIELD(arg0, volatile s8 *, 0xF);
        if (temp_r1_3 == 0) {
            temp_r1_4 = M2C_FIELD(arg0, volatile s8 *, 0x11);
            if ((s32) temp_r1_4 > 0) {
                if (var_r2 < 0x1400) {
                    var_r2 += 0x400;
                }
            } else if ((s32) temp_r1_4 < 0) {
                var_r2 -= 0x400;
            }
            M2C_FIELD(arg0, volatile s8 *, 0xF) = (s8) (M2C_FIELD(arg0, volatile s8 *, 0xF) + 1);
        } else if ((s32) temp_r1_3 < 8) {
            M2C_FIELD(arg0, volatile s8 *, 0xF) = (s8) (temp_r1_3 + 1);
        } else {
            M2C_FIELD(arg0, volatile s8 *, 0xF) = 0;
            M2C_FIELD(arg0, volatile s8 *, 0x11) = (s8) (M2C_FIELD(arg0, volatile s8 *, 0x11) * -1);
        }
    }
    func_020f3c7c(M2C_FIELD(arg0, void **, 8), var_r2);
}
