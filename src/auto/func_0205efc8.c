#include "m2c.h"

M2C_UNK func_02004b0c(s32, M2C_UNK);                /* extern */
s8 func_020c9f74(M2C_UNK);                          /* extern */

void func_0205efc8(void *arg0, s32 arg1) {
    func_02004b0c(arg0 + 0x3290, 1);
    func_02004b0c(arg0 + 0x32C0, 1);
    func_02004b0c(arg0 + 0x32F0, 1);
    func_02004b0c(arg0 + 0x3320, 1);
    func_02004b0c(arg0 + 0x3350, 1);
    M2C_FIELD(arg0, s8 *, 0x33D1) = func_020c9f74(0x1E);
    M2C_FIELD(arg0, s8 *, 0x33D2) = func_020c9f74(0x1E);
    M2C_FIELD(arg0, s8 *, 0x33D3) = func_020c9f74(0x1E);
    M2C_FIELD(arg0, s8 *, 0x33D4) = func_020c9f74(0x1E);
    M2C_FIELD(arg0, s8 *, 0x33D5) = func_020c9f74(0x1E);
    switch (arg1) {                                 /* irregular */
        case 0:
            M2C_FIELD(arg0, s32 *, 0x3290) = 0xBE00;
            M2C_FIELD(arg0, s32 *, 0x3294) = 0x4600;
            M2C_FIELD(arg0, s32 *, 0x32C0) = 0xAA00;
            M2C_FIELD(arg0, s32 *, 0x32C4) = 0x5A00;
            M2C_FIELD(arg0, s32 *, 0x32F0) = 0xD200;
            M2C_FIELD(arg0, s32 *, 0x32F4) = 0x5A00;
            M2C_FIELD(arg0, s32 *, 0x3320) = 0xB400;
            M2C_FIELD(arg0, s32 *, 0x3324) = 0x7800;
            M2C_FIELD(arg0, s32 *, 0x3350) = 0xC800;
            M2C_FIELD(arg0, s32 *, 0x3354) = 0x7800;
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x3290) = 0x4400;
            M2C_FIELD(arg0, s32 *, 0x3294) = 0x4600;
            M2C_FIELD(arg0, s32 *, 0x32C0) = 0x3000;
            M2C_FIELD(arg0, s32 *, 0x32C4) = 0x5A00;
            M2C_FIELD(arg0, s32 *, 0x32F0) = 0x5800;
            M2C_FIELD(arg0, s32 *, 0x32F4) = 0x5A00;
            M2C_FIELD(arg0, s32 *, 0x3320) = 0x3A00;
            M2C_FIELD(arg0, s32 *, 0x3324) = 0x7800;
            M2C_FIELD(arg0, s32 *, 0x3350) = 0x4E00;
            M2C_FIELD(arg0, s32 *, 0x3354) = 0x7800;
            return;
    }
}
