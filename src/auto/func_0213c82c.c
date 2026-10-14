/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02139da8();                      /* extern */
M2C_UNK func_0213cb98();                      /* extern */
M2C_UNK func_02140734();                   /* extern */
M2C_UNK func_021407b8();                   /* extern */
extern s32 data_022c5f28;
extern M2C_UNK data_022c6778;

void func_0213c82c(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x128)) {
        return;
    }
    func_02140734(&data_022c6778);
    if (data_022c5f28 != 0) {
        func_02140734(data_022c5f28 + 0x498);
    }
    func_0213cb98(arg2);
    M2C_FIELD(arg2, s32 *, 0x128) = 0;
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s8 *, 0x120)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x11C) > 0) {
        func_02139da8(arg2);
        M2C_FIELD(arg2, s32 *, 0x11C) = 0;
    }
    func_021407b8(&data_022c6778);
    if (data_022c5f28 == 0) {
        return;
    }
    func_021407b8(data_022c5f28 + 0x498);
}
