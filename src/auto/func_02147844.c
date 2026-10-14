#include "m2c.h"

M2C_UNK func_02141270();                            /* extern */
M2C_UNK func_021478a4();                            /* extern */
extern s32 data_022c9760;
extern s32 (*data_022c9764)();

void func_02147844(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0        = 1;
        data_022c9760 = 1;
        if (data_022c9764 != NULL) {
            var_r0 = data_022c9764();
        }
        if (var_r0 == 0) {
            return;
        }
        func_021478a4();
        return;
    }
    func_02141270();
}
