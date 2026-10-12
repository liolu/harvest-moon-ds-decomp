/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0213a1cc(M2C_UNK);                         /* extern */
M2C_UNK func_02141868(s32, void *, M2C_UNK);        /* extern */

s32 func_0213bb50(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 0xA0) = func_0213a1cc(arg1);
    func_02141868(M2C_FIELD(arg0, s32 *, 0xA0), arg0 + 0xA4, 0x40);
    return 1;
}
