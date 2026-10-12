#include "m2c.h"

extern s32 data_022c54c8;

void func_02138e48(s32 arg0) {
    data_022c54c8 &= ~(1 << arg0);
}
