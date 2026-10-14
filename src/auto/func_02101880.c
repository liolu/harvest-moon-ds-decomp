#include "m2c.h"

void *func_02121370(s32, M2C_UNK);                  /* extern */
extern void *data_021c8c5c;

s32 func_02101880(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;

    temp_r4 = arg2 - ((s32) M2C_FIELD(func_02121370(M2C_FIELD(arg0, s32 *, 0x22C), 0x34), s32 *, 0x10) >> 8);
    temp_r1 = arg3 - ((s32) M2C_FIELD(func_02121370(M2C_FIELD(arg0, s32 *, 0x22C), 0x34), s32 *, 0x14) >> 8);
    if ((temp_r4 <= 4) && (temp_r4 >= -4) && (temp_r1 <= 4) && (temp_r1 >= -4) &&
        (arg1 == M2C_FIELD(data_021c8c5c, s8 *, 0x1180))) {
        M2C_FIELD(arg0, s32 *, 0x234) = 0x34;
        return 1;
    }
    temp_r4_2 = arg2 - ((s32) M2C_FIELD(func_02121370(M2C_FIELD(arg0, s32 *, 0x22C), 0x35), s32 *, 0x10) >> 8);
    temp_r1_2 = arg3 - ((s32) M2C_FIELD(func_02121370(M2C_FIELD(arg0, s32 *, 0x22C), 0x35), s32 *, 0x14) >> 8);
    if ((temp_r4_2 <= 4) && (temp_r4_2 >= -4) && (temp_r1_2 <= 4) && (temp_r1_2 >= -4) &&
        (arg1 == M2C_FIELD(data_021c8c5c, s8 *, 0x1188))) {
        M2C_FIELD(arg0, s32 *, 0x234) = 0x35;
        return 1;
    }
    temp_r4_3 = arg2 - ((s32) M2C_FIELD(func_02121370(M2C_FIELD(arg0, s32 *, 0x22C), 0x36), s32 *, 0x10) >> 8);
    temp_r1_3 = arg3 - ((s32) M2C_FIELD(func_02121370(M2C_FIELD(arg0, s32 *, 0x22C), 0x36), s32 *, 0x14) >> 8);
    if ((temp_r4_3 <= 4) && (temp_r4_3 >= -4) && (temp_r1_3 <= 4) && (temp_r1_3 >= -4) &&
        (arg1 == M2C_FIELD(data_021c8c5c, s8 *, 0x1190))) {
        M2C_FIELD(arg0, s32 *, 0x234) = 0x36;
        return 1;
    }
    temp_r1_4 = M2C_FIELD(arg0, s32 *, 0x234);
    if (temp_r1_4 == -1) {
        return 1;
    }
    if (arg1 != M2C_FIELD((data_021c8c5c + (temp_r1_4 * 8)), s8 *, 0xFE0)) {
        return 1;
    }
    return 0;
}
