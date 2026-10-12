#include "m2c.h"

M2C_UNK func_02141270();                            /* extern */
M2C_UNK func_021481d8();                            /* extern */
extern s32 (*data_022c9780)();

void func_02148194(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_022c9780 != NULL) {
            var_r0 = data_022c9780();
        }
        if (var_r0 == 0) {
            return;
        }
        func_021481d8();
        return;
    }
    func_02141270();
}
