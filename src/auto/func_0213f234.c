#include "m2c.h"

s32 func_0213e3cc();                                /* extern */
extern M2C_UNK data_022c6d68;

void func_0213f234(void) {
    s32 temp_r0;

    temp_r0 = func_0213e3cc();
    M2C_FIELD(&data_022c6d68, s32 *, 0xC) = temp_r0;
    switch (temp_r0) {                              /* irregular */
    case 0x0:
        return;
    case 0x40:
        M2C_FIELD(&data_022c6d68, s32 *, 0x10) = 0x06894000;
        return;
    case 0x20:
        M2C_FIELD(&data_022c6d68, s32 *, 0x10) = 0x06890000;
        return;
    }
}
