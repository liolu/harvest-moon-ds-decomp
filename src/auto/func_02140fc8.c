#include "m2c.h"

M2C_UNK func_0213f580(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0213f750(M2C_UNK);                     /* extern */
M2C_UNK func_02140fac(M2C_UNK);                     /* extern */
extern M2C_UNK data_022c70fc;
extern M2C_UNK data_022c7104;
extern M2C_UNK func_02141044;

void func_02140fc8(void) {
    if (M2C_FIELD(&data_022c70fc, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_022c70fc, u16 *, 0) = 1U;
    func_02140fac(0);
    M2C_FIELD(&data_022c7104, s32 *, 0)       = 0;
    M2C_FIELD(&data_022c7104, s32 *, 4)       = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, -2) = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0xC1;
    func_0213f580(8, &func_02141044);
    func_0213f750(8);
    M2C_FIELD(&data_022c70fc, s32 *, 4) = 0;
}
