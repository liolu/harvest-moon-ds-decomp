/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02141d64(s32, M2C_UNK);                /* extern */
extern s32 data_022c54cc;

s32 func_02138f00(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & data_022c54cc) {
        return 0;
    }
    func_02141d64(arg0, 0);
    data_022c54cc |= arg0;
    return 1;
}
