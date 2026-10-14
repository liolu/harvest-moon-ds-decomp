#include "m2c.h"

extern void *data_021c8c5c;

void func_020c4bcc(void **arg0, s32 arg1) {
    M2C_FIELD(data_021c8c5c, s32 *, 4) = arg1;
    M2C_FIELD(*arg0, M2C_UNK(**)(), 8)(arg0);
}
