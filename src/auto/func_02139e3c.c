/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02138864(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 data_022c5da8;
extern M2C_UNK data_022c5dac;
extern M2C_UNK func_0213984c;
extern M2C_UNK func_021398c4;

void func_02139e3c(void *arg0) {
    if (data_022c5da8 == 0) {
        func_02138864(&data_022c5dac, 0);
        data_022c5da8 = 1;
    }
    M2C_FIELD(arg0, M2C_UNK **, 8) = &func_021398c4;
    M2C_FIELD(arg0, void **, 0xC) = arg0;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_0213984c;
    M2C_FIELD(arg0, void **, 0x18) = arg0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
}
