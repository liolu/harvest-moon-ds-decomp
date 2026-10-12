#include "m2c.h"

M2C_UNK func_02017904(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_0202475c(void *, M2C_UNK, s32, M2C_UNK, s32); /* extern */

void func_02032cf4(void *arg0) {
    func_0202475c(arg0 + 0xBAB0, 0x11, M2C_FIELD(arg0, s32 *, 0x3210), 1, 0);
    M2C_FIELD(arg0, s32 *, 0x3210) = (s32) (u16) (M2C_FIELD(arg0, u16 *, 0xBAB8) + M2C_FIELD(arg0, u16 *, 0xBABA));
    func_02017904(arg0 + 0xBABC, arg0 + 0xBAB0, 0);
    func_02017904(arg0 + 0xBAEC, arg0 + 0xBAB0, 1);
    func_02017904(arg0 + 0xBB1C, arg0 + 0xBAB0, 2);
    func_02017904(arg0 + 0xBB4C, arg0 + 0xBAB0, 3);
    func_02017904(arg0 + 0xBB7C, arg0 + 0xBAB0, 4);
}
