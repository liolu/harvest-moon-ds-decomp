#include "m2c.h"
#include "engine.h"

void func_0212f9f0(M2C_UNK, M2C_UNK);

extern M2C_UNK data_022c538c;
extern M2C_UNK data_022c53d4;

void func_0212f964(s32 arg0) {
    if ((u32) M2C_FIELD(&data_022c538c, u16 *, 0xF6) >= 5U) {
        return;
    }
    func_0212f9f0((M2C_FIELD(&data_022c538c, u16 *, 0xF6) * 0x18) + (s32) &data_022c53d4, arg0);
    M2C_FIELD(&data_022c538c, u16 *, 0xF6) = (u16) (M2C_FIELD(&data_022c538c, u16 *, 0xF6) + 1);
}
