#include "m2c.h"

s32 func_020bf214(s32, u8, u8);                     /* extern */
s32 func_020bf2fc(s32);                             /* extern */
M2C_UNK func_020bf654(s32, s32, u8, u8);            /* extern */
void *func_020c596c();                              /* extern */
M2C_UNK func_020c5998(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020fb3c8(void *);                      /* extern */
extern M2C_UNK data_021c8c68;

void func_020bcb74(s32 arg0) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = func_020c596c();
    if (M2C_FIELD(temp_r0, volatile u16 *, 2) == 0) {
        return;
    }
    temp_r0_2 = func_020bf2fc(arg0);
    func_020bf654(func_020bf214(temp_r0_2, M2C_FIELD(temp_r0, volatile u8 *, 0), M2C_FIELD(temp_r0, volatile u8 *, 1)), temp_r0_2, M2C_FIELD(temp_r0, volatile u8 *, 0), M2C_FIELD(temp_r0, volatile u8 *, 1));
    if ((M2C_FIELD(&data_021c8c68, void **, 0) != NULL) && (M2C_FIELD(M2C_FIELD(&data_021c8c68, void **, 0), s32 *, 4) == arg0)) {
        func_020fb3c8(M2C_FIELD(&data_021c8c68, void **, 0) + 0x50);
    }
    if ((M2C_FIELD(&data_021c8c68, void **, 4) != NULL) && (M2C_FIELD(M2C_FIELD(&data_021c8c68, void **, 4), s32 *, 4) == arg0)) {
        func_020fb3c8(M2C_FIELD(&data_021c8c68, void **, 4) + 0x50);
    }
    func_020c5998(arg0, 0, 0, 0, 0);
}
