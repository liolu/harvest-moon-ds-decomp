#include "m2c.h"

M2C_UNK func_0213fbd4(s32, void *);                 /* extern */
M2C_UNK func_02140214();                            /* extern */
s32 func_02141124();                                /* extern */
M2C_UNK func_02141138(s32);                         /* extern */
extern void **data_022c6ed0;

void func_0214010c(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_02141124();
    temp_r5 = *data_022c6ed0;
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_0213fbd4(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_02140214();
    func_02141138(temp_r4);
}
