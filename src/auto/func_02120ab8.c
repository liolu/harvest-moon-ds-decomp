#include "m2c.h"
#include "engine.h"

void func_020021f8(M2C_UNK, M2C_UNK);
void func_020a3870(void);
void func_020ab4b4(void);
void func_020afb3c(void);
void func_020b07e0(M2C_UNK);
void func_020bc1cc(void);
void func_020c53f4(void);
void func_020c5568(void);
void func_020c61cc(void);
void func_020c9764(M2C_UNK);
void func_020cae1c(M2C_UNK, M2C_UNK);
void func_020d0ab8(M2C_UNK, M2C_UNK);
void func_020e128c(M2C_UNK, M2C_UNK);
void func_020e9b00(M2C_UNK);
void func_020eb9c0(M2C_UNK);
void func_020fbc30(void);
void func_020fc6e8(M2C_UNK);
void func_020fc714(M2C_UNK);
void func_020fc8f0(M2C_UNK, M2C_UNK);
void func_02101718(M2C_UNK);
void func_0210f7c8(M2C_UNK, M2C_UNK);
void func_0211d794(M2C_UNK);
void func_02127b48(M2C_UNK, M2C_UNK);
void func_02129458(void);
void func_0212b224(M2C_UNK, M2C_UNK);
void func_0212cbe0(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0212d030(M2C_UNK);
void func_0212e600(M2C_UNK);

extern M2C_UNK data_022beb04;
extern M2C_UNK data_022c49c8;
extern M2C_UNK data_022c535c;
extern M2C_UNK data_022c5374;

void func_02120ab8(s32 arg0) {
    func_0212d030((s32) &data_022c49c8);
    func_0212cbe0((s32) &data_022c535c, 0x138, 0x3FF);
    func_0212cbe0((s32) &data_022c5374, 0x138, 0x3FF);
    func_020cae1c((s32) &data_022beb04, arg0 + 0xC8C);
    func_020a3870();
    func_020ab4b4();
    func_020c53f4();
    func_02127b48(arg0 + 0x35F0, arg0);
    func_020c61cc();
    func_02129458();
    func_0210f7c8(arg0 + 0x5CC, arg0);
    func_020fc6e8(arg0 + 0x323C);
    func_020fc714(arg0 + 0x323C);
    func_020fc8f0(arg0 + 0x323C, arg0);
    func_02101718(arg0 + 0x394);
    func_020e128c(arg0 + 0x3310, arg0);
    func_020e9b00(arg0 + 0x3470);
    func_020b07e0(arg0 + 0x35C4);
    func_020afb3c();
    func_020d0ab8(arg0 + 0x35C4, arg0);
    func_0212b224(arg0 + 0x35E8, arg0);
    func_020eb9c0(arg0 + 0x3670);
    func_020c9764(M2C_FIELD(arg0, s32 *, 0xC90));
    func_020bc1cc();
    func_020fbc30();
    func_020c5568();
    func_0211d794(arg0);
    func_020021f8(arg0 + 0x367C, arg0);
    func_0212e600(1);
}
