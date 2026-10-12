#include "m2c.h"

M2C_UNK func_02144a18();                            /* extern */
extern s32 data_022c8d38;

void func_0214442c(s32 arg0) {
    if (data_022c8d38 != 0) {
        return;
    }
    data_022c8d38 = 1;
    func_02144a18(arg0);
}
