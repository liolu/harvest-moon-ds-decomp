#include "m2c.h"
#include "engine.h"

M2C_UNK func_020c9f74(M2C_UNK);
M2C_UNK func_020f3610(M2C_UNK);
void func_020f3a94(M2C_UNK, M2C_UNK);
void func_020f3b20(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02121114(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0215d2e0;
extern void *data_021c8c5c;

void func_020ea2a0(s32 arg0, s32 arg1) {
    s32 var_r1;
    s8 temp_r0;
    s8 temp_r0_2;

    if (M2C_FIELD(arg0, u8 *, 0xA) != 0) {
        var_r1 = M2C_FIELD(arg0, s32 *, 0xC);
    } else {
        var_r1 = (s32) M2C_FIELD((void *) func_020f3610(arg0), s8 *, 4);
    }
    if (var_r1 != M2C_FIELD(data_021c8c5c, s8 *, 0xFE0)) {
        return;
    }
    if (((u32) (*M2C_FIELD(arg0, s32 **, 0x44) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_02121114(arg1, 1);
    if ((M2C_FIELD(arg0, u8 *, 0x37) == 0) && (M2C_FIELD(arg0, s32 *, 0x40) == 0xAE)) {
        temp_r0 = M2C_FIELD((void *) func_020f3610(arg0), s8 *, 5);
        if ((temp_r0 != 0) && (temp_r0 != 2)) {

        } else {
            M2C_FIELD(arg0, s16 *, 0x4A) = 0;
        }
    }
    if (M2C_FIELD(arg0, s16 *, 0x4A) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x40) == 0xAE) {
            temp_r0_2 = M2C_FIELD((void *) func_020f3610(arg0), s8 *, 5);
            switch (temp_r0_2) {                    /* irregular */
            case 0:
                func_020f3b20(arg0, 0, 1);
                M2C_FIELD(arg0, s16 *, 0x4A) = (s16) (func_020c9f74(0x78) + 0xB4);
                break;
            case 1:
                func_020f3b20(arg0, 0, 2);
                M2C_FIELD(arg0, s16 *, 0x4A) = (s16) (func_020c9f74(0x78) + 0xB4);
                break;
            case 2:
                func_020f3b20(arg0, 0, 3);
                M2C_FIELD(arg0, s16 *, 0x4A) = (s16) (func_020c9f74(0x78) + 0xB4);
                break;
            }
        } else {
            M2C_FIELD(arg0, s16 *, 0x4A) = (s16) (func_020c9f74(0x78) + 0x3C);
            M2C_FIELD(arg0, s16 *, 0x48) = 0;
            func_020f3a94(arg0, (s32) ((s8 *)&data_0215d2e0)[func_020c9f74(3)]);
        }
    }
    M2C_FIELD(arg0, s16 *, 0x4A) = (s16) (M2C_FIELD(arg0, s16 *, 0x4A) - 1);
}
