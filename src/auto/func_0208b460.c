#include "m2c.h"

M2C_UNK func_02075f84(s32, s32);                    /* extern */
M2C_UNK func_020ba1b8(s32);                         /* extern */
M2C_UNK func_020f1408(M2C_UNK);                     /* extern */
M2C_UNK func_0212a650(M2C_UNK);                     /* extern */
M2C_UNK func_0212fe94(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */

void func_0208b460(void *arg0, s32 arg1, void *arg2) {
    if (M2C_FIELD(arg2, s16 *, 0) == 0) {
        func_0212a650(1);
        func_020f1408(0);
        func_0212fe94(arg1 + 8, 0x40B, 0, 0, 0, 0, 0, 0, 0);
    }
    if (M2C_FIELD(arg2, s16 *, 0) == 1) {
        func_0212a650(5);
        func_020f1408(-3);
        func_0212fe94(arg1 + 8, 0x40C, 0, 0, 0, 0, 0, 0, 0);
    }
    if (M2C_FIELD(arg2, s16 *, 0) == 2) {
        func_0212a650(5);
        func_020f1408(-0x14);
        func_0212fe94(arg1 + 8, 0x40B, 0, 0, 0, 0, 0, 0, 0);
    }
    func_020ba1b8(0 - M2C_FIELD(arg2, s32 *, 0x10));
    func_02075f84(arg0 + 0x25A4, M2C_FIELD(arg2, s32 *, 0x14));
    M2C_FIELD(arg0, s32 *, 0x25BC) = 0;
}
