#include "m2c.h"

s32 func_0200450c(M2C_UNK *, s32 *);                /* extern */
s32 *func_02004520(M2C_UNK *, s32);                 /* extern */
s32 func_020b9890(s32 *);                           /* extern */
s32 func_020b9b04(s32);                             /* extern */
extern M2C_UNK data_02192670;
extern M2C_UNK data_02192674;
extern s32 data_021c8c5c;

s32 func_020b9be0(s32 *arg0, s32 arg1) {
    s32 sp0;
    s32 temp_r6;

    if (func_020b9b04(*arg0) == 0) {
        return -1;
    }
    temp_r6                      = ((*arg0 - 1) * 0x28) + (data_021c8c5c + 0x523C);
    sp0                          = M2C_FIELD(temp_r6, u16 *, 4) + arg1;
    M2C_FIELD(temp_r6, u16 *, 4) = (u16) *func_02004520(&data_02192674, func_0200450c(&data_02192670, &sp0));
    return func_020b9890(arg0);
}
