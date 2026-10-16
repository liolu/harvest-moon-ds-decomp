/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FX_GetDivResult from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fx/fx_division.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned long long u64;
typedef unsigned short u16;
typedef int s32;
typedef volatile u16 vu16;
extern s32 func_0213d58c(void);
s32 func_0213d58c(void) {
    while ((*(vu16 *) 0x04000280) & 0x8000) {
    }
    return (s32) (((*(u64 *) 0x040002A0) + (1 << 19)) >> 20);
}
