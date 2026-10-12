#include "m2c.h"

M2C_UNK func_02075f84(s32, s32);                    /* extern */
M2C_UNK func_020b9850(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_020b9be0(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020ba1b8(s32);                         /* extern */
s32 func_020c5794(s32);                             /* extern */
M2C_UNK func_020c57c4(s32);                         /* extern */
u32 func_020c5828(M2C_UNK);                         /* extern */
M2C_UNK func_020c5860(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020f1408(M2C_UNK);                     /* extern */
M2C_UNK func_0212a650(M2C_UNK);                     /* extern */
M2C_UNK func_0212fe94(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */

void func_0207d148(void *arg0, s32 arg1, void *arg2) {
    M2C_UNK sp24;
    M2C_UNK sp20;
    M2C_UNK sp1C;
    M2C_UNK sp18;
    M2C_UNK sp14;
    s32 var_r6;

    var_r6 = 1;
    if (M2C_FIELD(arg2, s16 *, 0) == 0) {
        var_r6 = 0;
    }
    func_020ba1b8(0 - M2C_FIELD(arg2, s32 *, 0x10));
    func_02075f84(arg0 + 0x25A4, M2C_FIELD(arg2, s32 *, 0x14));
    if (var_r6 != 0) {
        func_020c5860(0xD, 1);
        if (func_020c5794(0x759) == 0) {
            if (func_020c5828(0xD) >= 0xAU) {
                func_020c57c4(0x759);
                func_020b9850(&sp24, 3);
                func_020b9be0(&sp24, 0x9C4);
            }
        } else if (func_020c5794(0x75A) == 0) {
            if (func_020c5828(0xD) >= 0x14U) {
                func_020c57c4(0x75A);
                func_020b9850(&sp20, 3);
                func_020b9be0(&sp20, 0x9C4);
            }
        } else if (func_020c5794(0x75B) == 0) {
            if (func_020c5828(0xD) >= 0x1EU) {
                func_020c57c4(0x75B);
                func_020b9850(&sp1C, 3);
                func_020b9be0(&sp1C, 0x9C4);
            }
        } else if (func_020c5794(0x75C) == 0) {
            if (func_020c5828(0xD) >= 0x28U) {
                func_020c57c4(0x75C);
                func_020b9850(&sp18, 3);
                func_020b9be0(&sp18, 0x9C4);
            }
        } else if ((func_020c5794(0x75D) == 0) && (func_020c5828(0xD) >= 0x32U)) {
            func_020c57c4(0x75D);
            func_020b9850(&sp14, 3);
            func_020b9be0(&sp14, 0x9C4);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x25BC) = 0;
    if (M2C_FIELD(arg2, s16 *, 0) == 0) {
        func_0212a650(1);
        func_020f1408(0);
        func_0212fe94(arg1 + 8, 0x3A2, 0, 0, 0, 0, 0, 0, 0);
    }
    if (M2C_FIELD(arg2, s16 *, 0) == 1) {
        func_0212a650(1);
        func_020f1408(-0x1E);
        func_0212fe94(arg1 + 8, 0x3A2, 0, 0, 0, 0, 0, 0, 0);
    }
    if (M2C_FIELD(arg2, s16 *, 0) == 2) {
        func_0212a650(0);
        func_020f1408(-0x1E);
        func_0212fe94(arg1 + 8, 0x3A2, 0, 0, 0, 0, 0, 0, 0);
    }
    if (M2C_FIELD(arg2, s16 *, 0) == 3) {
        func_0212a650(1);
        func_020f1408(-0x14);
        func_0212fe94(arg1 + 8, 0x3A2, 0, 0, 0, 0, 0, 0, 0);
    }
    if (M2C_FIELD(arg2, s16 *, 0) == 4) {
        func_0212a650(1);
        func_020f1408(-0x16);
        func_0212fe94(arg1 + 8, 0x3A2, 0, 0, 0, 0, 0, 0, 0);
    }
    if (M2C_FIELD(arg2, s16 *, 0) == 5) {
        func_0212a650(1);
        func_020f1408(-0x19);
        func_0212fe94(arg1 + 8, 0x3A2, 0, 0, 0, 0, 0, 0, 0);
    }
    if (M2C_FIELD(arg2, s16 *, 0) == 6) {
        func_0212a650(2);
        func_020f1408(-0x14);
        func_0212fe94(arg1 + 8, 0x3A2, 0, 0, 0, 0, 0, 0, 0);
    }
    if (M2C_FIELD(arg2, s16 *, 0) == 7) {
        func_0212a650(1);
        func_020f1408(-0xF);
        func_0212fe94(arg1 + 8, 0x3A2, 0, 0, 0, 0, 0, 0, 0);
    }
    if (M2C_FIELD(arg2, s16 *, 0) == 8) {
        func_0212a650(3);
        func_020f1408(-0x19);
        func_0212fe94(arg1 + 8, 0x3A2, 0, 0, 0, 0, 0, 0, 0);
    }
    if (M2C_FIELD(arg2, s16 *, 0) == 9) {
        func_0212a650(1);
        func_020f1408(-0x15);
        func_0212fe94(arg1 + 8, 0x3A2, 0, 0, 0, 0, 0, 0, 0);
    }
    if (M2C_FIELD(arg2, s16 *, 0) == 0xA) {
        func_0212a650(2);
        func_020f1408(-0x14);
        func_0212fe94(arg1 + 8, 0x3A2, 0, 0, 0, 0, 0, 0, 0);
    }
    if (M2C_FIELD(arg2, s16 *, 0) == 0xB) {
        func_0212a650(1);
        func_020f1408(-0x14);
        func_0212fe94(arg1 + 8, 0x3A2, 0, 0, 0, 0, 0, 0, 0);
    }
    if (M2C_FIELD(arg2, s16 *, 0) == 0xC) {
        func_0212a650(1);
        func_020f1408(-0x14);
        func_0212fe94(arg1 + 8, 0x3A2, 0, 0, 0, 0, 0, 0, 0);
    }
    if (M2C_FIELD(arg2, s16 *, 0) == 0xD) {
        func_0212a650(1);
        func_020f1408(-0x14);
        func_0212fe94(arg1 + 8, 0x3A2, 0, 0, 0, 0, 0, 0, 0);
    }
    if (M2C_FIELD(arg2, s16 *, 0) != 0xE) {
        return;
    }
    func_0212a650(1);
    func_020f1408(-0x14);
    func_0212fe94(arg1 + 8, 0x3A2, 0, 0, 0, 0, 0, 0, 0);
}
