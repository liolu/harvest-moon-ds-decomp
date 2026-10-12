#include "m2c.h"
#include "engine.h"

void func_02148210(M2C_UNK);
void func_0214a958(M2C_UNK);

extern M2C_UNK data_022c9860;

void func_021481ec(void) {
    func_0214a958(1);
    M2C_FIELD(&data_022c9860, s32 *, 0xC) = 1;
    func_02148210(1);
}
