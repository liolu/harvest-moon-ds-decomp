#include "engine.h"
#include "m2c.h"

void func_02004b0c(M2C_UNK, M2C_UNK);
M2C_UNK func_020f3610(M2C_UNK);
M2C_UNK func_02121150(M2C_UNK, M2C_UNK);
void func_0212eac0(M2C_UNK);
void func_0212eb34(M2C_UNK);

extern void *data_021c8c5c;

void func_020ea13c(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r6;
    s32 var_r7;
    s32 var_r7_2;

    if (((u32) (*M2C_FIELD(arg0, s32 **, 0x44) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0xA) != 0) {
        var_r1 = M2C_FIELD(arg0, s32 *, 0xC);
    } else {
        var_r1 = (s32) M2C_FIELD((void *) func_020f3610(arg0), s8 *, 4);
    }
    if (var_r1 != M2C_FIELD(data_021c8c5c, s8 *, 0xFE0)) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x40) == 0xAD) {
        func_02004b0c(arg0 + 0x10, 0);
        return;
    }
    var_r6 = 0;
    func_02004b0c(arg0 + 0x10, 0);
    if (M2C_FIELD(arg0, u8 *, 0xA) != 0) {
        var_r7 = M2C_FIELD(arg0, s32 *, 0xC);
    } else {
        var_r7 = (s32) M2C_FIELD((void *) func_020f3610(arg0), s8 *, 4);
    }
    temp_r0 = func_02121150(arg1, 1);
    if (temp_r0 != 0) {
        var_r0 = M2C_FIELD(temp_r0, s32 *, 4);
    } else {
        var_r0 = -1;
    }
    if (var_r7 == var_r0) {
        var_r6 = 1;
        func_02004b0c(arg0 + 0x10, 1);
    }
    if (M2C_FIELD(arg0, u8 *, 0xA) != 0) {
        var_r7_2 = M2C_FIELD(arg0, s32 *, 0xC);
    } else {
        var_r7_2 = (s32) M2C_FIELD((void *) func_020f3610(arg0), s8 *, 4);
    }
    temp_r0_2 = func_02121150(arg1, 0);
    if (temp_r0_2 != 0) {
        var_r0_2 = M2C_FIELD(temp_r0_2, s32 *, 4);
    } else {
        var_r0_2 = -1;
    }
    if (var_r7_2 == var_r0_2) {
        var_r6 = 1;
        func_02004b0c(arg0 + 0x10, 1);
    }
    if (var_r6 == 0) {
        func_02004b0c(arg0 + 0x10, 0);
        return;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x37) == 0) && (M2C_FIELD(arg0, s32 *, 0x40) != 0xAE)) {
        M2C_FIELD(arg0, s8 *, 0x34) = 0;
        func_0212eac0(arg0 + 0x20);
    }
    func_0212eb34(arg0 + 0x20);
}
