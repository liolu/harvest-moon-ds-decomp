#include "m2c.h"

s32 func_020aae40(M2C_UNK);                         /* extern */
M2C_UNK func_020f1620(void *);                      /* extern */
void *func_020f3610(void *);                        /* extern */
s32 func_020f3cfc(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020f41b0(void *);                      /* extern */
M2C_UNK func_020faba4(void *, s32);                 /* extern */
M2C_UNK func_0210ffac(void *, s8, s32);             /* extern */
s32 func_02117fb0(void *);                          /* extern */
M2C_UNK func_021188c8(void *);                      /* extern */
M2C_UNK func_0211c304(void *);                      /* extern */
M2C_UNK func_0212eb34(void *);                      /* extern */
M2C_UNK func_0212fab4();                            /* extern */
M2C_UNK func_0212fe94(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */

void func_02107ef0(void *arg0) {
    M2C_UNK var_r1;
    s32 temp_r5;
    u8 temp_r0;

    func_020faba4(arg0 + 0x314, M2C_FIELD(arg0, volatile s32 *, 0x204));
    temp_r5 = M2C_FIELD(arg0, volatile s32 *, 0x3C);
    func_0210ffac(arg0, M2C_FIELD(func_020f3610(arg0), volatile s8 *, 5), temp_r5);
    var_r1 = 0;
    temp_r0 = M2C_FIELD(arg0, volatile u8 *, 0x645) + 0xFB;
    if (((u32) temp_r0 <= 0xEU) && (0x483B & (1 << temp_r0))) {
        var_r1 = 1;
    }
    if (func_020f3cfc(arg0, var_r1) != 0) {
        func_0211c304(arg0);
    }
    func_020f41b0(arg0);
    func_0212fab4();
    if ((func_02117fb0(arg0 + 0x108) != 0) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E0), s32 *, 0x364) == 0) && (func_020aae40(0x51) == 0)) {
        func_0212fe94(M2C_FIELD(arg0, void **, 0x1E0) + 8, 0x51, 0, 0, 0, 0, 0, 0, 0);
    }
    func_0212eb34(arg0 + 0xD0);
    if (M2C_FIELD(arg0, volatile u8 *, 0xE7) == 0) {
        M2C_FIELD(arg0, volatile u8 *, 0xCE) = (u8) (M2C_FIELD(arg0, volatile u8 *, 0xCE) & ~1);
    }
    func_020f1620(arg0 + 0x248);
    func_021188c8(arg0 + 0x370);
}
