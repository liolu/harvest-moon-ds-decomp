#include "m2c.h"
#include "engine.h"

void func_0213f01c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0213f07c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02140988(M2C_UNK, M2C_UNK);

void func_020232dc(s32 arg0) {
    s32 temp_r0;

    func_02140988(arg0 + 0x28, 0x1680);
    temp_r0 = arg0 + 0x28;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 *, 0x1D94) != 0) {
        func_0213f01c(temp_r0, 0x2980, 0x1680);
        return;
    }
    func_0213f07c(temp_r0, 0x2980, 0x1680);
}
