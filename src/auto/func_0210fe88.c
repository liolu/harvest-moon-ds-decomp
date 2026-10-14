#include "engine.h"
#include "m2c.h"

M2C_UNK func_020f3630(M2C_UNK);
void func_020f39e4(M2C_UNK, M2C_UNK);
void func_020f3a94(M2C_UNK, M2C_UNK);
void func_020f3bb8(M2C_UNK, M2C_UNK);
void func_020f3c7c(M2C_UNK, M2C_UNK);
void func_0211d514(M2C_UNK, M2C_UNK);

void func_0210fe88(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg2 != M2C_FIELD(arg0, s32 *, 0x3C)) {
        func_020f3a94(arg0, arg2);
        if ((arg2 != 0x24) && (arg2 != 0x22)) {

        } else {
            M2C_FIELD(arg0, s8 *, 0xB6)  = 0;
            M2C_FIELD(arg0, s8 *, 0xB7)  = 0;
            M2C_FIELD(arg0, s8 *, 0xB8)  = -1;
            M2C_FIELD(arg0, s8 *, 0xB9)  = -1;
            M2C_FIELD(arg0, s32 *, 0xA4) = 0x1400;
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1DC), s32 *, 0x18) != -1) {
                M2C_FIELD(arg0, s8 *, 0xFE)  = 0;
                M2C_FIELD(arg0, s8 *, 0xFF)  = 0;
                M2C_FIELD(arg0, s8 *, 0x100) = -1;
                M2C_FIELD(arg0, s8 *, 0x101) = -1;
                func_020f3c7c(M2C_FIELD(arg0, s32 *, 0xF8), 0x1400);
            }
        }
    }
    if (arg1 != M2C_FIELD((void *) func_020f3630(arg0), s8 *, 5)) {
        func_020f39e4(arg0, arg1);
        if ((arg2 != 0x24) && (arg2 != 0x22)) {

        } else {
            M2C_FIELD(arg0, s8 *, 0xB6)  = 0;
            M2C_FIELD(arg0, s8 *, 0xB7)  = 0;
            M2C_FIELD(arg0, s8 *, 0xB8)  = -1;
            M2C_FIELD(arg0, s8 *, 0xB9)  = -1;
            M2C_FIELD(arg0, s32 *, 0xA4) = 0x1400;
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1DC), s32 *, 0x18) != -1) {
                M2C_FIELD(arg0, s8 *, 0xFE)  = 0;
                M2C_FIELD(arg0, s8 *, 0xFF)  = 0;
                M2C_FIELD(arg0, s8 *, 0x100) = -1;
                M2C_FIELD(arg0, s8 *, 0x101) = -1;
                func_020f3c7c(M2C_FIELD(arg0, s32 *, 0xF8), 0x1400);
            }
        }
    }
    if (arg3 != M2C_FIELD(arg0, u8 *, 0x654)) {
        func_020f3bb8(arg0, arg3);
        M2C_FIELD(arg0, u8 *, 0x654) = (u8) arg3;
    }
    func_0211d514(arg0, arg2);
}
