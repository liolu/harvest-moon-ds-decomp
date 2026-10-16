/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207b260 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_bank.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndWaveArc UnkSndWaveArc;
typedef struct UnkSndWaveArcLink {
    UnkSndWaveArc *waveArc;
    struct UnkSndWaveArcLink *next;
} UnkSndWaveArcLink;
struct UnkSndWaveArc {
    u8 unk_00[8];
    u32 fileSize;
    u8 unk_0c[4];
    u8 blockHeader[8];
    UnkSndWaveArcLink *topLink;
    u32 reserved[7];
    u32 waveCount;
    u32 waveOffset[0];
};
typedef struct UnkSndBankData {
    u8 fileHeader[0x10];
    u8 blockHeader[8];
    UnkSndWaveArcLink waveArcLink[4];
    u32 instCount;
    u32 instOffset[1];
} UnkSndBankData;
typedef struct UnkSndInstParam {
    u16 wave[2];
    u8 originalKey;
    u8 attack;
    u8 decay;
    u8 sustain;
    u8 release;
    u8 pan;
} UnkSndInstParam;
typedef struct UnkSndInstData {
    u8 type;
    u8 padding;
    UnkSndInstParam param;
} UnkSndInstData;
typedef struct UnkSndDrumSet {
    u8 min;
    u8 max;
    UnkSndInstData instOffset[1];
} UnkSndDrumSet;
typedef struct UnkSndKeySplit {
    u8 key[8];
    UnkSndInstData instOffset[1];
} UnkSndKeySplit;
typedef struct UnkSndInstPos {
    u32 prgNo;
    u32 index;
} UnkSndInstPos;
BOOL func_02142af4(const UnkSndBankData *bank, UnkSndInstData *inst, UnkSndInstPos *pos) {
    while (pos->prgNo < bank->instCount) {
        u32 instOffset = bank->instOffset[pos->prgNo];
        u32 offset;

        inst->type = (u8) instOffset;
        offset     = instOffset >> 8;
        switch (inst->type) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                inst->param = *(const UnkSndInstParam *) ((u8 *) bank + offset);
                pos->prgNo++;
                return 1;
            case 16: {
                const UnkSndDrumSet *drumSet = (const UnkSndDrumSet *) ((u8 *) bank + offset);
                while (pos->index < drumSet->max - drumSet->min + 1) {
                    *inst = drumSet->instOffset[pos->index];
                    pos->index++;
                    return 1;
                }
                break;
            }
            case 17: {
                const UnkSndKeySplit *keySplit = (const UnkSndKeySplit *) ((u8 *) bank + offset);
                while (pos->index < 8) {
                    if (keySplit->key[pos->index] == 0) {
                        break;
                    }
                    *inst = keySplit->instOffset[pos->index];
                    pos->index++;
                    return 1;
                }
                break;
            }
        }
        pos->prgNo++;
        pos->index = 0;
    }
    return 0;
}
