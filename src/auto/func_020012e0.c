#include "m2c.h"

M2C_UNK func_02001428();                            /* extern */
M2C_UNK func_02001480(void *);                      /* extern */
M2C_UNK func_020c8b40(s32);                         /* extern */
extern M2C_UNK data_0217c424;

void *func_020012e0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0217c424;
    func_02001428();
    func_020c8b40(M2C_FIELD(arg0, s32 *, 4));
    func_02001480(arg0);
    return arg0;
}
