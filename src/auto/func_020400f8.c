#include "m2c.h"

M2C_UNK func_0201787c(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02024720(void *);                      /* extern */
M2C_UNK func_020301bc(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_021871d4;
extern s32 data_021c7760;

void *func_020400f8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_020301bc(arg0, arg1, arg2, 8, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021871d4;
    func_02024720(arg0 + 0xBAAC);
    func_0201787c(arg0 + 0xBAB8, 5, 0, 0, 0x80, 0xF);
    func_0201787c(arg0 + 0xBAE8, 5, 0, 0, 0xA0, 0xF);
    func_0201787c(arg0 + 0xBB18, 5, 0, 0, 0xC0, 0xF);
    func_0201787c(arg0 + 0xBB48, 5, 0, 0, 0xE0, 0xF);
    M2C_FIELD(arg0, s32 *, 0xBAA4) = (s32) data_021c7760;
    return arg0;
}
