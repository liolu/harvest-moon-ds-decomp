/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK func_02025048(M2C_UNK **);                  /* extern */
M2C_UNK func_02025060(M2C_UNK **);                  /* extern */
M2C_UNK func_0202507c(M2C_UNK **, M2C_UNK, M2C_UNK); /* extern */
s32 func_020251fc(M2C_UNK **, M2C_UNK);             /* extern */
extern M2C_UNK data_0217cc0c;

s32 func_02032660(M2C_UNK arg0) {
    M2C_UNK *sp0;
    s32 temp_r4;

    func_02025048(&sp0);
    func_0202507c(&sp0, 0, 0xA);
    temp_r4 = func_020251fc(&sp0, arg0);
    sp0     = &data_0217cc0c;
    func_02025060(&sp0);
    return temp_r4;
}
