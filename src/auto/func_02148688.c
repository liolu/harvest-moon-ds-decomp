/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02148688 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/mem.c (license: none), reused by
 * tools/donor_match.py
 */
void *func_02148688(void *dst, const void *src, int n) {
    const char *p = (char *) src;
    char *q       = (char *) dst;

    for (n++; --n;) {
        *q++ = *p++;
    }

    return dst;
}
