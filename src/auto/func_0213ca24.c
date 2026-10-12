/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02138864();             /* extern */
M2C_UNK func_0213ff00(); /* extern */
M2C_UNK func_021401c4();                      /* extern */
M2C_UNK func_0214071c();                      /* extern */
extern M2C_UNK func_0213bab8;

void func_0213ca24(void *arg0, s32 arg1) {
    func_0213ff00(arg0, &func_0213bab8, arg0, arg0 + 0x494, 0x400, arg1);
    func_02138864(arg0 + 0x4AC, 0);
    func_0214071c(arg0 + 0x498);
    M2C_FIELD(arg0, s16 *, 0x494) = 0;
    func_021401c4(arg0);
}
