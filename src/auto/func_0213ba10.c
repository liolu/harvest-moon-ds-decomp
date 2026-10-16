/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndPlayerInfo {
    u8 seqMax;
    u8 unk_01;
    u16 allocChBitFlag;
    u32 heapSize;
} UnkSndPlayerInfo;
extern void *func_0213a608(void);
extern void *func_0213a3b0(int index);
extern void func_0213982c(int playerNo, int seqMax);
extern void func_02139814(int playerNo, u32 allocChBitFlag);
extern BOOL func_02139774(int playerNo, void *heap, u32 size);

/* func_02075780 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcplayer.c (license: none),
 * reused by tools/donor_match.py */
BOOL func_0213ba10(void *heap) {
    int i;

    func_0213a608();

    for (i = 0; i < 32; i++) {
        UnkSndPlayerInfo *info = func_0213a3b0(i);
        if (info == 0) {
            continue;
        }

        func_0213982c(i, info->seqMax);
        func_02139814(i, info->allocChBitFlag);

        if (info->heapSize != 0 && heap != 0) {
            int j;
            for (j = 0; j < info->seqMax; j++) {
                if (!func_02139774(i, heap, info->heapSize)) {
                    return 0;
                }
            }
        }
    }

    return 1;
}
