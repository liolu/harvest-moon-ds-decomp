/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0205e778 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/card/card_pullout.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
extern u32 func_02141124(void);
extern u32 func_02141138(u32 irq_flag);
extern void func_02147844(u32 tag, u32 data, BOOL err);
extern void func_021478d8(u32 id);
void func_02147844(u32 tag, u32 data, BOOL err);
void func_021478d8(u32 id) {
    vu32 boot_id = *(u32 *) ((*(u16 *) 0x027FFC10 == 0) ? 0x027FF800 : 0x027FFC00);
    if (id != boot_id) {
        u32 prevIRQState = func_02141124();
        func_02147844(14, 17, 0);
        func_02141138(prevIRQState);
    }
}
