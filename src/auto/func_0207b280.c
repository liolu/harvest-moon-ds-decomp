#include "m2c.h"

M2C_UNK func_02016be8();                            /* extern */
M2C_UNK func_0202143c(s32);                         /* extern */
M2C_UNK func_0202cb5c(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_0207b82c(s32, s32);                    /* extern */
M2C_UNK func_0213eefc(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02140988(s32, M2C_UNK);                /* extern */
extern s32 data_02180fa0;
extern M2C_UNK func_0213ebfc;

void func_0207b280(s32 arg0) {
    s32 var_r5;

    func_02016be8();
    func_0202143c(arg0 + 0x2510);
    func_02140988(arg0 + 0x464C, 0x3000);
    func_0213eefc(arg0 + 0x464C, data_02180fa0 << 5, 0x3000);
    func_0202cb5c(arg0 + 0x764C, &func_0213ebfc, 0);
    var_r5 = 0;
    do {
        func_0207b82c(arg0, var_r5);
        var_r5 += 1;
    } while (var_r5 < 0x15);
}
