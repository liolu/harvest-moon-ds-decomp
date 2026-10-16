/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0214acd0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/string.c (license: none), reused by
 * tools/donor_match.py */
extern char *func_0214acd0(const char *str, int chr);
char *func_0214acd0(const char *str, int chr) {
    const char *p = str;
    char c        = chr;
    char ch;

    while ((ch = *p++)) {
        if (ch == c) {
            return ((char *) (p - 1));
        }
    }

    return (c ? 0 : (char *) (p - 1));
}
