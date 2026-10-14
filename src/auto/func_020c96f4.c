#include "engine.h"
#include "m2c.h"

void func_02141790(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_021c8d68;
extern M2C_UNK data_021c9128;
extern M2C_UNK data_021ca368;
extern M2C_UNK data_021ca728;
extern M2C_UNK data_021cb968;
extern M2C_UNK data_021cbd28;
extern M2C_UNK data_021ccf68;
extern M2C_UNK data_021cd328;

void func_020c96f4(s32 arg0) {
    if (arg0 != 0) {
        func_02141790((s32) &data_021c8d68, (s32) &data_021ca368, 0x1C0);
        func_02141790((s32) &data_021c9128, (s32) &data_021ca728, 0x200);
        return;
    }
    func_02141790((s32) &data_021cb968, (s32) &data_021ccf68, 0x1C0);
    func_02141790((s32) &data_021cbd28, (s32) &data_021cd328, 0x200);
}
