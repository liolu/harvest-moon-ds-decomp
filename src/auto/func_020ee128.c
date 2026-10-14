#include "m2c.h"

M2C_UNK func_0213f580(M2C_UNK, s32);                /* extern */
M2C_UNK func_0213f780(M2C_UNK);                     /* extern */
M2C_UNK func_0214129c(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_022c1f6c;
extern M2C_UNK *data_022c3f74;
extern M2C_UNK *data_022c3f78;
extern M2C_UNK *data_022c3f7c;
extern M2C_UNK func_0211f7cc;

void func_020ee128(void) {
    if (M2C_FIELD(&data_022c1f6c, s32 *, 0xDC) == 0) {
        return;
    }
    data_022c3f74                      = &func_0211f7cc;
    data_022c3f78                      = &func_0211f7cc;
    data_022c3f7c                      = &func_0211f7cc;
    M2C_FIELD(&data_022c1f6c, s8 *, 0) = 0;
    *(u16 *) 0x04000004 &= ~0x20;
    func_0213f780(4);
    func_0213f580(4, M2C_FIELD(&data_022c1f6c, s32 *, 0xDC));
    func_0214129c(3, 0x06003000, 0, 0x1000);
    M2C_FIELD((void *) 0x04000050, u16 *, 0)     = (u16) M2C_FIELD(&data_022c1f6c, u16 *, 0xD4);
    M2C_FIELD((void *) 0x04000050, u16 *, -0x44) = (u16) M2C_FIELD(&data_022c1f6c, u16 *, 0xD6);
    M2C_FIELD((void *) 0x04000050, s32 *, -0x38) = (s32) M2C_FIELD(&data_022c1f6c, s32 *, 0xD8);
    *(s32 *) 0x04000000 &= ~0xE000;
    M2C_FIELD(&data_022c1f6c, s32 *, 0xDC) = 0;
}
