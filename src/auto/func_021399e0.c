/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02138680(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02138e48(s32);                         /* extern */
extern M2C_UNK data_022c5dac;

void func_021399e0(void *arg0) {
    func_02138e48(M2C_FIELD(arg0, s32 *, 0x40));
    func_02138680(&data_022c5dac, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
