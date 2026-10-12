#include "m2c.h"

M2C_UNK func_020ca11c(M2C_UNK, M2C_UNK);            /* extern */
extern u16 data_021c8cd8;
extern u16 data_021c8cdc;

void func_02062de8(void *arg0, s32 arg1, s32 arg2, s8 arg3) {
    if ((s32) M2C_FIELD((arg0 + arg3), s8 *, 0x33A4) > 0xA) {
        return;
    }
    if ((s32) data_021c8cdc < (s32) (arg1 - 0x10)) {
        return;
    }
    if ((s32) data_021c8cdc > (s32) (arg1 + 0x10)) {
        return;
    }
    if ((s32) data_021c8cd8 < (s32) (arg2 - 0x18)) {
        return;
    }
    if ((s32) data_021c8cd8 > (s32) (arg2 + 0x18)) {
        return;
    }
    func_020ca11c(0x6D, 2);
    M2C_FIELD(arg0, s8 *, 0x33C1) = arg3;
}
