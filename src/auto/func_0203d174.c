#include "m2c.h"

M2C_UNK func_02030780(); /* extern */
M2C_UNK func_0203086c();                      /* extern */
M2C_UNK func_020309c4();                            /* extern */
M2C_UNK func_02030bf0(); /* extern */
M2C_UNK func_02030c3c();                      /* extern */
s32 func_0203d25c();              /* extern */
s32 func_0203d28c();                     /* extern */
s32 func_020b6b9c();                             /* extern */
extern M2C_UNK data_021861b8;
extern M2C_UNK data_021861bc;

void func_0203d174(void *arg0) {
    s32 spC;
    s32 var_r7;
    s32 var_r8;
    s32 var_r9;

    var_r7 = 0;
    func_020309c4();
    M2C_FIELD(arg0, s32 *, 0xA0F0) = 0;
    var_r8 = 2;
    var_r9 = 8;
    do {
        if (func_020b6b9c(var_r8) != 0) {
            func_02030bf0(arg0, 0x30, var_r9, func_0203d25c(arg0, var_r8, &spC), 0, 0, spC);
            func_02030780(arg0, 3, var_r7, &data_021861b8, func_0203d28c(arg0, var_r8));
        } else {
            func_02030780(arg0, 1, var_r7, &data_021861bc);
        }
        var_r8 += 1;
        var_r9 += 0x10;
        var_r7 += 2;
    } while (var_r8 <= 0x41);
    func_02030c3c(arg0);
    func_0203086c(arg0);
}
