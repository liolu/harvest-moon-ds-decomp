/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02140678 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_02140678.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_02141124(void);
extern void func_02141138(int state);
extern void func_0214010c(void *queue);
extern void func_0214015c(void *queue);
extern long long func_0214d524(int a, int b);
int func_02140678(char *q, void **out, int flags) {
    int enabled = func_02141124();
    while (*(int *) (q + 0x1c) == 0) {
        if ((flags & 1) == 0) {
            func_02141138(enabled);
            return 0;
        }
        func_0214010c(q + 8);
    }
    if (out != 0) {
        *out = (*(void ***) (q + 0x10))[*(int *) (q + 0x18)];
    }
    *(int *) (q + 0x18) = (int) (func_0214d524(*(int *) (q + 0x18) + 1, *(int *) (q + 0x14)) >> 32);
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) - 1;
    func_0214015c(q);
    func_02141138(enabled);
    return 1;
}
