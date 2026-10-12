#include "m2c.h"

M2C_UNK func_020c27a8();                            /* extern */
s32 func_020c5794(s32);                             /* extern */
M2C_UNK func_020c57c4(s32);                         /* extern */
M2C_UNK func_0212fe94(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */

void func_02118968(void *arg0) {
    s8 temp_r0_2;
    s8 temp_r0_3;
    s8 temp_r0_4;
    s8 temp_r0_5;
    s8 temp_r1;
    s8 temp_r1_2;
    u32 temp_ip;
    u8 temp_r1_3;
    u8 temp_r1_4;
    void *temp_r0;
    void *temp_r0_6;
    void *temp_r2;
    void *temp_r2_2;

    M2C_FIELD(arg0, s16 *, 0x688) = -1;
    M2C_FIELD(arg0, s16 *, 0x68A) = -1;
    M2C_FIELD(arg0, s16 *, 0x68C) = 0;
    M2C_FIELD(arg0, s16 *, 0x68E) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E0), s16 *, 0x38F6) = 1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1DC), u8 *, 2) = 0x64U;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1DC), u8 *, 0x1D) = 0x64U;
    temp_r0 = M2C_FIELD(arg0, void **, 0x1DC);
    temp_ip = M2C_FIELD(temp_r0, s16 *, 0x14) - 0x130;
    switch (temp_ip) {                              /* switch 1 */
    default:                                        /* switch 1 */
        break;
    case 4:                                         /* switch 1 */
        temp_r1 = M2C_FIELD(temp_r0, s8 *, 0x16);
        switch (temp_r1) {                          /* switch 2 */
        default:                                    /* switch 2 */
            break;
        case 0:                                     /* switch 2 */
            M2C_FIELD(temp_r0, u8 *, 2) = 0x46U;
            break;
        case 1:                                     /* switch 2 */
            M2C_FIELD(temp_r0, u8 *, 2) = 0x96U;
            break;
        case 2:                                     /* switch 2 */
            M2C_FIELD(temp_r0, u8 *, 2) = 0xC8U;
            break;
        case 3:                                     /* switch 2 */
            M2C_FIELD(temp_r0, u8 *, 2) = 0xFAU;
            break;
        }
        break;
    case 5:                                         /* switch 1 */
        temp_r1_2 = M2C_FIELD(temp_r0, s8 *, 0x16);
        switch (temp_r1_2) {                        /* switch 3 */
        default:                                    /* switch 3 */
            break;
        case 0:                                     /* switch 3 */
            M2C_FIELD(temp_r0, u8 *, 0x1D) = 0x46U;
            break;
        case 1:                                     /* switch 3 */
            M2C_FIELD(temp_r0, u8 *, 0x1D) = 0x96U;
            break;
        case 2:                                     /* switch 3 */
            M2C_FIELD(temp_r0, u8 *, 0x1D) = 0xC8U;
            break;
        case 3:                                     /* switch 3 */
            M2C_FIELD(temp_r0, u8 *, 0x1D) = 0xFAU;
            break;
        }
        break;
    case 0:                                         /* switch 1 */
        temp_r0_2 = M2C_FIELD(temp_r0, s8 *, 0x16);
        switch (temp_r0_2) {                        /* switch 4 */
        default:                                    /* switch 4 */
            break;
        case 0:                                     /* switch 4 */
            M2C_FIELD(arg0, s16 *, 0x688) = 0x7D;
            M2C_FIELD(arg0, s16 *, 0x690) = 5;
            break;
        case 1:                                     /* switch 4 */
            M2C_FIELD(arg0, s16 *, 0x688) = 0x7D;
            M2C_FIELD(arg0, s16 *, 0x690) = 4;
            break;
        case 2:                                     /* switch 4 */
            M2C_FIELD(arg0, s16 *, 0x688) = 0x4B;
            M2C_FIELD(arg0, s16 *, 0x690) = 4;
            break;
        case 3:                                     /* switch 4 */
            M2C_FIELD(arg0, s16 *, 0x688) = 0x19;
            M2C_FIELD(arg0, s16 *, 0x690) = 4;
            break;
        }
        break;
    case 1:                                         /* switch 1 */
        temp_r0_3 = M2C_FIELD(temp_r0, s8 *, 0x16);
        switch (temp_r0_3) {                        /* switch 5 */
        default:                                    /* switch 5 */
            break;
        case 0:                                     /* switch 5 */
            M2C_FIELD(arg0, s16 *, 0x68A) = 0x7D;
            M2C_FIELD(arg0, s16 *, 0x692) = 0x11;
            break;
        case 1:                                     /* switch 5 */
            M2C_FIELD(arg0, s16 *, 0x68A) = 0xFA;
            M2C_FIELD(arg0, s16 *, 0x692) = 0x10;
            break;
        case 2:                                     /* switch 5 */
            M2C_FIELD(arg0, s16 *, 0x68A) = 0x7D;
            M2C_FIELD(arg0, s16 *, 0x692) = 0x10;
            break;
        case 3:                                     /* switch 5 */
            M2C_FIELD(arg0, s16 *, 0x68A) = 0x32;
            M2C_FIELD(arg0, s16 *, 0x692) = 0x10;
            break;
        }
        break;
    case 2:                                         /* switch 1 */
        temp_r0_4 = M2C_FIELD(temp_r0, s8 *, 0x16);
        switch (temp_r0_4) {                        /* switch 6; irregular */
        case 0:                                     /* switch 6 */
            M2C_FIELD(arg0, s16 *, 0x688) = 0x7D;
            M2C_FIELD(arg0, s16 *, 0x690) = 5;
            M2C_FIELD(arg0, s16 *, 0x68A) = 0xFA;
            M2C_FIELD(arg0, s16 *, 0x692) = 0x11;
            break;
        case 1:                                     /* switch 6 */
            M2C_FIELD(arg0, s16 *, 0x688) = 0x7D;
            M2C_FIELD(arg0, s16 *, 0x690) = 4;
            M2C_FIELD(arg0, s16 *, 0x68A) = 0xFA;
            M2C_FIELD(arg0, s16 *, 0x692) = 0x10;
            break;
        }
        break;
    case 6:                                         /* switch 1 */
        temp_r0_5 = M2C_FIELD(temp_r0, s8 *, 0x16);
        switch (temp_r0_5) {                        /* switch 7; irregular */
        case 0:                                     /* switch 7 */
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E0), s16 *, 0x38F6) = 2;
            break;
        case 1:                                     /* switch 7 */
            temp_r0_6 = M2C_FIELD(arg0, void **, 0x1E0);
            M2C_FIELD(temp_r0_6, s16 *, 0x38F6) = 0;
            M2C_FIELD(temp_r0_6, s16 *, 0x38F8) = 1;
            break;
        }
        break;
    }
    temp_r2 = M2C_FIELD(arg0, void **, 0x1DC);
    temp_r1_3 = M2C_FIELD(temp_r2, u8 *, 2);
    if ((u32) M2C_FIELD(temp_r2, u8 *, 1) > (u32) temp_r1_3) {
        M2C_FIELD(temp_r2, u8 *, 1) = temp_r1_3;
    }
    temp_r2_2 = M2C_FIELD(arg0, void **, 0x1DC);
    temp_r1_4 = M2C_FIELD(temp_r2_2, u8 *, 0x1D);
    if ((u32) M2C_FIELD(temp_r2_2, u8 *, 3) <= (u32) temp_r1_4) {
        return;
    }
    M2C_FIELD(temp_r2_2, u8 *, 3) = temp_r1_4;
    if (func_020c5794(0x796) == 0) {
        func_020c57c4(0x796);
        func_020c27a8();
    }
    func_0212fe94(M2C_FIELD(arg0, void **, 0x1E0) + 8, 0x270, 0, 0, 0, 0, 0, 0, 0);
}
