#include "m2c.h"

M2C_UNK func_02141270();                            /* extern */
extern s16 data_022c976c;

void func_02148168(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_022c976c = 1;
        return;
    }
    func_02141270();
}
