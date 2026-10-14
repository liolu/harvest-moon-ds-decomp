#include "m2c.h"

M2C_UNK func_0213daf8(u16);                         /* extern */
extern u16 data_022c6d4c;

u16 func_0213e374(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_022c6d4c |= temp_r4;
    func_0213daf8(temp_r4);
    return temp_r4;
}
