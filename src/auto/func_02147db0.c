#include "m2c.h"

M2C_UNK func_0213fa28(u16);                         /* extern */
M2C_UNK func_0213fa68(u16);                         /* extern */
M2C_UNK func_02140988(u8 *, u32);                   /* extern */
M2C_UNK func_0214131c(M2C_UNK, u8 *, u8 *, u32);    /* extern */
M2C_UNK func_0214140c(M2C_UNK, u8 *, u8 *, u32);    /* extern */
M2C_UNK func_02141578(M2C_UNK);                     /* extern */
M2C_UNK func_021416e8(u8 *, u8 *, u32);             /* extern */
M2C_UNK func_02141720(u8 *, u8 *, u32);             /* extern */
s32 func_02147b00();                                /* extern */
M2C_UNK func_02147f0c();                            /* extern */
extern M2C_UNK data_022c976c;

s32 func_02147db0(M2C_UNK arg0, u8 *arg1, u8 *arg2, u32 arg3, u32 arg4) {
    u32 var_r1;
    u8 *var_r5;
    u8 *var_r6;
    u8 temp_r0;

    var_r6 = arg1;
    var_r5 = arg2;
    if (func_02147b00() == 0) {
        return 0;
    }
    func_02147f0c();
    func_0213fa28(M2C_FIELD(&data_022c976c, u16 *, 2));
    if (!(arg4 & 1)) {
        func_02141578(arg0);
        func_02140988(var_r5, arg3);
    }
    switch (arg4) {                                 /* irregular */
        case 16:
            func_0214140c(arg0, var_r6, var_r5, arg3);
            break;
        case 32:
            func_0214131c(arg0, var_r6, var_r5, arg3);
            break;
        case 17:
            func_021416e8(var_r6, var_r5, arg3);
            break;
        case 33:
            func_02141720(var_r6, var_r5, arg3);
            break;
        case 1:
            for (var_r1 = 0; var_r1 < arg3; var_r1 += 1) {
                temp_r0 = *var_r6;
                var_r6 += 1;
                *var_r5 = temp_r0;
                var_r5 += 1;
            }
            break;
    }
    func_0213fa68(M2C_FIELD(&data_022c976c, u16 *, 2));
    if (func_02147b00() != 0) {
        return 1;
    }
    return 0;
}
