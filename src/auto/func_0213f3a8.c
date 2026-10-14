#include "engine.h"
#include "m2c.h"

void func_0213e2f4(M2C_UNK);
void func_02141510(M2C_UNK);

extern s32 data_021c7300;
extern M2C_UNK data_022c6d68;

void func_0213f3a8(void) {
    if (data_021c7300 != -1) {
        func_02141510(data_021c7300);
    }
    func_0213e2f4(M2C_FIELD(&data_022c6d68, s32 *, 0x18));
    M2C_FIELD(&data_022c6d68, s32 *, 0x18) = 0;
}
