#include "m2c.h"

s32 func_02141124();                                /* extern */
M2C_UNK func_02141138(s32);                         /* extern */
s32 func_02143b90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_021440f8(M2C_UNK, M2C_UNK);                /* extern */
extern void *data_022c8d28;
extern M2C_UNK data_022c8d2c;

s32 func_02144138(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 var_r8;
    void *var_r0;
    void *var_r1;

    var_r8  = 0;
    temp_r4 = func_02141124();
    if (func_021440f8(arg1, arg2) == 0) {
        var_r0 = data_022c8d28;
        if (var_r0 == NULL) {
            data_022c8d28                         = arg0;
            M2C_FIELD(&data_022c8d2c, void **, 0) = arg0;
            M2C_FIELD(&data_022c8d2c, s32 *, 8)   = 0;
            M2C_FIELD(&data_022c8d2c, s16 *, 6)   = 0;
            M2C_FIELD(&data_022c8d2c, s16 *, 4)   = 0;
        } else {
            var_r1 = M2C_FIELD(var_r0, void **, 4);
            if (var_r1 != NULL) {
                do {
                    var_r0 = var_r1;
                    var_r1 = M2C_FIELD(var_r1, void **, 4);
                } while (var_r1 != NULL);
            }
            M2C_FIELD(var_r0, void **, 4) = arg0;
            M2C_FIELD(arg0, void **, 8)   = var_r0;
        }
        M2C_FIELD(arg0, s32 *, 0)    = func_02143b90(arg1, arg2);
        var_r8                       = 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | 1);
    }
    func_02141138(temp_r4);
    return var_r8;
}
