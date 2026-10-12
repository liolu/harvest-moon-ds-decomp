#include "m2c.h"

s32 func_020d48c8(void *);                          /* extern */
u32 func_020f3e94(void *, M2C_UNK, s32, M2C_UNK);   /* extern */
extern s32 data_021c8c5c;

u32 func_020e4c24(void *arg0, M2C_UNK arg1) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD((((M2C_FIELD(arg0, s32 *, 4) - 0x53) * 0xC) + data_021c8c5c), u8 *, 0x5A54) << 0x1F) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    return func_020f3e94(arg0, arg1, func_020d48c8(arg0 + 0x10), 3);
}
