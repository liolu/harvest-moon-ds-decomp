#include "m2c.h"

M2C_UNK func_020fb514(void *, u32, u8);             /* extern */
M2C_UNK func_0212ed34(s32, void *);                 /* extern */
M2C_UNK func_0212ed6c(s32, M2C_UNK, void *);        /* extern */
extern M2C_UNK data_0215fde0;

void func_020fb424(void *arg0, u32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    switch (arg1) {
        default:
            break;
        case 1:
        case 2:
        case 3:
            func_020fb514(arg0, arg1, arg4);
            func_0212ed6c(M2C_FIELD(arg0, s32 *, 0x2C), 0x120, arg0 + 0x10);
            M2C_FIELD(arg0, s8 *, 0x1C) = 0xF;
            M2C_FIELD(arg0, s8 *, 0xC)  = 3;
            break;
        case 4:
            func_0212ed34(M2C_FIELD(&data_0215fde0, s32 *, 0x14), arg0 + 0x10);
            M2C_FIELD(arg0, s8 *, 0xC) = 1;
            break;
        case 5:
            func_0212ed34(M2C_FIELD(&data_0215fde0, s32 *, 0x18), arg0 + 0x10);
            M2C_FIELD(arg0, s8 *, 0xC) = 3;
            break;
    }
    M2C_FIELD(arg0, s32 *, 0)   = (s32) (arg2 << 8);
    M2C_FIELD(arg0, s32 *, 4)   = (s32) (arg3 << 8);
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
}
