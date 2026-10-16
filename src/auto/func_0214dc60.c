/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u8 func_0214dc60(void *arg0) {
    u32 var_r0;
    u8 *temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 **, 8);
    if (temp_r0 != NULL) {
        var_r0 = *temp_r0 & 0x1F;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
