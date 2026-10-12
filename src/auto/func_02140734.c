#include "m2c.h"

M2C_UNK func_0214010c(void *);                      /* extern */
M2C_UNK func_021408c4(void *, void *);              /* extern */
s32 func_02141124();                                /* extern */
M2C_UNK func_02141138(s32);                         /* extern */
extern M2C_UNK data_022c6ed4;

void func_02140734(void *arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r7;

    temp_r4 = func_02141124();
    temp_r7 = M2C_FIELD(&data_022c6ed4, void **, 4);
loop_1:
    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 == NULL) {
        M2C_FIELD(arg0, void **, 8) = temp_r7;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        func_021408c4(temp_r7, arg0);
    } else if (temp_r0 == temp_r7) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    } else {
        M2C_FIELD(temp_r7, void **, 0x84) = arg0;
        func_0214010c(arg0);
        M2C_FIELD(temp_r7, void **, 0x84) = NULL;
        goto loop_1;
    }
    func_02141138(temp_r4);
}
