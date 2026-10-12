/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02138680(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0213915c(void *);                      /* extern */
M2C_UNK func_021391bc(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_022c54dc;

void func_02138f54(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_02138680(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_02138680(&data_022c54dc, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_021391bc(temp_r4, arg0);
    }
    func_0213915c(arg0);
}
