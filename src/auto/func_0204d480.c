#include "m2c.h"

M2C_UNK func_02017814(void *);                      /* extern */
M2C_UNK func_02017904(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_02024720(void *);                      /* extern */
M2C_UNK func_02024ba8(void *, M2C_UNK, M2C_UNK, u16, s32); /* extern */
M2C_UNK func_02025048(void *);                      /* extern */
M2C_UNK func_0202507c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0204db88(void *);                      /* extern */
M2C_UNK func_020515e8(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_02189f70;

void *func_0204d480(void *arg0, M2C_UNK arg1) {
    func_020515e8(arg0, arg1, 0x39, 6, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02189f70;
    func_02024720(arg0 + 0x1E38);
    func_02017814(arg0 + 0x1E44);
    func_02025048(arg0 + 0x1E78);
    func_0202507c(arg0 + 0x1E78, 3, 5);
    func_02024ba8(arg0 + 0x1E38, 0x17, 5, (u16) (M2C_FIELD(arg0, u16 *, 0x1E00) + M2C_FIELD(arg0, u16 *, 0x1E02)), 4);
    func_02017904(arg0 + 0x1E44, arg0 + 0x1E38, 0);
    M2C_FIELD(arg0, s32 *, 0x1E48) = 0x5000;
    M2C_FIELD(arg0, s32 *, 0x1E4C) = 0x5000;
    func_0204db88(arg0);
    M2C_FIELD(arg0, s32 *, 0x1E74) = 0;
    return arg0;
}
