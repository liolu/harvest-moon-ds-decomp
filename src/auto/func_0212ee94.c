#include "engine.h"
#include "m2c.h"

void func_0212cdf0(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0212d064(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_022c49c8;
extern M2C_UNK data_022c535c;
extern M2C_UNK data_022c5374;

void func_0212ee94(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_r2;

    func_0212d064((s32) &data_022c49c8, arg0, arg2);
    temp_r2 = M2C_FIELD(arg1, u16 *, 0x18);
    if (arg2 != 0) {
        func_0212cdf0((s32) &data_022c535c, arg0, (s32) temp_r2);
        return;
    }
    func_0212cdf0((s32) &data_022c5374, arg0, (s32) temp_r2);
}
