#include "m2c.h"

u8 func_02111c74(void *arg0, u8 arg1) {
    u8 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u8 *, 0x645);
    M2C_FIELD(arg0, u8 *, 0x645) = arg1;
    return temp_r2;
}
