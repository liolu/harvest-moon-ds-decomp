#include "engine.h"
#include "m2c.h"

void func_0212ce24(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0212d1e4(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_022c49c8;
extern M2C_UNK data_022c535c;
extern M2C_UNK data_022c5374;

void func_0212ef6c(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_r1;

    func_0212d1e4((s32) &data_022c49c8, arg0, arg2);
    temp_r1 = M2C_FIELD(arg1, u16 *, 0x18);
    if (arg2 != 0) {
        func_0212ce24((s32) &data_022c535c, (s32) temp_r1, 8);
        return;
    }
    func_0212ce24((s32) &data_022c5374, (s32) temp_r1, 8);
}
