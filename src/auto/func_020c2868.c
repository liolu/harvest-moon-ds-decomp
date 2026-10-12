#include "m2c.h"

M2C_UNK func_020c3f6c(void *, s32);                 /* extern */
extern M2C_UNK data_021927e8;
extern s32 data_021c8c5c;

void *func_020c2868(void *arg0) {
    func_020c3f6c(arg0, data_021c8c5c + 0x2C);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021927e8;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (data_021c8c5c + 0x108);
    return arg0;
}
