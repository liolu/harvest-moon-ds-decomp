#include "engine.h"
#include "m2c.h"

void func_0214131c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02141720(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_021c7300;

void func_0213e980(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_021c7300 != -1) && ((u32) arg2 > 0x30U)) {
        func_0214131c(data_021c7300, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_02141720(arg0, arg1 + 0x07000000, arg2);
}
