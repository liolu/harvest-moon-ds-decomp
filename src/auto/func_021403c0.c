/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_021403c0 from https://github.com/Yokimitsuro/khrecoded-decomp libs/nitro/os/calls/func_021403c0.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int OSIntrMode;
typedef struct OSThreadSystemState {
    u32 reserved000;
    u32 rescheduleCount;
} OSThreadSystemState;
extern OSThreadSystemState data_022c6de8;
extern OSIntrMode func_02141124(void);
extern OSIntrMode func_02141138(OSIntrMode mode);
u32 func_021403c0(void) {
    OSIntrMode interruptMode = func_02141124();
    u32 count;

    if (data_022c6de8.rescheduleCount < (u32) (0 - 1)) {
        count = data_022c6de8.rescheduleCount++;
    }
    (void) func_02141138(interruptMode);

    return count;
}
