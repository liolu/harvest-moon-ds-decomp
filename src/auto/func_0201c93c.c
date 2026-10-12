#include "m2c.h"

M2C_UNK func_020173ac();                            /* extern */
M2C_UNK func_0201e560(s32, s32);                    /* extern */
M2C_UNK func_0202143c(s32);                         /* extern */
M2C_UNK func_0202cb5c(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_0213ee9c(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0213eefc(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02140988(s32, M2C_UNK);                /* extern */
extern s32 data_02180fa0;
extern M2C_UNK func_0213eadc;
extern M2C_UNK func_0213eb3c;
extern M2C_UNK func_0213eb9c;
extern M2C_UNK func_0213ebfc;

void func_0201c93c(s32 arg0) {
    s32 temp_r5;
    s32 var_r5;

    func_020173ac();
    func_0202143c(arg0 + 0x23B4);
    func_02140988(arg0 + 0x78FC, 0x3000);
    temp_r5 = data_02180fa0 << 5;
    func_0213ee9c(arg0 + 0x78FC, temp_r5, 0x3000);
    func_0202cb5c(arg0 + 0xB51C, &func_0213eadc, 0);
    func_0202cb5c(arg0 + 0xBB2C, &func_0213eb9c, 0);
    func_02140988(arg0 + 0x48FC, 0x3000);
    func_0213eefc(arg0 + 0x48FC, temp_r5, 0x3000);
    func_0202cb5c(arg0 + 0xA8FC, &func_0213eb3c, 0);
    func_0202cb5c(arg0 + 0xAF0C, &func_0213ebfc, 0);
    var_r5 = 3;
    do {
        func_0201e560(arg0, var_r5);
        var_r5 += 1;
    } while (var_r5 <= 0x29);
}
