#include "m2c.h"

extern s32 data_021c8c5c;

void func_020c5944(s32 arg0, s32 arg1) {
    void *temp_r2;

    temp_r2 = data_021c8c5c + 0x75AC + (arg0 * 4);
    M2C_FIELD(temp_r2, s32 *, 0x22C) = (s32) (arg1 + M2C_FIELD(temp_r2, s32 *, 0x22C));
}
