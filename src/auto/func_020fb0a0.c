#include "m2c.h"

s32 func_020c923c(M2C_UNK);                         /* extern */
M2C_UNK func_020c92a4(M2C_UNK);                     /* extern */
s32 func_020c931c(M2C_UNK);                         /* extern */
s32 func_020fb190(M2C_UNK, M2C_UNK *);              /* extern */
u16 func_0212cd60(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_0212ed6c(s32, u16, void *);            /* extern */
M2C_UNK func_02141720(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_022c535c;

void func_020fb0a0(void *arg0, M2C_UNK arg1) {
    u8 sp0[96];

    M2C_FIELD(arg0, s32 *, 0x2C) = func_020fb190(arg1, sp0);
    func_02141720(sp0, func_020c923c(1) + 0x180, 0x60);
    func_02141720(sp0, func_020c931c(1) + 0x180, 0x60);
    func_020c92a4(1);
    M2C_FIELD(arg0, u16 *, 0x30) = func_0212cd60(&data_022c535c, 2);
    func_0212ed6c(M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, u16 *, 0x30), arg0 + 0x10);
    M2C_FIELD(arg0, s32 *, 0)   = 0x7700;
    M2C_FIELD(arg0, s32 *, 4)   = 0x2800;
    M2C_FIELD(arg0, s8 *, 0xC)  = 3;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0xC;
}
