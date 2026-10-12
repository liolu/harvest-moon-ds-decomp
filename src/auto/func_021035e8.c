#include "m2c.h"

s32 func_020d48c8(void *);                          /* extern */
M2C_UNK func_020f3e94(void *, M2C_UNK, s32, u16);   /* extern */
M2C_UNK func_020f4028(void *, M2C_UNK, s32, u16);   /* extern */

void func_021035e8(void *arg0, M2C_UNK arg1) {
    func_020f3e94(arg0, arg1, func_020d48c8(arg0 + 0x10), M2C_FIELD(arg0, u16 *, 0x78));
    func_020f4028(arg0, arg1, func_020d48c8(arg0 + 0x40), M2C_FIELD(arg0, u16 *, 0x78));
}
