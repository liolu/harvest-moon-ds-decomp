#include "m2c.h"

M2C_UNK func_020c8b40(s32);                         /* extern */
M2C_UNK func_0212cfac(void *);                      /* extern */

void func_0212d030(void *arg0) {
    s32 var_r4;
    void *var_r5;

    var_r5 = arg0;
    var_r4 = 0;
    do {
        func_020c8b40(M2C_FIELD(var_r5, s32 *, 0xC));
        var_r4 += 1;
        var_r5 += 0xC;
    } while (var_r4 < 0x40);
    func_0212cfac(arg0);
}
