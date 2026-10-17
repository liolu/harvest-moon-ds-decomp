#include "m2c.h"

M2C_UNK func_020c9284(s32);                         /* extern */
M2C_UNK func_020c92c4(s32);                         /* extern */
M2C_UNK func_020c9624(s32);                         /* extern */
M2C_UNK func_020c968c(s32);                         /* extern */
extern M2C_UNK data_021ce530;

void func_020c9364(s16 arg0, s32 arg1) {
    *((u16 *) ((s8 *) &data_021ce530 + (arg1 * 2))) = arg0;
    func_020c9624(arg1);
    func_020c968c(arg1);
    func_020c9284(arg1);
    func_020c92c4(arg1);
}
