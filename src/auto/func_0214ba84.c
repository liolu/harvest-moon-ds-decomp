/* func_020088e8 from projets/rayman-rr/src/auto/func_020088e8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
typedef double f64;
typedef union {
    f64 value;
    struct {
        u32 lo;
        u32 hi;
    } word;
} M2C_DBL;
s32 func_0214ba84(M2C_DBL value) {
    return value.word.hi & 0x80000000;
}
