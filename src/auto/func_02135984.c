#include "m2c.h"

M2C_UNK func_020c8b40(s32);                         /* extern */
M2C_UNK func_020ca1a0(M2C_UNK);                     /* extern */
M2C_UNK func_020ca1f4(M2C_UNK);                     /* extern */
M2C_UNK func_0212d030(M2C_UNK *);                   /* extern */
M2C_UNK func_0212f8cc();                            /* extern */
M2C_UNK func_0212fe80(void *);                      /* extern */
extern M2C_UNK data_02194f1c;
extern M2C_UNK data_02194f38;
extern M2C_UNK data_02194f58;
extern M2C_UNK data_022c49c8;

void *func_02135984(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02194f1c;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &data_02194f38;
    func_020ca1a0(0);
    func_020ca1f4(1);
    func_0212d030(&data_022c49c8);
    func_0212f8cc();
    M2C_FIELD(arg0, M2C_UNK **, 0x3AC) = &data_02194f58;
    func_020c8b40(M2C_FIELD(arg0, s32 *, 0x3B0));
    M2C_FIELD(arg0, s32 *, 0x3B0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x3A0) = &data_02194f58;
    func_020c8b40(M2C_FIELD(arg0, s32 *, 0x3A4));
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x394) = &data_02194f58;
    func_020c8b40(M2C_FIELD(arg0, s32 *, 0x398));
    M2C_FIELD(arg0, s32 *, 0x398) = 0;
    func_0212fe80(arg0 + 8);
    return arg0;
}
