#include "m2c.h"

M2C_UNK func_0213e374(M2C_UNK *);                   /* extern */
extern M2C_UNK data_022c6d5c;

void func_0213e3cc(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_0213e374(&data_022c6d5c);
}
