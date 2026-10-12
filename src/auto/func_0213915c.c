/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02138668();            /* extern */
M2C_UNK func_021386ec();   /* extern */
extern M2C_UNK data_022c54dc;

void func_0213915c(void *arg0) {
    void *var_r1;

    var_r1 = func_02138668(&data_022c54dc, 0);
    if (var_r1 != NULL) {
loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_02138668(&data_022c54dc);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_021386ec(&data_022c54dc, var_r1, arg0);
}
