#include "m2c.h"

s32 func_020b2f20(s32 *, M2C_UNK *, M2C_UNK *);     /* extern */
extern M2C_UNK data_02192530;
extern M2C_UNK data_02192534;
extern M2C_UNK data_02192538;
extern M2C_UNK data_0219253c;
extern M2C_UNK data_02192540;
extern M2C_UNK data_02192544;
extern M2C_UNK data_02192548;
extern M2C_UNK data_0219254c;
extern M2C_UNK data_02192550;
extern M2C_UNK data_02192554;

s32 func_020b2e18(s16 *arg0) {
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 sp4;
    s32 sp0;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;

    var_r5 = 1;
    var_r6 = 1;
    var_r7 = 1;
    var_r8 = 1;
    sp10 = (s32) *arg0;
    if (func_020b2f20(&sp10, &data_02192530, &data_02192534) == 0) {
        spC = (s32) *arg0;
        if (func_020b2f20(&spC, &data_02192538, &data_0219253c) == 0) {
            var_r8 = 0;
        }
    }
    if (var_r8 == 0) {
        sp8 = (s32) *arg0;
        if (func_020b2f20(&sp8, &data_02192540, &data_02192544) == 0) {
            var_r7 = 0;
        }
    }
    if (var_r7 == 0) {
        sp4 = (s32) *arg0;
        if (func_020b2f20(&sp4, &data_02192548, &data_0219254c) == 0) {
            var_r6 = 0;
        }
    }
    if (var_r6 == 0) {
        sp0 = (s32) *arg0;
        if (func_020b2f20(&sp0, &data_02192550, &data_02192554) == 0) {
            var_r5 = 0;
        }
    }
    return var_r5;
}
