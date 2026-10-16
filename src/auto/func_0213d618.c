/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned short u16;
typedef int s32;
typedef short s16;
typedef s32 BOOL;
extern s32 func_0213d548(s32 numer, s32 denom);
extern const s16 data_0217b67c[129];

/* func_0213d618 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fx/fx_atan.c (license: none), reused by
 * tools/donor_match.py */
u16 func_0213d618(s32 y, s32 x) {
    s32 a, b, c;
    BOOL positive;

    if (y > 0) {
        if (x > 0) {
            if (x > y) {
                a        = y;
                b        = x;
                c        = 0;
                positive = 1;
            } else if (x < y) {
                a        = x;
                b        = y;
                c        = 16384;
                positive = 0;
            } else {
                return 8192;
            }
        } else if (x < 0) {
            x = -x;
            if (x < y) {
                a        = x;
                b        = y;
                c        = 16384;
                positive = 1;
            } else if (x > y) {
                a        = y;
                b        = x;
                c        = 32768;
                positive = 0;
            } else {
                return 24576;
            }
        } else {
            return 16384;
        }
    } else if (y < 0) {
        y = -y;
        if (x < 0) {
            x = -x;
            if (x > y) {
                a        = y;
                b        = x;
                c        = -32768;
                positive = 1;
            } else if (x < y) {
                a        = x;
                b        = y;
                c        = -16384;
                positive = 0;
            } else {
                return -24576;
            }
        } else if (x > 0) {
            if (x < y) {
                a        = x;
                b        = y;
                c        = -16384;
                positive = 1;
            } else if (x > y) {
                a        = y;
                b        = x;
                c        = 0;
                positive = 0;
            } else {
                return -8192;
            }
        } else {
            return -16384;
        }
    } else {
        if (x >= 0) {
            return 0;
        } else {
            return 32768;
        }
    }

    if (b == 0) {
        return 0;
    }

    if (positive) {
        return (c + data_0217b67c[func_0213d548(a, b) >> 5]);
    } else {
        return (c - data_0217b67c[func_0213d548(a, b) >> 5]);
    }
}
