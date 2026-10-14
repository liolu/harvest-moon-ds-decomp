#include "m2c.h"

M2C_UNK func_020a0f78(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_020a1068(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020a1168(void *, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020ca11c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0212d7e8(M2C_UNK *, M2C_UNK, M2C_UNK, void *, s32); /* extern */
M2C_UNK func_02140988(void *, M2C_UNK);             /* extern */
M2C_UNK func_021416cc(s32, void *, M2C_UNK);        /* extern */
extern M2C_UNK data_02190da8;
extern M2C_UNK data_02190dac;
extern M2C_UNK data_02190db0;
extern M2C_UNK data_022c4ccc;

void func_02096dac(void *arg0) {
    u16 temp_r1;

    if (M2C_FIELD(arg0, u16 *, 0x4CE) == 1) {
        return;
    }
    func_02140988(arg0 + 0x4F4, 0x600);
    func_021416cc(0x801F, arg0 + 0x4F4, 0x600);
    func_020a1168(arg0 + 0x4F4, 0x261, 0x16, 4, 2, 8);
    func_020a1168(arg0 + 0x4F4, 0x2A1, 0xE, 4, 2, 8);
    func_020a1168(arg0 + 0x4F4, 0x3B, 0x12, 4, 2, 8);
    func_020a1168(arg0 + 0x4F4, 0x268, 0xA, 1, 2, 8);
    func_020a0f78(arg0 + 0x4F4, 0x266, 2, 8, &data_02190dac, 0xA);
    func_020a0f78(arg0 + 0x4F4, 0x269, 2, 8, &data_02190db0, 0);
    func_020a0f78(arg0 + 0x4F4, 0x2A6, 5, 8, &data_02190da8, 0);
    func_020a1068(arg0 + 0x4F4, 0x1A1, 6, 6, 7);
    M2C_FIELD(arg0, u16 *, 0x4CC) = (u16) (M2C_FIELD(arg0, u16 *, 0x4CC) + 1);
    temp_r1                       = M2C_FIELD(arg0, u16 *, 0x4CC);
    if ((u32) temp_r1 >= 0x5AU) {
        M2C_FIELD(arg0, u16 *, 0x4CE) = 1U;
    } else if ((u32) temp_r1 >= 0x3CU) {
        func_020a1168(arg0 + 0x4F4, 0x107, 0x40, 0x11, 5, 8);
        func_020ca11c(0xD4, 2);
    } else if ((u32) temp_r1 >= 0x28U) {
        func_020a1168(arg0 + 0x4F4, 0x10D, 0xE0, 4, 6, 8);
    } else if ((u32) temp_r1 >= 0x14U) {
        func_020a1168(arg0 + 0x4F4, 0x10D, 0xE4, 4, 6, 8);
    } else {
        func_020a1168(arg0 + 0x4F4, 0x10D, 0xE8, 4, 6, 8);
    }
    func_0212d7e8(&data_022c4ccc, 0, 0x7F, arg0 + 4, 1);
}
