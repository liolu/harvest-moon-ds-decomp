/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02138668(s32, M2C_UNK);                  /* extern */
M2C_UNK func_02138680(s32, void *);                 /* extern */
M2C_UNK func_0213ab4c(s32);                         /* extern */
extern M2C_UNK data_022c5928;

s32 func_02139264(s32 arg0, void *arg1) {
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = (arg0 * 0x24) + (s32) &data_022c5928;
    temp_r0 = func_02138668(temp_r5 + 0xC, 0);
    if (temp_r0 == NULL) {
        return 0;
    }
    func_02138680(temp_r5 + 0xC, temp_r0);
    M2C_FIELD(temp_r0, void **, 0xC) = arg1;
    M2C_FIELD(arg1, void **, 8) = temp_r0;
    func_0213ab4c(M2C_FIELD(temp_r0, s32 *, 8));
    return M2C_FIELD(temp_r0, s32 *, 8);
}
