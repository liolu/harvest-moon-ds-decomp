#include "m2c.h"

M2C_UNK func_0212d4d4(M2C_UNK *, M2C_UNK, u16, M2C_UNK); /* extern */
M2C_UNK func_0212eb34(void *);                      /* extern */
extern M2C_UNK data_022c49c8;

s32 func_020cae50(void *arg0) {
    s32 var_r8;
    u16 temp_r2;
    void *temp_r0;
    void *var_r9;

    var_r9 = arg0 + 8;
    var_r8 = 0;
    do {
        temp_r2 = M2C_FIELD(var_r9, u16 *, 0x2C);
        if (temp_r2 != 0x19) {
            if (M2C_FIELD(var_r9, u8 *, 0x27) == 0) {
                if (M2C_FIELD(var_r9, u16 *, 0x2E) == M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4)) {
                    func_0212d4d4(&data_022c49c8, 4, temp_r2, 1);
                }
                temp_r0 = M2C_FIELD(arg0, void **, 4);
                if ((temp_r0 != NULL) && (M2C_FIELD(var_r9, u16 *, 0x2E) == M2C_FIELD(temp_r0, s32 *, 4))) {
                    func_0212d4d4(&data_022c49c8, 4, M2C_FIELD(var_r9, u16 *, 0x2C), 0);
                }
                M2C_FIELD(var_r9, u16 *, 0x2C) = 0x19U;
            } else {
                func_0212eb34(var_r9 + 0x10);
            }
        }
        var_r8 += 1;
        var_r9 += 0x30;
    } while (var_r8 < 0x20);
    return 1;
}
