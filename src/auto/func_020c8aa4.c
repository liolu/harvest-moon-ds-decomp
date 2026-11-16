/* compiler: 2.0/sp1p5 -flag no-opt_common_subs */
#include "m2c.h"

M2C_UNK func_02000dd4(s32, s32);                    /* extern */
s32 func_02140b90(M2C_UNK);                         /* extern */
s32 func_02140ba4(M2C_UNK);                         /* extern */
extern s32 data_021c8d24;

void func_020c8aa4(void) {
    data_021c8d24 = func_02140ba4(0);
    func_02000dd4(data_021c8d24, func_02140b90(0) - data_021c8d24);
}
