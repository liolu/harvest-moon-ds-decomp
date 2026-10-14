/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02138668(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_02138680(M2C_UNK, void *);             /* extern */
s32 func_02141124();                                /* extern */
M2C_UNK func_02141138(s32);                         /* extern */

void *func_0213c95c(M2C_UNK arg0) {
    s32 temp_r5;
    void *temp_r0;
    void *temp_r1;

    temp_r5 = func_02141124();
    temp_r0 = func_02138668(arg0, 0);
    if (temp_r0 != NULL) {
        func_02138680(arg0, temp_r0);
        temp_r1                          = M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(temp_r1, s32 *, 0x118) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x118) - 1);
    }
    func_02141138(temp_r5);
    return temp_r0;
}
