#include "m2c.h"

s32 func_0213e760();                                /* extern */
M2C_UNK func_0214131c(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_02141720(M2C_UNK, s32, u32);           /* extern */
extern s32 data_021c7300;

void func_0213eefc(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_0213e760();
    if ((data_021c7300 != -1) && (arg2 > 0x30U)) {
        func_0214131c(data_021c7300, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_02141720(arg0, temp_ip + arg1, arg2);
}
