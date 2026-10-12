#include "m2c.h"

M2C_UNK func_02141270();                            /* extern */
M2C_UNK func_02145084(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_021454a0(M2C_UNK);                     /* extern */
s32 func_021454b8(M2C_UNK);                         /* extern */
extern M2C_UNK data_021c8cde;

void func_020c8374(void) {
    func_02145084(0, 4, &data_021c8cde, 5);
    func_021454a0(2);
    if (func_021454b8(2) == 0) {
        return;
    }
    func_02141270();
}
