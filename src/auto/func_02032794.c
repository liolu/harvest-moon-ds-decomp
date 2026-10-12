#include "m2c.h"

M2C_UNK func_0201787c(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02024720(void *);                      /* extern */
M2C_UNK func_020301bc(void *, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0203230c(M2C_UNK, M2C_UNK, void *);    /* extern */
extern M2C_UNK data_02183e38;

void *func_02032794(void *arg0, s32 arg1, M2C_UNK arg2) {
    func_020301bc(arg0, arg1, arg2, 6, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02183e38;
    M2C_FIELD(arg0, s32 *, 0xBAA4) = -1;
    M2C_FIELD(arg0, s32 *, 0xBAAC) = arg1;
    func_02024720(arg0 + 0xBAB0);
    func_0201787c(arg0 + 0xBABC, 5, 0, 0, 0x60, 0xF);
    func_0201787c(arg0 + 0xBAEC, 5, 0, 0, 0x80, 0xF);
    func_0201787c(arg0 + 0xBB1C, 5, 0, 0, 0xA0, 0xF);
    func_0201787c(arg0 + 0xBB4C, 5, 0, 0, 0xC0, 0xF);
    func_0201787c(arg0 + 0xBB7C, 5, 0, 0, 0xE0, 0xF);
    M2C_FIELD(arg0, s8 *, 0xBBAC) = 0;
    func_0203230c(0, 0, arg0 + 0xBAA8);
    return arg0;
}
