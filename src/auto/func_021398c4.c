/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02141cc0(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_021422dc(M2C_UNK);                     /* extern */
M2C_UNK func_02142460(s32);                         /* extern */
s32 func_021424cc();                                /* extern */

void func_021398c4(void *arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_02141cc0(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = func_021424cc();
    func_021422dc(1);
    func_02142460(temp_r4);
}
