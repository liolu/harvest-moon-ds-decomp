#include "m2c.h"

M2C_UNK func_020ab0ac(M2C_UNK);                     /* extern */
s8 *func_020c4084(s32);                             /* extern */
s8 *func_020c40ac(s32);                             /* extern */
s8 *func_020c4394();                                /* extern */
s8 *func_020c475c();                                /* extern */
s32 func_020c7c80(u16);                             /* extern */

s32 func_02021760(s8 *arg0, s32 arg1) {
    s32 var_r8;
    s8 *var_r9;
    s8 var_r0;
    u32 temp_r0;
    u8 temp_r7;

    var_r9 = arg0;
    var_r0 = *var_r9;
    var_r8 = arg1;
    if (var_r0 != 0) {
        do {
            temp_r7 = M2C_FIELD(var_r9, u8 *, 1);
            if (func_020c7c80((u16) (temp_r7 | ((u8) var_r0 << 8))) != 0) {
                var_r9 += 2;
                var_r8 += 2;
            } else if ((u8) var_r0 == 0xFF) {
                temp_r0 = temp_r7 - 0x20;
                switch (temp_r0) {
                    default:
                        break;
                    case 0x0:
                    case 0x1:
                    case 0x2:
                    case 0x3:
                        var_r8 = func_02021760(func_020c40ac(temp_r7 & 0xF), var_r8);
                        break;
                    case 0x4:
                        var_r8 = func_02021760(func_020c4084(1), var_r8);
                        break;
                    case 0x5:
                        var_r8 = func_02021760(func_020c4084(4), var_r8);
                        break;
                    case 0x6:
                        var_r8 = func_02021760(func_020c4084(5), var_r8);
                        break;
                    case 0x7:
                        var_r8 = func_02021760(func_020c4084(6), var_r8);
                        break;
                    case 0x8:
                        var_r8 = func_02021760(func_020c4084(0), var_r8);
                        break;
                    case 0x9:
                        var_r8 = func_02021760(func_020c4084(2), var_r8);
                        break;
                    case 0xA:
                        var_r8 = func_02021760(func_020c4084(3), var_r8);
                        break;
                    case 0xB:
                    case 0xC:
                    case 0xD:
                    case 0xE:
                    case 0xF:
                    case 0x10:
                    case 0x11:
                    case 0x12:
                    case 0x13:
                    case 0x14:
                    case 0x15:
                    case 0x16:
                    case 0x17:
                    case 0x18:
                    case 0x19:
                    case 0x1A:
                    case 0x1B:
                    case 0x1C:
                    case 0x1D:
                    case 0x1E:
                    case 0x1F:
                    case 0x20:
                    case 0x21:
                    case 0x22:
                    case 0x23:
                    case 0x24:
                    case 0x25:
                    case 0x26:
                        var_r8 = func_02021760(func_020c4084(temp_r7 - 0x24), var_r8);
                        break;
                    case 0x27:
                        var_r8 += 0x14;
                        break;
                    case 0x28:
                    case 0x29:
                    case 0x2A:
                    case 0x2B:
                        func_020ab0ac(0x9A);
                        var_r8 = func_02021760(func_020c4394(), var_r8);
                        break;
                    case 0x2C:
                    case 0x2D:
                    case 0x2E:
                    case 0x2F:
                        func_020ab0ac(0x9A);
                        var_r8 = func_02021760(func_020c475c(), var_r8);
                        break;
                    case 0x30:
                        var_r8 = func_02021760(func_020c4084(0x23), var_r8);
                        break;
                    case 0x32:
                        var_r8 = func_02021760(func_020c4084(0x24), var_r8);
                        break;
                    case 0x33:
                        var_r8 = func_02021760(func_020c4084(0x25), var_r8);
                        break;
                }
                var_r9 += 2;
            } else {
                var_r9 += 1;
                var_r8 += 1;
            }
            var_r0 = *var_r9;
        } while (var_r0 != 0);
    }
    return var_r8;
}
