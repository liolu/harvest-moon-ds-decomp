#include "m2c.h"

M2C_UNK func_020a0f78(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_020a1068(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020a1168(void *, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020ca11c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0212d7e8(M2C_UNK *, M2C_UNK, M2C_UNK, void *, s32); /* extern */
M2C_UNK func_02140988(void *, M2C_UNK);             /* extern */
M2C_UNK func_021416cc(s32, void *, M2C_UNK);        /* extern */
extern M2C_UNK data_02190ed4;
extern M2C_UNK data_02190ed8;
extern M2C_UNK data_02190edc;
extern M2C_UNK data_022c4ccc;

void func_0209b79c(void *arg0) {
    u16 temp_r1;

    if (M2C_FIELD(arg0, u16 *, 0x902) == 1) {
        return;
    }
    func_02140988(arg0 + 0x92E, 0x600);
    func_021416cc(0x801F, arg0 + 0x92E, 0x600);
    func_020a1168(arg0 + 0x92E, 0x261, 0x16, 4, 2, 8);
    func_020a1168(arg0 + 0x92E, 0x2A1, 0xE, 4, 2, 8);
    func_020a1168(arg0 + 0x92E, 0x3B, 0x12, 4, 2, 8);
    func_020a1168(arg0 + 0x92E, 0x268, 0xA, 1, 2, 8);
    func_020a0f78(arg0 + 0x92E, 0x266, 2, 8, &data_02190ed8, 0xA);
    func_020a0f78(arg0 + 0x92E, 0x269, 2, 8, &data_02190edc, 0);
    func_020a0f78(arg0 + 0x92E, 0x2A6, 5, 8, &data_02190ed4, 0);
    func_020a1068(arg0 + 0x92E, 0x1A1, 6, 6, 7);
    M2C_FIELD(arg0, u16 *, 0x900) = (u16) (M2C_FIELD(arg0, u16 *, 0x900) + 1);
    temp_r1 = M2C_FIELD(arg0, u16 *, 0x900);
    if ((u32) temp_r1 >= 0x5AU) {
        M2C_FIELD(arg0, u16 *, 0x902) = 1U;
    } else if ((u32) temp_r1 >= 0x3CU) {
        func_020a1168(arg0 + 0x92E, 0x107, 0x40, 0x11, 5, 8);
        func_020ca11c(0xD4, 2);
    } else if ((u32) temp_r1 >= 0x28U) {
        func_020a1168(arg0 + 0x92E, 0x10D, 0xE0, 4, 6, 8);
    } else if ((u32) temp_r1 >= 0x14U) {
        func_020a1168(arg0 + 0x92E, 0x10D, 0xE4, 4, 6, 8);
    } else {
        func_020a1168(arg0 + 0x92E, 0x10D, 0xE8, 4, 6, 8);
    }
    if (M2C_FIELD(arg0, u16 *, 0x900) == 0x28) {
        M2C_FIELD(arg0, s8 *, 0xD5A6) = 0;
    }
    if (M2C_FIELD(arg0, u16 *, 0x900) == 0x5A) {
        M2C_FIELD(arg0, s8 *, 0xD5A6) = 0;
        M2C_FIELD(arg0, s8 *, 0xD5A8) = 1;
    }
    func_0212d7e8(&data_022c4ccc, 0, 0x7F, arg0 + 4, 0);
}
