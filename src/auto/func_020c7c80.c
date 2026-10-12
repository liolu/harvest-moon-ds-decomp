#include "m2c.h"

s32 func_020c7880(s32, M2C_UNK);                    /* extern */
s32 func_020c7bcc(s32);                             /* extern */
extern s32 data_021c8ccc;

s32 func_020c7c80(M2C_UNK arg0) {
    if (func_020c7880(func_020c7bcc(data_021c8ccc), arg0) != 0) {
        return 1;
    }
    return 0;
}
