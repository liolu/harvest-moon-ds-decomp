/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_02138668(M2C_UNK, M2C_UNK);
M2C_UNK func_021390a4(M2C_UNK);
void func_02139120(M2C_UNK);
void func_021391bc(M2C_UNK, M2C_UNK);
void func_021396fc(M2C_UNK);

extern M2C_UNK data_022c5928;

s32 func_02139388(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r6;

    temp_r6 = (arg1 * 0x24) + (s32) &data_022c5928;
    if (*(M2C_UNK *)arg0 != 0) {
        func_021396fc(arg0);
    }
    if ((u32) M2C_FIELD(temp_r6, u16 *, 8) >= (u32) M2C_FIELD(temp_r6, u32 *, 0x18)) {
        temp_r0_2 = func_02138668(temp_r6, 0);
        if (temp_r0_2 == 0) {
            return 0;
        }
        if (arg2 < (s32) M2C_FIELD(temp_r0_2, u8 *, 0x3D)) {
            return 0;
        }
        func_02139120(temp_r0_2);
        goto block_8;
    }
block_8:
    temp_r0 = func_021390a4(arg2);
    if (temp_r0 == 0) {
        return 0;
    }
    func_021391bc(temp_r6, temp_r0);
    *(M2C_UNK *)temp_r0 = arg0;
    *(M2C_UNK *)arg0 = temp_r0;
    return temp_r0;
}
