/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02072dac from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0207/func_02072dac.c (license: MIT), reused
 * by tools/donor_match.py */
struct E {
    int f0;
    int f4;
    int f8;
};
struct S {
    int f0;
    unsigned char *f1;
    int f2;
    struct E *f3;
    struct E *f4;
};
extern int __FindExceptionTable(struct S *p, int v);
extern struct E *func_0214daf4(struct E *base, int count, unsigned int key);
extern unsigned char *func_0214f32c(unsigned char *p);
extern unsigned char *func_0214da68(unsigned char *p, int *out);
void func_0214db58(int r4, struct S *sb) {
    struct E *e;
    unsigned char *p;
    int a, b, c;
    unsigned int end;
    unsigned int acc;
    unsigned int tmp;

    sb->f1 = 0;
    sb->f2 = 0;
    if (!__FindExceptionTable(sb, r4)) {
        return;
    }
    e = func_0214daf4(sb->f3, sb->f4 - sb->f3, (unsigned int) r4);
    if (!e) {
        return;
    }
    if (e->f4 & 1) {
        sb->f1 = (unsigned char *) &e->f8;
    } else {
        sb->f1 = (unsigned char *) e->f8;
    }
    sb->f0 = e->f0;
    end    = (unsigned int) (r4 - e->f0);
    p      = func_0214f32c(sb->f1);
    acc    = 0;
    do {
        p = func_0214da68(p, &a);
        if (a == 0) {
            return;
        }
        p   = func_0214da68(p, &b);
        p   = func_0214da68(p, &c);
        tmp = acc + (unsigned int) a;
        if (end < tmp) {
            return;
        }
        acc = tmp + (unsigned int) b;
    } while (end > acc);
    sb->f2 = (int) sb->f1 + c;
}
