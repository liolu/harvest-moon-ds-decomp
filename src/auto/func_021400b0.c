#include "m2c.h"

M2C_UNK func_0213fc80(s32, void *);                 /* extern */
M2C_UNK func_0213fd64(void *);                      /* extern */
M2C_UNK func_0214015c(void *);                      /* extern */
M2C_UNK func_02140214();                            /* extern */
M2C_UNK func_021403c0();                            /* extern */
M2C_UNK func_021403f4();                            /* extern */
M2C_UNK func_02140814(void *);                      /* extern */
M2C_UNK func_02141270();                            /* extern */
extern void **data_022c6ed0;

void func_021400b0(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *data_022c6ed0;
    func_021403c0();
    func_02140814(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_0213fc80(temp_r0, temp_r4);
    }
    func_0213fd64(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_0214015c(temp_r4 + 0x9C);
    func_021403f4();
    func_02140214();
    func_02141270();
}
