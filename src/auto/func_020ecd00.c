#include "m2c.h"

s32 func_020d48c8(void *);                          /* extern */
M2C_UNK func_020f3e94(void *, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_020f4028(void *, M2C_UNK, s32, M2C_UNK); /* extern */

void func_020ecd00(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s8 *, 1) == 0) {
        return;
    }
    func_020f3e94(arg0, arg1, func_020d48c8(arg0 + 0x10), 3);
    func_020f4028(arg0, arg1, func_020d48c8(arg0 + 0x40), 3);
}
