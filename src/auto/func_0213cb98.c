/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02139b4c();                      /* extern */
M2C_UNK func_0213cb24();                      /* extern */
M2C_UNK func_02140734();                   /* extern */
M2C_UNK func_021407b8();                   /* extern */
extern s32 data_022c5f28;
extern M2C_UNK data_022c6778;

void func_0213cb98(void *arg0) {
    func_02140734(&data_022c6778);
    if (data_022c5f28 != 0) {
        func_02140734(data_022c5f28 + 0x498);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1E) >> 0x1F) != 0) {
        func_02139b4c(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x168)(arg0);
    }
    func_0213cb24(arg0);
    func_021407b8(&data_022c6778);
    if (data_022c5f28 == 0) {
        return;
    }
    func_021407b8(data_022c5f28 + 0x498);
}
