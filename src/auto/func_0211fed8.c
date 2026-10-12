#include "m2c.h"

M2C_UNK func_02002000(void *);                      /* extern */
M2C_UNK func_020a22ec(void *);                      /* extern */
M2C_UNK func_020ca1a0(M2C_UNK);                     /* extern */
M2C_UNK func_020ca1cc();                            /* extern */
M2C_UNK func_020d094c(void *);                      /* extern */
M2C_UNK func_020ea488(void *);                      /* extern */
M2C_UNK func_020f5b34(void *);                      /* extern */
M2C_UNK func_02101630(void *);                      /* extern */
M2C_UNK func_02107bc8(void *);                      /* extern */
M2C_UNK func_0212799c(void *);                      /* extern */
M2C_UNK func_0212a8e0(void *);                      /* extern */
M2C_UNK func_0212d030(M2C_UNK *);                   /* extern */
M2C_UNK func_0212fe80(void *);                      /* extern */
M2C_UNK func_0214efb4(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_021946f0;
extern M2C_UNK data_02194718;
extern M2C_UNK data_022c49c8;
extern M2C_UNK func_0211fea0;

void *func_0211fed8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021946f0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &data_02194718;
    func_020ca1a0(0);
    func_020ca1cc();
    func_020ca1cc();
    func_0212d030(&data_022c49c8);
    func_0214efb4(arg0 + 0x36C0, 0xA, 0x20, &func_0211fea0);
    func_020a22ec(arg0 + 0x36B4);
    func_02002000(arg0 + 0x367C);
    func_020ea488(arg0 + 0x3670);
    func_0212799c(arg0 + 0x35F0);
    func_0212a8e0(arg0 + 0x35E8);
    func_020d094c(arg0 + 0x35C4);
    func_020f5b34(arg0 + 0xC8C);
    func_02107bc8(arg0 + 0x5CC);
    func_02101630(arg0 + 0x394);
    func_0212fe80(arg0 + 8);
    return arg0;
}
