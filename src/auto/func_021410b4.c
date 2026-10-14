#include "m2c.h"

M2C_UNK func_0213f780(M2C_UNK);                     /* extern */
extern u16 data_022c710c;
extern s32 data_022c7110;
extern s32 data_022c7114;
extern M2C_UNK data_022c7118;

void func_021410b4(void) {
    if (data_022c710c != 0) {
        return;
    }
    data_022c710c                       = 1;
    M2C_FIELD(&data_022c7118, s32 *, 0) = 0;
    M2C_FIELD(&data_022c7118, s32 *, 4) = 0;
    func_0213f780(4);
    data_022c7114 = 0;
    data_022c7110 = 0;
}
