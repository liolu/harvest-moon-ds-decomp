#include "m2c.h"

extern M2C_UNK data_021c8cd0;

void func_020c866c(void) {
    if ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) >= 0x48U) {
        if (((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) <= 0x6EU) && ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 8) <= 0x18U)) {
            if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 8) {
                M2C_FIELD(&data_021c8cd0, u16 *, 6) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 6) | 0x40);
                return;
            }
            if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x10) {
                M2C_FIELD(&data_021c8cd0, u16 *, 4) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 4) | 0x40);
                return;
            }
            if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x20) {
                M2C_FIELD(&data_021c8cd0, u16 *, 2) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 2) | 0x40);
            }
            return;
        }
        goto block_12;
    }
block_12:
    if (((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) >= 0x48U) && ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) <= 0x6EU) &&
        ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 8) >= 0x28U) && ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 8) <= 0x40U)) {
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 8) {
            M2C_FIELD(&data_021c8cd0, u16 *, 6) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 6) | 0x80);
            return;
        }
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x10) {
            M2C_FIELD(&data_021c8cd0, u16 *, 4) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 4) | 0x80);
            return;
        }
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x20) {
            M2C_FIELD(&data_021c8cd0, u16 *, 2) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 2) | 0x80);
        }
        return;
    }
    if (((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) >= 0x38U) && ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) <= 0x50U) &&
        ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 8) >= 0x10U) && ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 8) <= 0x30U)) {
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 8) {
            M2C_FIELD(&data_021c8cd0, u16 *, 6) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 6) | 0x20);
            return;
        }
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x10) {
            M2C_FIELD(&data_021c8cd0, u16 *, 4) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 4) | 0x20);
            return;
        }
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x20) {
            M2C_FIELD(&data_021c8cd0, u16 *, 2) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 2) | 0x20);
        }
        return;
    }
    if (((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) >= 0x60U) && ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) <= 0x78U) &&
        ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 8) >= 0x10U) && ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 8) <= 0x30U)) {
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 8) {
            M2C_FIELD(&data_021c8cd0, u16 *, 6) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 6) | 0x10);
            return;
        }
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x10) {
            M2C_FIELD(&data_021c8cd0, u16 *, 4) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 4) | 0x10);
            return;
        }
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x20) {
            M2C_FIELD(&data_021c8cd0, u16 *, 2) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 2) | 0x10);
        }
        return;
    }
    if (((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) >= 0xACU) && ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) <= 0xC4U) &&
        ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 8) >= 0x10U) && ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 8) <= 0x30U)) {
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 8) {
            M2C_FIELD(&data_021c8cd0, u16 *, 6) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 6) | 1);
            return;
        }
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x10) {
            M2C_FIELD(&data_021c8cd0, u16 *, 4) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 4) | 1);
            return;
        }
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x20) {
            M2C_FIELD(&data_021c8cd0, u16 *, 2) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 2) | 1);
        }
        return;
    }
    if (((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) >= 0x94U) && ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) <= 0xACU) &&
        ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 8) >= 0x20U) && ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 8) <= 0x40U)) {
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 8) {
            M2C_FIELD(&data_021c8cd0, u16 *, 6) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 6) | 2);
            return;
        }
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x10) {
            M2C_FIELD(&data_021c8cd0, u16 *, 4) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 4) | 2);
            return;
        }
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x20) {
            M2C_FIELD(&data_021c8cd0, u16 *, 2) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 2) | 2);
        }
        return;
    }
    if ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) >= 0x94U) {
        if (((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) <= 0xACU) && ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 8) <= 0x20U)) {
            if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 8) {
                M2C_FIELD(&data_021c8cd0, u16 *, 6) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 6) | 0x400);
                return;
            }
            if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x10) {
                M2C_FIELD(&data_021c8cd0, u16 *, 4) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 4) | 0x400);
                return;
            }
            if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x20) {
                M2C_FIELD(&data_021c8cd0, u16 *, 2) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 2) | 0x400);
            }
            return;
        }
        goto block_79;
    }
block_79:
    if (((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) >= 0x7CU) && ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) <= 0x94U) &&
        ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 8) >= 0x10U) && ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 8) <= 0x30U)) {
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 8) {
            M2C_FIELD(&data_021c8cd0, u16 *, 6) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 6) | 0x800);
            return;
        }
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x10) {
            M2C_FIELD(&data_021c8cd0, u16 *, 4) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 4) | 0x800);
            return;
        }
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x20) {
            M2C_FIELD(&data_021c8cd0, u16 *, 2) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 2) | 0x800);
        }
        return;
    }
    if ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) >= 8U) {
        if (((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) <= 0x38U) && ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 8) <= 0x20U)) {
            if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 8) {
                M2C_FIELD(&data_021c8cd0, u16 *, 6) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 6) | 0x200);
                return;
            }
            if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x10) {
                M2C_FIELD(&data_021c8cd0, u16 *, 4) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 4) | 0x200);
                return;
            }
            if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x20) {
                M2C_FIELD(&data_021c8cd0, u16 *, 2) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 2) | 0x200);
            }
            return;
        }
        goto block_102;
    }
block_102:
    if ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) < 0xC8U) {
        return;
    }
    if (((u32) M2C_FIELD(&data_021c8cd0, u16 *, 0xC) <= 0xF8U) && ((u32) M2C_FIELD(&data_021c8cd0, u16 *, 8) <= 0x20U)) {
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 8) {
            M2C_FIELD(&data_021c8cd0, u16 *, 6) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 6) | 0x100);
            return;
        }
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x10) {
            M2C_FIELD(&data_021c8cd0, u16 *, 4) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 4) | 0x100);
            return;
        }
        if (M2C_FIELD(&data_021c8cd0, u8 *, 0) & 0x20) {
            M2C_FIELD(&data_021c8cd0, u16 *, 2) = (u16) (M2C_FIELD(&data_021c8cd0, u16 *, 2) | 0x100);
        }
    }
}
