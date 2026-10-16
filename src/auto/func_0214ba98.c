/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0214ba98 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/math_api.c (license: none), reused by
 * tools/donor_match.py */
extern int func_0214ba98(double x);
int func_0214ba98(double x) {
    switch ((((int *) &x)[1]) & 0x7FF00000) {
        case 0x7FF00000:
            if (((((int *) &x)[1]) & 0x000FFFFF) || ((((int *) &x)[0]) & 0xFFFFFFFF)) {
                return 1;
            } else {
                return 2;
            }
        case 0:
            if (((((int *) &x)[1]) & 0x000FFFFF) || ((((int *) &x)[0]) & 0xFFFFFFFF)) {
                return 5;
            } else {
                return 3;
            }
    }
    return 4;
}
