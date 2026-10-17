#include "m2c.h"

M2C_UNK func_0214173c(M2C_UNK, void *, M2C_UNK);    /* extern */
extern M2C_UNK data_02180c54;
extern M2C_UNK data_02180e40;

typedef struct {
    s32 f0;
    s32 f1;
} M2C_S8;

void *func_02023240(void *arg0, s32 arg1, void *arg2, void *arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02180c54;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, void **, 8)    = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02180e40;
    *(M2C_S8 *) ((s8 *) arg0 + 12) = *(M2C_S8 *) ((s8 *) arg3 + 0);

    func_0214173c(0, arg0 + 0x14, 0x1680);
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 4) = -1;
    return arg0;
}
