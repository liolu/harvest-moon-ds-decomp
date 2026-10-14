#include "m2c.h"

M2C_UNK func_0213e374(M2C_UNK *);                   /* extern */
extern M2C_UNK data_022c6d64;

void func_0213e418(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_0213e374(&data_022c6d64);
}
