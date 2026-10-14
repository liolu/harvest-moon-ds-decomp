#include "m2c.h"

s32 func_020f2d50(void *, void *);                  /* extern */
extern s8 data_022c20a4;

s32 func_020f1564(void *arg0) {
    if (func_020f2d50(arg0 + 0x14, M2C_FIELD(arg0, void **, 0)) != 0) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0xD0) != 0) {
            M2C_FIELD(arg0, s32 *, 8)   = (s32) M2C_FIELD(arg0, s32 *, 0x14);
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
        }
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4) == 1) {
            data_022c20a4 = 1;
        }
        return 1;
    }
    return 0;
}
