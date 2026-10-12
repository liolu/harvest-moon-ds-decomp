#include "m2c.h"

M2C_UNK func_02024740(void *);                      /* extern */
M2C_UNK func_02025060(s32);                         /* extern */
M2C_UNK func_020519cc(void *);                      /* extern */
extern M2C_UNK data_0217c648;
extern M2C_UNK data_0217cc0c;

void *func_0204ae90(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x1F5C) = &data_0217cc0c;
    func_02025060(arg0 + 0x1F5C);
    M2C_FIELD(arg0, M2C_UNK **, 0x1E74) = &data_0217c648;
    func_02024740(arg0 + 0x1E74);
    M2C_FIELD(arg0, M2C_UNK **, 0x1E38) = &data_0217c648;
    func_02024740(arg0 + 0x1E38);
    func_020519cc(arg0);
    return arg0;
}
