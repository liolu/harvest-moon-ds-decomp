#include "m2c.h"

M2C_UNK func_020011f4(s32);                         /* extern */
M2C_UNK func_02001ffc(s32);                         /* extern */
M2C_UNK func_020aeeac(s32);                         /* extern */
M2C_UNK func_020aeeb0(s32);                         /* extern */
M2C_UNK func_020af18c(s32);                         /* extern */
M2C_UNK func_0214efb4(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020ad058;

s32 func_020ad0b0(s32 arg0) {
    func_0214efb4(arg0 + 0x7588, 3, 0xC, &func_020ad058);
    func_020aeeb0(arg0 + 0x73C4);
    func_020011f4(arg0 + 0x73B0);
    func_02001ffc(arg0 + 0x737C);
    func_020aeeac(arg0 + 0xBB8);
    func_020aeeac(arg0 + 0xB3C);
    func_020aeeac(arg0 + 0x8B0);
    func_020aeeac(arg0 + 0x624);
    func_020aeeac(arg0 + 0x398);
    func_020aeeac(arg0 + 0x10C);
    func_020aeeac(arg0 + 0x2C);
    func_020af18c(arg0);
    return arg0;
}
