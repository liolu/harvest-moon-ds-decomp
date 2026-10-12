#include "m2c.h"

M2C_UNK func_020173ac();                            /* extern */
M2C_UNK func_0202cb5c(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_02035a10(s32, s32);                    /* extern */
M2C_UNK func_0213eefc(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02140988(s32, M2C_UNK);                /* extern */
extern s32 data_02180fa0;
extern M2C_UNK func_0213ebfc;

void func_02035668(s32 arg0) {
    s32 var_r4;

    func_020173ac();
    func_02140988(arg0 + 0x23C0, 0x3000);
    func_0213eefc(arg0 + 0x23C0, data_02180fa0 << 5, 0x3000);
    func_0202cb5c(arg0 + 0x5568, &func_0213ebfc, 0);
    var_r4 = 0;
    do {
        func_02035a10(arg0, var_r4);
        var_r4 += 1;
    } while (var_r4 < 0xA);
}
