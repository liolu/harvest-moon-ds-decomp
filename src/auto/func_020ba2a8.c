#include "m2c.h"

M2C_UNK func_020c57c4(s32);                         /* extern */
extern void *data_021c8c5c;

void func_020ba2a8(u32 arg0) {
    u32 var_r5;
    void *temp_r4;

    var_r5  = arg0;
    temp_r4 = data_021c8c5c;
    if (var_r5 >= 0x3B9ACA00U) {
        var_r5 = 0x3B9ACA00;
        func_020c57c4(0x792);
    }
    M2C_FIELD(temp_r4, u32 *, 0x10) = var_r5;
}
