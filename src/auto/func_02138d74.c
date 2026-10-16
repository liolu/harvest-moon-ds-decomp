/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef signed char s8;
typedef struct CallbackNode {
    void (*func)(void);
    void *arg;
    struct CallbackNode *next;
} CallbackNode;
extern s8 data_022c54a0;
extern u32 data_022c54a8;
extern u32 data_022c54a4;
extern CallbackNode data_022c54b8;
extern CallbackNode data_022c54ac;
extern void func_02138cf8(void);
extern void func_02138cec(void);
extern void func_02141f74(void);
extern void func_02145e48(CallbackNode *node);
extern void func_02145e60(CallbackNode *node);
extern void *func_02138e1c(void);
extern void func_0213a16c(void);
extern void func_021395b8(void);

/* SoundSystem_Init from https://github.com/sturmds/advance-wars-dual-strike-decomp src/game/main/sound/sound_system_init.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
void func_02138d74(void) {
    if (data_022c54a8 != 0) {
        return;
    }
    data_022c54a8 = 1;
    func_02141f74();
    data_022c54ac.func = func_02138cf8;
    data_022c54ac.arg  = ((void *) 0);
    data_022c54b8.func = func_02138cec;
    data_022c54b8.arg  = ((void *) 0);
    func_02145e48(&data_022c54ac);
    func_02145e60(&data_022c54b8);
    func_02138e1c();
    func_0213a16c();
    func_021395b8();
    data_022c54a0 = -1;
    data_022c54a4 = 1;
}
