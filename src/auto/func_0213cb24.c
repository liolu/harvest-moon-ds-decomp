/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0213c9b0();           /* extern */
M2C_UNK func_0213ca9c();                            /* extern */
M2C_UNK func_0213cf40();                      /* extern */
extern s32 data_022c5f28;
extern M2C_UNK data_022c678c;

void func_0213cb24(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_0213ca9c(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x160)(arg0);
    func_0213c9b0(&data_022c678c, arg0);
    if (data_022c5f28 != 0) {
        func_0213c9b0(data_022c5f28 + 0x4AC, arg0);
    }
    func_0213cf40(arg0);
}
