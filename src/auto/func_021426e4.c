/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
extern u32 func_02141124(void);
extern u32 func_02141138(u32 state);
extern BOOL func_02140524(void);
extern BOOL func_021426e4(void);

/* func_0207ae14 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
BOOL func_021426e4(void) {
    u32 enabled;
    u32 result;

    if (!func_02140524()) {
        return 1;
    }
    enabled              = func_02141124();
    *(vu32 *) 0x04fff200 = 0x10;
    result               = *(vu32 *) 0x04fff200;
    func_02141138(enabled);
    return result ? 1 : 0;
}
