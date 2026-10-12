#include "m2c.h"

M2C_UNK func_02140078(s32);                         /* extern */
M2C_UNK func_02140430(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_021404e0(void *);                      /* extern */
extern M2C_UNK data_022c6de8;

void func_0214001c(void *arg0, s32 arg1) {
    if (M2C_FIELD(&data_022c6de8, s32 *, 0x10) != 0) {
        func_02140430(arg0, func_02140078);
        M2C_FIELD(arg0, s32 *, 4) = arg1;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_021404e0(arg0);
        return;
    }
    func_02140078(arg1);
}
