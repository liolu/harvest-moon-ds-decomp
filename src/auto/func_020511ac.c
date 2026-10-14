#include "m2c.h"

s16 func_02016ffc(s32);                             /* extern */
M2C_UNK func_02017814(void *);                      /* extern */
M2C_UNK func_02017904(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_02024720(void *);                      /* extern */
M2C_UNK func_02024ba8(void *, M2C_UNK, u8, u16, s32); /* extern */
M2C_UNK func_020515e8(void *, void *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_02155293;
extern M2C_UNK data_0218aadc;

void *func_020511ac(void *arg0, void *arg1, s32 arg2) {
    func_020515e8(arg0, arg1, 0x40, arg2, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0218aadc;
    func_02024720(arg0 + 0x1E38);
    func_02017814(arg0 + 0x1E44);
    M2C_FIELD(arg0, s16 *, 0x1DA6) = func_02016ffc(M2C_FIELD(arg1, s32 *, 8));
    func_02024ba8(arg0 + 0x1E38, 0x17, ((s8 *) &data_02155293)[arg2],
                  (u16) (M2C_FIELD(arg0, u16 *, 0x1E00) + M2C_FIELD(arg0, u16 *, 0x1E02)), 4);
    func_02017904(arg0 + 0x1E44, arg0 + 0x1E38, 0);
    M2C_FIELD(arg0, s32 *, 0x1E48) = 0x5000;
    M2C_FIELD(arg0, s32 *, 0x1E4C) = 0x5000;
    M2C_FIELD(arg0, s32 *, 0x1E74) = 0;
    return arg0;
}
