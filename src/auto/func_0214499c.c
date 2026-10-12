#include "m2c.h"

M2C_UNK func_021469a4(u16);                         /* extern */
M2C_UNK func_021469c0(u16);                         /* extern */
extern s32 data_022c8da8;

s32 func_0214499c(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 9:
        func_021469a4((u16) data_022c8da8);
        return 0;
    case 10:
        func_021469c0((u16) data_022c8da8);
        return 0;
    case 1:
        return 4;
    default:
        return 8;
    }
}
