/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_021399e0(void *);                      /* extern */
M2C_UNK func_02141cc0(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_021422dc(M2C_UNK);                     /* extern */
M2C_UNK func_02142460(s32);                         /* extern */
s32 func_021424cc();                                /* extern */
M2C_UNK func_02145e78(void *);                      /* extern */
M2C_UNK func_02145e90(void *);                      /* extern */

void func_02139a14(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_02141cc0(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_02145e78(arg0 + 8);
        func_02145e90(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5 = func_021424cc();
        func_021422dc(1);
        func_02142460(temp_r5);
    }
    func_021399e0(arg0);
}
