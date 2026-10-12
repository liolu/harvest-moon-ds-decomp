#include "m2c.h"

s32 func_020d48c8(void *);                          /* extern */
M2C_UNK func_020f3e94(void *, M2C_UNK, s32, M2C_UNK); /* extern */
u32 func_020f4028(void *, M2C_UNK, s32, M2C_UNK);   /* extern */
extern s32 data_021c8c5c;

u32 func_020d80b4(void *arg0, M2C_UNK arg1) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD((((M2C_FIELD(arg0, s32 *, 4) - 0x37) * 0x18) + data_021c8c5c), u8 *, 0x5EB7) << 0x1E) >> 0x1F;
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020f3e94(arg0, arg1, func_020d48c8(arg0 + 0x10), 3);
    return func_020f4028(arg0, arg1, func_020d48c8(arg0 + 0x40), 3);
}
