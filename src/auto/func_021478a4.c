#include "m2c.h"

M2C_UNK func_02141270();                            /* extern */
M2C_UNK func_021459ac(s32);                         /* extern */
M2C_UNK func_02147938(M2C_UNK, M2C_UNK);            /* extern */

void func_021478a4(void) {
    s32 temp_r0;

    temp_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 0) {
        func_021459ac(temp_r0);
    }
    func_02147938(1, 1);
    func_02141270();
}
