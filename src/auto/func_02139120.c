/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02139014(void *);                      /* extern */
M2C_UNK func_02141bbc(u8);                          /* extern */
M2C_UNK func_02141c24(u8, s32);                     /* extern */

void func_02139120(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_02141c24(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_02141bbc(M2C_FIELD(arg0, u8 *, 0x3C));
    func_02139014(arg0);
}
