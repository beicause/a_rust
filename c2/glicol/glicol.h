#ifndef glicolwasm_H
#define glicolwasm_H

#ifdef __cplusplus
extern "C" {
#endif

#include "w2c2_base.h"

typedef struct glicolwasmInstance {
wasmModuleInstance common;
wasmMemory* m0;
wasmTable t0;
U32 g0;
U32 g1;
U32 g2;
} glicolwasmInstance;

F64 env__now(void*);

void f1(glicolwasmInstance*,U32,U32,U32,U32);

U32 f2(glicolwasmInstance*,U32,U32,U32,U32);

U32 f3(glicolwasmInstance*,U32,U32,U32);

void f4(glicolwasmInstance*,U32,U32,U32);

void f5(glicolwasmInstance*,U32,U32);

void f6(glicolwasmInstance*,U32,U32);

void f7(glicolwasmInstance*,U32,U32,U32);

void f8(glicolwasmInstance*,U32);

void f9(glicolwasmInstance*,U32,U32,U32,U32);

U32 f10(glicolwasmInstance*,U32);

void f11(glicolwasmInstance*,U32,U32,F32);

void f12(glicolwasmInstance*,U32,U32);

void f13(glicolwasmInstance*,U32,U32,U32);

void f14(glicolwasmInstance*,U32);

void f15(glicolwasmInstance*,U32,U32);

void f16(glicolwasmInstance*,U32,U32,U32);

void f17(glicolwasmInstance*,U32,U32,U32,U32);

void f18(glicolwasmInstance*,U32,U32);

void f19(glicolwasmInstance*,U32,U32);

void f20(glicolwasmInstance*,U32,U32,U32,U32);

void f21(glicolwasmInstance*,U32,U32,U32,F32);

void f22(glicolwasmInstance*,U32,U32);

void f23(glicolwasmInstance*,U32,U32,U32,U32);

void f24(glicolwasmInstance*,U32,U32);

void f25(glicolwasmInstance*,U32,U32,U32,U32);

void f26(glicolwasmInstance*,U32,U32,U32,F32);

void f27(glicolwasmInstance*,U32,U32,U32,U32);

void f28(glicolwasmInstance*,U32,U32,U32,F32);

void f29(glicolwasmInstance*,U32,U32,U32,U32);

void f30(glicolwasmInstance*,U32,U32);

void f31(glicolwasmInstance*,U32,U32);

void f32(glicolwasmInstance*,U32,U32);

void f33(glicolwasmInstance*,U32);

void f34(glicolwasmInstance*,U32,U32);

U32 f35(glicolwasmInstance*,U32,U32,U32);

U32 f36(glicolwasmInstance*,U32,U32);

void f37(glicolwasmInstance*,U32,U32,U32);

U32 f38(glicolwasmInstance*,U32,U32,U32,U32);

U32 f39(glicolwasmInstance*,U32,U32,U32);

U32 f40(glicolwasmInstance*,U32,U32);

U32 f41(glicolwasmInstance*,U32,U32,U32,U32);

U64 f42(glicolwasmInstance*,U32,U32);

void f43(glicolwasmInstance*,U32,U32);

U32 f44(glicolwasmInstance*,U32,U32,U32,U32);

U32 f45(glicolwasmInstance*,U32,U32,U32);

U32 f46(glicolwasmInstance*,U32,U32);

U32 f47(glicolwasmInstance*,U32,U32,U32);

U32 f48(glicolwasmInstance*,U32,U32);

U64 f49(glicolwasmInstance*,U32);

void f50(glicolwasmInstance*,U32,U32);

U32 f51(glicolwasmInstance*,U32);

void f52(glicolwasmInstance*,U32,U32,U32);

void f53(glicolwasmInstance*,U32,U32);

void f54(glicolwasmInstance*,U32,U32);

void f55(glicolwasmInstance*,U32,U32);

void f56(glicolwasmInstance*,U32,U32,U32,U32);

void f57(glicolwasmInstance*,U32,U32,U32);

void f58(glicolwasmInstance*,U32,U32);

void f59(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f60(glicolwasmInstance*,U32,U32);

void f61(glicolwasmInstance*,U32,U32);

void f62(glicolwasmInstance*,U32,U32);

void f63(glicolwasmInstance*,U32,U32);

void f64(glicolwasmInstance*,U32,U32,U32,U32);

void f65(glicolwasmInstance*,U32,U32,U32,U32);

void f66(glicolwasmInstance*,U32,U32);

void f67(glicolwasmInstance*,U32,U32,F64);

U32 f68(glicolwasmInstance*,U32,U32,U32,U32);

void f69(glicolwasmInstance*,U32,U32,U32,U32);

void f70(glicolwasmInstance*,U32,U32);

void f71(glicolwasmInstance*,U32,U32);

void f72(glicolwasmInstance*,U32);

void f73(glicolwasmInstance*,U32,U32);

void f74(glicolwasmInstance*,U32,U32,U32,U32);

void f75(glicolwasmInstance*,U32,U32);

void f76(glicolwasmInstance*,U32,U32);

void f77(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f78(glicolwasmInstance*,U32,U32);

void f79(glicolwasmInstance*,U32);

void f80(glicolwasmInstance*,U32,U32,U32);

U32 f81(glicolwasmInstance*,U32);

U32 f82(glicolwasmInstance*,U32,U32,U32);

void f83(glicolwasmInstance*,U32,U32);

void f84(glicolwasmInstance*,U32,U32);

void f85(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f86(glicolwasmInstance*);

void f87(glicolwasmInstance*,U32);

void f88(glicolwasmInstance*,U32);

void f89(glicolwasmInstance*,U32,U32);

void f90(glicolwasmInstance*,U32);

void f91(glicolwasmInstance*,U32);

void f92(glicolwasmInstance*,U32);

void f93(glicolwasmInstance*,U32,U32);

U32 f94(glicolwasmInstance*,U32,U32,U32);

void f95(glicolwasmInstance*,U32,U32,U32,U32);

void f96(glicolwasmInstance*,U32,U32);

U32 f97(glicolwasmInstance*,U32);

void f98(glicolwasmInstance*,U32);

void f99(glicolwasmInstance*);

void f100(glicolwasmInstance*,U32);

void f101(glicolwasmInstance*,U32,U32);

U32 f102(glicolwasmInstance*,U32);

void f103(glicolwasmInstance*,U32);

void f104(glicolwasmInstance*,U32,U32);

U32 f105(glicolwasmInstance*,U32);

void f106(glicolwasmInstance*,U32,U32,U32,U32);

void f107(glicolwasmInstance*,U32);

void f108(glicolwasmInstance*,U32);

void f109(glicolwasmInstance*,U32);

void f110(glicolwasmInstance*,U32);

void f111(glicolwasmInstance*,U32);

void f112(glicolwasmInstance*,U32);

void f113(glicolwasmInstance*,U32,U32,U32,U32);

void f114(glicolwasmInstance*,U32,U32);

void f115(glicolwasmInstance*,U32,U32,U32);

void f116(glicolwasmInstance*,U32,U32);

void f117(glicolwasmInstance*,U32,U32);

void f118(glicolwasmInstance*,U32,U32);

void f119(glicolwasmInstance*,U32);

void f120(glicolwasmInstance*,U32);

void f121(glicolwasmInstance*,U32,U32,U32,U32);

U32 f122(glicolwasmInstance*,U32,U32,U32,U32);

U32 f123(glicolwasmInstance*,U32,U32,U32);

void f124(glicolwasmInstance*,U32,U32);

void f125(glicolwasmInstance*,U32,U32);

void f126(glicolwasmInstance*,U32,U32);

U32 f127(glicolwasmInstance*,U32,U32);

void f128(glicolwasmInstance*,U32,U32,U32,U32);

void f129(glicolwasmInstance*,U32);

void f130(glicolwasmInstance*,U32,U32,U32,U32);

void f131(glicolwasmInstance*,U32,U32,U32);

void f132(glicolwasmInstance*,U32);

void f133(glicolwasmInstance*,U32,U32);

void f134(glicolwasmInstance*,U32);

void f135(glicolwasmInstance*,U32,F32,F32);

void f136(glicolwasmInstance*,U32,U32,U32,U32);

void f137(glicolwasmInstance*,U32,U32);

void f138(glicolwasmInstance*,U32,U32);

void f139(glicolwasmInstance*,U32,U32);

void f140(glicolwasmInstance*,U32,U32);

void f141(glicolwasmInstance*,U32,U32,U32,U32);

U32 f142(glicolwasmInstance*,U32,U32);

F32 f143(glicolwasmInstance*,U32,F32);

void f144(glicolwasmInstance*,U32,U32);

void f145(glicolwasmInstance*,U32,U32);

void f146(glicolwasmInstance*,U32,U32,U32,U32);

void f147(glicolwasmInstance*,U32,U32);

void f148(glicolwasmInstance*,U32,U32,U32,U32);

void f149(glicolwasmInstance*,U32,U32);

void f150(glicolwasmInstance*,U32,U32);

void f151(glicolwasmInstance*,U32,U32);

void f152(glicolwasmInstance*,U32,U32);

U32 f153(glicolwasmInstance*,U32);

void f154(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

void f155(glicolwasmInstance*,U32,U32);

void f156(glicolwasmInstance*,U32,U32,U32);

void f157(glicolwasmInstance*,U32,U32,U32);

void f158(glicolwasmInstance*,U32,U32);

U32 f159(glicolwasmInstance*,U32,U32,U32,U32);

void f160(glicolwasmInstance*,U32,U32);

U32 f161(glicolwasmInstance*,U32);

void f162(glicolwasmInstance*,U32,U32);

void f163(glicolwasmInstance*,U32,U32);

U32 f164(glicolwasmInstance*,U32,U32);

void f165(glicolwasmInstance*,U32,U32,U32);

U32 f166(glicolwasmInstance*,U32);

void f167(glicolwasmInstance*,U32,U32,U32);

U32 f168(glicolwasmInstance*,U32);

void f169(glicolwasmInstance*,U32,U32);

U32 f170(glicolwasmInstance*,U32);

void f171(glicolwasmInstance*,U32,U32);

void f172(glicolwasmInstance*,U32,U32);

void f173(glicolwasmInstance*,U32,U32);

void f174(glicolwasmInstance*,U32,U32);

void f175(glicolwasmInstance*,U32,U32);

U32 f176(glicolwasmInstance*,U32);

void f177(glicolwasmInstance*,U32,U32);

void f178(glicolwasmInstance*,U32,U32);

void f179(glicolwasmInstance*,U32,U32);

void f180(glicolwasmInstance*,U32,U32);

void f181(glicolwasmInstance*,U32,U32);

void f182(glicolwasmInstance*,U32,U32);

void f183(glicolwasmInstance*,U32,U32);

void f184(glicolwasmInstance*,U32,U32);

U32 f185(glicolwasmInstance*,U32);

U32 f186(glicolwasmInstance*);

U32 f187(glicolwasmInstance*,U32);

U32 f188(glicolwasmInstance*,U32);

U32 f189(glicolwasmInstance*);

U32 f190(glicolwasmInstance*);

void f191(glicolwasmInstance*,U32,U32,U32,U32);

void f192(glicolwasmInstance*,U32,U32);

void f193(glicolwasmInstance*,U32,U32);

void f194(glicolwasmInstance*,U32);

void f195(glicolwasmInstance*,U32);

void f196(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f197(glicolwasmInstance*,U32,U32,U32,U32);

void f198(glicolwasmInstance*,U32,U32);

void f199(glicolwasmInstance*,U32,U32);

void f200(glicolwasmInstance*,U32,U32,U32);

void f201(glicolwasmInstance*,U32,U32,U32);

void f202(glicolwasmInstance*,U32,U32);

void f203(glicolwasmInstance*,U32,U32);

U32 f204(glicolwasmInstance*,U32,U32);

void f205(glicolwasmInstance*,U32);

void f206(glicolwasmInstance*,U32,U32,U32);

U32 f207(glicolwasmInstance*,U32,U32);

U32 f208(glicolwasmInstance*,U32,U32);

void f209(glicolwasmInstance*,U32,U32,U32,U64,U32,U32);

void f210(glicolwasmInstance*,U32,U32,U32,U64);

U32 f211(glicolwasmInstance*,U32);

U32 f212(glicolwasmInstance*,U32,U32);

U32 f213(glicolwasmInstance*,U32,U32);

U32 f214(glicolwasmInstance*,U32,U32);

U32 f215(glicolwasmInstance*,U32,U32);

U32 f216(glicolwasmInstance*,U32,U32);

U32 f217(glicolwasmInstance*,U32,U32);

U32 f218(glicolwasmInstance*,U32,U32);

U32 f219(glicolwasmInstance*,U32,U32);

U32 f220(glicolwasmInstance*,U32,U32);

U32 f221(glicolwasmInstance*,U32);

U32 f222(glicolwasmInstance*,U32,U32);

U32 f223(glicolwasmInstance*,U32,U32);

void f224(glicolwasmInstance*,U32,U32,U32);

U32 f225(glicolwasmInstance*,U32,U32,U32);

void f226(glicolwasmInstance*,U32,U32);

U32 f227(glicolwasmInstance*,U32);

void f228(glicolwasmInstance*);

void f229(glicolwasmInstance*,U32,U32,U32);

void f230(glicolwasmInstance*,U32,U32);

void f231(glicolwasmInstance*,U32,U32,U32);

void f232(glicolwasmInstance*,U32,U32);

F64 f233(glicolwasmInstance*,F64);

F64 f234(glicolwasmInstance*,F64);

F64 f235(glicolwasmInstance*,F64);

U32 f236(glicolwasmInstance*,U32);

U32 f237(glicolwasmInstance*,U32);

void f238(glicolwasmInstance*,U32);

U32 f239(glicolwasmInstance*);

void f240(glicolwasmInstance*,U32,U32);

U32 f241(glicolwasmInstance*);

U32 f242(glicolwasmInstance*,U32,U32);

U32 f243(glicolwasmInstance*,U32,U32);

U32 f244(glicolwasmInstance*,U32,U32,U32);

U32 f245(glicolwasmInstance*,U32,U32);

U32 f246(glicolwasmInstance*,U32,U32);

U32 f247(glicolwasmInstance*,U32,U32,U32,U32);

U32 f248(glicolwasmInstance*,U32,U32);

U32 f249(glicolwasmInstance*,U32,U32,U32,U32);

U32 f250(glicolwasmInstance*,U32,U32);

U32 f251(glicolwasmInstance*,U32,U32,U32,U32);

void f252(glicolwasmInstance*,U32,U32);

U32 f253(glicolwasmInstance*,U32,U32);

U32 f254(glicolwasmInstance*,U32,U32);

U32 f255(glicolwasmInstance*,U32,U32);

U32 f256(glicolwasmInstance*,U32,U32);

void f257(glicolwasmInstance*,U32);

void f258(glicolwasmInstance*,U32,U32);

void f259(glicolwasmInstance*,U32,U32);

void f260(glicolwasmInstance*,U32,U32);

void f261(glicolwasmInstance*,U32);

void f262(glicolwasmInstance*,U32);

void f263(glicolwasmInstance*,U32);

void f264(glicolwasmInstance*,U32,U32);

void f265(glicolwasmInstance*,U32);

void f266(glicolwasmInstance*,U32);

void f267(glicolwasmInstance*,U32);

void f268(glicolwasmInstance*,U32,U32,U32);

void f269(glicolwasmInstance*,U32);

void f270(glicolwasmInstance*,U32);

void f271(glicolwasmInstance*,U32,U32,U32);

void f272(glicolwasmInstance*,U32,U32);

void f273(glicolwasmInstance*,U32);

void f274(glicolwasmInstance*,U32,U32);

void f275(glicolwasmInstance*,U32);

void f276(glicolwasmInstance*,U32,U32);

void f277(glicolwasmInstance*,U32);

void f278(glicolwasmInstance*,U32,U32);

void f279(glicolwasmInstance*,U32,U32);

void f280(glicolwasmInstance*,U32,U32,U32);

void f281(glicolwasmInstance*,U32);

void f282(glicolwasmInstance*,U32);

void f283(glicolwasmInstance*,U32);

void f284(glicolwasmInstance*,U32);

void f285(glicolwasmInstance*,U32);

void f286(glicolwasmInstance*,U32);

void f287(glicolwasmInstance*,U32,U32);

void f288(glicolwasmInstance*,U32);

void f289(glicolwasmInstance*,U32);

void f290(glicolwasmInstance*,U32);

void f291(glicolwasmInstance*,U32);

void f292(glicolwasmInstance*,U32);

void f293(glicolwasmInstance*,U32,U32);

void f294(glicolwasmInstance*,U32,U32);

void f295(glicolwasmInstance*,U32);

void f296(glicolwasmInstance*,U32);

void f297(glicolwasmInstance*,U32);

void f298(glicolwasmInstance*,U32);

void f299(glicolwasmInstance*,U32);

void f300(glicolwasmInstance*,U32,U32);

void f301(glicolwasmInstance*,U32,U32);

void f302(glicolwasmInstance*,U32,U32);

void f303(glicolwasmInstance*,U32);

void f304(glicolwasmInstance*,U32);

void f305(glicolwasmInstance*,U32);

void f306(glicolwasmInstance*,U32);

void f307(glicolwasmInstance*,U32);

void f308(glicolwasmInstance*,U32);

void f309(glicolwasmInstance*,U32);

void f310(glicolwasmInstance*,U32);

void f311(glicolwasmInstance*,U32);

void f312(glicolwasmInstance*,U32);

void f313(glicolwasmInstance*,U32);

void f314(glicolwasmInstance*,U32);

void f315(glicolwasmInstance*,U32);

void f316(glicolwasmInstance*,U32,U32);

void f317(glicolwasmInstance*,U32);

void f318(glicolwasmInstance*,U32);

void f319(glicolwasmInstance*,U32);

void f320(glicolwasmInstance*,U32);

void f321(glicolwasmInstance*,U32);

void f322(glicolwasmInstance*,U32);

void f323(glicolwasmInstance*,U32,U32);

void f324(glicolwasmInstance*,U32,U32);

void f325(glicolwasmInstance*,U32,U32);

void f326(glicolwasmInstance*,U32);

void f327(glicolwasmInstance*,U32);

void f328(glicolwasmInstance*,U32);

void f329(glicolwasmInstance*,U32);

void f330(glicolwasmInstance*,U32);

void f331(glicolwasmInstance*,U32);

void f332(glicolwasmInstance*,U32);

void f333(glicolwasmInstance*,U32);

void f334(glicolwasmInstance*,U32);

void f335(glicolwasmInstance*,U32);

void f336(glicolwasmInstance*,U32,U32);

void f337(glicolwasmInstance*,U32,U32);

void f338(glicolwasmInstance*,U32);

void f339(glicolwasmInstance*,U32);

void f340(glicolwasmInstance*,U32,U32);

void f341(glicolwasmInstance*,U32);

void f342(glicolwasmInstance*,U32);

void f343(glicolwasmInstance*,U32,U32,U32);

void f344(glicolwasmInstance*,U32);

void f345(glicolwasmInstance*,U32,U32);

void f346(glicolwasmInstance*,U32);

void f347(glicolwasmInstance*,U32,U32,U32);

void f348(glicolwasmInstance*,U32,U32,U32);

void f349(glicolwasmInstance*,U32,U32,U32);

void f350(glicolwasmInstance*,U32);

void f351(glicolwasmInstance*,U32);

void f352(glicolwasmInstance*,U32);

void f353(glicolwasmInstance*,U32);

void f354(glicolwasmInstance*,U32);

void f355(glicolwasmInstance*,U32);

void f356(glicolwasmInstance*,U32);

U32 f357(glicolwasmInstance*,U32,U32,U32,U32);

U32 f358(glicolwasmInstance*,U32,U32,U32,U32);

void f359(glicolwasmInstance*,U32,U32,U32,U32);

void f360(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f361(glicolwasmInstance*,U32,U32,U32);

void f362(glicolwasmInstance*,U32,U32,U32,U32);

void f363(glicolwasmInstance*,U32,U32,U32,U32);

void f364(glicolwasmInstance*,U32,U32);

void f365(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

void f366(glicolwasmInstance*,U32,U32,U32);

U32 f367(glicolwasmInstance*,U32);

U64 f368(glicolwasmInstance*,U64,U64,U32);

void f369(glicolwasmInstance*,U32,U32,U32);

void f370(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f371(glicolwasmInstance*,U32,U32,U32,U32);

void f372(glicolwasmInstance*,U32,U32);

U32 f373(glicolwasmInstance*,U32,U32,U32,U32);

void f374(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f375(glicolwasmInstance*,U32,U32,U32);

void f376(glicolwasmInstance*,U32,U32,U32);

void f377(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

U32 f378(glicolwasmInstance*,U32,U32);

void f379(glicolwasmInstance*,U32,U32,U32);

void f380(glicolwasmInstance*,U32,U32,U32);

U32 f381(glicolwasmInstance*,U32,U32);

void f382(glicolwasmInstance*,U32,U32,U32,U32);

void f383(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f384(glicolwasmInstance*,U32);

void f385(glicolwasmInstance*,U32,U32);

void f386(glicolwasmInstance*,U32,U32);

void f387(glicolwasmInstance*,U32,U32);

U32 f388(glicolwasmInstance*,U32,U32);

void f389(glicolwasmInstance*,U32,U64);

void f390(glicolwasmInstance*,U32,U32);

U32 f391(glicolwasmInstance*,U32,U32,U32,U32);

void f392(glicolwasmInstance*,U32,U32);

void f393(glicolwasmInstance*,U32,U32,U32);

void f394(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f395(glicolwasmInstance*,U32);

U32 f396(glicolwasmInstance*,U32,U32,U32,U32);

void f397(glicolwasmInstance*,U32,U32,U32);

void f398(glicolwasmInstance*,U32,U32);

U32 f399(glicolwasmInstance*,U32,U32);

U32 f400(glicolwasmInstance*,U32,U32);

U32 f401(glicolwasmInstance*,U32,U32,U32,U32);

U32 f402(glicolwasmInstance*,U32,U32);

void f403(glicolwasmInstance*,U32,U32);

U32 f404(glicolwasmInstance*,U32,U32,U32);

F64 f405(glicolwasmInstance*,U32);

F64 f406(glicolwasmInstance*,U64);

U32 f407(glicolwasmInstance*,U32,U32);

U32 f408(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f409(glicolwasmInstance*,U32,U32);

void f410(glicolwasmInstance*,U32,U32);

void f411(glicolwasmInstance*,U32,U32);

void f412(glicolwasmInstance*,U32,U32,U32);

void f413(glicolwasmInstance*,U32,U32);

void f414(glicolwasmInstance*,U32,F64);

void f415(glicolwasmInstance*,U32,U32);

void f416(glicolwasmInstance*,U32,U32);

void f417(glicolwasmInstance*,U32,U32);

void f418(glicolwasmInstance*,U32,U32);

void f419(glicolwasmInstance*,U32,U32);

void f420(glicolwasmInstance*,U32,U32);

void f421(glicolwasmInstance*,U32,U32);

void f422(glicolwasmInstance*,U32,U32);

void f423(glicolwasmInstance*,U32,U32);

void f424(glicolwasmInstance*,U32,U32);

void f425(glicolwasmInstance*,U32,U32);

void f426(glicolwasmInstance*,U32,U32);

void f427(glicolwasmInstance*,U32);

void f428(glicolwasmInstance*,U32);

void f429(glicolwasmInstance*,U32);

void f430(glicolwasmInstance*,U32);

void f431(glicolwasmInstance*,U32,U32,U32);

void f432(glicolwasmInstance*,U32,U32);

void f433(glicolwasmInstance*,U32,U32,U32);

void f434(glicolwasmInstance*,U32,U32,U32,U32);

void f435(glicolwasmInstance*,U32,U32);

void f436(glicolwasmInstance*,U32,U32,U32,U32);

U32 f437(glicolwasmInstance*,U32,U32);

U32 f438(glicolwasmInstance*,U32,U32);

U32 f439(glicolwasmInstance*,U32,U32);

void f440(glicolwasmInstance*,U32,U32);

void f441(glicolwasmInstance*,U32,U32);

void f442(glicolwasmInstance*,U32,U32);

void f443(glicolwasmInstance*,U32,U32,U32);

void f444(glicolwasmInstance*,U32,U32,U32,U32);

void f445(glicolwasmInstance*,U32,U32);

void f446(glicolwasmInstance*,U32,U32);

void f447(glicolwasmInstance*,U32,U32,U32);

U32 f448(glicolwasmInstance*,U32,U32);

U32 f449(glicolwasmInstance*,U32,U32,U32);

void f450(glicolwasmInstance*,U32,U32,U32);

void f451(glicolwasmInstance*,U32,U32);

void f452(glicolwasmInstance*,U32,U32);

void f453(glicolwasmInstance*,U32,U32);

void f454(glicolwasmInstance*,U32,U32);

U32 f455(glicolwasmInstance*,U32,U32);

U32 f456(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

U32 f457(glicolwasmInstance*,U32,U32);

U32 f458(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

void f459(glicolwasmInstance*,U32,U32);

U32 f460(glicolwasmInstance*,U32,U32);

U64 f461(glicolwasmInstance*,U64,U64);

void f462(glicolwasmInstance*,U32,U32,U32,U32);

void f463(glicolwasmInstance*,U32,U32,U32,U32);

void f464(glicolwasmInstance*,U32,U32);

void f465(glicolwasmInstance*,U32,U32,U32,U32);

F64 f466(glicolwasmInstance*,F64,F64);

void f467(glicolwasmInstance*,U32,U32);

void f468(glicolwasmInstance*,U32,U32,U32);

void f469(glicolwasmInstance*,U32);

U32 f470(glicolwasmInstance*,U32);

U32 f471(glicolwasmInstance*,U32,U32);

U32 f472(glicolwasmInstance*,U32,U32,U32,U32);

void f473(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,F32,U32);

U64 f474(glicolwasmInstance*,U32,U32);

U32 f475(glicolwasmInstance*,U32,U64,U32);

U32 f476(glicolwasmInstance*,U32,U32);

U32 f477(glicolwasmInstance*,U32,U32);

void f478(glicolwasmInstance*,U32,U32,U32,U32);

void f479(glicolwasmInstance*,U32,U32,U32);

void f480(glicolwasmInstance*,U32,U32,U32);

void f481(glicolwasmInstance*,U32,U32);

void f482(glicolwasmInstance*,U32,U32,U32);

void f483(glicolwasmInstance*,U32,U32);

void f484(glicolwasmInstance*,U32);

void f485(glicolwasmInstance*,U32,U32,U32);

void f486(glicolwasmInstance*,U32,U32);

void f487(glicolwasmInstance*,U32,U32);

U32 f488(glicolwasmInstance*,U32,U32);

void f489(glicolwasmInstance*,U32,U32,U64,U32);

void f490(glicolwasmInstance*,U32,U32,U32);

void f491(glicolwasmInstance*,U32,F32);

void f492(glicolwasmInstance*,U32,F32);

void f493(glicolwasmInstance*,U32,F32);

void f494(glicolwasmInstance*,U32,U32);

U32 f495(glicolwasmInstance*,U32,U32);

void f496(glicolwasmInstance*,U32,U32,U32,U32);

void f497(glicolwasmInstance*,U32,U32);

void f498(glicolwasmInstance*,U32,U32,F32);

void f499(glicolwasmInstance*,U32,U32);

void f500(glicolwasmInstance*,U32);

void f501(glicolwasmInstance*,U32,U32,F32);

void f502(glicolwasmInstance*,U32);

U32 f503(glicolwasmInstance*,U32);

U32 f504(glicolwasmInstance*,U32);

void f505(glicolwasmInstance*,U32,U32,U32);

void f506(glicolwasmInstance*,U32,U32,F32,U32,F32);

U32 f507(glicolwasmInstance*,U32,U32);

U32 f508(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

void f509(glicolwasmInstance*,U32);

void f510(glicolwasmInstance*,U32,U32,U32);

void f511(glicolwasmInstance*,U32,U32);

U32 f512(glicolwasmInstance*,U32,U32);

F64 f513(glicolwasmInstance*,U32,U32,U32);

void f514(glicolwasmInstance*,U32,U32);

U32 f515(glicolwasmInstance*,U32,U32);

U32 f516(glicolwasmInstance*,U32,U32);

U32 f517(glicolwasmInstance*,U32);

void f518(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f519(glicolwasmInstance*,U32,U32,U32,U32);

U32 f520(glicolwasmInstance*,U32);

void f521(glicolwasmInstance*,U32,U32);

void f522(glicolwasmInstance*,U32,U32,U32,U32);

void f523(glicolwasmInstance*,U32,U32);

void f524(glicolwasmInstance*,U32,U32,U32,U32);

void f525(glicolwasmInstance*,U32);

void f526(glicolwasmInstance*,U32);

void f527(glicolwasmInstance*,U32,U32);

U32 f528(glicolwasmInstance*,U32,U32,U32,U32);

U32 f529(glicolwasmInstance*,U32,U32,U32,U32);

void f530(glicolwasmInstance*,U32,U32,U32,U32);

void f531(glicolwasmInstance*,U32,U32,U32);

void f532(glicolwasmInstance*,U32,U32);

void f533(glicolwasmInstance*,U32,U32,U32,U32);

void f534(glicolwasmInstance*,U32,U32);

void f535(glicolwasmInstance*,U32,U32,U32,U32);

void f536(glicolwasmInstance*,U32,U32,U32,U32);

void f537(glicolwasmInstance*,U32,U32);

void f538(glicolwasmInstance*,U32,U32,U32,U32);

void f539(glicolwasmInstance*,U32,U32,U32,U32);

void f540(glicolwasmInstance*,U32,U32);

void f541(glicolwasmInstance*,U32,U32,U32,U32);

void f542(glicolwasmInstance*,U32,U32);

void f543(glicolwasmInstance*,U32,U32,U32,U32);

void f544(glicolwasmInstance*,U32,U32);

void f545(glicolwasmInstance*,U32,U32,U32,U32);

void f546(glicolwasmInstance*,U32,U32);

void f547(glicolwasmInstance*,U32,U32,U32);

void f548(glicolwasmInstance*,U32,U32,U32,U32);

void f549(glicolwasmInstance*,U32,U32);

void f550(glicolwasmInstance*,U32,U32,U32,U32);

void f551(glicolwasmInstance*,U32,U32);

void f552(glicolwasmInstance*,U32,U32,U32);

void f553(glicolwasmInstance*,U32,U32,U32,U32);

void f554(glicolwasmInstance*,U32,U32,U32,U32);

void f555(glicolwasmInstance*,U32,U32);

void f556(glicolwasmInstance*,U32,U32,U32,U32);

void f557(glicolwasmInstance*,U32,U32);

U32 f558(glicolwasmInstance*,U32);

void f559(glicolwasmInstance*,U32,U32);

void f560(glicolwasmInstance*,U32,U32);

void f561(glicolwasmInstance*,U32,U32);

void f562(glicolwasmInstance*,U32,U32,U32,U32);

void f563(glicolwasmInstance*,U32,U32);

void f564(glicolwasmInstance*,U32,U32,U32,U32);

U32 f565(glicolwasmInstance*,U32,U32,U32);

void f566(glicolwasmInstance*,U32,U32);

void f567(glicolwasmInstance*,U32,U32,U32,U32);

void f568(glicolwasmInstance*,U32,U32);

U32 f569(glicolwasmInstance*,U32,U32,U32,U32);

void f570(glicolwasmInstance*,U32);

void f571(glicolwasmInstance*,U32);

U32 f572(glicolwasmInstance*,U32,U32);

U32 f573(glicolwasmInstance*,U32,U32);

U32 f574(glicolwasmInstance*,U32,U32);

U32 f575(glicolwasmInstance*,U32,U32);

U32 f576(glicolwasmInstance*,U32,U32);

U32 f577(glicolwasmInstance*,U32,U32);

U32 f578(glicolwasmInstance*,U32,U32);

U32 f579(glicolwasmInstance*,U32,U32);

U32 f580(glicolwasmInstance*,U32,U32,U64);

void f581(glicolwasmInstance*,U32,U32,U32);

U64 f582(glicolwasmInstance*,U32,U32,U32);

void f583(glicolwasmInstance*);

void f584(glicolwasmInstance*);

void f585(glicolwasmInstance*,U32,U32,U32,U64);

void f586(glicolwasmInstance*,U32,U32);

U32 f587(glicolwasmInstance*,U32,U32);

U32 f588(glicolwasmInstance*,U32,U32,U64);

void f589(glicolwasmInstance*,U32,U32,U64,U32);

U32 f590(glicolwasmInstance*,U32);

U64 f591(glicolwasmInstance*,U32,U32);

U64 f592(glicolwasmInstance*,U32,U32);

U64 f593(glicolwasmInstance*,U32,U32);

U64 f594(glicolwasmInstance*,U32,U32);

U64 f595(glicolwasmInstance*,U32,U32);

U32 f596(glicolwasmInstance*,U32);

U32 f597(glicolwasmInstance*,U32);

void f598(glicolwasmInstance*,U32,U32);

void f599(glicolwasmInstance*);

void f600(glicolwasmInstance*,U32,U32,U32);

void f601(glicolwasmInstance*,U32,U32,U32);

void f602(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f603(glicolwasmInstance*,U32,U32,U32);

void f604(glicolwasmInstance*,U32);

void f605(glicolwasmInstance*,U32,U32,U32);

void f606(glicolwasmInstance*,U32);

void f607(glicolwasmInstance*,U32);

void f608(glicolwasmInstance*,F32);

void f609(glicolwasmInstance*,F32);

void f610(glicolwasmInstance*,F32);

void f611(glicolwasmInstance*,F32);

void f612(glicolwasmInstance*);

U32 f613(glicolwasmInstance*,U32,U32);

U32 f614(glicolwasmInstance*,U32);

U32 f615(glicolwasmInstance*,U32,U32,U32,U32);

void f616(glicolwasmInstance*,U32,U32);

void f617(glicolwasmInstance*,U32,U32);

U32 f618(glicolwasmInstance*,U32);

void f619(glicolwasmInstance*,U32,U32,U32,U32);

void f620(glicolwasmInstance*,U32,U32);

void f621(glicolwasmInstance*,U32,U32,U32);

void f622(glicolwasmInstance*,U32,U32);

U32 f623(glicolwasmInstance*,U32,U32,U32);

U32 f624(glicolwasmInstance*,U32,U32);

void f625(glicolwasmInstance*,U32);

U32 f626(glicolwasmInstance*,U32,U32,U32);

U32 f627(glicolwasmInstance*,U32,U32);

void f628(glicolwasmInstance*,U32,U32);

U32 f629(glicolwasmInstance*,U32,U32);

void f630(glicolwasmInstance*,U32,U32,U32);

U32 f631(glicolwasmInstance*,U32);

U32 f632(glicolwasmInstance*,U32);

void f633(glicolwasmInstance*,U32,U32);

void f634(glicolwasmInstance*,U32,U32,U32);

void f635(glicolwasmInstance*,U32,U32);

U32 f636(glicolwasmInstance*,U32,U32);

void f637(glicolwasmInstance*,U32);

void f638(glicolwasmInstance*,U32);

void f639(glicolwasmInstance*,U32,U32);

void f640(glicolwasmInstance*,U32,U32);

void f641(glicolwasmInstance*,U32,U32,U32);

U32 f642(glicolwasmInstance*,U64,U32,U32);

U32 f643(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

U32 f644(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f645(glicolwasmInstance*,U32,U32);

void f646(glicolwasmInstance*,U32,U32);

void f647(glicolwasmInstance*,U32,U32,U32);

void f648(glicolwasmInstance*,U32,U32,U32);

U32 f649(glicolwasmInstance*,U32,U32);

void f650(glicolwasmInstance*,U32,U32,U32);

U32 f651(glicolwasmInstance*,U32,U32);

U32 f652(glicolwasmInstance*,U32,U32);

U32 f653(glicolwasmInstance*,U32,U32);

U32 f654(glicolwasmInstance*,U32,U32);

U32 f655(glicolwasmInstance*,U32,U32);

U32 f656(glicolwasmInstance*,U32,U32,U32);

void f657(glicolwasmInstance*,U32,U32,U32);

U32 f658(glicolwasmInstance*,U32,U32);

void f659(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f660(glicolwasmInstance*,U32,U32,U32);

void f661(glicolwasmInstance*,U32,U64,U32,U32,U32,U32);

void f662(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U64,U64,U64);

void f663(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

U32 f664(glicolwasmInstance*,U32,U32);

U32 f665(glicolwasmInstance*,U32,U32);

U32 f666(glicolwasmInstance*,U32,U32);

U32 f667(glicolwasmInstance*,U32,U32);

void f668(glicolwasmInstance*,U32);

U32 f669(glicolwasmInstance*,U32);

void f670(glicolwasmInstance*,U32,U32,U32);

U32 f671(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f672(glicolwasmInstance*,U32,U32,U32);

U32 f673(glicolwasmInstance*,U32,U32);

U32 f674(glicolwasmInstance*,U32,U32);

U32 f675(glicolwasmInstance*,U32,U32);

U32 f676(glicolwasmInstance*,U32,U32);

U32 f677(glicolwasmInstance*,U32);

U32 f678(glicolwasmInstance*,U32,U32,U32);

U32 f679(glicolwasmInstance*,U32);

U32 f680(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f681(glicolwasmInstance*,U32);

U32 f682(glicolwasmInstance*,U32,U32,U32);

U32 f683(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

U32 f684(glicolwasmInstance*,U32,U32);

void f685(glicolwasmInstance*,U32,U32,U32);

U32 f686(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

void f687(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f688(glicolwasmInstance*,U32,U32);

U32 f689(glicolwasmInstance*,U32,U32);

U32 f690(glicolwasmInstance*,U32,U32);

void f691(glicolwasmInstance*);

U32 f692(glicolwasmInstance*,U32,U32);

U32 f693(glicolwasmInstance*,U32,U32);

void f694(glicolwasmInstance*,U32,U64,U64);

void f695(glicolwasmInstance*,U32,U32,U32);

void f696(glicolwasmInstance*,U32,U64,U64);

void f697(glicolwasmInstance*,U32,U32,U32,U32);

U32 f698(glicolwasmInstance*,U32,F32,U32,U32);

U32 f699(glicolwasmInstance*,U32,U32);

U32 f700(glicolwasmInstance*,U32,F32,U32,U32);

U32 f701(glicolwasmInstance*,U32,F32,U32);

U32 f702(glicolwasmInstance*,U32,U32,U32);

U32 f703(glicolwasmInstance*,U32,U32);

U32 f704(glicolwasmInstance*,U32,U32);

U32 f705(glicolwasmInstance*,U32,F32,U32,U32);

U32 f706(glicolwasmInstance*,U32,U32);

U32 f707(glicolwasmInstance*,U32,F64,U32,U32);

U32 f708(glicolwasmInstance*,U32,F64,U32,U32);

U32 f709(glicolwasmInstance*,U32,F64,U32);

U32 f710(glicolwasmInstance*,U32,U32);

U32 f711(glicolwasmInstance*,U32,F64,U32,U32);

U32 f712(glicolwasmInstance*,U32,U32);

U32 f713(glicolwasmInstance*,U32,U32);

U32 f714(glicolwasmInstance*,U32,U32);

U32 f715(glicolwasmInstance*,U32,U32);

U32 f716(glicolwasmInstance*,U32,U32);

void f717(glicolwasmInstance*,U32,U32,U32);

void f718(glicolwasmInstance*,U32,U32,U32,U32);

void f719(glicolwasmInstance*,U32,U32,U32);

void f720(glicolwasmInstance*,U32);

void f721(glicolwasmInstance*,U32);

U32 f722(glicolwasmInstance*,U32,U32);

U32 f723(glicolwasmInstance*,U32,U32,U32);

void f724(glicolwasmInstance*,U32,U32,U32);

U32 f725(glicolwasmInstance*,U32,U32);

void f726(glicolwasmInstance*,U32,U32);

void f727(glicolwasmInstance*,U32,U32,U32,U32);

void f728(glicolwasmInstance*,U32,U32,U32,F64);

U32 f729(glicolwasmInstance*);

void f730(glicolwasmInstance*,U32,U32,U32);

void f731(glicolwasmInstance*,U32,U32,U32);

void f732(glicolwasmInstance*,U32,U32,U32,U32);

U32 f733(glicolwasmInstance*);

void f734(glicolwasmInstance*,U32,U32,U32);

void f735(glicolwasmInstance*,U32,U32,U32,F64,U32);

void f736(glicolwasmInstance*,U32,U32,U32,U32);

void f737(glicolwasmInstance*,U32,U32,U32,F64);

void f738(glicolwasmInstance*,U32,U32,U32,U32);

void f739(glicolwasmInstance*,U32,U32);

void f740(glicolwasmInstance*,U32,U32);

U32 f741(glicolwasmInstance*);

void f742(glicolwasmInstance*,U32,U32);

void f743(glicolwasmInstance*,U32,U32);

void f744(glicolwasmInstance*,U32,U32);

void f745(glicolwasmInstance*,U32,U32);

void f746(glicolwasmInstance*,U32,U32);

void f747(glicolwasmInstance*,U32,U32);

void f748(glicolwasmInstance*,U32);

void f749(glicolwasmInstance*,U32);

void f750(glicolwasmInstance*,U32);

void f751(glicolwasmInstance*,U32,U32);

void f752(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f753(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f754(glicolwasmInstance*,U32,U32,U32,U32);

void f755(glicolwasmInstance*,U32);

void f756(glicolwasmInstance*,U32,U32,U32);

void f757(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f758(glicolwasmInstance*,U32);

void f759(glicolwasmInstance*,U32,U32);

void f760(glicolwasmInstance*,U32,U32,U32,U32);

void f761(glicolwasmInstance*,U32,U32,U32,U32);

void f762(glicolwasmInstance*,U32,U32);

void f763(glicolwasmInstance*,U32,U32);

void f764(glicolwasmInstance*,U32,U32,U32);

U32 f765(glicolwasmInstance*,U32,U32);

void f766(glicolwasmInstance*,U32);

void f767(glicolwasmInstance*,U32,U32,U32);

void f768(glicolwasmInstance*,U32,U32);

void f769(glicolwasmInstance*,U32,U32,U32);

void f770(glicolwasmInstance*,U32,U32,U32,U32);

void f771(glicolwasmInstance*,U32,U32,U32);

void f772(glicolwasmInstance*,U32,U32,U32);

void f773(glicolwasmInstance*,U32,U32,U32,U32);

void f774(glicolwasmInstance*,U32,U32,U32,U32);

void f775(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f776(glicolwasmInstance*,U32,U32,U32,U32);

void f777(glicolwasmInstance*,U32,U32,U32);

void f778(glicolwasmInstance*,U32,U32);

void f779(glicolwasmInstance*,U32,U32);

void f780(glicolwasmInstance*,U32,U32,U32);

void f781(glicolwasmInstance*,U32,U32);

void f782(glicolwasmInstance*,U32,U32,U32,U32);

void f783(glicolwasmInstance*,U32,U32);

void f784(glicolwasmInstance*,U32,U32);

void f785(glicolwasmInstance*,U32,U32);

void f786(glicolwasmInstance*,U32,U32,U32,U32);

void f787(glicolwasmInstance*,U32,U32);

void f788(glicolwasmInstance*,U32);

void f789(glicolwasmInstance*,U32);

void f790(glicolwasmInstance*,U32,U32);

void f791(glicolwasmInstance*,U32);

void f792(glicolwasmInstance*,U32);

void f793(glicolwasmInstance*,U32);

U32 f794(glicolwasmInstance*,U32,U32,U32,U32);

U32 f795(glicolwasmInstance*,U32,U32);

U32 f796(glicolwasmInstance*,U32,U32);

void f797(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f798(glicolwasmInstance*,U32,U32,U32,U32);

U32 f799(glicolwasmInstance*,U32,U32);

U32 f800(glicolwasmInstance*,U32,U32);

void f801(glicolwasmInstance*,U32,U32,U32);

void f802(glicolwasmInstance*,U32,U32);

void f803(glicolwasmInstance*,U32,U32);

U32 f804(glicolwasmInstance*,U32,U32);

void f805(glicolwasmInstance*,U32);

void f806(glicolwasmInstance*,U32,U32,U32,U32);

void f807(glicolwasmInstance*,U32,U32);

void f808(glicolwasmInstance*,U32,U32);

void f809(glicolwasmInstance*,U32,U32);

void f810(glicolwasmInstance*,U32,U32);

void f811(glicolwasmInstance*,U32,U32);

U32 f812(glicolwasmInstance*,U32);

void f813(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f814(glicolwasmInstance*,U32,U32);

void f815(glicolwasmInstance*,U32,U32);

void f816(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

void f817(glicolwasmInstance*,U32,U32,U32,U32);

U32 f818(glicolwasmInstance*,U32,U32);

void f819(glicolwasmInstance*,U32,U32);

void f820(glicolwasmInstance*,U32,U32);

void f821(glicolwasmInstance*,U32,U32);

void f822(glicolwasmInstance*,U32,U32);

void f823(glicolwasmInstance*,U32,U32,U32);

void f824(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f825(glicolwasmInstance*,U32,U32,U32,U32);

void f826(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f827(glicolwasmInstance*,U32);

void f828(glicolwasmInstance*,U32);

void f829(glicolwasmInstance*,U32,U32);

void f830(glicolwasmInstance*,U32,U32,U32);

void f831(glicolwasmInstance*,U32,U32);

void f832(glicolwasmInstance*,U32,U32);

void f833(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f834(glicolwasmInstance*,U32,U32,U32);

void f835(glicolwasmInstance*,U32,U32,U32,U32);

U32 f836(glicolwasmInstance*,U32,U32,U32);

void f837(glicolwasmInstance*,U32,U32);

void f838(glicolwasmInstance*,U32);

void f839(glicolwasmInstance*,U32,U32);

void f840(glicolwasmInstance*,U32,U32);

void f841(glicolwasmInstance*,U32,U32);

U32 f842(glicolwasmInstance*,U32,U32,U32);

void f843(glicolwasmInstance*,U32,U32);

void f844(glicolwasmInstance*,U32,U32,U32,U32);

void f845(glicolwasmInstance*,U32,U32);

void f846(glicolwasmInstance*,U32,U32);

void f847(glicolwasmInstance*,U32,U32);

void f848(glicolwasmInstance*,U32,U32);

void f849(glicolwasmInstance*,U32,U32);

void f850(glicolwasmInstance*,U32,U32);

void f851(glicolwasmInstance*,U32);

void f852(glicolwasmInstance*,U32,U32);

void f853(glicolwasmInstance*,U32);

void f854(glicolwasmInstance*,U32,U32);

void f855(glicolwasmInstance*,U32,U32);

void f856(glicolwasmInstance*,U32,U32);

void f857(glicolwasmInstance*,U32,U32);

void f858(glicolwasmInstance*,U32,U32);

void f859(glicolwasmInstance*,U32,U32);

void f860(glicolwasmInstance*,U32,U32);

void f861(glicolwasmInstance*,U32,U32);

void f862(glicolwasmInstance*,U32,U32);

void f863(glicolwasmInstance*,U32,U32);

void f864(glicolwasmInstance*,U32,U32);

void f865(glicolwasmInstance*,U32,U32);

void f866(glicolwasmInstance*,U32,U32);

void f867(glicolwasmInstance*,U32,U32);

void f868(glicolwasmInstance*,U32,U32);

void f869(glicolwasmInstance*,U32,U32);

void f870(glicolwasmInstance*,U32,U32);

void f871(glicolwasmInstance*,U32,U32);

void f872(glicolwasmInstance*,U32,U32);

void f873(glicolwasmInstance*,U32,U32);

void f874(glicolwasmInstance*,U32,U32);

void f875(glicolwasmInstance*,U32,U32);

void f876(glicolwasmInstance*,U32,U32);

void f877(glicolwasmInstance*,U32,U32);

void f878(glicolwasmInstance*,U32,U32);

void f879(glicolwasmInstance*,U32,U32);

void f880(glicolwasmInstance*,U32,U32);

void f881(glicolwasmInstance*,U32,U32);

void f882(glicolwasmInstance*,U32,U32);

void f883(glicolwasmInstance*,U32,U32);

void f884(glicolwasmInstance*,U32,U32);

void f885(glicolwasmInstance*,U32,U32);

void f886(glicolwasmInstance*,U32,U32);

void f887(glicolwasmInstance*,U32,U32);

void f888(glicolwasmInstance*,U32,U32);

void f889(glicolwasmInstance*,U32,U32);

void f890(glicolwasmInstance*,U32,U32);

void f891(glicolwasmInstance*,U32,U32);

void f892(glicolwasmInstance*,U32,U32);

void f893(glicolwasmInstance*,U32,U32);

void f894(glicolwasmInstance*,U32,U32);

void f895(glicolwasmInstance*,U32,U32);

void f896(glicolwasmInstance*,U32,U32);

void f897(glicolwasmInstance*,U32,U32);

void f898(glicolwasmInstance*,U32,U32);

void f899(glicolwasmInstance*,U32,U32);

void f900(glicolwasmInstance*,U32,U32);

void f901(glicolwasmInstance*,U32,U32);

void f902(glicolwasmInstance*,U32,U32);

void f903(glicolwasmInstance*,U32,U32);

void f904(glicolwasmInstance*,U32,U32);

void f905(glicolwasmInstance*,U32,U32);

void f906(glicolwasmInstance*,U32,U32);

void f907(glicolwasmInstance*,U32,U32);

void f908(glicolwasmInstance*,U32,U32);

void f909(glicolwasmInstance*,U32,U32);

void f910(glicolwasmInstance*,U32,U32);

void f911(glicolwasmInstance*,U32,U32);

void f912(glicolwasmInstance*,U32,U32);

void f913(glicolwasmInstance*,U32,U32);

void f914(glicolwasmInstance*,U32,U32);

void f915(glicolwasmInstance*,U32,U32);

void f916(glicolwasmInstance*,U32,U32);

void f917(glicolwasmInstance*,U32,U32);

void f918(glicolwasmInstance*,U32,U32);

void f919(glicolwasmInstance*,U32,U32);

void f920(glicolwasmInstance*,U32,U32);

void f921(glicolwasmInstance*,U32,U32);

void f922(glicolwasmInstance*,U32,U32);

void f923(glicolwasmInstance*,U32,U32);

void f924(glicolwasmInstance*,U32,U32);

void f925(glicolwasmInstance*,U32,U32);

void f926(glicolwasmInstance*,U32,U32);

void f927(glicolwasmInstance*,U32,U32);

void f928(glicolwasmInstance*,U32,U32);

void f929(glicolwasmInstance*,U32,U32);

void f930(glicolwasmInstance*,U32,U32);

void f931(glicolwasmInstance*,U32,U32);

void f932(glicolwasmInstance*,U32,U32);

void f933(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f934(glicolwasmInstance*,U32,U32);

void f935(glicolwasmInstance*,U32,U32);

void f936(glicolwasmInstance*,U32,U32);

void f937(glicolwasmInstance*,U32,U32);

void f938(glicolwasmInstance*,U32,U32);

void f939(glicolwasmInstance*,U32,U32);

void f940(glicolwasmInstance*,U32);

void f941(glicolwasmInstance*,U32);

void f942(glicolwasmInstance*,U32,U32);

U32 f943(glicolwasmInstance*,U32);

U32 f944(glicolwasmInstance*,U32,U32,U32,U32);

void f945(glicolwasmInstance*,U32);

void f946(glicolwasmInstance*,U32,U32,U32);

void f947(glicolwasmInstance*,U32,U32,U32);

U32 f948(glicolwasmInstance*,U32,U32);

U32 f949(glicolwasmInstance*,U32);

void f950(glicolwasmInstance*,U32,U32,U32,U32);

void f951(glicolwasmInstance*,U32,U32);

void f952(glicolwasmInstance*,U32,U32,U32,U32);

void f953(glicolwasmInstance*,U32,U32,U32);

void f954(glicolwasmInstance*,U32,U32,U32);

void f955(glicolwasmInstance*,U32,U32);

U32 f956(glicolwasmInstance*,U32,U32);

void f957(glicolwasmInstance*,U32);

U32 f958(glicolwasmInstance*,U32,U32);

U64 f959(glicolwasmInstance*,U32,U32);

U32 f960(glicolwasmInstance*,U32,U32,U64);

U64 f961(glicolwasmInstance*,U32,U32);

U32 f962(glicolwasmInstance*,U32,U32);

void f963(glicolwasmInstance*,U32,U32);

U32 f964(glicolwasmInstance*,U32,U32);

void f965(glicolwasmInstance*,U32,U32);

void f966(glicolwasmInstance*,U32,U32);

void f967(glicolwasmInstance*,U32,U32,U32);

void f968(glicolwasmInstance*,U32,U32);

void f969(glicolwasmInstance*,U32,U32);

void f970(glicolwasmInstance*,U32,U32);

void f971(glicolwasmInstance*,U32,U32);

void f972(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f973(glicolwasmInstance*,U32);

U32 f974(glicolwasmInstance*,U32,U32);

void f975(glicolwasmInstance*,U32,U32);

void f976(glicolwasmInstance*,U32);

void f977(glicolwasmInstance*,U32);

void f978(glicolwasmInstance*,U32,U32);

void f979(glicolwasmInstance*,U32,U32);

U32 f980(glicolwasmInstance*,U32,U32);

void f981(glicolwasmInstance*,U32,U32,U32);

void f982(glicolwasmInstance*,U32,U32,U32);

void f983(glicolwasmInstance*,U32,U32);

void f984(glicolwasmInstance*,U32,U32);

U32 f985(glicolwasmInstance*,U32);

void f986(glicolwasmInstance*,U32);

U32 f987(glicolwasmInstance*,U32);

void f988(glicolwasmInstance*,U32,U64);

void f989(glicolwasmInstance*,U32,U64,U32);

void f990(glicolwasmInstance*,U32,U32);

void f991(glicolwasmInstance*,U32,U32,U32);

void f992(glicolwasmInstance*,U32,U32,U32,U32);

void f993(glicolwasmInstance*,U32,U32);

void f994(glicolwasmInstance*,U32,U64);

void f995(glicolwasmInstance*,U32,U32,U32);

void f996(glicolwasmInstance*,U32,U32);

void f997(glicolwasmInstance*,U32,U32);

U32 f998(glicolwasmInstance*,U32);

U32 f999(glicolwasmInstance*,U32,U32);

void f1000(glicolwasmInstance*,U32,U32,U32,U64);

void f1001(glicolwasmInstance*,U32);

U32 f1002(glicolwasmInstance*,U32,U32);

U32 f1003(glicolwasmInstance*,U32,U32,U32);

void f1004(glicolwasmInstance*,U32,U32);

void f1005(glicolwasmInstance*,U32,U32);

void f1006(glicolwasmInstance*,U32,U32);

void f1007(glicolwasmInstance*,U32,U32);

void f1008(glicolwasmInstance*,U32);

void f1009(glicolwasmInstance*,U32);

void f1010(glicolwasmInstance*,U32,U32);

U32 f1011(glicolwasmInstance*,U32,U32);

void f1012(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f1013(glicolwasmInstance*,U32,U32,U32);

void f1014(glicolwasmInstance*,U32,U32,U32,U32);

U32 f1015(glicolwasmInstance*);

void f1016(glicolwasmInstance*,U32,U32,U32);

void f1017(glicolwasmInstance*,U32);

U32 f1018(glicolwasmInstance*,U32,U32);

void f1019(glicolwasmInstance*,U32);

void f1020(glicolwasmInstance*,U32,U32);

void f1021(glicolwasmInstance*,U32,U32,U32,U32,U64);

void f1022(glicolwasmInstance*,U32,U32);

void f1023(glicolwasmInstance*,U32,U32,U32,U64,U32,U32);

U32 f1024(glicolwasmInstance*,U32,U32);

U32 f1025(glicolwasmInstance*);

void f1026(glicolwasmInstance*,U32,U32,U32);

void f1027(glicolwasmInstance*,U32,U32);

void f1028(glicolwasmInstance*,U32,U32,U32,U32);

void f1029(glicolwasmInstance*,U32,U32,U32,U32);

void f1030(glicolwasmInstance*,U32,U32,U32,U32);

void f1031(glicolwasmInstance*,U32,U32,U32);

void f1032(glicolwasmInstance*,U32);

void f1033(glicolwasmInstance*,U32,U32);

void f1034(glicolwasmInstance*,U32);

void f1035(glicolwasmInstance*,U32);

void f1036(glicolwasmInstance*,U32);

void f1037(glicolwasmInstance*,U32);

void f1038(glicolwasmInstance*,U32);

void f1039(glicolwasmInstance*,U32);

void f1040(glicolwasmInstance*,U32);

void f1041(glicolwasmInstance*,U32);

void f1042(glicolwasmInstance*,U32);

void f1043(glicolwasmInstance*,U32);

void f1044(glicolwasmInstance*,U32);

void f1045(glicolwasmInstance*,U32);

void f1046(glicolwasmInstance*,U32);

void f1047(glicolwasmInstance*,U32);

void f1048(glicolwasmInstance*,U32);

void f1049(glicolwasmInstance*,U32,U32);

void f1050(glicolwasmInstance*,U32,U32);

void f1051(glicolwasmInstance*,U32);

void f1052(glicolwasmInstance*,U32,U32);

void f1053(glicolwasmInstance*,U32);

void f1054(glicolwasmInstance*,U32);

void f1055(glicolwasmInstance*,U32,U32);

void f1056(glicolwasmInstance*,U32,U32);

void f1057(glicolwasmInstance*,U32);

void f1058(glicolwasmInstance*,U32);

void f1059(glicolwasmInstance*,U32);

void f1060(glicolwasmInstance*,U32);

void f1061(glicolwasmInstance*,U32);

void f1062(glicolwasmInstance*,U32);

void f1063(glicolwasmInstance*,U32);

void f1064(glicolwasmInstance*,U32);

void f1065(glicolwasmInstance*,U32);

void f1066(glicolwasmInstance*,U32);

void f1067(glicolwasmInstance*,U32);

void f1068(glicolwasmInstance*,U32);

void f1069(glicolwasmInstance*,U32);

void f1070(glicolwasmInstance*,U32);

void f1071(glicolwasmInstance*,U32);

void f1072(glicolwasmInstance*,U32);

void f1073(glicolwasmInstance*,U32);

void f1074(glicolwasmInstance*,U32);

void f1075(glicolwasmInstance*,U32);

void f1076(glicolwasmInstance*,U32);

void f1077(glicolwasmInstance*,U32);

void f1078(glicolwasmInstance*,U32);

void f1079(glicolwasmInstance*,U32);

void f1080(glicolwasmInstance*,U32);

void f1081(glicolwasmInstance*,U32);

void f1082(glicolwasmInstance*,U32);

void f1083(glicolwasmInstance*,U32);

void f1084(glicolwasmInstance*,U32,U32);

void f1085(glicolwasmInstance*,U32,U32);

void f1086(glicolwasmInstance*,U32);

void f1087(glicolwasmInstance*,U32);

void f1088(glicolwasmInstance*,U32,U32);

U32 f1089(glicolwasmInstance*,U32);

void f1090(glicolwasmInstance*,U32);

U32 f1091(glicolwasmInstance*,U32,U32);

void f1092(glicolwasmInstance*,U32);

void f1093(glicolwasmInstance*,U32);

void f1094(glicolwasmInstance*,U32);

void f1095(glicolwasmInstance*,U32);

void f1096(glicolwasmInstance*,U32,U32);

void f1097(glicolwasmInstance*,U32);

void f1098(glicolwasmInstance*,U32,U32,U32);

U32 f1099(glicolwasmInstance*,U32);

void f1100(glicolwasmInstance*,U32);

void f1101(glicolwasmInstance*,U32,U32,U32);

void f1102(glicolwasmInstance*,U32);

void f1103(glicolwasmInstance*,U32);

void f1104(glicolwasmInstance*,U32);

void f1105(glicolwasmInstance*,U32,U32,U32);

void f1106(glicolwasmInstance*,U32);

void f1107(glicolwasmInstance*,U32);

void f1108(glicolwasmInstance*,U32);

void f1109(glicolwasmInstance*,U32);

void f1110(glicolwasmInstance*,U32);

U32 f1111(glicolwasmInstance*,U32);

void f1112(glicolwasmInstance*,U32);

void f1113(glicolwasmInstance*,U32);

void f1114(glicolwasmInstance*,U32);

void f1115(glicolwasmInstance*,U32,U32,U32);

void f1116(glicolwasmInstance*,U32);

U32 f1117(glicolwasmInstance*,U32);

void f1118(glicolwasmInstance*,U32);

void f1119(glicolwasmInstance*,U32);

U32 f1120(glicolwasmInstance*,U32);

void f1121(glicolwasmInstance*,U32,U32);

U32 f1122(glicolwasmInstance*,U32);

void f1123(glicolwasmInstance*,U32,U32);

void f1124(glicolwasmInstance*,U32,U32,U32);

void f1125(glicolwasmInstance*,U32,U32);

U32 f1126(glicolwasmInstance*,U32);

void f1127(glicolwasmInstance*,U32,U32);

void f1128(glicolwasmInstance*,U32,U32,U32);

U64 f1129(glicolwasmInstance*,U32);

U32 f1130(glicolwasmInstance*,U32,U64);

void f1131(glicolwasmInstance*,U32);

void f1132(glicolwasmInstance*,U32,U32,U64);

U32 f1133(glicolwasmInstance*,U32,U32);

void f1134(glicolwasmInstance*,U32,U64);

void f1135(glicolwasmInstance*,U32);

void f1136(glicolwasmInstance*,U32,U32);

void f1137(glicolwasmInstance*,U32,U32,U32);

U32 f1138(glicolwasmInstance*,U32,U64);

U32 f1139(glicolwasmInstance*,U32,U32);

void f1140(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f1141(glicolwasmInstance*,U32);

void f1142(glicolwasmInstance*,U32,U32,U32);

void f1143(glicolwasmInstance*,U32,U32,U32);

void f1144(glicolwasmInstance*,U32,U32);

void f1145(glicolwasmInstance*,U32,U32,U32,U64);

void f1146(glicolwasmInstance*,U32);

U32 f1147(glicolwasmInstance*,U32);

void f1148(glicolwasmInstance*,U32,U32);

void f1149(glicolwasmInstance*,U32,U32);

void f1150(glicolwasmInstance*,U32,U32);

U32 f1151(glicolwasmInstance*,U32,U32);

U32 f1152(glicolwasmInstance*,U32,U32,U64);

U32 f1153(glicolwasmInstance*,U32,U32);

U32 f1154(glicolwasmInstance*,U32,U32);

void f1155(glicolwasmInstance*,U32,U32,U32);

void f1156(glicolwasmInstance*,U32,U32);

U32 f1157(glicolwasmInstance*,U32,U32);

void f1158(glicolwasmInstance*,U32,U32);

void f1159(glicolwasmInstance*,U32,U32,U32,U32);

void f1160(glicolwasmInstance*,U32,U32,U32,U64);

void f1161(glicolwasmInstance*,U32,U32,U32);

void f1162(glicolwasmInstance*,U32,U32,U32,U64,U32);

void f1163(glicolwasmInstance*,U32,U32,U32,U64);

void f1164(glicolwasmInstance*,U32,U32);

U32 f1165(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f1166(glicolwasmInstance*,U32,U32);

void f1167(glicolwasmInstance*,U32,U32);

void f1168(glicolwasmInstance*,U32,U32);

U32 f1169(glicolwasmInstance*,U32,U32);

void f1170(glicolwasmInstance*,U32,U32);

void f1171(glicolwasmInstance*,U32,U32);

void f1172(glicolwasmInstance*,U32,U32);

void f1173(glicolwasmInstance*,U32,U32,U32);

void f1174(glicolwasmInstance*,U32,U32);

void f1175(glicolwasmInstance*,U32,U32);

void f1176(glicolwasmInstance*,U32,U32);

void f1177(glicolwasmInstance*,U32,U32);

U32 f1178(glicolwasmInstance*,U32,U32);

void f1179(glicolwasmInstance*,U32,U32);

U32 f1180(glicolwasmInstance*,U32,U32);

void f1181(glicolwasmInstance*,U32,U32,U32,U32);

void f1182(glicolwasmInstance*,U32,U32);

void f1183(glicolwasmInstance*,U32,U32);

U32 f1184(glicolwasmInstance*,U32,U32,U32,U32);

void f1185(glicolwasmInstance*,U32,U32);

void f1186(glicolwasmInstance*,U32,U32);

void f1187(glicolwasmInstance*,U32,U32);

void f1188(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f1189(glicolwasmInstance*,U32);

void f1190(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f1191(glicolwasmInstance*,U32,U32);

void f1192(glicolwasmInstance*,U32);

void f1193(glicolwasmInstance*,U32);

U32 f1194(glicolwasmInstance*,U32);

void f1195(glicolwasmInstance*,U32,U32);

U64 f1196(glicolwasmInstance*,U32,U32,U32);

U64 f1197(glicolwasmInstance*,U64,U32,U32);

void f1198(glicolwasmInstance*,U32);

U32 f1199(glicolwasmInstance*,U32);

void f1200(glicolwasmInstance*,U32);

U32 f1201(glicolwasmInstance*,U32,U32);

void f1202(glicolwasmInstance*,U32,U32,U32,U64,U32,U32);

void f1203(glicolwasmInstance*,U32);

U32 f1204(glicolwasmInstance*,U32);

void f1205(glicolwasmInstance*,U32,U32);

void f1206(glicolwasmInstance*,U32,U32);

void f1207(glicolwasmInstance*,U32,U32,U32);

void f1208(glicolwasmInstance*,U32,U32);

void f1209(glicolwasmInstance*,U32,U32);

void f1210(glicolwasmInstance*,U32);

U32 f1211(glicolwasmInstance*,U32);

U32 f1212(glicolwasmInstance*,U32);

void f1213(glicolwasmInstance*,U32,U32);

void f1214(glicolwasmInstance*,U32,U32);

void f1215(glicolwasmInstance*,U32,U32);

U32 f1216(glicolwasmInstance*,U32);

void f1217(glicolwasmInstance*,U32,U32);

void f1218(glicolwasmInstance*,U32,U32,U32);

void f1219(glicolwasmInstance*,U32);

void f1220(glicolwasmInstance*,U32,U32);

U32 f1221(glicolwasmInstance*,U32);

void f1222(glicolwasmInstance*,U32,U32);

void f1223(glicolwasmInstance*,U32,U32,U32);

U32 f1224(glicolwasmInstance*,U32);

void f1225(glicolwasmInstance*,U32,U32);

void f1226(glicolwasmInstance*,U32,U32);

void f1227(glicolwasmInstance*,U32,U32);

void f1228(glicolwasmInstance*,U32,U32);

void f1229(glicolwasmInstance*,U32);

U32 f1230(glicolwasmInstance*,U32,U32);

void f1231(glicolwasmInstance*,U32,U32);

void f1232(glicolwasmInstance*,U32,U32);

void f1233(glicolwasmInstance*,U32,U32);

void f1234(glicolwasmInstance*,U32,U32,U32);

U32 f1235(glicolwasmInstance*,U32,U32);

void f1236(glicolwasmInstance*,U32);

void f1237(glicolwasmInstance*,U32);

void f1238(glicolwasmInstance*,U32);

void f1239(glicolwasmInstance*,U32);

U32 f1240(glicolwasmInstance*,U32);

U32 f1241(glicolwasmInstance*,U32);

U32 f1242(glicolwasmInstance*,U32);

void f1243(glicolwasmInstance*,U32,U32);

U32 f1244(glicolwasmInstance*,U32,U32);

void f1245(glicolwasmInstance*,U32,U32);

U32 f1246(glicolwasmInstance*,U32,U32,U32);

U32 f1247(glicolwasmInstance*,U32,U32,U32);

U32 f1248(glicolwasmInstance*,U32);

void f1249(glicolwasmInstance*,U32);

void f1250(glicolwasmInstance*,U32,U32);

void f1251(glicolwasmInstance*,U32,U32,U32);

U32 f1252(glicolwasmInstance*,U32,U32);

U32 f1253(glicolwasmInstance*,U32,U32);

U32 f1254(glicolwasmInstance*,U32);

U32 f1255(glicolwasmInstance*,U32,U32,U32);

void f1256(glicolwasmInstance*,U32,U32);

void f1257(glicolwasmInstance*,U32,U32);

void f1258(glicolwasmInstance*,U32);

void f1259(glicolwasmInstance*,U32);

U32 f1260(glicolwasmInstance*,U32,U32);

void f1261(glicolwasmInstance*,U32,U32,U32,U32);

void f1262(glicolwasmInstance*,U32,U32,U32,U32);

U32 f1263(glicolwasmInstance*,U32,U32);

void f1264(glicolwasmInstance*,U32,U32);

void f1265(glicolwasmInstance*,U32,U32);

U32 f1266(glicolwasmInstance*,U32);

U32 f1267(glicolwasmInstance*,U32);

void f1268(glicolwasmInstance*,U32,U32);

void f1269(glicolwasmInstance*,U32,U32,U32);

void f1270(glicolwasmInstance*,U32,U32,U32);

U32 f1271(glicolwasmInstance*,U32,U32,U32);

void f1272(glicolwasmInstance*,U32);

U32 f1273(glicolwasmInstance*,U32);

void f1274(glicolwasmInstance*,U32,U32);

U32 f1275(glicolwasmInstance*,U32,U32,U32,U32);

U32 f1276(glicolwasmInstance*,U64);

void f1277(glicolwasmInstance*,U32,U32);

U32 f1278(glicolwasmInstance*,U32);

void f1279(glicolwasmInstance*,U32,U32);

void f1280(glicolwasmInstance*,U32,U32);

void f1281(glicolwasmInstance*,U32,U64);

void f1282(glicolwasmInstance*,U32,U32);

void f1283(glicolwasmInstance*,U32,U32);

void f1284(glicolwasmInstance*,U32,U32);

void f1285(glicolwasmInstance*,U32,U64,U64);

U32 f1286(glicolwasmInstance*,U32,U32,U32);

void f1287(glicolwasmInstance*,U32,U32);

U64 f1288(glicolwasmInstance*,U64,U32,U32);

U32 f1289(glicolwasmInstance*,U32,U64);

U32 f1290(glicolwasmInstance*,U32,U64);

void f1291(glicolwasmInstance*,U32,U32,U32,U32);

void f1292(glicolwasmInstance*,U32,U32);

void f1293(glicolwasmInstance*,U32);

void f1294(glicolwasmInstance*,U32);

void f1295(glicolwasmInstance*,U32,U32);

U32 f1296(glicolwasmInstance*,U32);

U32 f1297(glicolwasmInstance*,U32,U32,U32);

void f1298(glicolwasmInstance*,U32,U32);

void f1299(glicolwasmInstance*,U32,U32,U32);

void f1300(glicolwasmInstance*,U32,U32);

void f1301(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U64,U32,U32,U32,U32,U32,U32);

void f1302(glicolwasmInstance*,U32);

void f1303(glicolwasmInstance*,U32);

U32 f1304(glicolwasmInstance*,U32);

void f1305(glicolwasmInstance*,U32,U32);

void f1306(glicolwasmInstance*,U32,U32);

void f1307(glicolwasmInstance*,U32,U32,U64);

U32 f1308(glicolwasmInstance*,U32);

U32 f1309(glicolwasmInstance*,U32);

void f1310(glicolwasmInstance*,U32,U32,U32);

void f1311(glicolwasmInstance*,U32,U32,U32,U32);

U32 f1312(glicolwasmInstance*,U32,U32);

void f1313(glicolwasmInstance*,U32,U32,U32,U32);

U32 f1314(glicolwasmInstance*,U32,U32);

U32 f1315(glicolwasmInstance*,U32,U32);

void f1316(glicolwasmInstance*,U32,U32,U32,U32);

void f1317(glicolwasmInstance*,U32,U32);

U32 f1318(glicolwasmInstance*,U32,U32,U32);

U32 f1319(glicolwasmInstance*,U32,U32);

void f1320(glicolwasmInstance*,U32,U32);

U32 f1321(glicolwasmInstance*,U32,U64);

void f1322(glicolwasmInstance*,U32);

void f1323(glicolwasmInstance*,U32,U32);

U32 f1324(glicolwasmInstance*,U32);

void f1325(glicolwasmInstance*,U32,U32);

void f1326(glicolwasmInstance*,U32,U32);

U32 f1327(glicolwasmInstance*,U32,U32);

void f1328(glicolwasmInstance*,U32);

U32 f1329(glicolwasmInstance*,U32);

U32 f1330(glicolwasmInstance*,U32,U32);

U32 f1331(glicolwasmInstance*,U32,U32);

void f1332(glicolwasmInstance*,U32,U32);

U32 f1333(glicolwasmInstance*,U32,U32,U32,U32);

void f1334(glicolwasmInstance*,U32,U32);

void f1335(glicolwasmInstance*,U32,U32);

void f1336(glicolwasmInstance*,U32,U32,U32);

U32 f1337(glicolwasmInstance*,U32,U32);

void f1338(glicolwasmInstance*,U32,U32);

U32 f1339(glicolwasmInstance*,U32,U32);

U32 f1340(glicolwasmInstance*,U32,U32);

U32 f1341(glicolwasmInstance*,U32,U32,U32);

void f1342(glicolwasmInstance*,U32);

U32 f1343(glicolwasmInstance*,U32,U32,U32);

void f1344(glicolwasmInstance*,U32,U32);

U32 f1345(glicolwasmInstance*,U32,U32);

void f1346(glicolwasmInstance*,U32,U32,U32);

void f1347(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f1348(glicolwasmInstance*,U32,U32);

U32 f1349(glicolwasmInstance*,U32,U32);

void f1350(glicolwasmInstance*,U32);

void f1351(glicolwasmInstance*,U32,U32);

void f1352(glicolwasmInstance*,U32,U32);

void f1353(glicolwasmInstance*,U32,U32);

void f1354(glicolwasmInstance*,U32,U32);

void f1355(glicolwasmInstance*,U32,U32);

void f1356(glicolwasmInstance*,U32,U32);

void f1357(glicolwasmInstance*,U32,U32);

void f1358(glicolwasmInstance*,U32,U32);

void f1359(glicolwasmInstance*,U32,U32);

void f1360(glicolwasmInstance*,U32,U32);

void f1361(glicolwasmInstance*,U32,U32);

void f1362(glicolwasmInstance*,U32,U32);

void f1363(glicolwasmInstance*,U32);

void f1364(glicolwasmInstance*,U32);

void f1365(glicolwasmInstance*,U32);

U32 f1366(glicolwasmInstance*,U32,U32);

void f1367(glicolwasmInstance*,U32,U32);

void f1368(glicolwasmInstance*,U32,U32);

U32 f1369(glicolwasmInstance*,U32);

U32 f1370(glicolwasmInstance*,U32);

void f1371(glicolwasmInstance*,U32,U32,U32,U32);

void f1372(glicolwasmInstance*,U32,U32);

void f1373(glicolwasmInstance*,U32);

U32 f1374(glicolwasmInstance*,U32,U32,U32);

void f1375(glicolwasmInstance*,U32,U32,U32);

U32 f1376(glicolwasmInstance*,U32,U32);

void f1377(glicolwasmInstance*,U32,U32);

void f1378(glicolwasmInstance*,U32,U32,U32);

void f1379(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f1380(glicolwasmInstance*,U32,U32);

U32 f1381(glicolwasmInstance*,U32,U32);

U32 f1382(glicolwasmInstance*,U32,U32);

U32 f1383(glicolwasmInstance*,U32,U32);

U32 f1384(glicolwasmInstance*,U32,U32);

U32 f1385(glicolwasmInstance*,U32,U32,U32);

U32 f1386(glicolwasmInstance*,U32,U32);

U32 f1387(glicolwasmInstance*,U32,U32);

U32 f1388(glicolwasmInstance*,U32,U32);

void f1389(glicolwasmInstance*,U32,U32);

U32 f1390(glicolwasmInstance*,U32,U32);

U64 f1391(glicolwasmInstance*,U64,U64,U32);

U32 f1392(glicolwasmInstance*,U32,U32);

U32 f1393(glicolwasmInstance*,U32,U32);

U64 f1394(glicolwasmInstance*,U32,U32,U32);

U32 f1395(glicolwasmInstance*,U32,U32,U32);

void f1396(glicolwasmInstance*,U32);

void f1397(glicolwasmInstance*,U32);

U32 f1398(glicolwasmInstance*,U32);

U32 f1399(glicolwasmInstance*,U32);

void f1400(glicolwasmInstance*,U32,U32);

void f1401(glicolwasmInstance*,U32,U32);

void f1402(glicolwasmInstance*,U32,U32);

void f1403(glicolwasmInstance*,U32,U32);

void f1404(glicolwasmInstance*,U32,U32);

void f1405(glicolwasmInstance*,U32,U32,U32);

void f1406(glicolwasmInstance*,U32,U32);

void f1407(glicolwasmInstance*,U32,U32,U32);

void f1408(glicolwasmInstance*,U32,U32);

void f1409(glicolwasmInstance*,U32,U32);

U32 f1410(glicolwasmInstance*,U32,U32);

U32 f1411(glicolwasmInstance*,U32,U32);

void f1412(glicolwasmInstance*,U32,U32);

U32 f1413(glicolwasmInstance*,U32,U32);

U32 f1414(glicolwasmInstance*,U32,U32,U32);

U32 f1415(glicolwasmInstance*,U32,U32);

U32 f1416(glicolwasmInstance*,U32,U32);

U32 f1417(glicolwasmInstance*,U32,U32);

U32 f1418(glicolwasmInstance*,U32,U32);

U32 f1419(glicolwasmInstance*,U32,U32);

U32 f1420(glicolwasmInstance*,U32,U32);

U32 f1421(glicolwasmInstance*,U32,U32);

U32 f1422(glicolwasmInstance*,U32,U32);

U32 f1423(glicolwasmInstance*,U32,U32,U32);

U32 f1424(glicolwasmInstance*,U32,U32);

U32 f1425(glicolwasmInstance*,U32,U32);

U32 f1426(glicolwasmInstance*,U32,U32,U32);

U32 f1427(glicolwasmInstance*,U32,U32);

U32 f1428(glicolwasmInstance*,U32,U32);

U32 f1429(glicolwasmInstance*,U32,U32);

U32 f1430(glicolwasmInstance*,U32,U32);

U32 f1431(glicolwasmInstance*,U32,U32);

U32 f1432(glicolwasmInstance*,U32,U32,U32);

U32 f1433(glicolwasmInstance*,U32,U32);

U32 f1434(glicolwasmInstance*,U32,U32);

void f1435(glicolwasmInstance*,U32);

U32 f1436(glicolwasmInstance*,U32,U32);

void f1437(glicolwasmInstance*,U32);

U32 f1438(glicolwasmInstance*,U32,U32);

U32 f1439(glicolwasmInstance*,U32,U32);

U32 f1440(glicolwasmInstance*,U32,U32);

U32 f1441(glicolwasmInstance*,U32,U32);

void f1442(glicolwasmInstance*,U32);

U32 f1443(glicolwasmInstance*,U32,U32);

void f1444(glicolwasmInstance*,U32,U32,U32);

void f1445(glicolwasmInstance*,U32,U32,U32,U32);

void f1446(glicolwasmInstance*,U32);

void f1447(glicolwasmInstance*,U32,U32,U32);

void f1448(glicolwasmInstance*,U32,U32,U32);

void f1449(glicolwasmInstance*,U32,U32);

void f1450(glicolwasmInstance*,U32,U32,U32,U32);

void f1451(glicolwasmInstance*,U32,U32,U32,U32);

void f1452(glicolwasmInstance*,U32,U32);

void f1453(glicolwasmInstance*,U32,U32,U32);

void f1454(glicolwasmInstance*,U32,U32);

void f1455(glicolwasmInstance*,U32,U32);

void f1456(glicolwasmInstance*,U32,U32);

U32 f1457(glicolwasmInstance*,U32,U32);

U32 f1458(glicolwasmInstance*,U32,U32);

U32 f1459(glicolwasmInstance*,U32,U32);

U32 f1460(glicolwasmInstance*,U32,U32);

U32 f1461(glicolwasmInstance*,U32,U32);

void f1462(glicolwasmInstance*,U32);

U32 f1463(glicolwasmInstance*,U32,U32);

U32 f1464(glicolwasmInstance*,U32,U32);

void f1465(glicolwasmInstance*,U32,U32);

void f1466(glicolwasmInstance*,U32,U32);

void f1467(glicolwasmInstance*,U32,U32);

void f1468(glicolwasmInstance*,U32,U32);

void f1469(glicolwasmInstance*,U32,U32);

void f1470(glicolwasmInstance*,U32);

void f1471(glicolwasmInstance*,U32,U32);

void f1472(glicolwasmInstance*,U32,U32);

U32 f1473(glicolwasmInstance*);

void f1474(glicolwasmInstance*,U32);

void f1475(glicolwasmInstance*,U32,U32);

void f1476(glicolwasmInstance*,U32);

void f1477(glicolwasmInstance*,U32,U32);

U32 f1478(glicolwasmInstance*,U32);

U32 f1479(glicolwasmInstance*,U32);

void f1480(glicolwasmInstance*,U32,U32);

U32 f1481(glicolwasmInstance*,U32);

U32 f1482(glicolwasmInstance*,U32);

void f1483(glicolwasmInstance*,U32,U32);

U32 f1484(glicolwasmInstance*,U32,U32,U32,U32);

void f1485(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f1486(glicolwasmInstance*,U32,U32,U32);

void f1487(glicolwasmInstance*,U32,U32,U32);

void f1488(glicolwasmInstance*,U32);

U32 f1489(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U64,U32,U32,U32);

void f1490(glicolwasmInstance*,U32,U32,U32);

void f1491(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f1492(glicolwasmInstance*,U32,U32);

U32 f1493(glicolwasmInstance*,U32);

void f1494(glicolwasmInstance*,U32,U32);

U32 f1495(glicolwasmInstance*,U32);

void f1496(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f1497(glicolwasmInstance*,U32,U32,U32);

void f1498(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f1499(glicolwasmInstance*,U32);

U32 f1500(glicolwasmInstance*,U32,U32,U64,U64);

U32 f1501(glicolwasmInstance*,U32,U32,U64,U64);

void f1502(glicolwasmInstance*,U32,U32,U32,U32);

void f1503(glicolwasmInstance*,U32,U32,U32,U32);

void f1504(glicolwasmInstance*,U32,U32,U32,U32);

U32 f1505(glicolwasmInstance*,U32,U32);

void f1506(glicolwasmInstance*,U32,U32,U32,U32);

void f1507(glicolwasmInstance*,U32,U32,U32,U32);

void f1508(glicolwasmInstance*,U32,U32,U32,U32);

void f1509(glicolwasmInstance*,U32,U32,U32,U32);

void f1510(glicolwasmInstance*,U32,U32,U32,U32);

void f1511(glicolwasmInstance*,U32,U32,U32,U32);

void f1512(glicolwasmInstance*,U32,U32,U32,U32);

void f1513(glicolwasmInstance*,U32,U32,U32,U32);

void f1514(glicolwasmInstance*,U32,U32,U32,U32);

void f1515(glicolwasmInstance*,U32,U32,U32,U32);

void f1516(glicolwasmInstance*,U32,U32,U32,U32);

void f1517(glicolwasmInstance*,U32,U32,U32,U32);

void f1518(glicolwasmInstance*,U32,U32,U32,U32);

void f1519(glicolwasmInstance*,U32,U32,U32,U32);

void f1520(glicolwasmInstance*,U32,U32,U32,U32);

void f1521(glicolwasmInstance*,U32,U32,U32,U32);

void f1522(glicolwasmInstance*,U32,U32,U32,U32);

void f1523(glicolwasmInstance*,U32,U32,U32,U32);

void f1524(glicolwasmInstance*,U32,U32,U32,U32);

void f1525(glicolwasmInstance*,U32,U32,U32,U32);

void f1526(glicolwasmInstance*,U32,U32,U32,U32);

void f1527(glicolwasmInstance*,U32,U32,U32,U32);

void f1528(glicolwasmInstance*,U32,U32,U32,U32);

void f1529(glicolwasmInstance*,U32,U32,U32,U32);

void f1530(glicolwasmInstance*,U32,U32,U32,U32);

void f1531(glicolwasmInstance*,U32,U32,U32,U32);

void f1532(glicolwasmInstance*,U32,U32,U32,U32);

void f1533(glicolwasmInstance*,U32,U32,U32,U32);

void f1534(glicolwasmInstance*,U32,U32,U32,U32);

void f1535(glicolwasmInstance*,U32,U32,U32,U32);

void f1536(glicolwasmInstance*,U32,U32,U32,U32);

void f1537(glicolwasmInstance*,U32,U32,U32,U32);

void f1538(glicolwasmInstance*,U32,U32,U32,U32);

void f1539(glicolwasmInstance*,U32,U32,U32,U32);

void f1540(glicolwasmInstance*,U32,U32,U32,U32);

void f1541(glicolwasmInstance*,U32,U32,U32,U32);

void f1542(glicolwasmInstance*,U32,U32,U32,U32);

void f1543(glicolwasmInstance*,U32,U32,U32,U32);

void f1544(glicolwasmInstance*,U32,U32,U32,U32);

void f1545(glicolwasmInstance*,U32,U32,U32,U32);

void f1546(glicolwasmInstance*,U32,U32,U32,U32);

void f1547(glicolwasmInstance*,U32,U32,U32,U32);

void f1548(glicolwasmInstance*,U32,U32,U32,U32);

void f1549(glicolwasmInstance*,U32,U32,U32,U32);

void f1550(glicolwasmInstance*,U32,U32,U32,U32);

void f1551(glicolwasmInstance*,U32,U32,U32,U32);

void f1552(glicolwasmInstance*,U32,U32,U32,U32);

void f1553(glicolwasmInstance*,U32,U32,U32,U32);

void f1554(glicolwasmInstance*,U32,U32,U32,U32);

void f1555(glicolwasmInstance*,U32,U32,U32,U32);

void f1556(glicolwasmInstance*,U32,U32,U32,U32);

void f1557(glicolwasmInstance*,U32,U32,U32,U32);

void f1558(glicolwasmInstance*,U32,U32,U32,U32);

void f1559(glicolwasmInstance*,U32,U32,U32,U32);

void f1560(glicolwasmInstance*,U32,U32,U32,U32);

void f1561(glicolwasmInstance*,U32,U32,U32,U32);

void f1562(glicolwasmInstance*,U32,U32,U32,U32);

void f1563(glicolwasmInstance*,U32,U32,U32,U32);

void f1564(glicolwasmInstance*,U32,U32,U32,U32);

void f1565(glicolwasmInstance*,U32,U32,U32,U32);

void f1566(glicolwasmInstance*,U32,U32,U32,U32);

void f1567(glicolwasmInstance*,U32,U32,U32,U32);

void f1568(glicolwasmInstance*,U32,U32,U32,U32);

void f1569(glicolwasmInstance*,U32,U32,U32,U32);

void f1570(glicolwasmInstance*,U32,U32,U32,U32);

void f1571(glicolwasmInstance*,U32,U32,U32,U32);

void f1572(glicolwasmInstance*,U32,U32,U32,U32);

void f1573(glicolwasmInstance*,U32,U32,U32,U32);

void f1574(glicolwasmInstance*,U32,U32,U32,U32);

void f1575(glicolwasmInstance*,U32,U32,U32,U32);

void f1576(glicolwasmInstance*,U32,U32,U32,U32);

void f1577(glicolwasmInstance*,U32,U32,U32,U32);

void f1578(glicolwasmInstance*,U32,U32,U32,U32);

void f1579(glicolwasmInstance*,U32,U32,U32,U32);

void f1580(glicolwasmInstance*,U32,U32,U32,U32);

void f1581(glicolwasmInstance*,U32,U32,U32,U32);

void f1582(glicolwasmInstance*,U32,U32,U32,U32);

void f1583(glicolwasmInstance*,U32,U32,U32,U32);

void f1584(glicolwasmInstance*,U32,U32,U32,U32);

void f1585(glicolwasmInstance*,U32,U32,U32,U32);

void f1586(glicolwasmInstance*,U32,U32,U32,U32);

void f1587(glicolwasmInstance*,U32,U32,U32,U32);

void f1588(glicolwasmInstance*,U32,U32,U32,U32);

void f1589(glicolwasmInstance*,U32,U32,U32,U32);

void f1590(glicolwasmInstance*,U32,U32,U32,U32);

void f1591(glicolwasmInstance*,U32,U32,U32,U32);

void f1592(glicolwasmInstance*,U32,U32,U32,U32);

void f1593(glicolwasmInstance*,U32,U32,U32,U32);

void f1594(glicolwasmInstance*,U32,U32,U32,U32);

void f1595(glicolwasmInstance*,U32,U32,U32,U32);

void f1596(glicolwasmInstance*,U32,U32,U32,U32);

void f1597(glicolwasmInstance*,U32,U32,U32,U32);

void f1598(glicolwasmInstance*,U32,U32,U32,U32);

void f1599(glicolwasmInstance*,U32,U32,U32,U32);

void f1600(glicolwasmInstance*,U32,U32,U32,U32);

void f1601(glicolwasmInstance*,U32,U32,U32,U32);

void f1602(glicolwasmInstance*,U32,U32,U32,U32);

void f1603(glicolwasmInstance*,U32,U32,U32,U32);

U32 f1604(glicolwasmInstance*,U32);

void f1605(glicolwasmInstance*,U32,U32);

U32 f1606(glicolwasmInstance*,U32,U32);

void f1607(glicolwasmInstance*,U32,U32);

U32 f1608(glicolwasmInstance*,U32,U32);

U32 f1609(glicolwasmInstance*,U32,U32);

void f1610(glicolwasmInstance*,U32,U32,U32);

void f1611(glicolwasmInstance*,U32,U32,U32);

void f1612(glicolwasmInstance*,U32,U32,U32);

void f1613(glicolwasmInstance*,U32,U32,U32);

void f1614(glicolwasmInstance*,U32,U32,U32);

void f1615(glicolwasmInstance*,U32,U32,U32,U32);

void f1616(glicolwasmInstance*,U32,U32);

void f1617(glicolwasmInstance*,U32,U32,U32,U32);

void f1618(glicolwasmInstance*,U32,U32,U32,U32);

void f1619(glicolwasmInstance*,U32,U32,U32,U32);

void f1620(glicolwasmInstance*,U32,U32,U32,U32);

void f1621(glicolwasmInstance*,U32,U32,U32,U32);

void f1622(glicolwasmInstance*,U32,U32,U32,U32);

void f1623(glicolwasmInstance*,U32,U32,U32,U32);

void f1624(glicolwasmInstance*,U32,U32,U32,U32);

void f1625(glicolwasmInstance*,U32,U32);

U32 f1626(glicolwasmInstance*,U32,U32);

U32 f1627(glicolwasmInstance*,U32,U32);

U32 f1628(glicolwasmInstance*,U32,U32);

U32 f1629(glicolwasmInstance*,U32,U32);

U32 f1630(glicolwasmInstance*,U32,U32);

U32 f1631(glicolwasmInstance*,U32,U32);

U32 f1632(glicolwasmInstance*,U32,U32);

U32 f1633(glicolwasmInstance*,U32,U32);

U32 f1634(glicolwasmInstance*,U32,U32);

U32 f1635(glicolwasmInstance*,U32,U32);

void f1636(glicolwasmInstance*,U32,U32);

void f1637(glicolwasmInstance*,U32,U32);

void f1638(glicolwasmInstance*,U32,U32,U32);

U32 f1639(glicolwasmInstance*,U32);

void f1640(glicolwasmInstance*,U32,U32);

void f1641(glicolwasmInstance*,U32,U32,U32);

U32 f1642(glicolwasmInstance*,U32,U32);

void f1643(glicolwasmInstance*,U32,U32,U32);

U32 f1644(glicolwasmInstance*,U32,U32);

U32 f1645(glicolwasmInstance*,U32,U32);

void f1646(glicolwasmInstance*,U32,U32);

void f1647(glicolwasmInstance*,U32,U32,U32);

U32 f1648(glicolwasmInstance*,U32,U32);

U32 f1649(glicolwasmInstance*,U32,U32);

U32 f1650(glicolwasmInstance*,U32,U32);

U32 f1651(glicolwasmInstance*,U32,U32);

U32 f1652(glicolwasmInstance*,U32,U32);

U32 f1653(glicolwasmInstance*,U32,U32);

void f1654(glicolwasmInstance*,U32,U32,U32);

void f1655(glicolwasmInstance*,U32,U32,U32,U32);

void f1656(glicolwasmInstance*,U32,U32,U32);

U32 f1657(glicolwasmInstance*,U32,U32);

U32 f1658(glicolwasmInstance*,U32);

void f1659(glicolwasmInstance*,U32,U32,U32);

void f1660(glicolwasmInstance*,U32,U32);

void f1661(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f1662(glicolwasmInstance*,U32,U32,U32,U32);

void f1663(glicolwasmInstance*,U32,U32);

void f1664(glicolwasmInstance*,U32,U32);

U32 f1665(glicolwasmInstance*,U32,U32);

U32 f1666(glicolwasmInstance*,U32,U32);

U32 f1667(glicolwasmInstance*,U32,U32);

void f1668(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

void f1669(glicolwasmInstance*,U32,U32);

void f1670(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

U32 f1671(glicolwasmInstance*,U32,U32);

U32 f1672(glicolwasmInstance*,U32);

void f1673(glicolwasmInstance*,U32);

U32 f1674(glicolwasmInstance*,U32,U64);

U32 f1675(glicolwasmInstance*,U32,U64);

void f1676(glicolwasmInstance*,U32,U32);

U32 f1677(glicolwasmInstance*,U32,U32);

void f1678(glicolwasmInstance*,U32,U32,U32,U32);

void f1679(glicolwasmInstance*,U32,U32,U32);

void f1680(glicolwasmInstance*,U32,U32);

void f1681(glicolwasmInstance*,U32,U32);

void f1682(glicolwasmInstance*,U32,U32);

U32 f1683(glicolwasmInstance*,U32,U32,U32);

void f1684(glicolwasmInstance*,U32,U32);

void f1685(glicolwasmInstance*,U32,U32);

void f1686(glicolwasmInstance*,U32,U32);

U32 f1687(glicolwasmInstance*,U32,U32);

void f1688(glicolwasmInstance*,U32,U32,U32);

void f1689(glicolwasmInstance*,U32,U32,U32,U32);

void f1690(glicolwasmInstance*,U32,U32,U32,U32);

void f1691(glicolwasmInstance*,U32,U32,U32,U32);

void f1692(glicolwasmInstance*,U32,U32,U32,U32);

void f1693(glicolwasmInstance*,U32,U32,U32,U32);

void f1694(glicolwasmInstance*,U32,U32,U32,U32);

void f1695(glicolwasmInstance*,U32,U32,U32,U32);

void f1696(glicolwasmInstance*,U32,U32,U32,U32);

void f1697(glicolwasmInstance*,U32,U32,U32,U32);

void f1698(glicolwasmInstance*,U32,U32,U32,U32);

void f1699(glicolwasmInstance*,U32,U32,U32,U32);

void f1700(glicolwasmInstance*,U32,U32,U32,U32);

void f1701(glicolwasmInstance*,U32,U32,U32,U32);

void f1702(glicolwasmInstance*,U32,U32);

U32 f1703(glicolwasmInstance*,U32,U32);

void f1704(glicolwasmInstance*,U32,U32);

void f1705(glicolwasmInstance*,U32,U32,U32,U32);

void f1706(glicolwasmInstance*,U32,U32,U32,U32);

void f1707(glicolwasmInstance*,U32,U32,U32,U32);

void f1708(glicolwasmInstance*,U32,U32,U32,U32);

void f1709(glicolwasmInstance*,U32,U32,U32,U32);

void f1710(glicolwasmInstance*,U32,U32);

void f1711(glicolwasmInstance*,U32,U32,U32,U32);

void f1712(glicolwasmInstance*,U32,U32,U32,U32);

void f1713(glicolwasmInstance*,U32,U32,U32,U32);

void f1714(glicolwasmInstance*,U32,U32,U32,U32);

void f1715(glicolwasmInstance*,U32,U32,U32,U32);

void f1716(glicolwasmInstance*,U32,U32);

U32 f1717(glicolwasmInstance*,U32,U32);

void f1718(glicolwasmInstance*,U32,U32,U32,U32);

void f1719(glicolwasmInstance*,U32,U32,U32,U32);

void f1720(glicolwasmInstance*,U32,U32);

U32 f1721(glicolwasmInstance*,U32,U32);

void f1722(glicolwasmInstance*,U32,U32,U32,U32);

void f1723(glicolwasmInstance*,U32,U32);

U32 f1724(glicolwasmInstance*,U32,U32);

void f1725(glicolwasmInstance*,U32,U32,U32,U32);

void f1726(glicolwasmInstance*,U32,U32,U32,U32);

void f1727(glicolwasmInstance*,U32,U32,U32,U32);

void f1728(glicolwasmInstance*,U32,U32,U32,U32);

void f1729(glicolwasmInstance*,U32,U32,U32,U32);

void f1730(glicolwasmInstance*,U32,U32,U32,U32);

void f1731(glicolwasmInstance*,U32,U32,U32,U32);

void f1732(glicolwasmInstance*,U32,U32,U32,U32);

void f1733(glicolwasmInstance*,U32,U32,U32,U32);

void f1734(glicolwasmInstance*,U32,U32,U32,U32);

void f1735(glicolwasmInstance*,U32,U32,U32,U32);

void f1736(glicolwasmInstance*,U32,U32);

void f1737(glicolwasmInstance*,U32,U32,U32);

U32 f1738(glicolwasmInstance*,U32);

void f1739(glicolwasmInstance*,U32,U32);

void f1740(glicolwasmInstance*,U32,U32,U32);

U32 f1741(glicolwasmInstance*,U32);

void f1742(glicolwasmInstance*,U32,U32);

void f1743(glicolwasmInstance*,U32,U32);

void f1744(glicolwasmInstance*,U32,U32);

void f1745(glicolwasmInstance*,U32,U32,U32);

void f1746(glicolwasmInstance*,U32,U32,U32,U32);

void f1747(glicolwasmInstance*,U32,U32);

void f1748(glicolwasmInstance*,U32);

void f1749(glicolwasmInstance*,U32,U32,U32);

void f1750(glicolwasmInstance*,U32,U32);

void f1751(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f1752(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f1753(glicolwasmInstance*,U32);

void f1754(glicolwasmInstance*,U32,U32);

void f1755(glicolwasmInstance*,U32,U32);

void f1756(glicolwasmInstance*,U32);

void f1757(glicolwasmInstance*,U32,U32,U32);

void f1758(glicolwasmInstance*,U32,U32);

U32 f1759(glicolwasmInstance*,U32);

U32 f1760(glicolwasmInstance*,U32,U32,U32,U32);

void f1761(glicolwasmInstance*,U32,U32);

void f1762(glicolwasmInstance*,U32,U32);

U32 f1763(glicolwasmInstance*,U32);

void f1764(glicolwasmInstance*,U32,U32,U32);

void f1765(glicolwasmInstance*,U32);

void f1766(glicolwasmInstance*,U32,U32,U32);

void f1767(glicolwasmInstance*,U32,U32);

void f1768(glicolwasmInstance*,U32,U32,U32);

U32 f1769(glicolwasmInstance*,U32);

U32 f1770(glicolwasmInstance*,U32);

U32 f1771(glicolwasmInstance*,U32,U32);

U32 f1772(glicolwasmInstance*,U32,U32);

U32 f1773(glicolwasmInstance*,U32,U32);

U32 f1774(glicolwasmInstance*,U32,U32);

U32 f1775(glicolwasmInstance*,U32,U32);

U32 f1776(glicolwasmInstance*,U32,U32);

U32 f1777(glicolwasmInstance*,U32,U32);

U32 f1778(glicolwasmInstance*,U32,U32);

U32 f1779(glicolwasmInstance*,U32,U32);

U32 f1780(glicolwasmInstance*,U32,U32);

U32 f1781(glicolwasmInstance*,U32,U32);

U32 f1782(glicolwasmInstance*,U32,U32);

U32 f1783(glicolwasmInstance*,U32,U32);

U32 f1784(glicolwasmInstance*,U32,U32);

U32 f1785(glicolwasmInstance*,U32,U32);

U32 f1786(glicolwasmInstance*,U32,U32);

U32 f1787(glicolwasmInstance*,U32,U32);

U32 f1788(glicolwasmInstance*,U32,U32);

U32 f1789(glicolwasmInstance*,U32,U32);

void f1790(glicolwasmInstance*,U32);

U32 f1791(glicolwasmInstance*,U32,U32);

U32 f1792(glicolwasmInstance*,U32,U32,U32);

U32 f1793(glicolwasmInstance*,U32,U32);

U32 f1794(glicolwasmInstance*,U32,U32);

U32 f1795(glicolwasmInstance*,U32,U32);

U32 f1796(glicolwasmInstance*,U32,U32);

U32 f1797(glicolwasmInstance*,U32,U32);

U32 f1798(glicolwasmInstance*,U32,U32);

U32 f1799(glicolwasmInstance*,U32,U32);

void f1800(glicolwasmInstance*,U32);

U32 f1801(glicolwasmInstance*,U32,U32);

U32 f1802(glicolwasmInstance*,U32,U32);

U32 f1803(glicolwasmInstance*,U32,U32);

U32 f1804(glicolwasmInstance*,U32,U32);

void f1805(glicolwasmInstance*,U32);

U32 f1806(glicolwasmInstance*,U32,U32);

U32 f1807(glicolwasmInstance*,U32,U32);

U32 f1808(glicolwasmInstance*,U32,U32,U32);

void f1809(glicolwasmInstance*,U32);

U32 f1810(glicolwasmInstance*,U32,U32);

U32 f1811(glicolwasmInstance*,U32,U32);

U32 f1812(glicolwasmInstance*,U32,U32);

void f1813(glicolwasmInstance*,U32);

U32 f1814(glicolwasmInstance*,U32,U32);

U32 f1815(glicolwasmInstance*,U32,U32);

void f1816(glicolwasmInstance*,U32,U32);

U32 f1817(glicolwasmInstance*,U32);

U32 f1818(glicolwasmInstance*,U32);

U32 f1819(glicolwasmInstance*,U32);

void f1820(glicolwasmInstance*,U32,U32);

void f1821(glicolwasmInstance*,U32,U32);

U32 f1822(glicolwasmInstance*,U32);

void f1823(glicolwasmInstance*,U32,U32);

void f1824(glicolwasmInstance*,U32,U32,U32);

void f1825(glicolwasmInstance*,U32,U32);

void f1826(glicolwasmInstance*,U32,U32);

void f1827(glicolwasmInstance*,U32,U32,U32);

void f1828(glicolwasmInstance*,U32,U32);

void f1829(glicolwasmInstance*,U32,U32,U32);

void f1830(glicolwasmInstance*,U32,U32);

void f1831(glicolwasmInstance*,U32,U32);

void f1832(glicolwasmInstance*,U32,U32);

U32 f1833(glicolwasmInstance*,U32);

U32 f1834(glicolwasmInstance*,U32);

U32 f1835(glicolwasmInstance*,U32);

U32 f1836(glicolwasmInstance*,U32);

void f1837(glicolwasmInstance*,U32,U32);

void f1838(glicolwasmInstance*,U32,U32);

void f1839(glicolwasmInstance*,U32,U32);

void f1840(glicolwasmInstance*,U32);

U32 f1841(glicolwasmInstance*,U32);

void f1842(glicolwasmInstance*,U32,U32,U32);

void f1843(glicolwasmInstance*,U32,U32);

void f1844(glicolwasmInstance*,U32,U32);

void f1845(glicolwasmInstance*,U32,U32);

void f1846(glicolwasmInstance*,U32,U32,U64);

U32 f1847(glicolwasmInstance*,U32);

void f1848(glicolwasmInstance*,U32,U32);

void f1849(glicolwasmInstance*,U32,U32,U32);

void f1850(glicolwasmInstance*,U32,U32,U32);

void f1851(glicolwasmInstance*,U32,U32);

void f1852(glicolwasmInstance*,U32,U64);

void f1853(glicolwasmInstance*,U32,U32);

void f1854(glicolwasmInstance*,U32,U32);

void f1855(glicolwasmInstance*,U32,U32);

U32 f1856(glicolwasmInstance*,U32);

void f1857(glicolwasmInstance*,U32,U32);

void f1858(glicolwasmInstance*,U32,U32);

U32 f1859(glicolwasmInstance*,U32,U32);

void f1860(glicolwasmInstance*,U32,U32,U32,U32);

void f1861(glicolwasmInstance*,U32,U32,U32,U32);

void f1862(glicolwasmInstance*,U32,U32);

void f1863(glicolwasmInstance*,U32,U32,U32);

void f1864(glicolwasmInstance*,U32,U32,U32);

void f1865(glicolwasmInstance*,U32,U32);

void f1866(glicolwasmInstance*,U32,U32,U32);

void f1867(glicolwasmInstance*,U32,U32);

void f1868(glicolwasmInstance*,U32,U32);

void f1869(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f1870(glicolwasmInstance*,U32);

void f1871(glicolwasmInstance*,U32);

void f1872(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f1873(glicolwasmInstance*,U32);

void f1874(glicolwasmInstance*,U32,U32);

void f1875(glicolwasmInstance*,U32);

void f1876(glicolwasmInstance*,U32,U64);

void f1877(glicolwasmInstance*,U32);

void f1878(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f1879(glicolwasmInstance*,U32,U32);

void f1880(glicolwasmInstance*,U32,U32,U32);

void f1881(glicolwasmInstance*,U32);

void f1882(glicolwasmInstance*,U32,U32);

U32 f1883(glicolwasmInstance*,U32);

U32 f1884(glicolwasmInstance*,U32);

void f1885(glicolwasmInstance*,U32,U32);

U32 f1886(glicolwasmInstance*,U32,U32,U32,U32);

void f1887(glicolwasmInstance*,U32,U32,U32);

U32 f1888(glicolwasmInstance*,U32);

void f1889(glicolwasmInstance*,U32,U32);

void f1890(glicolwasmInstance*,U32,U32);

void f1891(glicolwasmInstance*,U32,U32);

void f1892(glicolwasmInstance*,U32,U32);

void f1893(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f1894(glicolwasmInstance*,U32);

void f1895(glicolwasmInstance*,U32);

U32 f1896(glicolwasmInstance*,U32);

U32 f1897(glicolwasmInstance*,U32);

void f1898(glicolwasmInstance*,U32,U32);

void f1899(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f1900(glicolwasmInstance*,U32);

void f1901(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

U32 f1902(glicolwasmInstance*,U32);

U32 f1903(glicolwasmInstance*,U32);

U32 f1904(glicolwasmInstance*,U32);

void f1905(glicolwasmInstance*,U32,U32);

U32 f1906(glicolwasmInstance*,U32,U32,U32);

void f1907(glicolwasmInstance*,U32,U32);

void f1908(glicolwasmInstance*,U32);

void f1909(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f1910(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f1911(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f1912(glicolwasmInstance*,U32,U32,U32);

void f1913(glicolwasmInstance*,U32,U32,U32);

void f1914(glicolwasmInstance*,U32,U32);

U32 f1915(glicolwasmInstance*,U32,U32);

U32 f1916(glicolwasmInstance*,U32,U32,U32);

void f1917(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

U32 f1918(glicolwasmInstance*,U32);

U32 f1919(glicolwasmInstance*,U32,U32);

U32 f1920(glicolwasmInstance*);

void f1921(glicolwasmInstance*,U32,U32,U32,U32);

void f1922(glicolwasmInstance*,U32,U32,U32,U64);

void f1923(glicolwasmInstance*,U32,U32,U32,U64,U32);

U32 f1924(glicolwasmInstance*);

void f1925(glicolwasmInstance*,U32,U32,U32);

U32 f1926(glicolwasmInstance*,U32,U32,U32);

U32 f1927(glicolwasmInstance*,U32,U32,U64,U64);

void f1928(glicolwasmInstance*,U32,U32,U32,U64,U64);

void f1929(glicolwasmInstance*,U32);

void f1930(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f1931(glicolwasmInstance*,U32,U32);

U32 f1932(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

void f1933(glicolwasmInstance*,U32);

void f1934(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

U32 f1935(glicolwasmInstance*,U32);

void f1936(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f1937(glicolwasmInstance*,U32,U32);

void f1938(glicolwasmInstance*,U32,U32,U32);

void f1939(glicolwasmInstance*,U32);

U32 f1940(glicolwasmInstance*,U32,U32);

U32 f1941(glicolwasmInstance*,U32,U32,U32,U32);

U32 f1942(glicolwasmInstance*,U32,U32);

U32 f1943(glicolwasmInstance*,U32,U32);

void f1944(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

void f1945(glicolwasmInstance*,U32,U32);

U32 f1946(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f1947(glicolwasmInstance*,U32);

void f1948(glicolwasmInstance*,U32,U32);

U32 f1949(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f1950(glicolwasmInstance*,U32,U32,U32,U32,U64);

void f1951(glicolwasmInstance*,U32);

void f1952(glicolwasmInstance*,U32);

void f1953(glicolwasmInstance*,U32,U32,U32);

void f1954(glicolwasmInstance*,U32);

U32 f1955(glicolwasmInstance*,U32);

U32 f1956(glicolwasmInstance*,U32);

U32 f1957(glicolwasmInstance*,U32);

void f1958(glicolwasmInstance*,U32,U32,U64);

U32 f1959(glicolwasmInstance*,U32,U32,U32,U32);

U32 f1960(glicolwasmInstance*,U32,U32,U32);

U32 f1961(glicolwasmInstance*,U32,U32);

void f1962(glicolwasmInstance*,U32,U32);

U32 f1963(glicolwasmInstance*,U32,U32);

void f1964(glicolwasmInstance*,U32,U32);

void f1965(glicolwasmInstance*,U32,U32);

void f1966(glicolwasmInstance*,U32,U32);

void f1967(glicolwasmInstance*,U32,U32);

U32 f1968(glicolwasmInstance*,U32,U32,U32);

void f1969(glicolwasmInstance*,U32,U32);

U32 f1970(glicolwasmInstance*,U32,U32,U32);

void f1971(glicolwasmInstance*,U32,U32);

void f1972(glicolwasmInstance*,U32);

void f1973(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

U32 f1974(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f1975(glicolwasmInstance*,U32);

void f1976(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

U32 f1977(glicolwasmInstance*,U32,U32);

U32 f1978(glicolwasmInstance*,U32,U32);

U32 f1979(glicolwasmInstance*,U32,U32);

U32 f1980(glicolwasmInstance*,U32,U32,U32);

void f1981(glicolwasmInstance*,U32,U32,U32,U32);

U32 f1982(glicolwasmInstance*,U32,U32);

U32 f1983(glicolwasmInstance*,U32,U32);

void f1984(glicolwasmInstance*,U32,U32,U32,U32);

void f1985(glicolwasmInstance*,U32,U32);

void f1986(glicolwasmInstance*,U32,U32,U32);

U32 f1987(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f1988(glicolwasmInstance*,U32,U32);

void f1989(glicolwasmInstance*,U32,U32,U64,U32);

void f1990(glicolwasmInstance*,U32);

U64 f1991(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f1992(glicolwasmInstance*,U32,U32,U64,U64,U32,U32);

void f1993(glicolwasmInstance*,U32);

U32 f1994(glicolwasmInstance*,U32);

U32 f1995(glicolwasmInstance*,U32,U32);

void f1996(glicolwasmInstance*,U32,U32,U64,U64,U32,U32);

U32 f1997(glicolwasmInstance*);

void f1998(glicolwasmInstance*,U32,U32,U32);

void f1999(glicolwasmInstance*,U32,U32,U32,U32);

void f2000(glicolwasmInstance*,U32,U32,U32,U32);

void f2001(glicolwasmInstance*,U32,U32,U64,U64,U32,U32,U32);

U32 f2002(glicolwasmInstance*);

void f2003(glicolwasmInstance*,U32,U32,U32);

void f2004(glicolwasmInstance*,U32,U32);

void f2005(glicolwasmInstance*,U32,U32,U64,U64,U32,U32,U32,U32);

void f2006(glicolwasmInstance*,U32,U32,U32,U64,U64,U32,U32);

U32 f2007(glicolwasmInstance*,U32);

U32 f2008(glicolwasmInstance*,U32,U32);

void f2009(glicolwasmInstance*,U32,U32,U32,U64,U64);

void f2010(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2011(glicolwasmInstance*,U32,U32,U32);

U32 f2012(glicolwasmInstance*);

U32 f2013(glicolwasmInstance*,U32);

void f2014(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f2015(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f2016(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

U32 f2017(glicolwasmInstance*,U32,U32);

void f2018(glicolwasmInstance*,U32,U32);

U32 f2019(glicolwasmInstance*,U32,U32);

U32 f2020(glicolwasmInstance*,U32,U32);

U32 f2021(glicolwasmInstance*,U32,U32);

U32 f2022(glicolwasmInstance*,U32,U32);

U32 f2023(glicolwasmInstance*,U32,U32);

void f2024(glicolwasmInstance*,U32,U32);

void f2025(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f2026(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f2027(glicolwasmInstance*,U32,U32,U32,U32);

void f2028(glicolwasmInstance*,U32,U32);

void f2029(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f2030(glicolwasmInstance*,U32);

void f2031(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f2032(glicolwasmInstance*,U32,U32);

void f2033(glicolwasmInstance*,U32);

U32 f2034(glicolwasmInstance*,U32,U32,U32,U32);

U32 f2035(glicolwasmInstance*,U32);

U32 f2036(glicolwasmInstance*,U32);

void f2037(glicolwasmInstance*,U32,U32);

void f2038(glicolwasmInstance*,U32);

void f2039(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f2040(glicolwasmInstance*,U32,U32,U32,U32);

void f2041(glicolwasmInstance*,U32,U32,U32);

U32 f2042(glicolwasmInstance*,U32);

void f2043(glicolwasmInstance*,U32,U32);

U32 f2044(glicolwasmInstance*,U32);

U32 f2045(glicolwasmInstance*,U32);

U32 f2046(glicolwasmInstance*,U32);

U32 f2047(glicolwasmInstance*,U32);

U32 f2048(glicolwasmInstance*,U32);

void f2049(glicolwasmInstance*,U32,U32);

U32 f2050(glicolwasmInstance*,U32,U32);

void f2051(glicolwasmInstance*,U32);

void f2052(glicolwasmInstance*,U32,U32);

void f2053(glicolwasmInstance*,U32,U32);

void f2054(glicolwasmInstance*,U32);

U32 f2055(glicolwasmInstance*,U32,U32);

U32 f2056(glicolwasmInstance*,U32,U32);

U32 f2057(glicolwasmInstance*,U32,U32,U32);

void f2058(glicolwasmInstance*,U32,U32,U32,U32);

U32 f2059(glicolwasmInstance*,U32,U32);

void f2060(glicolwasmInstance*,U32,U32);

U32 f2061(glicolwasmInstance*,U32);

U32 f2062(glicolwasmInstance*,U32,U32);

void f2063(glicolwasmInstance*,U32,U32,U32,U32);

U32 f2064(glicolwasmInstance*,U32,U32);

void f2065(glicolwasmInstance*,U32,U32,U32,U32);

void f2066(glicolwasmInstance*,U32,U32);

void f2067(glicolwasmInstance*,U32,U32);

void f2068(glicolwasmInstance*,U32,U32);

void f2069(glicolwasmInstance*,U32,U32,U32,U32);

void f2070(glicolwasmInstance*,U32,U32);

void f2071(glicolwasmInstance*,U32);

void f2072(glicolwasmInstance*,U32);

void f2073(glicolwasmInstance*,U32);

void f2074(glicolwasmInstance*,U32);

void f2075(glicolwasmInstance*,U32,U32);

void f2076(glicolwasmInstance*,U32,U32);

void f2077(glicolwasmInstance*,U32);

void f2078(glicolwasmInstance*,U32,U32);

void f2079(glicolwasmInstance*,U32,U32);

void f2080(glicolwasmInstance*,U32,U32);

void f2081(glicolwasmInstance*,U32,U32,U32,U32);

void f2082(glicolwasmInstance*,U32,U32,U32,U32);

void f2083(glicolwasmInstance*,U32,U32,U32,U32);

void f2084(glicolwasmInstance*,U32,U32,U32,U32);

void f2085(glicolwasmInstance*,U32,U32,U32,U32);

void f2086(glicolwasmInstance*,U32,U32);

void f2087(glicolwasmInstance*,U32,U32);

void f2088(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

U32 f2089(glicolwasmInstance*,U32,U32,U32);

void f2090(glicolwasmInstance*,U32,U32);

void f2091(glicolwasmInstance*,U32,U32,U32);

void f2092(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2093(glicolwasmInstance*,U32,U32,U32,U32);

void f2094(glicolwasmInstance*,U32,U32);

void f2095(glicolwasmInstance*,U32,U32);

U32 f2096(glicolwasmInstance*,U32,U32);

U32 f2097(glicolwasmInstance*,U32);

void f2098(glicolwasmInstance*,U32);

void f2099(glicolwasmInstance*,U32);

U32 f2100(glicolwasmInstance*,U32,U64,U32);

U32 f2101(glicolwasmInstance*,U32);

void f2102(glicolwasmInstance*,U32,U32,U32,U32);

void f2103(glicolwasmInstance*,U32,U32,U32,U32);

void f2104(glicolwasmInstance*,U32,U32,U32,U32);

U32 f2105(glicolwasmInstance*,U32);

void f2106(glicolwasmInstance*,U32,U32);

void f2107(glicolwasmInstance*,U32,U32);

void f2108(glicolwasmInstance*,U32,U32,U32);

void f2109(glicolwasmInstance*,U32);

U32 f2110(glicolwasmInstance*,U32,U32,U32,U32);

void f2111(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

U32 f2112(glicolwasmInstance*,U32);

U32 f2113(glicolwasmInstance*,U32);

void f2114(glicolwasmInstance*,U32);

U32 f2115(glicolwasmInstance*,U32);

void f2116(glicolwasmInstance*,U32,U32);

void f2117(glicolwasmInstance*,U32);

void f2118(glicolwasmInstance*,U32,U32);

U32 f2119(glicolwasmInstance*,U32);

U32 f2120(glicolwasmInstance*,U32);

U32 f2121(glicolwasmInstance*,U32);

U32 f2122(glicolwasmInstance*,U32);

void f2123(glicolwasmInstance*,U32);

void f2124(glicolwasmInstance*,U32,U32,U32,U32);

void f2125(glicolwasmInstance*,U32,U32,U32,U32);

U32 f2126(glicolwasmInstance*,U32,U32,U32);

U32 f2127(glicolwasmInstance*,U32,U32,U32,U32);

U32 f2128(glicolwasmInstance*,U32);

U32 f2129(glicolwasmInstance*,U32,U32,U32);

U32 f2130(glicolwasmInstance*,U32,U32,U32);

void f2131(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f2132(glicolwasmInstance*,U32);

void f2133(glicolwasmInstance*,U32,U32,U64);

void f2134(glicolwasmInstance*,U32,U32);

void f2135(glicolwasmInstance*,U32,U32);

void f2136(glicolwasmInstance*,U32,U32);

U32 f2137(glicolwasmInstance*,U32);

void f2138(glicolwasmInstance*,U32);

void f2139(glicolwasmInstance*,U32,U32);

void f2140(glicolwasmInstance*,U32);

U32 f2141(glicolwasmInstance*,U32);

U32 f2142(glicolwasmInstance*,U32,U32);

void f2143(glicolwasmInstance*,U32,U32,U32,U32);

void f2144(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

U32 f2145(glicolwasmInstance*,U32);

void f2146(glicolwasmInstance*,U32);

U32 f2147(glicolwasmInstance*,U32);

U32 f2148(glicolwasmInstance*,U32,U32);

U32 f2149(glicolwasmInstance*,U32);

void f2150(glicolwasmInstance*,U32,U32);

void f2151(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2152(glicolwasmInstance*,U32,U32);

U32 f2153(glicolwasmInstance*,U32);

void f2154(glicolwasmInstance*,U32);

void f2155(glicolwasmInstance*,U32);

U32 f2156(glicolwasmInstance*,U32,U32,U32);

void f2157(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

void f2158(glicolwasmInstance*,U32);

void f2159(glicolwasmInstance*,U32,U32);

void f2160(glicolwasmInstance*,U32,U32);

void f2161(glicolwasmInstance*,U32,U32);

void f2162(glicolwasmInstance*,U32);

void f2163(glicolwasmInstance*,U32,U32);

void f2164(glicolwasmInstance*,U32,U32);

void f2165(glicolwasmInstance*,U32);

void f2166(glicolwasmInstance*,U32,U32);

void f2167(glicolwasmInstance*,U32,U32,U32,U32);

void f2168(glicolwasmInstance*,U32);

void f2169(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f2170(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f2171(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

void f2172(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2173(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f2174(glicolwasmInstance*,U32,U32,U32);

U32 f2175(glicolwasmInstance*,U32,U32,U32,U32);

void f2176(glicolwasmInstance*,U32,U32);

void f2177(glicolwasmInstance*,U32,U32,U32);

void f2178(glicolwasmInstance*,U32,U32);

void f2179(glicolwasmInstance*,U32,U32);

void f2180(glicolwasmInstance*,U64,U32);

void f2181(glicolwasmInstance*,U32,U32);

void f2182(glicolwasmInstance*,U32,U32);

void f2183(glicolwasmInstance*,U32,U32);

void f2184(glicolwasmInstance*,U32,U32);

void f2185(glicolwasmInstance*,U32,U32);

void f2186(glicolwasmInstance*,U32,U32,U32);

void f2187(glicolwasmInstance*,U32,U32);

void f2188(glicolwasmInstance*,U32,U32);

void f2189(glicolwasmInstance*,U32,U32);

void f2190(glicolwasmInstance*,U32,U32);

void f2191(glicolwasmInstance*,U32,U32,U32);

U64 f2192(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2193(glicolwasmInstance*,U32,U32,U32);

U32 f2194(glicolwasmInstance*,U32);

U32 f2195(glicolwasmInstance*,U32);

void f2196(glicolwasmInstance*,U32);

void f2197(glicolwasmInstance*,U32,U32);

void f2198(glicolwasmInstance*,U32,U32);

void f2199(glicolwasmInstance*,U32,U32);

void f2200(glicolwasmInstance*,U32,U32);

void f2201(glicolwasmInstance*,U32,U32);

void f2202(glicolwasmInstance*,U32,U64,U32);

void f2203(glicolwasmInstance*,U32,U32);

void f2204(glicolwasmInstance*,U32,U32,U32);

void f2205(glicolwasmInstance*,U32,U32);

void f2206(glicolwasmInstance*,U32);

void f2207(glicolwasmInstance*,U32,U32,U32);

U32 f2208(glicolwasmInstance*,U32);

void f2209(glicolwasmInstance*,U32,U32);

void f2210(glicolwasmInstance*,U32,U32);

void f2211(glicolwasmInstance*,U32);

void f2212(glicolwasmInstance*,U32,U32);

void f2213(glicolwasmInstance*,U32,U32);

void f2214(glicolwasmInstance*,U32,U32);

void f2215(glicolwasmInstance*,U32,U32);

U32 f2216(glicolwasmInstance*,U32);

void f2217(glicolwasmInstance*,U32,U32);

void f2218(glicolwasmInstance*,U32,U32);

void f2219(glicolwasmInstance*,U32,U32,U32);

void f2220(glicolwasmInstance*,U32,U32,U32);

void f2221(glicolwasmInstance*,U32,U32);

void f2222(glicolwasmInstance*,U32,U32);

void f2223(glicolwasmInstance*,U32);

void f2224(glicolwasmInstance*,U32);

void f2225(glicolwasmInstance*,U32,U32);

void f2226(glicolwasmInstance*,U32,U32);

void f2227(glicolwasmInstance*,U32,U32);

void f2228(glicolwasmInstance*,U32,U32);

void f2229(glicolwasmInstance*,U32,U32);

void f2230(glicolwasmInstance*,U32,U32);

void f2231(glicolwasmInstance*,U32,U32);

void f2232(glicolwasmInstance*,U32,U32);

void f2233(glicolwasmInstance*,U32,U32);

void f2234(glicolwasmInstance*,U32,U32);

void f2235(glicolwasmInstance*,U32);

void f2236(glicolwasmInstance*,U32,U32);

void f2237(glicolwasmInstance*,U32,U32);

void f2238(glicolwasmInstance*,U32,U32);

void f2239(glicolwasmInstance*,U32,U32);

U32 f2240(glicolwasmInstance*,U32);

U32 f2241(glicolwasmInstance*,U32,U32,U32);

void f2242(glicolwasmInstance*,U32,U32,U32);

void f2243(glicolwasmInstance*,U32);

void f2244(glicolwasmInstance*,U32);

void f2245(glicolwasmInstance*,U32,U32);

void f2246(glicolwasmInstance*,U32,U32);

void f2247(glicolwasmInstance*,U32,U32);

void f2248(glicolwasmInstance*,U32,U32);

void f2249(glicolwasmInstance*,U32,U32);

void f2250(glicolwasmInstance*,U32,U32);

U32 f2251(glicolwasmInstance*,U32,U32);

U32 f2252(glicolwasmInstance*,U32,U32);

U32 f2253(glicolwasmInstance*,U32,U32);

U32 f2254(glicolwasmInstance*,U32,U32);

void f2255(glicolwasmInstance*,U32);

void f2256(glicolwasmInstance*,U32,U32);

void f2257(glicolwasmInstance*,U32,U32);

void f2258(glicolwasmInstance*,U32,U32);

void f2259(glicolwasmInstance*,U32,U32);

void f2260(glicolwasmInstance*,U32,U32);

void f2261(glicolwasmInstance*,U32);

void f2262(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f2263(glicolwasmInstance*,U32,U32);

void f2264(glicolwasmInstance*,U32,U32,U32);

void f2265(glicolwasmInstance*,U32,U32,U32,U32);

U32 f2266(glicolwasmInstance*,U32,U32);

void f2267(glicolwasmInstance*,U32,U32,U32);

U32 f2268(glicolwasmInstance*,U32,U32);

void f2269(glicolwasmInstance*,U32,U32,U32);

U32 f2270(glicolwasmInstance*,U32,U32);

void f2271(glicolwasmInstance*,U32,U32,U32);

U32 f2272(glicolwasmInstance*,U32,U32);

void f2273(glicolwasmInstance*,U32,U32,U32,U32);

U32 f2274(glicolwasmInstance*,U32,U32,U32);

void f2275(glicolwasmInstance*,U32,U32,U32);

U32 f2276(glicolwasmInstance*,U32,U32);

U32 f2277(glicolwasmInstance*,U32,U32);

U32 f2278(glicolwasmInstance*,U32,U32);

void f2279(glicolwasmInstance*,U32,U32,U32);

void f2280(glicolwasmInstance*,U32,U32);

void f2281(glicolwasmInstance*,U32,U32);

void f2282(glicolwasmInstance*,U32,U32,U32);

void f2283(glicolwasmInstance*,U32,U32,U32,U32);

void f2284(glicolwasmInstance*,U32,U32,U32);

void f2285(glicolwasmInstance*,U32,U32,U32,U32);

void f2286(glicolwasmInstance*,U32,U32,U32);

void f2287(glicolwasmInstance*,U32,U32,U32,U32);

void f2288(glicolwasmInstance*,U32,U32,U32,U32);

U32 f2289(glicolwasmInstance*,U32,U32,U32);

void f2290(glicolwasmInstance*,U32,U32,U32);

void f2291(glicolwasmInstance*,U32,U32);

U32 f2292(glicolwasmInstance*,U32,U32,U32,U32);

U32 f2293(glicolwasmInstance*,U32,U32,U32);

U32 f2294(glicolwasmInstance*,U32,U32,U32);

void f2295(glicolwasmInstance*,U32,U32);

void f2296(glicolwasmInstance*,U32,U32);

void f2297(glicolwasmInstance*,U32,U32);

U32 f2298(glicolwasmInstance*,U32,U32);

U32 f2299(glicolwasmInstance*,U32,U32);

U32 f2300(glicolwasmInstance*,U64,U32);

void f2301(glicolwasmInstance*,U32,U32);

void f2302(glicolwasmInstance*,U32,U64);

void f2303(glicolwasmInstance*,U32,U32);

void f2304(glicolwasmInstance*,U32,U32);

void f2305(glicolwasmInstance*,U32,U32);

void f2306(glicolwasmInstance*,U32,U32,U32,U32,U64);

U32 f2307(glicolwasmInstance*,U32,U32);

void f2308(glicolwasmInstance*,U32,U32);

void f2309(glicolwasmInstance*,U32,U32);

U32 f2310(glicolwasmInstance*,U32,U32,U32,U32);

void f2311(glicolwasmInstance*,U32,U32,U32);

void f2312(glicolwasmInstance*,U32);

void f2313(glicolwasmInstance*,U32);

void f2314(glicolwasmInstance*,U32,U32);

U32 f2315(glicolwasmInstance*,U32,U32);

U32 f2316(glicolwasmInstance*,U32,U32);

void f2317(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2318(glicolwasmInstance*,U32,U32,U32,U32);

void f2319(glicolwasmInstance*,U32);

void f2320(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2321(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2322(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f2323(glicolwasmInstance*,U32,U32,U32,U32);

void f2324(glicolwasmInstance*,U32,U32);

void f2325(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2326(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2327(glicolwasmInstance*,U32,U32,U32);

void f2328(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2329(glicolwasmInstance*,U32,U32,U32,U32,U32,U64);

void f2330(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2331(glicolwasmInstance*,U32,U32,U32,U32,U32,U64);

void f2332(glicolwasmInstance*,U32,U32,U32,U32);

void f2333(glicolwasmInstance*,U32,U32,U32,U32);

U32 f2334(glicolwasmInstance*,U32,U32,U32,U32);

void f2335(glicolwasmInstance*,U32,U32,U32,U32);

void f2336(glicolwasmInstance*,U32);

void f2337(glicolwasmInstance*,U32,U32,U32,U32);

void f2338(glicolwasmInstance*,U32,U32,U64);

void f2339(glicolwasmInstance*,U32);

void f2340(glicolwasmInstance*,U32);

void f2341(glicolwasmInstance*,U32);

void f2342(glicolwasmInstance*,U32,U32,U32,U32);

void f2343(glicolwasmInstance*,U32);

void f2344(glicolwasmInstance*,U32,U32,U32,U32,U32);

F64 f2345(glicolwasmInstance*,U32);

U32 f2346(glicolwasmInstance*,U32);

void f2347(glicolwasmInstance*,U32,F64);

void f2348(glicolwasmInstance*,U32);

void f2349(glicolwasmInstance*,U32,U32);

void f2350(glicolwasmInstance*,U32,U32);

void f2351(glicolwasmInstance*,U32,U32);

void f2352(glicolwasmInstance*,U32,U32);

void f2353(glicolwasmInstance*,U32,U32);

void f2354(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2355(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2356(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2357(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2358(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2359(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2360(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2361(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2362(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2363(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2364(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2365(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2366(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2367(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2368(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2369(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2370(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f2371(glicolwasmInstance*,U32,U32);

void f2372(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2373(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2374(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2375(glicolwasmInstance*,U32,U32,U32,U32,U32);

F32 f2376(glicolwasmInstance*,U32);

void f2377(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2378(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2379(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2380(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2381(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2382(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2383(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2384(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2385(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2386(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2387(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2388(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2389(glicolwasmInstance*,U32);

void f2390(glicolwasmInstance*,U32);

void f2391(glicolwasmInstance*,U32,U32,U32,U32);

void f2392(glicolwasmInstance*,U32,U32,U32,U32);

void f2393(glicolwasmInstance*,U32,U32,U32);

void f2394(glicolwasmInstance*,U32,U32,U32);

void f2395(glicolwasmInstance*,U32,U32);

void f2396(glicolwasmInstance*,U32);

void f2397(glicolwasmInstance*,U32,U32);

void f2398(glicolwasmInstance*,U32,U32);

U32 f2399(glicolwasmInstance*,U32,U32);

void f2400(glicolwasmInstance*,U32,U32,U32);

void f2401(glicolwasmInstance*,U32);

void f2402(glicolwasmInstance*,U32,U32);

void f2403(glicolwasmInstance*,U32,U32);

U32 f2404(glicolwasmInstance*,U32,U32);

void f2405(glicolwasmInstance*,U32,U32,U32);

void f2406(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2407(glicolwasmInstance*,U32,U32);

void f2408(glicolwasmInstance*,U32,U32);

void f2409(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2410(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2411(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2412(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2413(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2414(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2415(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2416(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2417(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2418(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2419(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2420(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2421(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2422(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2423(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2424(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2425(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2426(glicolwasmInstance*,U32,U32,U32,U32);

void f2427(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2428(glicolwasmInstance*,U32,U32);

void f2429(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2430(glicolwasmInstance*,U32,U32);

void f2431(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2432(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2433(glicolwasmInstance*,U32,U32,U32,U32);

void f2434(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2435(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2436(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2437(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f2438(glicolwasmInstance*,U32,U32,U32,U32);

void f2439(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2440(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2441(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2442(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2443(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2444(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2445(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2446(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2447(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2448(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2449(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2450(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f2451(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2452(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2453(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f2454(glicolwasmInstance*,U32,U32,U32,U32);

void f2455(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2456(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2457(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2458(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2459(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f2460(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2461(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2462(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2463(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2464(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2465(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2466(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2467(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2468(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2469(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2470(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2471(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2472(glicolwasmInstance*,U32,U32,U32,U32);

void f2473(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2474(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2475(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2476(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2477(glicolwasmInstance*,U32);

void f2478(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2479(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2480(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2481(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2482(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2483(glicolwasmInstance*,U32,U32,U32);

void f2484(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2485(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2486(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2487(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2488(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2489(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2490(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2491(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2492(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2493(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f2494(glicolwasmInstance*,U32,U32,U32,U32);

void f2495(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2496(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2497(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2498(glicolwasmInstance*,U32,U32,U32,U32);

void f2499(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2500(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2501(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f2502(glicolwasmInstance*,U32);

void f2503(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2504(glicolwasmInstance*,U32,U32,U32,U32);

void f2505(glicolwasmInstance*,U32);

void f2506(glicolwasmInstance*,U32);

void f2507(glicolwasmInstance*,U32);

void f2508(glicolwasmInstance*,U32,U32,U32);

void f2509(glicolwasmInstance*,U32,U32,U32);

void f2510(glicolwasmInstance*,U32,U32);

void f2511(glicolwasmInstance*,U32);

void f2512(glicolwasmInstance*,U32,U32);

void f2513(glicolwasmInstance*,U32,U32);

U32 f2514(glicolwasmInstance*,U32,U32);

void f2515(glicolwasmInstance*,U32,U32,U32);

void f2516(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2517(glicolwasmInstance*,U32,U32,U32,U32,F32);

void f2518(glicolwasmInstance*,U32,U32,U32,U32,F32,U32);

void f2519(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2520(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2521(glicolwasmInstance*,U32,U32,U32,U32);

void f2522(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2523(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2524(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2525(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2526(glicolwasmInstance*,U32,U32,U32,U32,F32);

void f2527(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2528(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2529(glicolwasmInstance*,U32,U32,U32,U32,U32);

F32 f2530(glicolwasmInstance*,U32,U32,U32,U32);

F32 f2531(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2532(glicolwasmInstance*,U32,U32,U32,U32);

void f2533(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2534(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2535(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2536(glicolwasmInstance*,U32,U32,U32,U32,U32);

F32 f2537(glicolwasmInstance*,U32,U32,U32,U32);

void f2538(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2539(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2540(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2541(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f2542(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2543(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2544(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2545(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2546(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2547(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2548(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2549(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f2550(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2551(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2552(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2553(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2554(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2555(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2556(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f2557(glicolwasmInstance*,U32,U32,U32,U32);

U32 f2558(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2559(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2560(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2561(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f2562(glicolwasmInstance*,U32,U32,U32,U32);

void f2563(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2564(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2565(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2566(glicolwasmInstance*,U32,U32,U32,U32);

void f2567(glicolwasmInstance*,U32,U32);

void f2568(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2569(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2570(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2571(glicolwasmInstance*,U32,U32,U32,U32);

void f2572(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2573(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2574(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2575(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2576(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2577(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2578(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2579(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2580(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2581(glicolwasmInstance*,U32,U32,U32,U32);

void f2582(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2583(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2584(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2585(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2586(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2587(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2588(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2589(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2590(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2591(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2592(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2593(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f2594(glicolwasmInstance*,U32);

void f2595(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2596(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2597(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2598(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2599(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2600(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2601(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2602(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2603(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2604(glicolwasmInstance*,U32,U32);

void f2605(glicolwasmInstance*,U32,U32);

void f2606(glicolwasmInstance*,U32);

U32 f2607(glicolwasmInstance*,U32,U32);

void f2608(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2609(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2610(glicolwasmInstance*,U32,U32,U32,U32);

void f2611(glicolwasmInstance*,U32,U32);

void f2612(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2613(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2614(glicolwasmInstance*,U32);

void f2615(glicolwasmInstance*,U32);

void f2616(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2617(glicolwasmInstance*,U32,U32,U32);

U32 f2618(glicolwasmInstance*,U32);

void f2619(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2620(glicolwasmInstance*,U32);

void f2621(glicolwasmInstance*,U32);

void f2622(glicolwasmInstance*,U32);

void f2623(glicolwasmInstance*,U32);

void f2624(glicolwasmInstance*,U32);

void f2625(glicolwasmInstance*,U32);

void f2626(glicolwasmInstance*,U32);

void f2627(glicolwasmInstance*,U32);

void f2628(glicolwasmInstance*,U32);

void f2629(glicolwasmInstance*,U32);

void f2630(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2631(glicolwasmInstance*,U32,U32,U32);

U32 f2632(glicolwasmInstance*,U32,U32);

U32 f2633(glicolwasmInstance*,U32,U32);

void f2634(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2635(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2636(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2637(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2638(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2639(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2640(glicolwasmInstance*,U32,U32,U32);

U32 f2641(glicolwasmInstance*,U32,U32);

U32 f2642(glicolwasmInstance*,U32,U32);

void f2643(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2644(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2645(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2646(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2647(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2648(glicolwasmInstance*,U32,U32);

void f2649(glicolwasmInstance*,U32,U32);

void f2650(glicolwasmInstance*,U32,U32);

void f2651(glicolwasmInstance*,U32,U32);

void f2652(glicolwasmInstance*,U32,U32);

void f2653(glicolwasmInstance*,U32,U32);

void f2654(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2655(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2656(glicolwasmInstance*,U32,U32,U32,U32);

void f2657(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2658(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2659(glicolwasmInstance*,U32);

void f2660(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2661(glicolwasmInstance*,U32,U32);

void f2662(glicolwasmInstance*,U32,U32);

void f2663(glicolwasmInstance*,U32,U32);

void f2664(glicolwasmInstance*,U32,U32);

void f2665(glicolwasmInstance*,U32,U32);

void f2666(glicolwasmInstance*,U32,U32);

void f2667(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2668(glicolwasmInstance*,U32,U32);

void f2669(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2670(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2671(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2672(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2673(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2674(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2675(glicolwasmInstance*,U32,F32,F32,F32);

void f2676(glicolwasmInstance*,U32,U32);

void f2677(glicolwasmInstance*,U32,U32);

void f2678(glicolwasmInstance*,U32,U32);

void f2679(glicolwasmInstance*,U32,U32);

void f2680(glicolwasmInstance*,U32,U32);

void f2681(glicolwasmInstance*,U32,U32);

void f2682(glicolwasmInstance*,U32,F32,F32);

void f2683(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2684(glicolwasmInstance*,U32,U32,U32);

void f2685(glicolwasmInstance*,U32,U32,U32);

void f2686(glicolwasmInstance*,U32,U32);

void f2687(glicolwasmInstance*,U32,U32);

U32 f2688(glicolwasmInstance*,U32,U32);

void f2689(glicolwasmInstance*,U32,U32,U32);

void f2690(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2691(glicolwasmInstance*,U32,U32,U32,U32);

void f2692(glicolwasmInstance*,U32,U32);

void f2693(glicolwasmInstance*,U32,U32);

void f2694(glicolwasmInstance*,U32,U32);

void f2695(glicolwasmInstance*,U32,U32);

void f2696(glicolwasmInstance*,U32,U32);

void f2697(glicolwasmInstance*,U32,U32);

void f2698(glicolwasmInstance*,U32,U32,U32);

void f2699(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2700(glicolwasmInstance*,U32,U32,U32);

void f2701(glicolwasmInstance*,U32,U32,U32);

void f2702(glicolwasmInstance*,U32,U32);

U32 f2703(glicolwasmInstance*,U32,U32);

void f2704(glicolwasmInstance*,U32,U32,U32);

void f2705(glicolwasmInstance*,U32,U32,U32);

void f2706(glicolwasmInstance*,U32,U32,U32);

void f2707(glicolwasmInstance*,U32,U32);

void f2708(glicolwasmInstance*,U32,U32);

U32 f2709(glicolwasmInstance*,U32,U32);

void f2710(glicolwasmInstance*,U32,U32,U32);

void f2711(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2712(glicolwasmInstance*,U32,U32,U32);

void f2713(glicolwasmInstance*,U32,U32,U32);

void f2714(glicolwasmInstance*,U32,U32);

void f2715(glicolwasmInstance*,U32,U32);

U32 f2716(glicolwasmInstance*,U32,U32);

void f2717(glicolwasmInstance*,U32,U32,U32);

void f2718(glicolwasmInstance*,U32,U32,U32);

void f2719(glicolwasmInstance*,U32,U32,U32);

void f2720(glicolwasmInstance*,U32,U32);

void f2721(glicolwasmInstance*,U32,U32);

U32 f2722(glicolwasmInstance*,U32,U32);

void f2723(glicolwasmInstance*,U32,U32,U32);

void f2724(glicolwasmInstance*,U32,U32,U32);

void f2725(glicolwasmInstance*,U32,U32,U32);

void f2726(glicolwasmInstance*,U32);

void f2727(glicolwasmInstance*,U32,U32);

void f2728(glicolwasmInstance*,U32,U32,U32);

void f2729(glicolwasmInstance*,U32,U32);

U32 f2730(glicolwasmInstance*,U32,U32);

void f2731(glicolwasmInstance*,U32,U32,U32);

void f2732(glicolwasmInstance*,U32);

void f2733(glicolwasmInstance*,U32);

void f2734(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2735(glicolwasmInstance*,U32,U32);

void f2736(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

void f2737(glicolwasmInstance*,U32,U32);

void f2738(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2739(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f2740(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2741(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2742(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2743(glicolwasmInstance*,U32,U32);

void f2744(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f2745(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f2746(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2747(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2748(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2749(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2750(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2751(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2752(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2753(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2754(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2755(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2756(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2757(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2758(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2759(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2760(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2761(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2762(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2763(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2764(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2765(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2766(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2767(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2768(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2769(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2770(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f2771(glicolwasmInstance*,U32);

U32 f2772(glicolwasmInstance*,U32);

void f2773(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2774(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2775(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2776(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2777(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2778(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2779(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2780(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2781(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2782(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2783(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2784(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2785(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2786(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2787(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2788(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2789(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2790(glicolwasmInstance*,U32);

void f2791(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2792(glicolwasmInstance*,U32,U32,U32);

U32 f2793(glicolwasmInstance*,U32);

void f2794(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2795(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2796(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2797(glicolwasmInstance*,U32,U32);

void f2798(glicolwasmInstance*,U32,U32,U32,U32);

void f2799(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2800(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2801(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2802(glicolwasmInstance*,U32,U32);

void f2803(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2804(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2805(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2806(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2807(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2808(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2809(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2810(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2811(glicolwasmInstance*,U32,U32,U32,U32);

void f2812(glicolwasmInstance*,U32);

void f2813(glicolwasmInstance*,U32);

void f2814(glicolwasmInstance*,U32);

void f2815(glicolwasmInstance*,U32);

void f2816(glicolwasmInstance*,U32);

void f2817(glicolwasmInstance*,U32);

void f2818(glicolwasmInstance*,U32);

void f2819(glicolwasmInstance*,U32);

void f2820(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2821(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2822(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2823(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2824(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2825(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2826(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2827(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2828(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2829(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2830(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2831(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2832(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2833(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2834(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2835(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2836(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2837(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2838(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2839(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2840(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2841(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2842(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2843(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2844(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2845(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2846(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2847(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2848(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2849(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2850(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2851(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2852(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2853(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2854(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2855(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2856(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2857(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2858(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2859(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2860(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2861(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2862(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2863(glicolwasmInstance*,U32,U32,U32,U32);

void f2864(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2865(glicolwasmInstance*,U32);

void f2866(glicolwasmInstance*,U32);

void f2867(glicolwasmInstance*,U32);

void f2868(glicolwasmInstance*,U32);

void f2869(glicolwasmInstance*,U32);

void f2870(glicolwasmInstance*,U32);

void f2871(glicolwasmInstance*,U32);

void f2872(glicolwasmInstance*,U32);

void f2873(glicolwasmInstance*,U32);

void f2874(glicolwasmInstance*,U32);

void f2875(glicolwasmInstance*,U32);

void f2876(glicolwasmInstance*,U32);

void f2877(glicolwasmInstance*,U32);

void f2878(glicolwasmInstance*,U32);

void f2879(glicolwasmInstance*,U32);

void f2880(glicolwasmInstance*,U32);

void f2881(glicolwasmInstance*,U32);

void f2882(glicolwasmInstance*,U32,U32,U32);

void f2883(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2884(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2885(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2886(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2887(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2888(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2889(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2890(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2891(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2892(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2893(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2894(glicolwasmInstance*,U32);

void f2895(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2896(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2897(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2898(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2899(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2900(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2901(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2902(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2903(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2904(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2905(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2906(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2907(glicolwasmInstance*,U32);

void f2908(glicolwasmInstance*,U32);

void f2909(glicolwasmInstance*,U32);

void f2910(glicolwasmInstance*,U32);

void f2911(glicolwasmInstance*,U32);

void f2912(glicolwasmInstance*,U32);

void f2913(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2914(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2915(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2916(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2917(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2918(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2919(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2920(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2921(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2922(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2923(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2924(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2925(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2926(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2927(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2928(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2929(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2930(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2931(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2932(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2933(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2934(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2935(glicolwasmInstance*,U32,U32,U32,U32,U32,U32,U32);

void f2936(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2937(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2938(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2939(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2940(glicolwasmInstance*,U32,U32,U32,U32);

void f2941(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2942(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2943(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2944(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f2945(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2946(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2947(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2948(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2949(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2950(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2951(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2952(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2953(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2954(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2955(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2956(glicolwasmInstance*,U32,U32,U32,U32);

void f2957(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2958(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2959(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2960(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2961(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2962(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2963(glicolwasmInstance*,U32,U32);

U32 f2964(glicolwasmInstance*,U32,U32);

U32 f2965(glicolwasmInstance*,U32);

void f2966(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2967(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f2968(glicolwasmInstance*,U32);

void f2969(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2970(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f2971(glicolwasmInstance*,U32);

void f2972(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2973(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f2974(glicolwasmInstance*,U32);

void f2975(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2976(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2977(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2978(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2979(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2980(glicolwasmInstance*,U32);

void f2981(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2982(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2983(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2984(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2985(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2986(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2987(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2988(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2989(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2990(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2991(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2992(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2993(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2994(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2995(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2996(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2997(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2998(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f2999(glicolwasmInstance*,U32,U32,U32);

U32 f3000(glicolwasmInstance*,U32);

void f3001(glicolwasmInstance*,U32,U64,U32,F32);

void f3002(glicolwasmInstance*,U32,U64);

void f3003(glicolwasmInstance*,U32,U64,U32,U64,U32);

void f3004(glicolwasmInstance*,U32,U64,U32,F32);

void f3005(glicolwasmInstance*,U32,U64,U32,U64,U32);

void f3006(glicolwasmInstance*,U32,U64,U32,U64,U32);

void f3007(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f3008(glicolwasmInstance*,U32,U32);

void f3009(glicolwasmInstance*,U32,U32);

void f3010(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f3011(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f3012(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f3013(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f3014(glicolwasmInstance*,U64,U32,U64,U32);

U32 f3015(glicolwasmInstance*,U64,U32,U64,U32);

void f3016(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f3017(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f3018(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f3019(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f3020(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f3021(glicolwasmInstance*,U32,U64,U32,U32);

void f3022(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f3023(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f3024(glicolwasmInstance*,U32,U64,U32,U32);

void f3025(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f3026(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f3027(glicolwasmInstance*,U32,U64,U32,U64,U32);

void f3028(glicolwasmInstance*,U32,U64,U32,U64,U32);

void f3029(glicolwasmInstance*,U32,U32,U32,U32,U32);

void f3030(glicolwasmInstance*,U32);

void f3031(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f3032(glicolwasmInstance*,U32,U32);

U32 f3033(glicolwasmInstance*,U32,U32);

void f3034(glicolwasmInstance*,U32,U32,U32,U32,U32);

U32 f3035(glicolwasmInstance*,U32);

U32 f3036(glicolwasmInstance*,U32,U32);

void f3037(glicolwasmInstance*,U32,U32);

void f3038(glicolwasmInstance*,U32);

U32 f3039(glicolwasmInstance*,U32,U32);

void f3040(glicolwasmInstance*,U32,U32);

U32 f3041(glicolwasmInstance*,U32,U32);

U32 f3042(glicolwasmInstance*,U32,U32);

U32 f3043(glicolwasmInstance*,U32,U32);

void f3044(glicolwasmInstance*,U32);

U32 f3045(glicolwasmInstance*,U32,U32,U32);

U32 f3046(glicolwasmInstance*,U32,U32);

U32 f3047(glicolwasmInstance*,U32,U32);

void f3048(glicolwasmInstance*);

void f3049(glicolwasmInstance*,U32,U32);

void f3050(glicolwasmInstance*,U32,U32);

void f3051(glicolwasmInstance*,U32,U32);

U32 f3052(glicolwasmInstance*,U32,U32);

F64 f3053(glicolwasmInstance*,F64,F64);

F64 f3054(glicolwasmInstance*,F64,F64);

F32 f3055(glicolwasmInstance*,F32);

F32 f3056(glicolwasmInstance*,F32);

F32 f3057(glicolwasmInstance*,F32,F32);

F32 f3058(glicolwasmInstance*,F32);

F32 f3059(glicolwasmInstance*,F32);

U32 f3060(glicolwasmInstance*,U32,U32,U32);

U32 f3061(glicolwasmInstance*,U32,U32,U32);

U32 f3062(glicolwasmInstance*,U32,U32,U32);

U32 f3063(glicolwasmInstance*,U32,U32,U32);

U32 f3064(glicolwasmInstance*,U32);

U32 f3065(glicolwasmInstance*,U32,U32,U32);

F32 f3066(glicolwasmInstance*,F32,F32);

F32 f3067(glicolwasmInstance*,F32,U32);

F32 f3068(glicolwasmInstance*,F32,F32);

U32 f3069(glicolwasmInstance*,U32,U32,U32,U32,U32,U32);

void f3070(glicolwasmInstance*,U32,F64);

F64 f3071(glicolwasmInstance*,F64);

F64 f3072(glicolwasmInstance*,F64,F64,U32);

F64 f3073(glicolwasmInstance*,F64);

F32 f3074(glicolwasmInstance*,F32,U32);

F64 f3075(glicolwasmInstance*,F64,F64);

U32 f3076(glicolwasmInstance*,U32,U32,U32);

F64 f3077(glicolwasmInstance*,F64);

F64 f3078(glicolwasmInstance*,F64);

U32 f3079(glicolwasmInstance*,U32);

F32 f3080(glicolwasmInstance*,F32);

F32 f3081(glicolwasmInstance*,F32);

F32 f3082(glicolwasmInstance*,F32);

F64 f3083(glicolwasmInstance*,F64);

F64 f3084(glicolwasmInstance*,F64);

F64 f3085(glicolwasmInstance*,F64);

F64 f3086(glicolwasmInstance*,F64,F64);

F64 f3087(glicolwasmInstance*,F64,U32);

F64 f3088(glicolwasmInstance*,F64,F64);

F64 f3089(glicolwasmInstance*,F64);

F64 f3090(glicolwasmInstance*,F64);

F64 f3091(glicolwasmInstance*,F64);

F64 f3092(glicolwasmInstance*,F64);

F64 f3093(glicolwasmInstance*,F64);

F32 f3094(glicolwasmInstance*,F32);

F32 f3095(glicolwasmInstance*,F32,F32);

F32 f3096(glicolwasmInstance*,F32,F32);

F32 f3097(glicolwasmInstance*,F32);

F32 f3098(glicolwasmInstance*,F32);

F32 f3099(glicolwasmInstance*,F32);

F32 f3100(glicolwasmInstance*,F32);

F64 f3101(glicolwasmInstance*,F64);

F64 f3102(glicolwasmInstance*,F64);

F32 f3103(glicolwasmInstance*,F32,F32);

F32 f3104(glicolwasmInstance*,F32,F32);

F64 f3105(glicolwasmInstance*,F64);

F64 f3106(glicolwasmInstance*,F64);

F64 f3107(glicolwasmInstance*,F64);

F32 f3108(glicolwasmInstance*,F32);

void f3109(glicolwasmInstance*,U32,U64,U64,U64,U64);

F64 f3110(glicolwasmInstance*,F64,F64);

F64 f3111(glicolwasmInstance*,F64,F64);

U32 f3112(glicolwasmInstance*,U32,U32,U32);

F32 f3113(glicolwasmInstance*,F32);

F64 f3114(glicolwasmInstance*,F64);

F64 f3115(glicolwasmInstance*,F64);

F64 f3116(glicolwasmInstance*,F64);

F64 f3117(glicolwasmInstance*,F64);

F32 f3118(glicolwasmInstance*,F32);

F32 f3119(glicolwasmInstance*,F32);

F32 f3120(glicolwasmInstance*,F32);

F32 f3121(glicolwasmInstance*,F32);

U32 f3122(glicolwasmInstance*,U32,U32,U32);

F32 f3123(glicolwasmInstance*,F32);

F32 f3124(glicolwasmInstance*,F32);

F32 f3125(glicolwasmInstance*,F32);

F32 f3126(glicolwasmInstance*,F32);

F64 f3127(glicolwasmInstance*,F64);

F64 f3128(glicolwasmInstance*,F64);

F64 f3129(glicolwasmInstance*,F64);

F32 f3130(glicolwasmInstance*,F32);

F64 f3131(glicolwasmInstance*,F64);

F64 f3132(glicolwasmInstance*,F64);

wasmMemory*glicolwasm_memory(glicolwasmInstance* i);

U32 glicolwasm_alloc_f32(glicolwasmInstance*i,U32 l0);

U32 glicolwasm_alloc_u8(glicolwasmInstance*i,U32 l0);

void glicolwasm_dealloc_f32(glicolwasmInstance*i,U32 l0,U32 l1);

void glicolwasm_process(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2);

void glicolwasm_add_sample(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void glicolwasm_update(glicolwasmInstance*i,U32 l0);

void glicolwasm_send_msg(glicolwasmInstance*i,U32 l0);

void glicolwasm_live_coding_mode(glicolwasmInstance*i,U32 l0);

void glicolwasm_set_bpm(glicolwasmInstance*i,F32 l0);

void glicolwasm_set_track_amp(glicolwasmInstance*i,F32 l0);

void glicolwasm_set_sr(glicolwasmInstance*i,F32 l0);

void glicolwasm_set_seed(glicolwasmInstance*i,F32 l0);

void glicolwasm_reset(glicolwasmInstance*i);

void glicolwasm_dealloc_u8(glicolwasmInstance*i,U32 l0,U32 l1);

void glicolwasmInstantiate(glicolwasmInstance* instance, void* resolve(const char* module, const char* name));

void glicolwasmFreeInstance(glicolwasmInstance* instance);

#ifdef __cplusplus
}
#endif

#endif /* glicolwasm_H */

