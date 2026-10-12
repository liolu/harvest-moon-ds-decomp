#include "m2c.h"

M2C_UNK func_02140948(void *, M2C_UNK);             /* extern */
extern void *data_022c8ca0;

s32 func_021427e8(void) {
    func_02140948(data_022c8ca0 + 4, 4);
    return M2C_FIELD(data_022c8ca0, s32 *, 4);
}
