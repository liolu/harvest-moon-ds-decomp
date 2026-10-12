#include "m2c.h"

M2C_UNK func_020fa4cc(void *, M2C_UNK, M2C_UNK, s32); /* extern */
u8 *func_021001c4(s32, M2C_UNK, M2C_UNK);           /* extern */
extern void *data_022c3ec0;

void func_02101504(M2C_UNK arg0, M2C_UNK arg1) {
    if ((s32) (*func_021001c4(M2C_FIELD(data_022c3ec0, s32 *, 4), arg0, arg1) & 0xF) >= 0xC) {
        return;
    }
    func_020fa4cc(data_022c3ec0, arg0, arg1, 0x1002);
}
