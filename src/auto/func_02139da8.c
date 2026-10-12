/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02138ec8();                            /* extern */

void func_02139da8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        return;
    }
    func_02138ec8();
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
}
