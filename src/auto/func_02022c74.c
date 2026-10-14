#include "m2c.h"

M2C_UNK func_02006974(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020214d8(s32);                         /* extern */
M2C_UNK func_02022e68(void *);                      /* extern */
extern M2C_UNK data_0217c8c8;
extern M2C_UNK data_02180b80;
extern M2C_UNK data_02180bc0;
extern M2C_UNK data_02180be0;
extern M2C_UNK data_02180c04;
extern M2C_UNK data_02180c54;

void *func_02022c74(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02180c54;
    M2C_FIELD(arg0, s32 *, 4)      = 5;
    M2C_FIELD(arg0, s32 *, 8)      = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02180bc0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    func_02006974(arg0 + 0x10, 0x20, 8);
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_0217c8c8;
    func_02022e68(arg0 + 0x1C);
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_02180be0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &data_02180c04;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02180b80;
    func_020214d8(M2C_FIELD(arg0, s32 *, 8));
    return arg0;
}
