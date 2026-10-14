/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02138864();                /* extern */
s32 func_0213a8f8();                           /* extern */

s32 func_0213a948(s32 *arg0, s32 arg1) {
    func_02138864(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_0213a8f8(arg0) != 0) {
        return 1;
    }
    return 0;
}
