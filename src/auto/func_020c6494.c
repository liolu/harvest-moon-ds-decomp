#include "engine.h"
#include "m2c.h"

void func_020c62fc(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_021c8cb8;

void func_020c6494(s32 arg0, s32 arg1) {
    s16 temp_r1;

    temp_r1 = *((u16 *) ((s8 *) &data_021c8cb8 + (arg1 * 2)));
    switch (temp_r1) {                              /* irregular */
        case 6:
            func_020c62fc(1, arg0, arg1);
            return;
        case 7:
            func_020c62fc(2, arg0, arg1);
            return;
    }
}
