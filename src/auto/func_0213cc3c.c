/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0213cb98(M2C_UNK);
void func_0213d4d4(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0213cc3c(s32 arg0, s32 arg1) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1E) >> 0x1F) == 0) {
        func_0213cb98(arg0);
        return;
    }
    if (arg1 == 0) {
        func_0213cb98(arg0);
        return;
    }
    func_0213d4d4(arg0 + 0xE4, 0, arg1);
    M2C_FIELD(arg0, s32 *, 0x10C) = (s32) (M2C_FIELD(arg0, s32 *, 0x10C) | 8);
    M2C_FIELD(arg0, s32 *, 0x14C) = 0;
}
