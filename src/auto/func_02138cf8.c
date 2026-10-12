/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02139f60();                            /* extern */
M2C_UNK func_02141cc0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_021422dc(M2C_UNK);                     /* extern */
M2C_UNK func_02142460(s32);                         /* extern */
s32 func_021424cc();                                /* extern */

void func_02138cf8(void) {
    s32 temp_r4;

    func_02139f60();
    func_02141cc0(0, 0, 0, 0);
    temp_r4 = func_021424cc();
    func_021422dc(1);
    func_02142460(temp_r4);
}
