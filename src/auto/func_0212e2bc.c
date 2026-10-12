#include "m2c.h"

M2C_UNK func_020c8e20(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
extern M2C_UNK data_0216064c;

void func_0212e2bc(s32 arg0, s32 arg1, M2C_UNK arg2) {
    if (arg0 == 7) {
        return;
    }
    func_020c8e20(*((M2C_UNK *)((s8 *)&data_0216064c + (arg0 * 4))), arg1 << 5, 0x20, arg2);
}
