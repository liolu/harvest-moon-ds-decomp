#include "m2c.h"

s32 func_02140bb8(M2C_UNK);                         /* extern */
s32 func_02140c9c(M2C_UNK);                         /* extern */
M2C_UNK func_02140d44(M2C_UNK, s32);                /* extern */
M2C_UNK func_02140d58(M2C_UNK, s32);                /* extern */
extern s32 data_022c7064;

void func_02140a20(void) {
    if (data_022c7064 != 0) {
        return;
    }
    data_022c7064 = 1;
    func_02140d44(0, func_02140bb8(0));
    func_02140d58(0, func_02140c9c(0));
    func_02140d58(2, 0);
    func_02140d44(2, 0);
    func_02140d44(3, func_02140bb8(3));
    func_02140d58(3, func_02140c9c(3));
    func_02140d44(4, func_02140bb8(4));
    func_02140d58(4, func_02140c9c(4));
    func_02140d44(5, func_02140bb8(5));
    func_02140d58(5, func_02140c9c(5));
    func_02140d44(6, func_02140bb8(6));
    func_02140d58(6, func_02140c9c(6));
}
