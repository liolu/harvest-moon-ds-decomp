#include "m2c.h"

M2C_UNK func_0202fe04(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202fe64(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0203230c(M2C_UNK, s32 *, M2C_UNK);     /* extern */

void func_02032bb4(void *arg0) {
    s32 sp0;

    M2C_FIELD(arg0, s8 *, 0x2554) = 1;
    M2C_FIELD(arg0, s8 *, 0x2514) = 1;
    M2C_FIELD(arg0, s8 *, 0x24D4) = 1;
    M2C_FIELD(arg0, s8 *, 0x2494) = 1;
    M2C_FIELD(arg0, s8 *, 0x2454) = 1;
    M2C_FIELD(arg0, s8 *, 0x2414) = 1;
    M2C_FIELD(arg0, s8 *, 0x23D4) = 1;
    func_0202fe04(arg0, 0x11);
    func_0202fe64(arg0, 6, 5);
    func_0202fe64(arg0, 5, 0x28);
    func_0203230c(4, &sp0, 0);
    if (sp0 != 0) {
        func_0202fe64(arg0, 4, 0x27);
    }
    func_0203230c(3, &sp0, 0);
    if (sp0 != 0) {
        func_0202fe64(arg0, 3, 0x26);
    }
    func_0203230c(2, &sp0, 0);
    if (sp0 != 0) {
        func_0202fe64(arg0, 2, 0x25);
    }
    func_0203230c(1, &sp0, 0);
    if (sp0 != 0) {
        func_0202fe64(arg0, 1, 0x24);
    }
    func_0203230c(0, &sp0, 0);
    if (sp0 == 0) {
        return;
    }
    func_0202fe64(arg0, 0, 0x23);
}
