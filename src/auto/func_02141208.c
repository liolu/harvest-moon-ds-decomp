#include "m2c.h"

M2C_UNK func_02141270();                            /* extern */
extern M2C_UNK data_022c7120;

void func_02141208(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        M2C_FIELD(&data_022c7120, s16 *, 2) = 1;
        return;
    }
    func_02141270();
}
