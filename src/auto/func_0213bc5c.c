/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0213a1cc(M2C_UNK);                         /* extern */
extern M2C_UNK func_0213bb28;
extern M2C_UNK func_0213bb2c;
extern M2C_UNK func_0213bb4c;
extern M2C_UNK func_0213bb50;
extern M2C_UNK func_0213bb80;
extern M2C_UNK func_0213bb90;
extern M2C_UNK func_0213bbcc;
extern M2C_UNK func_0213bbdc;

void func_0213bc5c(void *arg0, M2C_UNK arg1) {
    if (func_0213a1cc(arg1) == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x15C) = &func_0213bbdc;
        M2C_FIELD(arg0, M2C_UNK **, 0x160) = &func_0213bbcc;
        M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_0213bb90;
        M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_0213bb80;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x15C) = &func_0213bb50;
    M2C_FIELD(arg0, M2C_UNK **, 0x160) = &func_0213bb4c;
    M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_0213bb2c;
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_0213bb28;
}
