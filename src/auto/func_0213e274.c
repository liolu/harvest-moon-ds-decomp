/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_SetBankForSubBgExtPltt from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_vramcnt.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u8 vu8;
typedef struct {
    u16 lcdc;
    u16 bg;
    u16 obj;
    u16 arm7;
    u16 tex;
    u16 texPltt;
    u16 clearImage;
    u16 bgExtPltt;
    u16 objExtPltt;
    u16 subBg;
    u16 subObj;
    u16 subBgExtPltt;
    u16 subObjExtPltt;
} UnkGxVramState;
extern UnkGxVramState data_022c6d4c;
extern UnkGxVramState data_022c6d4c;
void func_0213daf8(u32 lcdc);
void func_0213e274(s32 subBgExtPltt) {
    data_022c6d4c.lcdc         = ~subBgExtPltt & (data_022c6d4c.lcdc | data_022c6d4c.subBgExtPltt);
    data_022c6d4c.subBgExtPltt = subBgExtPltt;

    switch (subBgExtPltt) {
        case 0x080:
            (*(u32 *) ((0x04001000) | 0x0)) |= 0x40000000;
            (*(vu8 *) 0x04000248) = 0x82;
            break;
        case 0x000:
            (*(u32 *) ((0x04001000) | 0x0)) &= ~0x40000000;
            break;
    }
    func_0213daf8(data_022c6d4c.lcdc);
}
