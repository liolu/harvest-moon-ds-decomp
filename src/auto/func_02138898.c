/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_021387d0(s32, void *);                 /* extern */
M2C_UNK func_02138864(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_02138928(void *);                          /* extern */
extern s32 data_022c5490;
extern M2C_UNK data_022c5494;

void func_02138898(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~0xFF);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | (u8) arg4);
    func_02138864(arg0 + 0xC, 4);
    if (data_022c5490 == 0) {
        func_02138864(&data_022c5494, 4);
        data_022c5490 = 1;
    }
    func_021387d0(func_02138928(arg0), arg0);
}
