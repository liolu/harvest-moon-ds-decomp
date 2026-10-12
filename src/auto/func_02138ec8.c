/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02141d84(s32, M2C_UNK);                /* extern */
extern s32 data_022c54cc;

void func_02138ec8(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_02141d84(arg0, 0);
    data_022c54cc &= ~arg0;
}
