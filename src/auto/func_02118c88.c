#include "m2c.h"

M2C_UNK func_0212a220(M2C_UNK, M2C_UNK);            /* extern */

void func_02118c88(void *arg0) {
    s16 temp_r2;

    temp_r2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1DC), s16 *, 0x14);
    switch (temp_r2) {                              /* irregular */
        case 0x126:
            func_0212a220(0, 0);
            return;
        case 0x12A:
            func_0212a220(1, 0);
            return;
        case 0x12B:
            func_0212a220(4, 0);
            return;
        default:
            func_0212a220(4, 0);
            return;
    }
}
