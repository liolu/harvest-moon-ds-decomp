#include "m2c.h"

M2C_UNK func_020214d8(s32);                         /* extern */
extern M2C_UNK data_02180c34;
extern M2C_UNK data_02180c54;

void *func_020215bc(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02180c54;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02180c34;
    func_020214d8(M2C_FIELD(arg0, s32 *, 8));
    return arg0;
}
