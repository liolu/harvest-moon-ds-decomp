/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02141270 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_terminate.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_02141124(void);
extern void func_02141270(void);
extern void func_02141280(void);
void func_02141270(void) {
    while (1) {
        func_02141124();
        func_02141280();
    }
}
void func_02141280(void);
