/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_VBlankIntr from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
s32 func_0213d934(BOOL enable) {
    s32 prev = (*(vu16 *) 0x04000004) & 8;
    if (enable) {
        (*(vu16 *) 0x04000004) |= 8;
    } else {
        (*(vu16 *) 0x04000004) &= ~8;
    }
    return prev;
}
