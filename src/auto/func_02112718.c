#include "m2c.h"

void *func_020f3610();                        /* extern */
void *func_020f3630();                        /* extern */
s32 func_020ffc34();                             /* extern */
void *func_02121370();                      /* extern */

s32 func_02112718(void *arg0) {
    s32 spC;
    s32 sp8;
    s32 sp4;
    s32 sp0;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r11;
    s32 var_r4;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;
    s32 var_r9;
    void *temp_r0;

    var_r6 = 0x10;
    sp0 = -1;
    spC = -0xC;
    sp8 = -0x10;
    var_r11 = 0x12;
    var_r7 = 1;
    sp4 = -0x12;
    do {
        if (((var_r7 < 0x34) || (var_r7 >= 0x53)) && (func_02121370(M2C_FIELD(arg0, s32 *, 0x1E0), var_r7) != NULL) && (func_020ffc34(func_02121370(M2C_FIELD(arg0, s32 *, 0x1E0), var_r7) + 0x10) != 0)) {
            temp_r0 = func_02121370(M2C_FIELD(arg0, s32 *, 0x1E0), var_r7);
            if (M2C_FIELD(temp_r0, u8 *, 0xA) != 0) {
                var_r4 = M2C_FIELD(temp_r0, s32 *, 0xC);
            } else {
                var_r4 = (s32) M2C_FIELD(func_020f3610(), s8 *, 4);
            }
            if (M2C_FIELD(arg0, u8 *, 0xA) != 0) {
                var_r0 = M2C_FIELD(arg0, s32 *, 0xC);
            } else {
                var_r0 = (s32) M2C_FIELD(func_020f3610(arg0), s8 *, 4);
            }
            if (var_r4 == var_r0) {
                temp_r4 = ((s32) M2C_FIELD(arg0, s32 *, 0x10) >> 8) - ((s32) M2C_FIELD(func_02121370(M2C_FIELD(arg0, s32 *, 0x1E0), var_r7), s32 *, 0x10) >> 8);
                temp_r5 = ((s32) M2C_FIELD(arg0, s32 *, 0x14) >> 8) - ((s32) M2C_FIELD(func_02121370(M2C_FIELD(arg0, s32 *, 0x1E0), var_r7), s32 *, 0x14) >> 8);
                if (temp_r4 < 0) {
                    var_r8 = 0 - temp_r4;
                } else {
                    var_r8 = temp_r4;
                }
                if (temp_r5 < 0) {
                    var_r9 = 0 - temp_r5;
                } else {
                    var_r9 = temp_r5;
                }
                if ((temp_r4 <= 0x12) && (temp_r4 >= sp4) && (temp_r5 <= 0x10) && (temp_r5 >= sp8)) {
                    if ((temp_r4 <= 0) && (M2C_FIELD(func_020f3630(arg0), s8 *, 5) == 1) && (temp_r5 <= 0xC) && (temp_r5 >= spC) && ((s32) (var_r11 + var_r6) > (s32) (var_r8 + var_r9))) {
                        sp0 = var_r7;
                        var_r11 = var_r8;
                        var_r6 = var_r9;
                    }
                    if ((temp_r4 >= 0) && (M2C_FIELD(func_020f3630(arg0), s8 *, 5) == 3) && (temp_r5 <= 0xC) && (temp_r5 >= spC) && ((s32) (var_r11 + var_r6) > (s32) (var_r8 + var_r9))) {
                        sp0 = var_r7;
                        var_r11 = var_r8;
                        var_r6 = var_r9;
                    }
                    if ((temp_r5 <= 0) && (M2C_FIELD(func_020f3630(arg0), s8 *, 5) == 2) && ((s32) (var_r11 + var_r6) > (s32) (var_r8 + var_r9))) {
                        sp0 = var_r7;
                        var_r11 = var_r8;
                        var_r6 = var_r9;
                    }
                    if ((temp_r5 >= 0) && (M2C_FIELD(func_020f3630(arg0), s8 *, 5) == 0) && ((s32) (var_r11 + var_r6) > (s32) (var_r8 + var_r9))) {
                        sp0 = var_r7;
                        var_r11 = var_r8;
                        var_r6 = var_r9;
                    }
                }
            }
        }
        var_r7 += 1;
    } while (var_r7 < 0xAF);
    return sp0;
}
