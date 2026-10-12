/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02138680(s32, void *);                 /* extern */
M2C_UNK func_0213ac0c();                            /* extern */
extern M2C_UNK data_022c5928;

void func_02138fb8(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_0213ac0c();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_02138680((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_022c5928 + 0xC, arg0);
}
