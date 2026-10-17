#include "engine.h"
#include "m2c.h"

void func_02024618(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02052848(M2C_UNK, void *, M2C_UNK, M2C_UNK, s16, s16, s8, u8);
M2C_UNK func_020c9f74(M2C_UNK);

void func_0206422c(s32 arg0) {
    s8 temp_r0;
    s8 var_r2;

    func_02024618(0x33, 0x06601000, 4, 0);
    func_02052848(arg0, arg0 + 0x18, 0x35, 0, 0x38, 0x40, 2, 1U);
    func_02052848(arg0 + 0xC, arg0 + 0x48, 0x35, 0, 0x80, 0x40, 2, 1U);
    func_02052848(arg0 + 0x78, arg0 + 0x84, 0x37, 3, 0x20, 0x80, 2, 1U);
    func_02052848(arg0 + 0xB4, arg0 + 0xC0, 0x37, 4, 0x68, 0x80, 2, 1U);
    func_02052848(arg0 + 0xF0, arg0 + 0xFC, 0x37, 6, 0xB0, 0x80, 2, 1U);
    func_02052848(arg0 + 0x12C, arg0 + 0x138, 0x37, 0, 0xB0, 0x30, 2, 1U);
    M2C_FIELD(arg0, s8 *, 0x16A) = 0;
    M2C_FIELD(arg0, s8 *, 0x16B) = 0;
    M2C_FIELD(arg0, s8 *, 0x16C) = 0;
    M2C_FIELD(arg0, s8 *, 0x16D) = 0;
    M2C_FIELD(arg0, s8 *, 0x16E) = 0x14;
    M2C_FIELD(arg0, s8 *, 0x16F) = 0;
    M2C_FIELD(arg0, s8 *, 0x170) = 0;
    M2C_FIELD(arg0, s8 *, 0x168) = (s8) func_020c9f74(0x33);
    temp_r0                      = (s8) func_020c9f74(0x33);
    var_r2                       = temp_r0;
    if (M2C_FIELD(arg0, s8 *, 0x168) == temp_r0) {
        var_r2 += 1;
        if (var_r2 == 0x34) {
            var_r2 = 0;
        }
    }
    M2C_FIELD(arg0, s8 *, 0x169) = var_r2;
}
