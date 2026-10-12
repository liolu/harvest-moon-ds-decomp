#include "m2c.h"

M2C_UNK func_0214071c(M2C_UNK *);                   /* extern */
M2C_UNK func_02141fd4();                            /* extern */
M2C_UNK func_02142724();                            /* extern */
extern s32 data_022c713c;
extern M2C_UNK data_022c7140;

void func_02141f74(void) {
    if (data_022c713c != 0) {
        return;
    }
    data_022c713c = 1;
    func_0214071c(&data_022c7140);
    func_02141fd4();
    func_02142724();
}
