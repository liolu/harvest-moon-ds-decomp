#include "m2c.h"

M2C_UNK func_020c8b40(s32);                         /* extern */
M2C_UNK func_020ebc90();                            /* extern */

s32 *func_020ea488(s32 *arg0) {
    func_020ebc90();
    func_020c8b40(*arg0);
    return arg0;
}
