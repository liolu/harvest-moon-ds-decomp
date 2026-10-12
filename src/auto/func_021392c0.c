/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_02138f54(M2C_UNK, M2C_UNK);
void func_02139120(M2C_UNK);
void func_0213d4d4(M2C_UNK, M2C_UNK, M2C_UNK);

void func_021392c0(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 0) {
        return;
    }
    if (arg1 == 0) {
        func_02139120(arg0);
        return;
    }
    func_0213d4d4(arg0 + 0x1C, 0, arg1);
    func_02138f54(arg0, 0);
    M2C_FIELD(arg0, u8 *, 0x2C) = 2U;
}
