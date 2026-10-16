/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern double func_0214beac(double x, double y);

/* func_021400ec from https://github.com/RonyxDumb/mkds src/arm9/021400ec_func_021400ec.c (license: none), reused by
 * tools/donor_match.py */
double func_0214ad54(double x, int *eptr) {
    int hi = ((int *) (&x))[1];
    int lo = ((int *) (&x))[0];
    int ix;
    *eptr = 0;
    ix    = hi & 0x7fffffff;
    if ((ix >= 0x7ff00000) || ((ix | lo) == 0)) {
        return x;
    }
    if (ix < 0x100000) {
        x     = func_0214beac(x, 0x1.0p54);
        hi    = ((int *) (&x))[1];
        *eptr = -54;
        ix    = hi & 0x7fffffff;
    }
    *eptr += (ix >> 20) - 0x3fe;
    hi                = (hi & 0x800fffff) | 0x3fe00000;
    ((int *) (&x))[1] = hi;
    return x;
}
