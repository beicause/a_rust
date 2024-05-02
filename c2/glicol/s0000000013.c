#include "w2c2_base.h"

#include "glicol.h"

void f2343(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
U64 sj1;
si0=8U;
si1=4U;
si0=f1024(i,si0,si1);
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
si1=1135012U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
sj1=4294967297ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=3U;
i32_store8(i->m0,(U64)si0,si1);
L0:;
}

void f995(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=20U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(i->m0,(U64)si0+21U,sj1);
si0=l3;
si1=l2;
si2=1U;
si1<<=(si2&31);
si2=1U;
si1|=si2;
i32_store8(i->m0,(U64)si0+20U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
si2=1U;
si1|=si2;
si2=11U;
si3=l2;
si4=1178408U;
f3034(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(i->m0,(U64)si1+12U);
si2=l1;
si3=l2;
si4=1178424U;
f1379(i,si0,si1,si2,si3,si4);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+20U);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2197(glicolwasmInstance*i,U32 l0,U32 l1) {
U64 l2=0;
U64 l3=0;
U32 si0,si1,si2;
U64 sj1,sj2,sj3,sj4,sj5;
si0=l1;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+16U);
l2=sj1;
si2=l0;
sj2=(U64)(si2);
sj3=65535ULL;
sj2&=sj3;
sj1^=sj2;
l3=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l3;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l3;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l3;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=-6364136223846793006ULL;
sj1*=sj2;
l2=sj1;
sj2=56ULL;
sj1<<=(sj2&63);
sj2=l2;
sj3=65280ULL;
sj2&=sj3;
sj3=40ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l2;
sj3=16711680ULL;
sj2&=sj3;
sj3=24ULL;
sj2<<=(sj3&63);
sj3=l2;
sj4=4278190080ULL;
sj3&=sj4;
sj4=8ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj1|=sj2;
sj2=l2;
sj3=8ULL;
sj2>>=(sj3&63);
sj3=4278190080ULL;
sj2&=sj3;
sj3=l2;
sj4=24ULL;
sj3>>=(sj4&63);
sj4=16711680ULL;
sj3&=sj4;
sj2|=sj3;
sj3=l2;
sj4=40ULL;
sj3>>=(sj4&63);
sj4=65280ULL;
sj3&=sj4;
sj4=l2;
sj5=56ULL;
sj4>>=(sj5&63);
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj2=l3;
sj3=3278503208170049880ULL;
sj2*=sj3;
sj1^=sj2;
i64_store(i->m0,(U64)si0+16U,sj1);
L0:;
}

U32 f1248(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si1=72U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+64U);
l2=si1;
si2=l2;
si3=5U;
si2=si2 > si3;
si0=si2?si0:si1;
if(si0){
goto L2;
}
si0=1U;
l0=si0;
goto L1;
L2:;
si0=l1;
si1=l0;
si2=64U;
si1+=si2;
f1265(i,si0,si1);
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l0=si1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si2=l1;
si2=i32_load(i->m0,(U64)si2+4U);
si3=12U;
si2*=si3;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=8U;
si0+=si1;
si0=f1329(i,si0);
l0=si0;
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f1646(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
F32 sf1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
l3=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=12U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f96(i,si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0,sj1);
goto L2;
L4:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sf1=f32_load(i->m0,(U64)si1+4U);
f32_store(i->m0,(U64)si0+4U,sf1);
goto L2;
L3:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l1;
si1=16U;
si0+=si1;
l4=si0;
si0=l1;
si1=8U;
si0+=si1;
l5=si0;
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l5;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l2;
si1=36U;
si0+=si1;
f986(i,si0);
goto L6;
L7:;
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0);
si1=5U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
L6:;
si0=l0;
si1=74U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1117411U;
i32_store(i->m0,(U64)si0,si1);
goto L2;
L5:;
si0=l1;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=20U;
si1+=si2;
sf1=f32_load(i->m0,(U64)si1);
f32_store(i->m0,(U64)si0+4U,sf1);
L2:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
sj1=1ULL;
f988(i,si0,sj1);
f99(i);
UNREACHABLE;
L0:;
}

void f2960(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
sj0=i64_load(i->m0,(U64)si0);
l7=sj0;
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l7;
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f1268(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+48U);
l6=si0;
if(si0){
goto L2;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+52U);
l6=si1;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l7=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l7;
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=56U;
si0+=si1;
si0=f2594(i,si0);
l3=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l6;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
goto L4;
L5:;
si0=l5;
si1=32U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+36U);
l6=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+32U);
l4=si0;
L4:;
si0=l3;
si1=128U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l3;
si2=l5;
si3=56U;
si2+=si3;
si3=4U;
f1181(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(i->m0,(U64)si0+24U);
si1=l5;
si1=i32_load(i->m0,(U64)si1+28U);
si2=l4;
si3=l6;
si0=f2310(i,si0,si1,si2,si3);
l4=si0;
goto L6;
L7:;
si0=l6;
si1=8U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=l4;
si3=l6;
f362(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
l4=si0;
goto L8;
L9:;
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si3=l6;
f363(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
L8:;
si0=l4;
si1=1U;
si0=si0 == si1;
l4=si0;
L6:;
si0=l0;
sj1=257ULL;
sj2=1ULL;
si3=l4;
sj1=si3?sj1:sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=44U;
si0+=si1;
f1035(i,si0);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1U;
si1=1U;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+52U);
i32_store(i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0+56U,si1);
si0=1178224U;
si1=43U;
si2=l5;
si3=56U;
si2+=si3;
si3=1119036U;
si4=1174576U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1349(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
si0=0U;
l2=si0;
si0=1159464U;
si1=l1;
si0=f1366(i,si0,si1);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
l3=si0;
si0=l1;
switch(si0){
case 0:
goto L5;
case 1:
goto L3;
default:
goto L4;
}
L5:;
si0=1U;
si1=0U;
si2=1159476U;
f4(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=1156660U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=l1;
si0+=si1;
l3=si0;
L3:;
si0=0U;
l4=si0;
si0=0U;
l5=si0;
si0=1159492U;
si1=l3;
si2=l0;
si2=i32_load8_u(i->m0,(U64)si2);
l6=si2;
si3=1156660U;
si2+=si3;
si2=i32_load8_u(i->m0,(U64)si2);
si1+=si2;
si2=l1;
si3=l0;
si2+=si3;
si3=-1U;
si2+=si3;
si2=i32_load8_u(i->m0,(U64)si2);
si3=1156660U;
si2+=si3;
si2=i32_load8_u(i->m0,(U64)si2);
si1+=si2;
l3=si1;
si0=f1366(i,si0,si1);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=150U;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=0U;
l2=si0;
si0=l3;
si1=12U;
si0*=si1;
l7=si0;
si1=1157076U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si1=l7;
si2=1157080U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l9=si1;
si2=1178584U;
si3=0U;
si0=f247(i,si0,si1,si2,si3);
if(si0){
goto L2;
}
si0=0U;
l4=si0;
si0=0U;
l5=si0;
si0=l7;
si1=1157084U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=12U;
si0*=si1;
l5=si0;
si1=1157086U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l2=si0;
si0=l5;
si1=1157085U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l4=si0;
si0=0U;
l5=si0;
si0=l9;
si1=l1;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=0U;
l5=si0;
si0=l8;
si0=i32_load8_u(i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l8;
si1=l1;
si2=l0;
si3=l1;
si0=f44(i,si0,si1,si2,si3);
l5=si0;
L7:;
si0=l4;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
si1=l5;
si0&=si1;
l4=si0;
si1=l2;
si2=255U;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0&=si1;
l2=si0;
goto L1;
L6:;
si0=l3;
si1=150U;
si2=1159504U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
l4=si0;
si0=0U;
l5=si0;
L1:;
si0=l4;
si1=8U;
si0<<=(si1&31);
si1=l2;
si2=16U;
si1<<=(si2&31);
si0|=si1;
si1=l5;
si0|=si1;
L0:;
return si0;
}

void f349(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=l1;
l3=si0;
si0=l2;
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=1U;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load16_u(i->m0,(U64)si0+180U);
l4=si0;
L1:;
si0=l1;
si1=232U;
si2=184U;
si3=l2;
si1=si3?si1:si2;
f264(i,si0,si1);
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
si2=l3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+4U,sj1);
L0:;
}

void f1448(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
l4=si1;
si2=l4;
si3=3U;
si2=si2 > si3;
l5=si2;
si0=si2?si0:si1;
l6=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l4;
si1=3U;
si2=l5;
si0=si2?si0:si1;
l7=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=4U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=-2147483647U;
l9=si0;
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
l5=si0;
si0=l2;
si1=536870911U;
si0=si0 <= si1;
if(si0){
goto L6;
}
goto L2;
L8:;
si0=-2147483647U;
l9=si0;
si0=l4;
si1=3U;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l1;
si1=l8;
si2=l3;
si3=3U;
si2<<=(si3&31);
si0=f3065(i,si0,si1,si2);
si1=l3;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l8;
si1=l7;
f1452(i,si0,si1);
L7:;
goto L1;
L6:;
si0=l5;
si1=2147483644U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=4U;
l9=si0;
si0=l4;
si1=4U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l4=si0;
si0=l7;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=2147483644U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=4U;
l9=si0;
si0=l8;
si1=l4;
si2=4U;
si3=l5;
si0=f615(i,si0,si1,si2,si3);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
goto L4;
L9:;
si0=4U;
si1=l5;
si0=f438(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l1;
si2=l4;
si3=3U;
si2<<=(si3&31);
si0=f3065(i,si0,si1,si2);
goto L4;
L5:;
si0=1122980U;
si1=32U;
si2=1123012U;
f16(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=l2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l6;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
i32_store(i->m0,(U64)si0,si1);
si0=-2147483647U;
l9=si0;
goto L1;
L3:;
si0=l4;
l5=si0;
L2:;
si0=0U;
l9=si0;
L1:;
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l9;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

U32 f1424(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si1=i32_load(i->m0,(U64)si1+20U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+24U);
si0=f1432(i,si0,si1,si2);
L0:;
return si0;
}

void f1625(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
l3=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=0U;
l4=si0;
si0=l3;
si1=12U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l1;
si1=16U;
si0+=si1;
l4=si0;
si0=l1;
si1=8U;
si0+=si1;
l3=si0;
si0=l1;
si1=l5;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l2;
si1=36U;
si0+=si1;
f986(i,si0);
si0=0U;
l1=si0;
goto L4;
L7:;
si0=l0;
si1=l1;
si2=4U;
si1+=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=1U;
l4=si0;
L6:;
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
goto L2;
L5:;
si0=l2;
si1=16U;
si0+=si1;
si1=l4;
f1172(i,si0,si1);
si0=l2;
sj0=i64_load(i->m0,(U64)si0+16U);
sj1=-7740204043524863337ULL;
sj0^=sj1;
si1=l2;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
sj2=634436761013121356ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=1U;
l1=si0;
L4:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l2;
sj1=1ULL;
f988(i,si0,sj1);
f99(i);
UNREACHABLE;
L0:;
}

void f2830(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
F32 sf1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l6;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
sf1=f2376(i,si1);
sf1=f3121(i,sf1);
f32_store(i->m0,(U64)si0+4U,sf1);
si0=l0;
si1=5U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=0U;
si1=0U;
si2=1173508U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f2979(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l6;
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=48U;
si0+=si1;
si0=f2346(i,si0);
l7=si0;
si0=l5;
si1=48U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
f1720(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+52U);
l4=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+48U);
l8=si0;
si1=l4;
si0=f1721(i,si0,si1);
l9=si0;
si0=l7;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=l9;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l10;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l11=si0;
goto L10;
L11:;
si0=l5;
si1=40U;
si0+=si1;
si1=l10;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+44U);
l11=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+40U);
l3=si0;
L10:;
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l3;
si2=l11;
si1+=si2;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l7;
si1=1U;
si0+=si1;
l3=si0;
L12:;
{
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=32U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f971(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+36U);
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L12;
}
goto L3;
}
L9:;
si0=l9;
f2980(i,si0);
goto L3;
L8:;
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f971(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+28U);
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+24U);
l7=si0;
si0=l10;
si1=0U;
si2=l10;
si2=i32_load(i->m0,(U64)si2);
l3=si2;
si3=l3;
si4=1U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l9;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l3;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
goto L4;
L13:;
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l9;
si1=f1473(i);
l10=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l10;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l10;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=60U;
si0+=si1;
f1474(i,si0);
si0=l10;
l3=si0;
goto L4;
L7:;
si0=1U;
si1=l4;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1174920U;
f14(i,si0);
UNREACHABLE;
L5:;
si0=f1473(i);
l3=si0;
si0=l9;
si0=i32_load(i->m0,(U64)si0);
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f1372(i,si0,si1);
si0=l9;
f1035(i,si0);
si0=l9;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
L4:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l9=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l9;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l7;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l7;
si0=!(si0);
if(si0){
goto L15;
}
si0=l9;
si1=l7;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
L15:;
si0=l3;
si1=l7;
i32_store(i->m0,(U64)si0+16U,si1);
goto L3;
L14:;
si0=l5;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
l3=si1;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l7;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
f1004(i,si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l9=si0;
si1=l7;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l9;
si1=l7;
si0=si0 == si1;
if(si0){
goto L16;
}
goto L1;
L17:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l7;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L16:;
si0=l3;
si1=l3;
si1=i32_load8_u(i->m0,(U64)si1);
si2=1U;
si1&=si2;
si2=l7;
si3=1U;
si2<<=(si3&31);
si1|=si2;
i32_store8(i->m0,(U64)si0,si1);
L3:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l8;
si1=l4;
f1704(i,si0,si1);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1116348U;
si1=56U;
si2=1116404U;
f16(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1116348U;
si1=56U;
si2=1116404U;
f16(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f2435(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l6;
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f2430(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l4=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l7=si0;
si0=l5;
si1=32U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si1=i32_load8_u(i->m0,(U64)si1);
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f1737(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+36U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+32U);
l6=sj1;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si1=f1738(i,si1);
si2=l7;
si3=0U;
si4=l7;
si5=0U;
si4=(U32)((I32)si4>(I32)si5);
si2=si4?si2:si3;
l3=si2;
si3=l4;
si4=l3;
si5=l4;
si6=l3;
si5=(U32)((I32)si5>(I32)si6);
si3=si5?si3:si4;
si4=l3;
si3-=si4;
f2433(i,si0,si1,si2,si3);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f2408(i,si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+24U);
i64_store(i->m0,(U64)si0,sj1);
sj0=l6;
si0=(U32)(sj0);
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
f1704(i,si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=l4;
si2=1168816U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1169704U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f1974(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=176U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l8;
si1=16U;
si0+=si1;
si1=l6;
f1277(i,si0,si1);
si0=l8;
si0=i32_load16_u(i->m0,(U64)si0+18U);
l9=si0;
si0=l8;
si0=i32_load16_u(i->m0,(U64)si0+16U);
l10=si0;
si0=l1;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+8U);
sj2=1ULL;
sj1+=sj2;
l11=sj1;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
sj0=i64_load(i->m0,(U64)si0+128U);
l12=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
sj0=l11;
sj1=l12;
si0=sj0 > sj1;
if(si0){
goto L5;
}
L6:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+120U);
l13=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
si1=24U;
si0+=si1;
si1=l13;
sj2=l11;
si3=l0;
si4=124U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+20U);
TF(i->t0,si3,void (*)(glicolwasmInstance*,U32,U32,U64))(i,si0,si1,sj2);
si0=l8;
si0=i32_load8_u(i->m0,(U64)si0+24U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l8;
sj0=i64_load(i->m0,(U64)si0+24U);
l11=sj0;
si0=l8;
si1=108U;
si0+=si1;
si1=l9;
i32_store16(i->m0,(U64)si0,si1);
si0=l8;
si1=l10;
i32_store16(i->m0,(U64)si0+106U,si1);
si0=l8;
sj1=l11;
i64_store(i->m0,(U64)si0+112U,sj1);
si0=l8;
si1=29U;
i32_store8(i->m0,(U64)si0+104U,si1);
si0=l8;
si1=104U;
si0+=si1;
si0=f97(i,si0);
l9=si0;
si0=l8;
si1=0U;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l8;
si1=104U;
si0+=si1;
f1488(i,si0);
goto L1;
L7:;
si0=1U;
l10=si0;
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0);
l9=si0;
si1=-16U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L9;
default:
goto L10;
}
L10:;
si0=l8;
si1=l5;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l8;
si1=116U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l8;
si1=1U;
i32_store(i->m0,(U64)si0+108U,si1);
si0=l8;
si1=1125692U;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l8;
si1=30U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l8;
si1=l8;
si2=24U;
si1+=si2;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l8;
si1=l8;
si2=88U;
si1+=si2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l8;
si1=104U;
si0+=si1;
si1=1125700U;
f372(i,si0,si1);
UNREACHABLE;
L9:;
si0=0U;
l10=si0;
L8:;
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-12U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L13;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L16;
case 5:
goto L15;
default:
goto L14;
}
L16:;
si0=l9;
si1=30U;
si0&=si1;
si1=16U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=8U;
si0&=si1;
if(si0){
goto L14;
}
goto L3;
L15:;
si0=l9;
si1=30U;
si0&=si1;
si1=16U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
L14:;
si0=l10;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
si1=l6;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l8;
si1=1U;
i32_store8(i->m0,(U64)si0+80U,si1);
si0=l8;
si1=104U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=30U;
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=2U;
i32_store(i->m0,(U64)si0+108U,si1);
si0=l8;
si1=1126204U;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l8;
si1=190U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l8;
si1=l8;
si2=24U;
si1+=si2;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l8;
si1=l8;
si2=88U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l8;
si1=l8;
si2=80U;
si1+=si2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l8;
si1=104U;
si0+=si1;
si1=1126236U;
f372(i,si0,si1);
UNREACHABLE;
L13:;
si0=l10;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
si1=l6;
si1=i32_load(i->m0,(U64)si1+8U);
si2=64U;
si1+=si2;
f1265(i,si0,si1);
si0=l8;
si0=i32_load(i->m0,(U64)si0+4U);
si1=12U;
si0*=si1;
l6=si0;
si0=l8;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
L17:;
{
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
si0=l8;
si1=104U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
si4=l3;
si5=l4;
si6=l10;
f1944(i,si0,si1,si2,si3,si4,si5,si6);
si0=l8;
si0=i32_load8_u(i->m0,(U64)si0+104U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l8;
si0=i32_load(i->m0,(U64)si0+108U);
l9=si0;
si0=l8;
si0=i32_load(i->m0,(U64)si0+104U);
l5=si0;
si1=255U;
si0&=si1;
si1=13U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l10;
si1=12U;
si0+=si1;
l10=si0;
si0=l8;
si1=l9;
i32_store(i->m0,(U64)si0+164U,si1);
si0=l8;
si1=l5;
i32_store(i->m0,(U64)si0+160U,si1);
si0=l8;
si1=104U;
si0+=si1;
si1=l8;
si2=160U;
si1+=si2;
f1767(i,si0,si1);
si0=l7;
si1=l8;
sj1=i64_load(i->m0,(U64)si1+104U);
f1281(i,si0,sj1);
si0=l6;
si1=-12U;
si0+=si1;
l6=si0;
goto L17;
}
L12:;
si0=0U;
l9=si0;
si0=l10;
if(si0){
goto L1;
}
L11:;
si0=l8;
si1=104U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
si4=l3;
si5=l4;
si6=l6;
f1901(i,si0,si1,si2,si3,si4,si5,si6);
si0=l8;
si0=i32_load8_u(i->m0,(U64)si0+104U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l8;
si0=i32_load(i->m0,(U64)si0+108U);
l9=si0;
si0=l8;
si0=i32_load(i->m0,(U64)si0+104U);
l1=si0;
si1=255U;
si0&=si1;
si1=13U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l8;
si1=l9;
i32_store(i->m0,(U64)si0+156U,si1);
si0=l8;
si1=l1;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l8;
si1=24U;
si0+=si1;
si1=l8;
si2=152U;
si1+=si2;
f1767(i,si0,si1);
si0=l7;
si1=l8;
sj1=i64_load(i->m0,(U64)si1+24U);
f1281(i,si0,sj1);
goto L2;
L5:;
si0=l8;
si1=108U;
si0+=si1;
si1=l9;
i32_store16(i->m0,(U64)si0,si1);
si0=l8;
si1=l10;
i32_store16(i->m0,(U64)si0+106U,si1);
si0=l8;
si1=24U;
i32_store8(i->m0,(U64)si0+104U,si1);
si0=l8;
si1=104U;
si0+=si1;
si0=f97(i,si0);
l9=si0;
goto L1;
L4:;
si0=l8;
si0=i32_load(i->m0,(U64)si0+108U);
l9=si0;
goto L1;
L3:;
si0=l6;
si0=i32_load(i->m0,(U64)si0+8U);
l14=si0;
si0=l8;
si1=0U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l14;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-12U;
si0+=si1;
switch(si0){
case 0:
goto L25;
case 1:
goto L24;
default:
goto L23;
}
L25:;
si0=l10;
si0=!(si0);
if(si0){
goto L22;
}
goto L19;
L24:;
si0=l10;
si0=!(si0);
if(si0){
goto L22;
}
si0=l8;
si1=8U;
si0+=si1;
si1=l14;
si1=i32_load(i->m0,(U64)si1+8U);
si2=64U;
si1+=si2;
f1265(i,si0,si1);
si0=l8;
si0=i32_load(i->m0,(U64)si0+12U);
si1=12U;
si0*=si1;
l10=si0;
si0=l8;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
L26:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L19;
}
si0=l8;
si1=104U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
si4=l3;
si5=l4;
si6=l5;
f1944(i,si0,si1,si2,si3,si4,si5,si6);
si0=l8;
si0=i32_load8_u(i->m0,(U64)si0+104U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l8;
si0=i32_load(i->m0,(U64)si0+108U);
l9=si0;
si0=l8;
si0=i32_load(i->m0,(U64)si0+104U);
l13=si0;
si1=255U;
si0&=si1;
si1=13U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l8;
si1=l9;
i32_store(i->m0,(U64)si0+172U,si1);
si0=l8;
si1=l13;
i32_store(i->m0,(U64)si0+168U,si1);
si0=l8;
si1=104U;
si0+=si1;
si1=l8;
si2=168U;
si1+=si2;
f1767(i,si0,si1);
si0=l8;
si1=24U;
si0+=si1;
si1=l8;
sj1=i64_load(i->m0,(U64)si1+104U);
f1281(i,si0,sj1);
si0=l10;
si1=-12U;
si0+=si1;
l10=si0;
goto L26;
}
L23:;
si0=l10;
if(si0){
goto L21;
}
L22:;
si0=l8;
si1=104U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
si4=l3;
si5=l4;
si6=l14;
f1901(i,si0,si1,si2,si3,si4,si5,si6);
si0=l8;
si0=i32_load8_u(i->m0,(U64)si0+104U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l8;
si0=i32_load(i->m0,(U64)si0+108U);
l9=si0;
si0=l8;
si0=i32_load(i->m0,(U64)si0+104U);
l10=si0;
si1=255U;
si0&=si1;
si1=13U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l8;
si1=l9;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l8;
si1=l10;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l8;
si1=88U;
si0+=si1;
si1=l8;
si2=72U;
si1+=si2;
f1767(i,si0,si1);
si0=l8;
si1=24U;
si0+=si1;
si1=l8;
sj1=i64_load(i->m0,(U64)si1+88U);
f1281(i,si0,sj1);
goto L19;
L21:;
si0=l8;
si1=l14;
i32_store(i->m0,(U64)si0+80U,si1);
si0=l8;
si1=1U;
i32_store8(i->m0,(U64)si0+87U,si1);
si0=l8;
si1=104U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l8;
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
si1=30U;
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=2U;
i32_store(i->m0,(U64)si0+108U,si1);
si0=l8;
si1=1126204U;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l8;
si1=190U;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l8;
si1=l8;
si2=88U;
si1+=si2;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l8;
si1=l8;
si2=80U;
si1+=si2;
i32_store(i->m0,(U64)si0+96U,si1);
si0=l8;
si1=l8;
si2=87U;
si1+=si2;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l8;
si1=104U;
si0+=si1;
si1=1126220U;
f372(i,si0,si1);
UNREACHABLE;
L20:;
si0=l8;
si0=i32_load(i->m0,(U64)si0+108U);
l9=si0;
goto L18;
L19:;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l6;
si6=l14;
si7=12U;
si6+=si7;
si7=l7;
si0=f1974(i,si0,si1,si2,si3,si4,si5,si6,si7);
l9=si0;
if(si0){
goto L18;
}
si0=l8;
si1=104U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
si2=44U;
si0=f3065(i,si0,si1,si2);
si0=l7;
si1=l8;
si2=104U;
si1+=si2;
f1948(i,si0,si1);
goto L2;
L18:;
si0=l8;
si1=24U;
si0+=si1;
f1294(i,si0);
goto L1;
L2:;
si0=0U;
l9=si0;
L1:;
si0=l8;
si1=176U;
si0+=si1;
i->g0=si0;
si0=l9;
L0:;
return si0;
}

void f2592(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l6=si0;
sj0=i64_load(i->m0,(U64)si0);
l7=sj0;
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l7;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si0=f2346(i,si0);
l8=si0;
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l7=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l7;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si0=f2346(i,si0);
l6=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si1=i32_load8_u(i->m0,(U64)si1);
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f1740(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+28U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+24U);
l7=sj1;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=16U;
si0+=si1;
si0=f1741(i,si0);
l4=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=l8;
si3=0U;
f2323(i,si0,si1,si2,si3);
si0=l3;
si1=l5;
si1=i32_load(i->m0,(U64)si1+8U);
l8=si1;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l3;
si1=l4;
si1=i32_load(i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=1U;
f155(i,si0,si1);
L6:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l8;
si0+=si1;
l9=si0;
si1=1U;
si0+=si1;
si1=l9;
si2=l3;
si3=l8;
si2-=si3;
si0=f3076(i,si0,si1,si2);
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l9;
si1=l6;
i32_store8(i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l4;
si1=l6;
f1182(i,si0,si1);
L4:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
sj0=l7;
si0=(U32)(sj0);
sj1=l7;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
f1704(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=2U;
si1=2U;
si2=1170256U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1U;
si1=l4;
si2=1170256U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1170452U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f3069(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
F64 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
F64 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
F64 l28=0;
F64 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2;
F64 sd0,sd1,sd2,sd3,sd4,sd5;
si0=i->g0;
si1=560U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+152U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+144U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+136U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+128U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+120U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+112U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+104U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+96U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+88U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+80U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+72U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+64U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+312U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+304U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+296U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+288U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+280U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+272U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+264U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+256U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+248U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+240U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+232U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+224U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+216U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+208U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+200U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+192U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+184U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+176U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+168U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+160U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+472U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+464U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+456U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+448U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+440U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+432U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+424U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+416U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+408U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+400U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+392U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+384U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+376U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+368U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+360U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+352U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+344U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+336U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+328U,sj1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0+320U,sj1);
si0=l6;
si1=480U;
si0+=si1;
si1=0U;
si2=80U;
si0=f3112(i,si0,si1,si2);
si0=l5;
si1=2U;
si0<<=(si1&31);
si1=1182108U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si1=l1;
si2=-1U;
si1+=si2;
l8=si1;
si0+=si1;
l9=si0;
si0=l4;
si1=-3U;
si0+=si1;
si1=24U;
si0=I32_DIV_S(si0,si1);
l10=si0;
si1=0U;
si2=l10;
si3=0U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l11=si0;
si1=l8;
si0-=si1;
l10=si0;
si0=l11;
si1=2U;
si0<<=(si1&31);
si1=l1;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=1182128U;
si0+=si1;
l12=si0;
si0=0U;
l1=si0;
L1:;
{
si0=l10;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L3;
}
sd0=0;
l13=sd0;
goto L2;
L3:;
si0=l12;
si0=i32_load(i->m0,(U64)si0);
sd0=(F64)(I32)(si0);
l13=sd0;
L2:;
si0=l6;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l13;
f64_store(i->m0,(U64)si0,sd1);
si0=l1;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l12;
si1=4U;
si0+=si1;
l12=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l1;
si1=l1;
si2=l9;
si1=si1 < si2;
si0+=si1;
l1=si0;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L1;
}
L4:;
}
si0=l4;
si1=-24U;
si0+=si1;
l14=si0;
si0=0U;
l10=si0;
L5:;
{
si0=l10;
si1=l8;
si0+=si1;
l9=si0;
si0=l10;
si1=l7;
si0=si0 < si1;
l12=si0;
sd0=0;
l13=sd0;
si0=0U;
l1=si0;
L7:;
{
sd0=l13;
si1=l0;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
si2=l6;
si3=l9;
si4=l1;
si3-=si4;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sd2=f64_load(i->m0,(U64)si2);
sd1*=sd2;
sd0+=sd1;
l13=sd0;
si0=l1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l1;
si1=l1;
si2=l8;
si1=si1 < si2;
si0+=si1;
l1=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L7;
}
}
L6:;
si0=l6;
si1=320U;
si0+=si1;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l13;
f64_store(i->m0,(U64)si0,sd1);
si0=l10;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l10;
si1=l12;
si0+=si1;
l10=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L5;
}
L8:;
}
sd0=INFINITY;
sd1=8.9884656743115795e+307;
si2=l14;
si3=l11;
si4=-24U;
si3*=si4;
l15=si3;
si2+=si3;
l16=si2;
si3=2046U;
si2=si2 > si3;
l17=si2;
sd0=si2?sd0:sd1;
sd1=0;
sd2=2.0041683600089728e-292;
si3=l16;
si4=-1991U;
si3=si3 < si4;
l18=si3;
sd1=si3?sd1:sd2;
sd2=1;
si3=l16;
si4=-1022U;
si3=(U32)((I32)si3<(I32)si4);
l19=si3;
sd1=si3?sd1:sd2;
si2=l16;
si3=1023U;
si2=(U32)((I32)si2>(I32)si3);
l20=si2;
sd0=si2?sd0:sd1;
si1=l16;
si2=3069U;
si3=l16;
si4=3069U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si2=-2046U;
si1+=si2;
si2=l16;
si3=-1023U;
si2+=si3;
si3=l17;
si1=si3?si1:si2;
l21=si1;
si2=l16;
si3=-2960U;
si4=l16;
si5=-2960U;
si4=(U32)((I32)si4>(I32)si5);
si2=si4?si2:si3;
si3=1938U;
si2+=si3;
si3=l16;
si4=969U;
si3+=si4;
si4=l18;
si2=si4?si2:si3;
l22=si2;
si3=l16;
si4=l19;
si2=si4?si2:si3;
si3=l20;
si1=si3?si1:si2;
si2=1023U;
si1+=si2;
sj1=(U64)(si1);
sj2=52ULL;
sj1<<=(sj2&63);
sd1=f64_reinterpret_i64(sj1);
sd0*=sd1;
l23=sd0;
si0=l7;
si1=2U;
si0<<=(si1&31);
si1=l6;
si2=480U;
si1+=si2;
si0+=si1;
si1=-4U;
si0+=si1;
l24=si0;
si0=23U;
si1=l16;
si0-=si1;
si1=31U;
si0&=si1;
l25=si0;
si0=24U;
si1=l16;
si0-=si1;
si1=31U;
si0&=si1;
l26=si0;
si0=l16;
si1=-1U;
si0+=si1;
l27=si0;
si0=l7;
l10=si0;
L10:;
{
si0=l6;
si1=320U;
si0+=si1;
si1=l10;
l14=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd0=f64_load(i->m0,(U64)si0);
l28=sd0;
si0=l14;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=480U;
si0+=si1;
l9=si0;
si0=l14;
l1=si0;
L12:;
{
sd0=l28;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l13=sd0;
sd1=-2147483648;
si0=sd0 >= sd1;
l10=si0;
sd0=l13;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
if(si0){
goto L14;
}
si0=-2147483648U;
l12=si0;
goto L13;
L14:;
sd0=l13;
si0=I32_TRUNC_S_F64(sd0);
l12=si0;
L13:;
sd0=l28;
si1=0U;
si2=2147483647U;
si3=l12;
si4=-2147483648U;
si5=l10;
si3=si5?si3:si4;
sd4=l13;
sd5=2147483647;
si4=sd4 > sd5;
si2=si4?si2:si3;
sd3=l13;
sd4=l13;
si3=sd3 != sd4;
si1=si3?si1:si2;
sd1=(F64)(I32)(si1);
l29=sd1;
sd2=-16777216;
sd1*=sd2;
sd0+=sd1;
l13=sd0;
sd1=-2147483648;
si0=sd0 >= sd1;
l10=si0;
sd0=l13;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L16;
}
sd0=l13;
si0=I32_TRUNC_S_F64(sd0);
l12=si0;
goto L15;
L16:;
si0=-2147483648U;
l12=si0;
L15:;
si0=l9;
si1=0U;
si2=2147483647U;
si3=l12;
si4=-2147483648U;
si5=l10;
si3=si5?si3:si4;
sd4=l13;
sd5=2147483647;
si4=sd4 > sd5;
si2=si4?si2:si3;
sd3=l13;
sd4=l13;
si3=sd3 != sd4;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=320U;
si0+=si1;
si1=l1;
si2=-1U;
si1+=si2;
l10=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd0=f64_load(i->m0,(U64)si0);
sd1=l29;
sd0+=sd1;
l28=sd0;
si0=l1;
si1=2U;
si0=si0 < si1;
l1=si0;
if(si0){
goto L11;
}
si0=l9;
si1=4U;
si0+=si1;
l9=si0;
si0=1U;
si1=l10;
si2=l1;
si0=si2?si0:si1;
l1=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l20;
if(si0){
goto L19;
}
si0=l19;
if(si0){
goto L18;
}
si0=l16;
l1=si0;
goto L17;
L19:;
sd0=l28;
sd1=8.9884656743115795e+307;
sd0*=sd1;
l13=sd0;
sd1=8.9884656743115795e+307;
sd0*=sd1;
sd1=l13;
si2=l17;
sd0=si2?sd0:sd1;
l28=sd0;
si0=l21;
l1=si0;
goto L17;
L18:;
sd0=l28;
sd1=2.0041683600089728e-292;
sd0*=sd1;
l13=sd0;
sd1=2.0041683600089728e-292;
sd0*=sd1;
sd1=l13;
si2=l18;
sd0=si2?sd0:sd1;
l28=sd0;
si0=l22;
l1=si0;
L17:;
sd0=l28;
si1=l1;
si2=1023U;
si1+=si2;
sj1=(U64)(si1);
sj2=52ULL;
sj1<<=(sj2&63);
sd1=f64_reinterpret_i64(sj1);
sd0*=sd1;
l13=sd0;
sd1=l13;
sd2=0.125;
sd1*=sd2;
sd1=floor(sd1);
sd2=-8;
sd1*=sd2;
sd0+=sd1;
l13=sd0;
sd1=-2147483648;
si0=sd0 >= sd1;
l1=si0;
sd0=l13;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L21;
}
sd0=l13;
si0=I32_TRUNC_S_F64(sd0);
l9=si0;
goto L20;
L21:;
si0=-2147483648U;
l9=si0;
L20:;
sd0=l13;
si1=0U;
si2=2147483647U;
si3=l9;
si4=-2147483648U;
si5=l1;
si3=si5?si3:si4;
sd4=l13;
sd5=2147483647;
si4=sd4 > sd5;
si2=si4?si2:si3;
sd3=l13;
sd4=l13;
si3=sd3 != sd4;
si1=si3?si1:si2;
l30=si1;
sd1=(F64)(I32)(si1);
sd0-=sd1;
l13=sd0;
si0=l16;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
l31=si0;
if(si0){
goto L28;
}
si0=l16;
if(si0){
goto L29;
}
si0=l14;
si1=2U;
si0<<=(si1&31);
si1=l6;
si2=480U;
si1+=si2;
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=23U;
si0=(U32)((I32)si0>>(si1&31));
l32=si0;
goto L27;
L29:;
si0=2U;
l32=si0;
si0=0U;
l33=si0;
sd0=l13;
sd1=0.5;
si0=sd0 >= sd1;
si0=!(si0);
if(si0){
goto L22;
}
goto L26;
L28:;
si0=l14;
si1=2U;
si0<<=(si1&31);
si1=l6;
si2=480U;
si1+=si2;
si0+=si1;
si1=-4U;
si0+=si1;
l1=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l1=si1;
si2=l1;
si3=l26;
si2=(U32)((I32)si2>>(si3&31));
l1=si2;
si3=l26;
si2<<=(si3&31);
si1-=si2;
l9=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l9;
si1=l25;
si0=(U32)((I32)si0>>(si1&31));
l32=si0;
si0=l1;
si1=l30;
si0+=si1;
l30=si0;
L27:;
si0=l32;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L25;
}
L26:;
si0=l14;
if(si0){
goto L24;
}
si0=0U;
l9=si0;
goto L23;
L25:;
si0=l32;
l33=si0;
goto L22;
L24:;
si0=0U;
l34=si0;
si0=0U;
l9=si0;
si0=l14;
si1=1U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l14;
si1=30U;
si0&=si1;
l35=si0;
si0=0U;
l34=si0;
si0=l6;
si1=480U;
si0+=si1;
l1=si0;
si0=0U;
l9=si0;
L31:;
{
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l12=si0;
si0=16777215U;
l10=si0;
si0=l9;
if(si0){
goto L33;
}
si0=16777216U;
l10=si0;
si0=l12;
if(si0){
goto L33;
}
si0=1U;
l12=si0;
goto L32;
L33:;
si0=l1;
si1=l10;
si2=l12;
si1-=si2;
i32_store(i->m0,(U64)si0,si1);
si0=0U;
l12=si0;
L32:;
si0=l1;
si1=4U;
si0+=si1;
l33=si0;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=16777215U;
l10=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L35;
}
si0=16777216U;
l10=si0;
si0=l9;
if(si0){
goto L35;
}
si0=0U;
l9=si0;
goto L34;
L35:;
si0=l33;
si1=l10;
si2=l9;
si1-=si2;
i32_store(i->m0,(U64)si0,si1);
si0=1U;
l9=si0;
L34:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l35;
si1=l34;
si2=2U;
si1+=si2;
l34=si1;
si0=si0 != si1;
if(si0){
goto L31;
}
}
L30:;
si0=l14;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L23;
}
si0=l6;
si1=480U;
si0+=si1;
si1=l34;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=16777215U;
l10=si0;
si0=l9;
if(si0){
goto L36;
}
si0=16777216U;
l10=si0;
si0=l1;
if(si0){
goto L36;
}
si0=0U;
l9=si0;
goto L23;
L36:;
si0=l12;
si1=l10;
si2=l1;
si1-=si2;
i32_store(i->m0,(U64)si0,si1);
si0=1U;
l9=si0;
L23:;
si0=l31;
si0=!(si0);
if(si0){
goto L37;
}
si0=8388607U;
l1=si0;
si0=l27;
switch(si0){
case 0:
goto L38;
case 1:
goto L39;
default:
goto L37;
}
L39:;
si0=4194303U;
l1=si0;
L38:;
si0=l14;
si1=2U;
si0<<=(si1&31);
si1=l6;
si2=480U;
si1+=si2;
si0+=si1;
si1=-4U;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
si1&=si2;
i32_store(i->m0,(U64)si0,si1);
L37:;
si0=l30;
si1=1U;
si0+=si1;
l30=si0;
si0=l32;
si1=2U;
si0=si0 == si1;
if(si0){
goto L40;
}
si0=l32;
l33=si0;
goto L22;
L40:;
sd0=1;
sd1=l13;
sd0-=sd1;
sd1=l23;
sd2=0;
si3=l9;
sd1=si3?sd1:sd2;
sd0-=sd1;
l13=sd0;
si0=2U;
l33=si0;
L22:;
sd0=l13;
sd1=0;
si0=sd0 != sd1;
if(si0){
goto L41;
}
si0=l24;
l1=si0;
si0=l14;
l10=si0;
si0=l7;
si1=l14;
si2=-1U;
si1+=si2;
l9=si1;
si0=si0 > si1;
if(si0){
goto L42;
}
si0=0U;
l12=si0;
L44:;
{
si0=l6;
si1=480U;
si0+=si1;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l12;
si0|=si1;
l12=si0;
si0=l7;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L43;
}
si0=l7;
si1=l9;
si2=l7;
si3=l9;
si2=si2 < si3;
si1-=si2;
l9=si1;
si0=si0 <= si1;
if(si0){
goto L44;
}
}
L43:;
si0=l24;
l1=si0;
si0=l14;
l10=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L42;
}
si0=l6;
si1=480U;
si0+=si1;
si1=l14;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=-4U;
si0+=si1;
l1=si0;
L45:;
{
si0=l14;
si1=-1U;
si0+=si1;
l14=si0;
si0=l16;
si1=-24U;
si0+=si1;
l16=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L45;
}
goto L9;
}
L42:;
L46:;
{
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L46;
}
}
si0=l14;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l14;
si1=1U;
si0+=si1;
l12=si0;
L47:;
{
si0=l6;
si1=l12;
si2=l8;
si1+=si2;
l9=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
si2=l11;
si1+=si2;
si2=2U;
si1<<=(si2&31);
si2=1182124U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
sd1=(F64)(I32)(si1);
f64_store(i->m0,(U64)si0,sd1);
si0=l12;
si1=l10;
si0=si0 < si1;
l14=si0;
si0=0U;
l1=si0;
sd0=0;
l13=sd0;
L49:;
{
sd0=l13;
si1=l0;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
si2=l6;
si3=l9;
si4=l1;
si3-=si4;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sd2=f64_load(i->m0,(U64)si2);
sd1*=sd2;
sd0+=sd1;
l13=sd0;
si0=l1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L48;
}
si0=l1;
si1=l1;
si2=l8;
si1=si1 < si2;
si0+=si1;
l1=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L49;
}
}
L48:;
si0=l6;
si1=320U;
si0+=si1;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l13;
f64_store(i->m0,(U64)si0,sd1);
si0=l12;
si1=l14;
si0+=si1;
l1=si0;
si0=l12;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l1;
l12=si0;
si0=l1;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L47;
}
goto L10;
}
L41:;
}
si0=0U;
si1=l16;
si0-=si1;
l1=si0;
si1=1023U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L53;
}
si0=l1;
si1=-1022U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L50;
}
sd0=l13;
sd1=2.0041683600089728e-292;
sd0*=sd1;
l13=sd0;
si0=l1;
si1=-1992U;
si0=si0 <= si1;
if(si0){
goto L52;
}
si0=969U;
si1=l16;
si0-=si1;
l1=si0;
goto L50;
L53:;
sd0=l13;
sd1=8.9884656743115795e+307;
sd0*=sd1;
l13=sd0;
si0=l1;
si1=2046U;
si0=si0 > si1;
if(si0){
goto L51;
}
si0=-1023U;
si1=l16;
si0-=si1;
l1=si0;
goto L50;
L52:;
sd0=l13;
sd1=2.0041683600089728e-292;
sd0*=sd1;
l13=sd0;
si0=l1;
si1=-2960U;
si2=l1;
si3=-2960U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
si1=1938U;
si0+=si1;
l1=si0;
goto L50;
L51:;
sd0=l13;
sd1=8.9884656743115795e+307;
sd0*=sd1;
l13=sd0;
si0=l1;
si1=3069U;
si2=l1;
si3=3069U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
si1=-2046U;
si0+=si1;
l1=si0;
L50:;
sd0=l13;
si1=l1;
si2=1023U;
si1+=si2;
sj1=(U64)(si1);
sj2=52ULL;
sj1<<=(sj2&63);
sd1=f64_reinterpret_i64(sj1);
sd0*=sd1;
l28=sd0;
sd1=16777216;
si0=sd0 >= sd1;
if(si0){
goto L55;
}
sd0=l28;
l13=sd0;
goto L54;
L55:;
sd0=l28;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l13=sd0;
sd1=-2147483648;
si0=sd0 >= sd1;
l1=si0;
sd0=l13;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L57;
}
sd0=l13;
si0=I32_TRUNC_S_F64(sd0);
l8=si0;
goto L56;
L57:;
si0=-2147483648U;
l8=si0;
L56:;
sd0=l28;
si1=0U;
si2=2147483647U;
si3=l8;
si4=-2147483648U;
si5=l1;
si3=si5?si3:si4;
sd4=l13;
sd5=2147483647;
si4=sd4 > sd5;
si2=si4?si2:si3;
sd3=l13;
sd4=l13;
si3=sd3 != sd4;
si1=si3?si1:si2;
sd1=(F64)(I32)(si1);
l13=sd1;
sd2=-16777216;
sd1*=sd2;
sd0+=sd1;
l28=sd0;
sd1=-2147483648;
si0=sd0 >= sd1;
l1=si0;
sd0=l28;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L59;
}
sd0=l28;
si0=I32_TRUNC_S_F64(sd0);
l8=si0;
goto L58;
L59:;
si0=-2147483648U;
l8=si0;
L58:;
si0=l6;
si1=480U;
si0+=si1;
si1=l14;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
si2=2147483647U;
si3=l8;
si4=-2147483648U;
si5=l1;
si3=si5?si3:si4;
sd4=l28;
sd5=2147483647;
si4=sd4 > sd5;
si2=si4?si2:si3;
sd3=l28;
sd4=l28;
si3=sd3 != sd4;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0,si1);
si0=l15;
si1=l4;
si0+=si1;
l16=si0;
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
L54:;
sd0=l13;
sd1=-2147483648;
si0=sd0 >= sd1;
l1=si0;
sd0=l13;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L61;
}
sd0=l13;
si0=I32_TRUNC_S_F64(sd0);
l8=si0;
goto L60;
L61:;
si0=-2147483648U;
l8=si0;
L60:;
si0=l6;
si1=480U;
si0+=si1;
si1=l14;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=0U;
si2=2147483647U;
si3=l8;
si4=-2147483648U;
si5=l1;
si3=si5?si3:si4;
sd4=l13;
sd5=2147483647;
si4=sd4 > sd5;
si2=si4?si2:si3;
sd3=l13;
sd4=l13;
si3=sd3 != sd4;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0,si1);
L9:;
si0=l16;
si1=1023U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L65;
}
sd0=1;
l13=sd0;
si0=l16;
si1=-1022U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L62;
}
si0=l16;
si1=-1992U;
si0=si0 <= si1;
if(si0){
goto L64;
}
si0=l16;
si1=969U;
si0+=si1;
l16=si0;
sd0=2.0041683600089728e-292;
l13=sd0;
goto L62;
L65:;
si0=l16;
si1=2046U;
si0=si0 > si1;
if(si0){
goto L63;
}
si0=l16;
si1=-1023U;
si0+=si1;
l16=si0;
sd0=8.9884656743115795e+307;
l13=sd0;
goto L62;
L64:;
si0=l16;
si1=-2960U;
si2=l16;
si3=-2960U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
si1=1938U;
si0+=si1;
l16=si0;
sd0=0;
l13=sd0;
goto L62;
L63:;
si0=l16;
si1=3069U;
si2=l16;
si3=3069U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
si1=-2046U;
si0+=si1;
l16=si0;
sd0=INFINITY;
l13=sd0;
L62:;
sd0=l13;
si1=l16;
si2=1023U;
si1+=si2;
sj1=(U64)(si1);
sj2=52ULL;
sj1<<=(sj2&63);
sd1=f64_reinterpret_i64(sj1);
sd0*=sd1;
l13=sd0;
si0=l14;
si1=1U;
si0+=si1;
l35=si0;
si1=1U;
si0&=si1;
if(si0){
goto L67;
}
si0=l14;
l0=si0;
goto L66;
L67:;
si0=l6;
si1=320U;
si0+=si1;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l13;
si2=l6;
si3=480U;
si2+=si3;
si3=l14;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
sd2=(F64)(I32)(si2);
sd1*=sd2;
f64_store(i->m0,(U64)si0,sd1);
sd0=l13;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l13=sd0;
si0=l14;
si1=-1U;
si0+=si1;
l0=si0;
L66:;
si0=l14;
si0=!(si0);
if(si0){
goto L68;
}
si0=l0;
si1=3U;
si0<<=(si1&31);
si1=l6;
si2=320U;
si1+=si2;
si0+=si1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l0;
si1=2U;
si0<<=(si1&31);
si1=l6;
si2=480U;
si1+=si2;
si0+=si1;
si1=-4U;
si0+=si1;
l8=si0;
L69:;
{
si0=l1;
sd1=l13;
sd2=5.9604644775390625e-08;
sd1*=sd2;
l28=sd1;
si2=l8;
si2=i32_load(i->m0,(U64)si2);
sd2=(F64)(I32)(si2);
sd1*=sd2;
f64_store(i->m0,(U64)si0,sd1);
si0=l1;
si1=8U;
si0+=si1;
sd1=l13;
si2=l8;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
sd2=(F64)(I32)(si2);
sd1*=sd2;
f64_store(i->m0,(U64)si0,sd1);
si0=l1;
si1=-16U;
si0+=si1;
l1=si0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
sd0=l28;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l13=sd0;
si0=l0;
si1=1U;
si0=si0 != si1;
l9=si0;
si0=l0;
si1=-2U;
si0+=si1;
l0=si0;
si0=l9;
if(si0){
goto L69;
}
}
L68:;
si0=l6;
si1=320U;
si0+=si1;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l14;
l1=si0;
L70:;
{
si0=l7;
si1=l14;
si2=l1;
l12=si2;
si1-=si2;
l11=si1;
si2=l7;
si3=l11;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
si1=1U;
si0+=si1;
l8=si0;
si1=1U;
si0&=si1;
l34=si0;
si0=l1;
if(si0){
goto L72;
}
si0=0U;
l8=si0;
sd0=0;
l13=sd0;
goto L71;
L72:;
si0=l8;
si1=-2U;
si0&=si1;
l10=si0;
sd0=0;
l13=sd0;
si0=0U;
l1=si0;
si0=0U;
l8=si0;
L73:;
{
sd0=l13;
si1=l1;
si2=1182392U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
si2=l9;
si3=l1;
si2+=si3;
l0=si2;
sd2=f64_load(i->m0,(U64)si2);
sd1*=sd2;
sd0+=sd1;
si1=l1;
si2=1182400U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
si2=l0;
si3=8U;
si2+=si3;
sd2=f64_load(i->m0,(U64)si2);
sd1*=sd2;
sd0+=sd1;
l13=sd0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l10;
si1=l8;
si2=2U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L73;
}
}
L71:;
si0=l34;
si0=!(si0);
if(si0){
goto L74;
}
sd0=l13;
si1=l8;
si2=3U;
si1<<=(si2&31);
si2=1182392U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
si2=l6;
si3=320U;
si2+=si3;
si3=l8;
si4=l12;
si3+=si4;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sd2=f64_load(i->m0,(U64)si2);
sd1*=sd2;
sd0+=sd1;
l13=sd0;
L74:;
si0=l6;
si1=160U;
si0+=si1;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l13;
f64_store(i->m0,(U64)si0,sd1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l12;
si1=-1U;
si0+=si1;
l1=si0;
si0=l12;
if(si0){
goto L70;
}
}
si0=l5;
switch(si0){
case 0:
goto L77;
case 1:
goto L78;
case 2:
goto L78;
case 3:
goto L76;
default:
goto L75;
}
L78:;
si0=l35;
si1=3U;
si0&=si1;
l0=si0;
if(si0){
goto L80;
}
sd0=0;
l13=sd0;
si0=l14;
l8=si0;
goto L79;
L80:;
si0=l6;
si1=160U;
si0+=si1;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
sd0=0;
l13=sd0;
si0=l14;
l8=si0;
L81:;
{
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
sd0=l13;
si1=l1;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
l13=sd0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L81;
}
}
L79:;
si0=l14;
si1=3U;
si0=si0 < si1;
if(si0){
goto L82;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l6;
si2=160U;
si1+=si2;
si0+=si1;
si1=-24U;
si0+=si1;
l1=si0;
L83:;
{
sd0=l13;
si1=l1;
si2=24U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
si1=l1;
si2=16U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
si1=l1;
si2=8U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
si1=l1;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
l13=sd0;
si0=l1;
si1=-32U;
si0+=si1;
l1=si0;
si0=l8;
si1=3U;
si0=si0 != si1;
l0=si0;
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l0;
if(si0){
goto L83;
}
}
L82:;
si0=l2;
sd1=l13;
sd1=-(sd1);
sd2=l13;
si3=l33;
sd1=si3?sd1:sd2;
f64_store(i->m0,(U64)si0,sd1);
si0=l6;
sd0=f64_load(i->m0,(U64)si0+160U);
sd1=l13;
sd0-=sd1;
l13=sd0;
si0=l14;
si0=!(si0);
if(si0){
goto L84;
}
si0=1U;
l1=si0;
L85:;
{
sd0=l13;
si1=l6;
si2=160U;
si1+=si2;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
l13=sd0;
si0=l1;
si1=l14;
si0=si0 >= si1;
if(si0){
goto L84;
}
si0=l1;
si1=l1;
si2=l14;
si1=si1 < si2;
si0+=si1;
l1=si0;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L85;
}
}
L84:;
si0=l2;
sd1=l13;
sd1=-(sd1);
sd2=l13;
si3=l33;
sd1=si3?sd1:sd2;
f64_store(i->m0,(U64)si0+8U,sd1);
goto L75;
L77:;
si0=l35;
si1=3U;
si0&=si1;
l0=si0;
if(si0){
goto L87;
}
sd0=0;
l13=sd0;
si0=l14;
l8=si0;
goto L86;
L87:;
si0=l6;
si1=160U;
si0+=si1;
si1=l14;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
sd0=0;
l13=sd0;
si0=l14;
l8=si0;
L88:;
{
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
sd0=l13;
si1=l1;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
l13=sd0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L88;
}
}
L86:;
si0=l14;
si1=3U;
si0=si0 < si1;
if(si0){
goto L89;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l6;
si2=160U;
si1+=si2;
si0+=si1;
si1=-24U;
si0+=si1;
l1=si0;
L90:;
{
sd0=l13;
si1=l1;
si2=24U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
si1=l1;
si2=16U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
si1=l1;
si2=8U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
si1=l1;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
l13=sd0;
si0=l1;
si1=-32U;
si0+=si1;
l1=si0;
si0=l8;
si1=3U;
si0=si0 != si1;
l0=si0;
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l0;
if(si0){
goto L90;
}
}
L89:;
si0=l2;
sd1=l13;
sd1=-(sd1);
sd2=l13;
si3=l33;
sd1=si3?sd1:sd2;
f64_store(i->m0,(U64)si0,sd1);
goto L75;
L76:;
sd0=0;
l23=sd0;
si0=l14;
si0=!(si0);
if(si0){
goto L91;
}
si0=l14;
l1=si0;
L93:;
{
si0=l6;
si1=160U;
si0+=si1;
si1=l1;
si2=-1U;
si1+=si2;
l0=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l8;
sd1=f64_load(i->m0,(U64)si1);
l13=sd1;
si2=l6;
si3=160U;
si2+=si3;
si3=l1;
si4=3U;
si3<<=(si4&31);
si2+=si3;
l8=si2;
sd2=f64_load(i->m0,(U64)si2);
l28=sd2;
sd1+=sd2;
l29=sd1;
f64_store(i->m0,(U64)si0,sd1);
si0=l8;
sd1=l28;
sd2=l13;
sd3=l29;
sd2-=sd3;
sd1+=sd2;
f64_store(i->m0,(U64)si0,sd1);
si0=l1;
si1=2U;
si0=si0 < si1;
l1=si0;
if(si0){
goto L92;
}
si0=1U;
si1=l0;
si2=l1;
si0=si2?si0:si1;
l1=si0;
if(si0){
goto L93;
}
}
L92:;
si0=l14;
si1=2U;
si0=si0 < si1;
if(si0){
goto L91;
}
si0=l14;
l1=si0;
L95:;
{
si0=l6;
si1=160U;
si0+=si1;
si1=l1;
si2=-1U;
si1+=si2;
l0=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=l8;
sd1=f64_load(i->m0,(U64)si1);
l13=sd1;
si2=l6;
si3=160U;
si2+=si3;
si3=l1;
si4=3U;
si3<<=(si4&31);
si2+=si3;
l8=si2;
sd2=f64_load(i->m0,(U64)si2);
l28=sd2;
sd1+=sd2;
l29=sd1;
f64_store(i->m0,(U64)si0,sd1);
si0=l8;
sd1=l28;
sd2=l13;
sd3=l29;
sd2-=sd3;
sd1+=sd2;
f64_store(i->m0,(U64)si0,sd1);
si0=l1;
si1=3U;
si0=si0 < si1;
l1=si0;
if(si0){
goto L94;
}
si0=2U;
si1=l0;
si2=l1;
si0=si2?si0:si1;
l1=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L95;
}
}
L94:;
sd0=0;
l23=sd0;
L96:;
{
sd0=l23;
si1=l6;
si2=160U;
si1+=si2;
si2=l14;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
l23=sd0;
si0=l14;
si1=3U;
si0=si0 < si1;
l1=si0;
if(si0){
goto L91;
}
si0=2U;
si1=l14;
si2=-1U;
si1+=si2;
si2=l1;
si0=si2?si0:si1;
l14=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L96;
}
}
L91:;
si0=l6;
sd0=f64_load(i->m0,(U64)si0+160U);
l13=sd0;
si0=l33;
if(si0){
goto L97;
}
si0=l2;
sd1=l13;
f64_store(i->m0,(U64)si0,sd1);
si0=l2;
sd1=l23;
f64_store(i->m0,(U64)si0+16U,sd1);
si0=l2;
si1=l6;
sd1=f64_load(i->m0,(U64)si1+168U);
f64_store(i->m0,(U64)si0+8U,sd1);
goto L75;
L97:;
si0=l2;
sd1=l13;
sd1=-(sd1);
f64_store(i->m0,(U64)si0,sd1);
si0=l2;
sd1=l23;
sd1=-(sd1);
f64_store(i->m0,(U64)si0+16U,sd1);
si0=l2;
si1=l6;
sd1=f64_load(i->m0,(U64)si1+168U);
sd1=-(sd1);
f64_store(i->m0,(U64)si0+8U,sd1);
L75:;
si0=l6;
si1=560U;
si0+=si1;
i->g0=si0;
si0=l30;
si1=7U;
si0&=si1;
L0:;
return si0;
}

void f2629(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
U64 sj1;
si0=8U;
si1=4U;
si0=f1024(i,si0,si1);
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
si1=1133252U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
sj1=4294967297ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=3U;
i32_store8(i->m0,(U64)si0,si1);
L0:;
}

void f2834(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
F32 sf1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l6;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
sf1=f2376(i,si1);
sf1=f3123(i,sf1);
f32_store(i->m0,(U64)si0+4U,sf1);
si0=l0;
si1=5U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=0U;
si1=0U;
si2=1173508U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f399(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1119536U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f624(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1119536U;
si2=5U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

void f2931(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
sj0=i64_load(i->m0,(U64)si0);
l7=sj0;
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l7;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si0=f1278(i,si0);
l6=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=1U;
si1=1U;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l7=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l7;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=l5;
si1=f1278(i,si1);
l4=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l5;
si2=12U;
si1+=si2;
si2=l6;
si3=l4;
si2=f1629(i,si2,si3);
l3=si2;
si0=si2?si0:si1;
f1035(i,si0);
si0=l0;
si1=l6;
si2=l4;
si3=l3;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1067(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
f1070(i,si0);
si0=l0;
si1=12U;
si0+=si1;
f1035(i,si0);
si0=l0;
f87(i,si0);
L0:;
}

U32 f204(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l2;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1051864U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1051972U;
f372(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
si2=3U;
si1>>=(si2&31);
si2=536870908U;
si1&=si2;
si0+=si1;
l0=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l0=si1;
si2=1U;
si3=l1;
si2<<=(si3&31);
l1=si2;
si1|=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
si1=l1;
si0&=si1;
si0=!(si0);
L0:;
return si0;
}

U32 f246(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
F64 l3=0;
U32 si0,si1,si2,si3,si4;
F64 sd0,sd1;
si0=l1;
si0=i32_load(i->m0,(U64)si0+28U);
si1=1U;
si0&=si1;
l2=si0;
si0=l0;
sd0=f64_load(i->m0,(U64)si0);
l3=sd0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
sd1=l3;
si2=l2;
si3=l1;
si4=12U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si0=f707(i,si0,sd1,si2,si3);
goto L0;
L1:;
si0=l1;
sd1=l3;
si2=l2;
si3=0U;
si0=f708(i,si0,sd1,si2,si3);
L0:;
return si0;
}

void f2136(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=f2061(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=36U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si1=24U;
si0+=si1;
si1=36U;
f1412(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
l3=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+28U);
l4=si1;
f996(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
l5=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l3;
si2=l4;
si0=f3065(i,si0,si1,si2);
l6=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=24U;
f996(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l7=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1148240U);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1148256U);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1148248U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=60U;
si0+=si1;
si1=24U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l6;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l5;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=l1;
si2=i32_load16_u(i->m0,(U64)si2+8U);
si3=l1;
si4=10U;
si3+=si4;
si3=i32_load16_u(i->m0,(U64)si3);
f2065(i,si0,si1,si2,si3);
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+32U);
i64_store(i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1148224U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f3008(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=12U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=8U;
l3=si0;
si0=1160852U;
l4=si0;
goto L1;
L2:;
si0=l2;
si1=l1;
f96(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
L1:;
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=56U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
f1767(i,si0,si1);
si0=l2;
sj0=i64_load(i->m0,(U64)si0+56U);
l5=sj0;
sj1=255ULL;
sj0&=sj1;
sj1=10ULL;
si0=sj0 == sj1;
if(si0){
goto L3;
}
si0=l2;
si1=1000000000U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
sj1=l5;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=16U;
si0+=si1;
f1032(i,si0);
si0=l2;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=4U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1161392U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
si1=4U;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l2;
si1=22U;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l2;
si1=1116866U;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=1161408U;
f372(i,si0,si1);
UNREACHABLE;
L3:;
si0=l2;
sj1=l5;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l1=si1;
si1=i32_load(i->m0,(U64)si1+8U);
l3=si1;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1);
l5=sj1;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l1;
f87(i,si0);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l5;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2284(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=l1;
si2=i32_load(i->m0,(U64)si2+8U);
l4=si2;
si3=1121200U;
f835(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si1=l3;
si1=i32_load(i->m0,(U64)si1+8U);
l5=si1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
si2=l2;
si1-=si2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l2;
si2=l1;
si2=i32_load(i->m0,(U64)si2+4U);
l1=si2;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=l5;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2427(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l6;
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=4U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f2428(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si1=i32_load8_u(i->m0,(U64)si1);
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f1737(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+36U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+32U);
l6=sj1;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si1=f1738(i,si1);
si2=l5;
si2=i32_load(i->m0,(U64)si2+4U);
l3=si2;
si3=0U;
si4=l3;
si5=0U;
si4=(U32)((I32)si4>(I32)si5);
si2=si4?si2:si3;
l3=si2;
si3=l5;
si3=i32_load(i->m0,(U64)si3+8U);
l4=si3;
si4=l3;
si5=l4;
si6=l3;
si5=(U32)((I32)si5>(I32)si6);
si3=si5?si3:si4;
si4=l3;
si3-=si4;
si4=1U;
si3+=si4;
f2426(i,si0,si1,si2,si3);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f2408(i,si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+24U);
i64_store(i->m0,(U64)si0,sj1);
sj0=l6;
si0=(U32)(sj0);
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
f1704(i,si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=l4;
si2=1168816U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1169784U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f1080(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
f1035(i,si0);
si0=l0;
si1=8U;
si0+=si1;
f1086(i,si0);
si0=l0;
f352(i,si0);
L0:;
}

void f154(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
F64 l15=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
F64 sd0,sd1;
si0=i->g0;
si1=16U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+4U);
l8=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l6;
si1=l9;
si2=20U;
si1*=si2;
si2=l4;
si1+=si2;
f155(i,si0,si1);
si0=l6;
si1=l3;
si2=l4;
f156(i,si0,si1,si2);
si0=l9;
si1=3U;
si0<<=(si1&31);
l9=si0;
si0=l8;
l10=si0;
L2:;
{
si0=l9;
if(si0){
goto L3;
}
si0=l6;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
goto L1;
L3:;
si0=l6;
si1=1057740U;
si2=1057743U;
f157(i,si0,si1,si2);
si0=l7;
si1=4U;
si0+=si1;
si1=l10;
f158(i,si0,si1);
si0=l6;
si1=l7;
si1=i32_load(i->m0,(U64)si1+8U);
l11=si1;
si2=l7;
si2=i32_load(i->m0,(U64)si2+12U);
f156(i,si0,si1,si2);
si0=l7;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l11;
f58(i,si0,si1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l10;
si1=8U;
si0+=si1;
l10=si0;
goto L2;
}
L1:;
sj0=0ULL;
l12=sj0;
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
{
si0=l1;
si1=92U;
si0+=si1;
l9=si0;
si0=l1;
si0=i32_load16_u(i->m0,(U64)si0+226U);
l13=si0;
si1=12U;
si0*=si1;
l10=si0;
si0=-1U;
l6=si0;
L8:;
{
si0=l10;
if(si0){
goto L9;
}
si0=l13;
l6=si0;
goto L7;
L9:;
si0=l9;
si0=i32_load(i->m0,(U64)si0+8U);
l11=si0;
si0=l9;
si0=i32_load(i->m0,(U64)si0+4U);
l14=si0;
si0=l10;
si1=-12U;
si0+=si1;
l10=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
si0=l3;
si1=l4;
si2=l14;
si3=l11;
si0=f159(i,si0,si1,si2,si3);
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L8;
default:
goto L7;
}
L10:;
}
si0=l1;
si1=l6;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd0=f64_load(i->m0,(U64)si0);
l15=sd0;
sj0=1ULL;
l12=sj0;
goto L4;
L7:;
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=232U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
goto L6;
}
L5:;
L4:;
si0=l5;
si0=i32_load(i->m0,(U64)si0);
si1=l8;
f19(i,si0,si1);
si0=l0;
sd1=l15;
f64_store(i->m0,(U64)si0+8U,sd1);
si0=l0;
sj1=l12;
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2423(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=0U;
l6=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l3;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
if(si0){
goto L2;
}
si0=1U;
l6=si0;
L3:;
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store8(i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=l3;
si1=1U;
si0+=si1;
l7=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l6=si0;
L5:;
{
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L6;
}
si0=l0;
si1=256U;
i32_store16(i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l2;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l5;
si1=60U;
si0+=si1;
si1=l1;
si2=1124685U;
si3=2U;
si4=l5;
si5=68U;
si4+=si5;
si5=2U;
si6=1U;
si7=1U;
si8=0U;
f1872(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+60U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+60U);
l8=si0;
si1=8U;
si0>>=(si1&31);
l9=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+64U);
l10=si0;
goto L7;
L8:;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+64U);
l10=si1;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l10;
si0=i32_load8_u(i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l10;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l10;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=1124685U;
si3=2U;
si0=f358(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
f1172(i,si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(i->m0,(U64)si0);
l11=sj0;
si0=l5;
sj0=i64_load(i->m0,(U64)si0+24U);
l12=sj0;
si0=l5;
si1=8U;
si0+=si1;
si1=l6;
f1172(i,si0,si1);
sj0=l12;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
sj0^=sj1;
sj1=l11;
si2=l5;
si3=8U;
si2+=si3;
si3=8U;
si2+=si3;
sj2=i64_load(i->m0,(U64)si2);
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L9;
}
si0=l5;
si1=76U;
si0+=si1;
f1350(i,si0);
si0=0U;
l10=si0;
si0=1U;
l8=si0;
si0=0U;
l9=si0;
goto L7;
L9:;
si0=13U;
l8=si0;
L7:;
si0=l8;
si1=255U;
si0&=si1;
l8=si0;
si1=13U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l9;
si1=8U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
l3=si0;
goto L10;
L11:;
si0=l3;
si1=-256U;
si0&=si1;
si1=13U;
si0|=si1;
l3=si0;
L10:;
si0=l3;
si1=255U;
si0&=si1;
si1=13U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=l10;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l5;
si1=40U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f1616(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+44U);
l8=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+40U);
l10=si0;
si0=l5;
si1=48U;
si0+=si1;
f1032(i,si0);
si0=l10;
if(si0){
goto L12;
}
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l8;
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
L12:;
}
si0=l0;
si1=0U;
i32_store16(i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
i32_store(i->m0,(U64)si0+4U,si1);
L1:;
si0=l4;
f1039(i,si0);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

F64 f513(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
F64 l3=0;
F64 l4=0;
U32 si0,si1,si2;
F64 sd0,sd1,sd2,sd3;
sd0=INFINITY;
l3=sd0;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
sd0=f64_load(i->m0,(U64)si0);
l3=sd0;
si0=l2;
sd0=f64_load(i->m0,(U64)si0);
l4=sd0;
si0=l0;
si1=255U;
si0&=si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
case 2:
goto L13;
case 3:
goto L12;
case 4:
goto L11;
case 5:
goto L10;
case 6:
goto L9;
case 7:
goto L8;
case 8:
goto L7;
case 9:
goto L6;
case 10:
goto L5;
case 11:
goto L4;
case 12:
goto L3;
case 13:
goto L2;
default:
goto L15;
}
L15:;
sd0=l3;
sd1=l4;
sd2=l3;
sd2=fabs(sd2);
sd3=1.7763568394002505e-15;
si2=sd2 > sd3;
sd0=si2?sd0:sd1;
goto L0;
L14:;
sd0=l3;
sd1=l4;
sd2=l3;
sd2=fabs(sd2);
sd3=1.7763568394002505e-15;
si2=sd2 <= sd3;
sd0=si2?sd0:sd1;
goto L0;
L13:;
sd0=1;
sd1=0;
sd2=l3;
sd3=l4;
sd2-=sd3;
sd2=fabs(sd2);
sd3=1.7763568394002505e-15;
si2=sd2 > sd3;
sd0=si2?sd0:sd1;
goto L0;
L12:;
sd0=1;
sd1=0;
sd2=l3;
sd3=l4;
sd2-=sd3;
sd2=fabs(sd2);
sd3=1.7763568394002505e-15;
si2=sd2 <= sd3;
sd0=si2?sd0:sd1;
goto L0;
L11:;
sd0=1;
sd1=0;
sd2=l3;
sd3=l4;
si2=sd2 >= sd3;
sd0=si2?sd0:sd1;
goto L0;
L10:;
sd0=1;
sd1=0;
sd2=l3;
sd3=l4;
si2=sd2 <= sd3;
sd0=si2?sd0:sd1;
goto L0;
L9:;
sd0=1;
sd1=0;
sd2=l3;
sd3=l4;
si2=sd2 > sd3;
sd0=si2?sd0:sd1;
goto L0;
L8:;
sd0=1;
sd1=0;
sd2=l3;
sd3=l4;
si2=sd2 < sd3;
sd0=si2?sd0:sd1;
goto L0;
L7:;
sd0=l3;
sd1=l4;
sd0+=sd1;
goto L0;
L6:;
sd0=l3;
sd1=l4;
sd0-=sd1;
goto L0;
L5:;
sd0=l3;
sd1=l4;
sd0*=sd1;
goto L0;
L4:;
sd0=l3;
sd1=l4;
sd0/=sd1;
goto L0;
L3:;
sd0=l3;
sd1=l4;
sd0=f3111(i,sd0,sd1);
goto L0;
L2:;
sd0=l3;
sd1=l4;
sd0=f3088(i,sd0,sd1);
l3=sd0;
L1:;
sd0=l3;
L0:;
return sd0;
}

void f695(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
F64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=832U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
l4=si0;
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L10;
default:
goto L9;
}
L11:;
si0=l0;
si1=1U;
i32_store16(i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L9:;
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
f648(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+65U);
l5=si0;
si1=2U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l2;
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L3;
case 2:
goto L3;
case 3:
goto L3;
case 4:
goto L3;
case 5:
goto L14;
default:
goto L3;
}
L14:;
si0=l1;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
goto L4;
L13:;
si0=l1;
sj0=i64_load16_u(i->m0,(U64)si0);
si1=l1;
sj1=i64_load8_u(i->m0,(U64)si1+2U);
sj2=16ULL;
sj1<<=(sj2&63);
sj0|=sj1;
l6=sj0;
goto L4;
L12:;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+48U);
l6=sj0;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+56U);
l7=sj0;
si0=l5;
if(si0){
goto L15;
}
sj0=l6;
sj1=22ULL;
sj0+=sj1;
sj1=59ULL;
si0=sj0 > sj1;
if(si0){
goto L15;
}
sj0=l7;
sj1=9007199254740992ULL;
si0=sj0 > sj1;
if(si0){
goto L15;
}
sj0=l6;
sj1=23ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L17;
}
si0=l3;
si1=32U;
si0+=si1;
sj1=l7;
sj2=0ULL;
sj3=l6;
si3=(U32)(sj3);
si4=3U;
si3<<=(si4&31);
si4=1063928U;
si3+=si4;
sj3=i64_load(i->m0,(U64)si3);
sj4=0ULL;
f3109(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj0=i64_load(i->m0,(U64)si0+40U);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L15;
}
si0=l3;
sj0=i64_load(i->m0,(U64)si0+32U);
l8=sj0;
sj1=9007199254740992ULL;
si0=sj0 > sj1;
if(si0){
goto L15;
}
sj0=l8;
sd0=(F64)(sj0);
sd1=1e+22;
sd0*=sd1;
l9=sd0;
goto L16;
L17:;
sj0=l6;
si0=(U32)(sj0);
l2=si0;
sj0=l7;
sd0=(F64)(sj0);
l9=sd0;
sj0=l6;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L18;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=1063848U;
si0+=si1;
sd0=f64_load(i->m0,(U64)si0);
sd1=l9;
sd0*=sd1;
l9=sd0;
goto L16;
L18:;
sd0=l9;
si1=1063848U;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1-=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0/=sd1;
l9=sd0;
L16:;
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sd1=l9;
sd1=-(sd1);
sd2=l9;
si3=l4;
si4=45U;
si3=si3 == si4;
sd1=si3?sd1:sd2;
f64_store(i->m0,(U64)si0+8U,sd1);
goto L1;
L15:;
si0=l3;
si1=16U;
si0+=si1;
sj1=l6;
sj2=l7;
f696(i,si0,sj1,sj2);
si0=l3;
si0=i32_load(i->m0,(U64)si0+24U);
l10=si0;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+16U);
l8=sj0;
si0=l5;
si0=!(si0);
if(si0){
goto L21;
}
si0=l10;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L20;
}
L21:;
si0=l10;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L19;
}
goto L5;
L20:;
si0=l3;
sj1=l6;
sj2=l7;
sj3=1ULL;
sj2+=sj3;
f696(i,si0,sj1,sj2);
sj0=l8;
si1=l3;
sj1=i64_load(i->m0,(U64)si1);
si0=sj0 != sj1;
if(si0){
goto L19;
}
si0=l10;
si1=l3;
si1=i32_load(i->m0,(U64)si1+8U);
si0=si0 == si1;
if(si0){
goto L5;
}
L19:;
si0=l3;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
f647(i,si0,si1,si2);
si0=0U;
l10=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+52U);
l2=si0;
si1=-324U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l2;
si1=309U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L22;
}
si0=2047U;
l10=si0;
sj0=0ULL;
l8=sj0;
goto L5;
L22:;
si0=l2;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L23;
}
si0=0U;
l1=si0;
goto L7;
L23:;
si0=0U;
l1=si0;
L24:;
{
si0=60U;
l5=si0;
si0=l2;
si1=19U;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l2;
si1=1063764U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l5=si0;
L25:;
si0=l3;
si1=48U;
si0+=si1;
si1=l5;
f646(i,si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+52U);
l2=si0;
si1=-2048U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L26;
}
si0=l5;
si1=l1;
si0+=si1;
l1=si0;
si0=l2;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
goto L24;
L26:;
}
si0=0U;
l10=si0;
goto L6;
L8:;
si0=l0;
si1=257U;
i32_store16(i->m0,(U64)si0,si1);
goto L1;
L7:;
L28:;
{
si0=l2;
if(si0){
goto L30;
}
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+56U);
l2=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=2U;
si1=1U;
si2=l2;
si3=2U;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
goto L29;
L30:;
si0=60U;
l5=si0;
si0=0U;
si1=l2;
si0-=si1;
l2=si0;
si1=19U;
si0=si0 >= si1;
if(si0){
goto L29;
}
si0=l2;
si1=1063764U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l5=si0;
L29:;
si0=l3;
si1=48U;
si0+=si1;
si1=l5;
f640(i,si0,si1);
si0=2047U;
l10=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+52U);
l2=si0;
si1=2047U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L6;
}
si0=l1;
si1=l5;
si0-=si1;
l1=si0;
si0=l2;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L28;
}
}
L27:;
si0=l1;
si1=-1U;
si0+=si1;
l2=si0;
si1=-1023U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L31;
}
L32:;
{
si0=l3;
si1=48U;
si0+=si1;
si1=-1022U;
si2=l2;
si1-=si2;
l1=si1;
si2=60U;
si3=l1;
si4=60U;
si3=si3 < si4;
si1=si3?si1:si2;
l1=si1;
f646(i,si0,si1);
si0=l1;
si1=l2;
si0+=si1;
l2=si0;
si1=-1022U;
si0=si0 < si1;
if(si0){
goto L32;
}
}
L31:;
si0=l2;
si1=1023U;
si0+=si1;
l10=si0;
si1=2046U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L33;
}
si0=2047U;
l10=si0;
sj0=0ULL;
l8=sj0;
goto L5;
L33:;
si0=l3;
si1=48U;
si0+=si1;
si1=53U;
f640(i,si0,si1);
sj0=0ULL;
l6=sj0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+48U);
l5=si0;
si0=!(si0);
if(si0){
goto L35;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+52U);
l11=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L35;
}
si0=l11;
si1=18U;
si0=si0 > si1;
if(si0){
goto L37;
}
si0=l11;
if(si0){
goto L39;
}
sj0=0ULL;
l6=sj0;
goto L38;
L39:;
si0=l11;
si1=1U;
si0=si0 != si1;
if(si0){
goto L41;
}
sj0=0ULL;
l6=sj0;
si0=0U;
l12=si0;
goto L40;
L41:;
si0=l11;
si1=1U;
si0&=si1;
l13=si0;
si0=l11;
si1=-2U;
si0&=si1;
l12=si0;
si0=0U;
l1=si0;
sj0=0ULL;
l6=sj0;
L42:;
{
sj0=l6;
sj1=10ULL;
sj0*=sj1;
l6=sj0;
si0=l1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L43;
}
sj0=l6;
si1=l3;
si2=48U;
si1+=si2;
si2=l1;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
L43:;
sj0=l6;
sj1=10ULL;
sj0*=sj1;
l6=sj0;
si0=l1;
si1=1U;
si0+=si1;
l14=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L44;
}
sj0=l6;
si1=l3;
si2=48U;
si1+=si2;
si2=l1;
si1+=si2;
si2=9U;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
L44:;
si0=l14;
si1=1U;
si0+=si1;
l1=si0;
si1=l12;
si0=si0 != si1;
if(si0){
goto L42;
}
}
si0=l13;
si0=!(si0);
if(si0){
goto L38;
}
L40:;
sj0=l6;
sj1=10ULL;
sj0*=sj1;
l6=sj0;
si0=l12;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L38;
}
sj0=l6;
si1=l3;
si2=48U;
si1+=si2;
si2=l12;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
L38:;
si0=l11;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L45;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l11;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l1=si0;
si0=l11;
si1=1U;
si0+=si1;
si1=l5;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l1;
si1=255U;
si0&=si1;
si1=5U;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+824U);
if(si0){
goto L46;
}
si0=l11;
si0=!(si0);
if(si0){
goto L45;
}
si0=l11;
si1=l3;
si2=48U;
si1+=si2;
si0+=si1;
si1=7U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L46;
}
goto L45;
L47:;
si0=l1;
si1=255U;
si0&=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L45;
}
L46:;
sj0=l6;
sj1=1ULL;
sj0+=sj1;
l6=sj0;
L45:;
sj0=l6;
sj1=9007199254740992ULL;
si0=sj0 < sj1;
if(si0){
goto L36;
}
L37:;
si0=l3;
si1=48U;
si0+=si1;
si1=1U;
f646(i,si0,si1);
sj0=0ULL;
l6=sj0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+48U);
l5=si0;
si0=!(si0);
if(si0){
goto L48;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+52U);
l12=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L48;
}
sj0=-1ULL;
l6=sj0;
si0=l12;
si1=18U;
si0=si0 > si1;
if(si0){
goto L48;
}
si0=l12;
if(si0){
goto L50;
}
sj0=0ULL;
l6=sj0;
goto L49;
L50:;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L52;
}
sj0=0ULL;
l6=sj0;
si0=0U;
l14=si0;
goto L51;
L52:;
si0=l12;
si1=1U;
si0&=si1;
l11=si0;
si0=l12;
si1=-2U;
si0&=si1;
l14=si0;
si0=0U;
l1=si0;
sj0=0ULL;
l6=sj0;
L53:;
{
sj0=l6;
sj1=10ULL;
sj0*=sj1;
l6=sj0;
si0=l1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L54;
}
sj0=l6;
si1=l3;
si2=48U;
si1+=si2;
si2=l1;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
L54:;
sj0=l6;
sj1=10ULL;
sj0*=sj1;
l6=sj0;
si0=l1;
si1=1U;
si0+=si1;
l10=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L55;
}
sj0=l6;
si1=l3;
si2=48U;
si1+=si2;
si2=l1;
si1+=si2;
si2=9U;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
L55:;
si0=l10;
si1=1U;
si0+=si1;
l1=si0;
si1=l14;
si0=si0 != si1;
if(si0){
goto L53;
}
}
si0=l11;
si0=!(si0);
if(si0){
goto L49;
}
L51:;
sj0=l6;
sj1=10ULL;
sj0*=sj1;
l6=sj0;
si0=l14;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L49;
}
sj0=l6;
si1=l3;
si2=48U;
si1+=si2;
si2=l14;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
L49:;
si0=l12;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L48;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l12;
si0+=si1;
si1=8U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l1=si0;
si0=l12;
si1=1U;
si0+=si1;
si1=l5;
si0=si0 != si1;
if(si0){
goto L57;
}
si0=l1;
si1=255U;
si0&=si1;
si1=5U;
si0=si0 != si1;
if(si0){
goto L57;
}
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+824U);
if(si0){
goto L56;
}
si0=l12;
si0=!(si0);
if(si0){
goto L48;
}
si0=l12;
si1=l3;
si2=48U;
si1+=si2;
si0+=si1;
si1=7U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=1U;
si0&=si1;
if(si0){
goto L56;
}
goto L48;
L57:;
si0=l1;
si1=255U;
si0&=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L48;
}
L56:;
sj0=l6;
sj1=1ULL;
sj0+=sj1;
l6=sj0;
L48:;
si0=2047U;
l10=si0;
si0=l2;
si1=1024U;
si0+=si1;
l1=si0;
si1=2046U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L6;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
l10=si0;
L36:;
sj0=l6;
sj1=4503599627370495ULL;
si0=sj0 > sj1;
if(si0){
goto L34;
}
L35:;
si0=l2;
si1=1022U;
si0+=si1;
l10=si0;
L34:;
sj0=l6;
sj1=4503599627370495ULL;
sj0&=sj1;
l8=sj0;
goto L5;
L6:;
sj0=0ULL;
l8=sj0;
L5:;
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
sj1=(U64)(si1);
sj2=52ULL;
sj1<<=(sj2&63);
sj2=l8;
sj1|=sj2;
sd1=f64_reinterpret_i64(sj1);
l9=sd1;
sd1=-(sd1);
sd2=l9;
si3=l4;
si4=45U;
si3=si3 == si4;
sd1=si3?sd1:sd2;
f64_store(i->m0,(U64)si0+8U,sd1);
goto L1;
L4:;
sj0=l6;
sj1=-2314885530818453537ULL;
sj0&=sj1;
l6=sj0;
sj1=4607561ULL;
si0=sj0 == sj1;
if(si0){
goto L58;
}
sj0=l6;
sj1=5128526ULL;
si0=sj0 == sj1;
if(si0){
goto L59;
}
sj0=l6;
sj1=6436850368004902473ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
sd0=INFINITY;
l9=sd0;
si0=l2;
si1=8U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L3;
L59:;
sd0=INFINITY;
l9=sd0;
si0=l2;
si1=3U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L2;
L58:;
sd0=INFINITY;
l9=sd0;
si0=l2;
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+1U,si1);
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
sd1=l9;
sd1=-(sd1);
sd2=l9;
si3=l4;
si4=45U;
si3=si3 == si4;
sd1=si3?sd1:sd2;
f64_store(i->m0,(U64)si0+8U,sd1);
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
L1:;
si0=l3;
si1=832U;
si0+=si1;
i->g0=si0;
L0:;
}

void f293(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
L2:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f323(i,si0,si1);
L3:;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
goto L2;
}
L1:;
L0:;
}

void f1767(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=12U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+1U);
l3=si0;
si0=l1;
si0=i32_load16_u(i->m0,(U64)si0+2U);
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l5=si0;
si1=0U;
si2=l5;
si2=i32_load(i->m0,(U64)si2);
l6=si2;
si3=l6;
si4=1U;
si3=si3 == si4;
l6=si3;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=16U;
si0+=si1;
sj0=i64_load(i->m0,(U64)si0);
l7=sj0;
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+4U);
l3=si1;
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l5;
f87(i,si0);
L9:;
si0=l6;
si1=255U;
si0&=si1;
if(si0){
goto L4;
}
si0=l2;
sj1=l7;
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=l2;
si2=32U;
si1+=si2;
f1767(i,si0,si1);
goto L5;
L8:;
si0=l2;
si1=l5;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l8=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L3;
}
si0=l5;
si1=16U;
si0+=si1;
l9=si0;
si0=l5;
si1=8U;
si0+=si1;
l6=si0;
si0=l5;
si1=l8;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l0;
si1=l9;
f1640(i,si0,si1);
si0=l6;
si1=l6;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=28U;
si0+=si1;
f1034(i,si0);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=12U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L2;
L7:;
si0=l0;
si1=l1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
goto L1;
L6:;
si0=l2;
si1=l6;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l9;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=32U;
si0+=si1;
f986(i,si0);
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=l3;
i32_store8(i->m0,(U64)si0+1U,si1);
si0=l0;
si1=12U;
i32_store8(i->m0,(U64)si0,si1);
L5:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=12U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l2;
sj1=l7;
i64_store(i->m0,(U64)si0+32U,sj1);
si0=1178224U;
si1=43U;
si2=l2;
si3=32U;
si2+=si3;
si3=1119068U;
si4=1161424U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l2;
si1=8U;
si0+=si1;
sj1=1ULL;
f988(i,si0,sj1);
f99(i);
UNREACHABLE;
L2:;
si0=l1;
f1032(i,si0);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2717(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1;
si0=l1;
si1=l2;
si0=f2716(i,si0,si1);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
f2714(i,si0,si1);
goto L0;
L1:;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
L0:;
}

void f3051(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
switch(si0){
case 0:
goto L2;
case 1:
goto L2;
default:
goto L1;
}
L2:;
si0=l2;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+16U);
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1+17U);
f1456(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+16U);
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1+17U);
f1456(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1570(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f1625(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
sj0=i64_load(i->m0,(U64)si0+24U);
l5=sj0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+24U);
si1=l4;
si2=28U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si0=f1626(i,si0,si1);
l6=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
f1625(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
sj0=i64_load(i->m0,(U64)si0+24U);
l7=sj0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+24U);
si1=l4;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si0=f1626(i,si0,si1);
l3=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l8;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
goto L7;
L8:;
si0=l4;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l9=si0;
L7:;
sj0=l7;
sj1=32ULL;
sj0>>=(sj1&63);
l10=sj0;
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l8;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l11=si0;
goto L9;
L10:;
si0=l4;
si1=l8;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l11=si0;
L9:;
sj0=l5;
si0=(U32)(sj0);
l8=si0;
sj0=l10;
si0=(U32)(sj0);
l2=si0;
sj0=l7;
si0=(U32)(sj0);
l12=si0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l11;
si2=l9;
si1+=si2;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l4;
si2=20U;
si1+=si2;
si0=f1634(i,si0,si1);
l1=si0;
if(si0){
goto L11;
}
si0=l0;
si1=l6;
si1=i32_load(i->m0,(U64)si1);
si2=l3;
si2=i32_load(i->m0,(U64)si2);
si1=f1635(i,si1,si2);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L11:;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=1128456U;
f14(i,si0);
UNREACHABLE;
L5:;
si0=0U;
si1=0U;
si2=1128440U;
f4(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1128488U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=1128504U;
f14(i,si0);
UNREACHABLE;
L2:;
si0=1U;
si1=1U;
si2=1128472U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l8;
si0=!(si0);
if(si0){
goto L12;
}
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L12:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f764(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
l4=si0;
si0=f741(i);
l5=si0;
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=8U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l3;
f762(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
l5=si0;
L1:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(i->m0,(U64)si0+32U);
si1=l5;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=4U;
si0<<=(si1&31);
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
si0+=si1;
si1=-16U;
si0+=si1;
si1=l1;
f763(i,si0,si1);
goto L2;
L4:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=f741(i);
l6=si0;
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l6;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=8U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l3;
f762(i,si0,si1);
L2:;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
goto L1;
}
L0:;
}

void f1257(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l1;
si0=i32_load(i->m0,(U64)si0+64U);
l2=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+68U);
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si3=4U;
si2+=si3;
si3=l1;
si3=i32_load(i->m0,(U64)si3);
si4=3U;
si3=si3 > si4;
si1=si3?si1:si2;
si2=l2;
si3=20U;
si2*=si3;
si1+=si2;
l1=si1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0+8U,si1);
L0:;
}

void f2406(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l6;
i64_store(i->m0,(U64)si0+64U,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=l5;
si2=64U;
si1+=si2;
f1268(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+48U);
l4=si0;
if(si0){
goto L3;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+52U);
l4=si1;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l5;
si1=64U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si1=i32_load8_u(i->m0,(U64)si1);
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f1737(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+68U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+64U);
l6=sj1;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=24U;
si0+=si1;
si0=f1738(i,si0);
l7=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
goto L5;
L6:;
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l4=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
L5:;
si0=l5;
si1=48U;
si0+=si1;
si1=l3;
si2=l4;
si1=f1139(i,si1,si2);
f1335(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+48U);
l3=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+56U);
i64_store(i->m0,(U64)si0+72U,sj1);
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+52U);
i32_store(i->m0,(U64)si0+68U,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l5;
si1=36U;
si0+=si1;
si1=l2;
si2=l7;
si3=l5;
si4=64U;
si3+=si4;
f2335(i,si0,si1,si2,si3);
goto L7;
L8:;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+52U);
i32_store(i->m0,(U64)si0+40U,si1);
si0=l5;
si1=-2147483648U;
i32_store(i->m0,(U64)si0+36U,si1);
L7:;
si0=l0;
si1=l5;
si2=36U;
si1+=si2;
f2407(i,si0,si1);
sj0=l6;
si0=(U32)(sj0);
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
f1704(i,si0,si1);
si0=l5;
si1=20U;
si0+=si1;
f1035(i,si0);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=1U;
si1=l4;
si2=1166116U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+52U);
i32_store(i->m0,(U64)si0+68U,si1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+64U,si1);
si0=1178224U;
si1=43U;
si2=l5;
si3=64U;
si2+=si3;
si3=1119036U;
si4=1166116U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1166400U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1166116U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f2729(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+4U);
si1-=si2;
si2=2U;
si1>>=(si2&31);
l1=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

U32 f842(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l1;
si1=l2;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si2=1111844U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l2;
si2=20U;
si1*=si2;
si0+=si1;
L0:;
return si0;
}

void f1879(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=8U;
si0+=si1;
l2=si0;
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si2=3U;
si1=si1 > si2;
l4=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si1=l3;
si2=3U;
si3=l4;
si1=si3?si1:si2;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l0;
si2=l4;
si0=si2?si0:si1;
l2=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=4U;
si1+=si2;
si2=l4;
si0=si2?si0:si1;
l0=si0;
goto L1;
L2:;
si0=l0;
f1881(i,si0);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
L1:;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=4U;
si0+=si1;
si1=l0;
si2=l5;
si3=2U;
si2<<=(si3&31);
si0=f3076(i,si0,si1,si2);
L3:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l5;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f450(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=0U;
f547(i,si0,si1,si2);
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l1;
si2=l2;
si3=2U;
si2<<=(si3&31);
si0=f3065(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1235(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1121816U;
si2=16U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L2:;
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1121832U;
si2=8U;
si3=1121840U;
si4=6U;
si5=l2;
si6=12U;
si5+=si6;
si6=1121848U;
si0=f508(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1940(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si1=i32_load(i->m0,(U64)si1);
si2=8U;
si1+=si2;
f392(i,si0,si1);
si0=l1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+8U);
si2=l2;
si2=i32_load(i->m0,(U64)si2+12U);
si0=f449(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f1238(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=5U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
f1118(i,si0);
si0=l0;
si1=12U;
si0+=si1;
f1047(i,si0);
L1:;
L0:;
}

void f2198(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
f1338(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+12U);
l4=si1;
f1205(i,si0,si1);
si0=l4;
si1=3U;
si0<<=(si1&31);
l4=si0;
L2:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l1;
f2182(i,si0,si1);
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
goto L2;
}
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+28U);
si1=l1;
f2184(i,si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f2040(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
l5=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
{
si0=l0;
si1=92U;
si0+=si1;
l6=si0;
si0=l0;
si0=i32_load16_u(i->m0,(U64)si0+226U);
l7=si0;
si1=12U;
si0*=si1;
l8=si0;
si0=-1U;
l9=si0;
L4:;
{
si0=l8;
if(si0){
goto L5;
}
si0=l7;
l9=si0;
goto L3;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
f392(i,si0,si1);
si0=l8;
si1=-12U;
si0+=si1;
l8=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l6;
si1=12U;
si0+=si1;
l6=si0;
si0=l2;
si1=l3;
si2=l4;
si2=i32_load(i->m0,(U64)si2+8U);
si3=l4;
si3=i32_load(i->m0,(U64)si3+12U);
si0=f159(i,si0,si1,si2,si3);
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L4;
default:
goto L3;
}
L6:;
}
si0=l0;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
goto L1;
L3:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l0;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=228U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
goto L2;
}
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

void f2094(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=48U;
si0+=si1;
si1=1116632U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store8(i->m0,(U64)si0+56U,si1);
si0=l2;
si1=32U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l1;
si1=l2;
si2=24U;
si1+=si2;
si0=f1791(i,si0,si1);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+12U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1116656U;
si1=55U;
si2=l2;
si3=63U;
si2+=si3;
si3=1116712U;
si4=1116804U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f2774(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
F64 l8=0;
F64 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
F64 sd0,sd1,sd2,sd3,sd4;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
sj0=i64_load(i->m0,(U64)si0);
l7=sj0;
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l7;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=8U;
si0+=si1;
sd0=f2345(i,si0);
l8=sd0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=1U;
si1=1U;
si2=1172804U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1172804U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l7=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l7;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=8U;
si0+=si1;
sd1=l8;
si2=l5;
si3=8U;
si2+=si3;
sd2=f2345(i,si2);
l9=sd2;
sd3=l8;
sd4=l9;
si3=sd3 <= sd4;
sd1=si3?sd1:sd2;
f2347(i,si0,sd1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1195(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj3;
si0=i->g0;
si1=192U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=124U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si2=l3;
si3=5U;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
goto L1;
L2:;
si0=l2;
si1=32U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+36U);
l5=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+32U);
l3=si0;
L1:;
si0=l3;
si1=l5;
si2=l4;
sj0=f1196(i,si0,si1,si2);
l6=sj0;
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l5;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
goto L4;
L5:;
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l7=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
l5=si0;
L4:;
sj0=l6;
si1=l5;
si2=l7;
sj0=f1197(i,sj0,si1,si2);
l6=sj0;
L3:;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+8U);
si2=8U;
si1+=si2;
f392(i,si0,si1);
si0=l2;
si1=136U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+16U);
si2=l2;
si2=i32_load(i->m0,(U64)si2+20U);
f80(i,si0,si1,si2);
si0=l2;
si1=128U;
si0+=si1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si2=0U;
si1=si1 != si2;
i32_store8(i->m0,(U64)si0+152U,si1);
si0=l2;
sj1=l6;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+148U,si1);
si0=l2;
si1=l1;
si2=148U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+153U,si1);
si0=l0;
si1=48U;
si0+=si1;
l3=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+48U);
if(si0){
goto L6;
}
si0=l2;
si1=160U;
si0+=si1;
f1198(i,si0);
si0=l3;
f1107(i,si0);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
si2=160U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+160U);
i64_store(i->m0,(U64)si0,sj1);
L6:;
si0=l2;
si1=40U;
si0+=si1;
si0=f1199(i,si0);
l5=si0;
si0=l2;
sj1=l6;
i64_store(i->m0,(U64)si0+176U,sj1);
si0=l2;
si1=l2;
si2=176U;
si1+=si2;
i32_store(i->m0,(U64)si0+188U,si1);
si0=l3;
f1200(i,si0);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+164U,si1);
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=l2;
si2=188U;
si1+=si2;
i32_store(i->m0,(U64)si0+160U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+48U);
si2=l4;
sj3=l6;
si4=l2;
si5=160U;
si4+=si5;
si5=27U;
f1202(i,si0,si1,si2,sj3,si4,si5);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l4=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+48U);
l3=si0;
si1=l4;
si0+=si1;
l7=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l8=si0;
si0=l2;
sj0=i64_load(i->m0,(U64)si0+176U);
l9=sj0;
si0=l7;
sj1=l6;
si1=(U32)(sj1);
si2=25U;
si1>>=(si2&31);
l10=si1;
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=l0;
si1=i32_load(i->m0,(U64)si1+52U);
si2=l4;
si3=-8U;
si2+=si3;
si1&=si2;
si0+=si1;
si1=8U;
si0+=si1;
si1=l10;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=60U;
si0+=si1;
l7=si0;
si1=l7;
si1=i32_load(i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=56U;
si0+=si1;
l7=si0;
si1=l7;
si1=i32_load(i->m0,(U64)si1);
si2=l8;
si3=1U;
si2&=si3;
si1-=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
si2=l4;
si1-=si2;
si2=24U;
si1*=si2;
si0+=si1;
si1=-24U;
si0+=si1;
l3=si0;
sj1=l9;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=20U;
si0+=si1;
si1=l5;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=4U;
i32_store8(i->m0,(U64)si0,si1);
goto L7;
L8:;
si0=l2;
si1=160U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
si2=0U;
si3=l4;
si2-=si3;
si3=24U;
si2*=si3;
si1+=si2;
si2=-24U;
si1+=si2;
l3=si1;
si2=16U;
si1+=si2;
l4=si1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=l3;
si2=8U;
si1+=si2;
l7=si1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+160U,sj1);
si0=l3;
si1=12U;
si0+=si1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=20U;
si0+=si1;
si1=l5;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=4U;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+160U);
si1=5U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si1=160U;
si0+=si1;
f1112(i,si0);
L7:;
si0=l0;
si1=l0;
si1=i32_load8_u(i->m0,(U64)si1+144U);
si2=243U;
si1&=si2;
i32_store8(i->m0,(U64)si0+144U,si1);
si0=l2;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f124(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l1;
si1=40U;
si0+=si1;
si1=l1;
si2=l1;
si2=i32_load(i->m0,(U64)si2+120U);
f201(i,si0,si1,si2);
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+8U);
si3=l1;
si3=i32_load(i->m0,(U64)si3+120U);
si4=1053808U;
si1=f122(i,si1,si2,si3,si4);
sj1=i64_load(i->m0,(U64)si1+4U);
i64_store(i->m0,(U64)si0,sj1);
L0:;
}

void f2970(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=32U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
f1720(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+36U);
l4=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+32U);
l6=si0;
si1=l4;
si0=f1721(i,si0,si1);
l7=si0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=8U;
si0+=si1;
l8=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l9=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l9;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
goto L3;
L4:;
si0=l5;
si1=24U;
si0+=si1;
si1=l8;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+28U);
l9=si0;
L3:;
si0=l9;
si0=!(si0);
if(si0){
goto L5;
}
si0=l8;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l9;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
goto L6;
L7:;
si0=l5;
si1=16U;
si0+=si1;
si1=l8;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+20U);
l10=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
l9=si0;
L6:;
si0=l5;
si1=l9;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l9;
si2=l10;
si1+=si2;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l5;
si1=32U;
si0+=si1;
si0=f2971(i,si0);
if(si0){
goto L5;
}
si0=l8;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l9;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
goto L8;
L9:;
si0=l5;
si1=8U;
si0+=si1;
si1=l8;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l9=si0;
L8:;
si0=l5;
si1=32U;
si0+=si1;
si1=l9;
si2=l3;
f630(i,si0,si1,si2);
si0=l5;
si1=32U;
si0+=si1;
si0=f1479(i,si0);
l3=si0;
si0=l7;
f1035(i,si0);
si0=l7;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
L5:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
si1=l4;
f1704(i,si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=0U;
si1=0U;
si2=1175000U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1175000U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f1865(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l1;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=-2147483647U;
l1=si0;
goto L1;
L2:;
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l1;
f1880(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
L1:;
si0=l1;
si1=l3;
f532(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+16U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1490(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
si1=i32_load(i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
si2=-8U;
si1&=si2;
si2=l1;
si1+=si2;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f1400(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=336U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l2;
si1=108U;
si0+=si1;
si1=l1;
si2=108U;
si0=f3065(i,si0,si1,si2);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+212U);
si2=l2;
si2=i32_load(i->m0,(U64)si2+208U);
si1-=si2;
f1226(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l2;
si2=8U;
si1+=si2;
si2=l2;
si2=i32_load(i->m0,(U64)si2+104U);
l3=si2;
si3=8U;
si2=si2 > si3;
l4=si2;
si0=si2?si0:si1;
si1=l2;
si2=8U;
si1+=si2;
si2=4U;
si3=96U;
si4=l4;
si2=si4?si2:si3;
si1+=si2;
l5=si1;
si1=i32_load(i->m0,(U64)si1);
l6=si1;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si0=l3;
si1=8U;
si2=l4;
si0=si2?si0:si1;
l4=si0;
L2:;
{
si0=l6;
si1=l4;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=216U;
si0+=si1;
si1=l2;
si2=108U;
si1+=si2;
si2=108U;
si0=f3065(i,si0,si1,si2);
L4:;
{
si0=l2;
si1=324U;
si0+=si1;
si1=l2;
si2=216U;
si1+=si2;
f1469(i,si0,si1);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+324U);
si1=17U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
si1=216U;
si0+=si1;
f1470(i,si0);
goto L1;
L5:;
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=324U;
si1+=si2;
f1228(i,si0,si1);
goto L4;
}
L3:;
si0=l2;
si1=216U;
si0+=si1;
si1=l2;
si2=108U;
si1+=si2;
f1469(i,si0,si1);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+216U);
si1=17U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+216U);
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l2;
si2=216U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
goto L2;
L6:;
}
si0=l2;
si1=216U;
si0+=si1;
f1229(i,si0);
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=108U;
si0+=si1;
f1470(i,si0);
L1:;
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
si2=100U;
si0=f3065(i,si0,si1,si2);
si0=l2;
si1=336U;
si0+=si1;
i->g0=si0;
L0:;
}

void f555(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=-2147483648U;
si0^=si1;
l2=si0;
si1=4U;
si2=l2;
si3=17U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-12U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
case 2:
goto L2;
default:
goto L1;
}
L4:;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
f6(i,si0,si1);
goto L1;
L3:;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+8U);
f7(i,si0,si1,si2);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
L1:;
si0=l1;
f8(i,si0);
L0:;
}

void f533(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
F32 l7=0;
F32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
F32 sf0,sf1,sf2,sf3,sf4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l5=si1;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l5;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=l4;
si1=1U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l1;
si2=l5;
si1+=si2;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l5;
sj1=i64_load(i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si0=f10(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+12U);
l7=sf0;
si0=l4;
si1=l2;
si2=l3;
si3=1058624U;
f371(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
sf0=l7;
sf1=1;
sf0+=sf1;
sf1=0.5;
sf0*=sf1;
l8=sf0;
sf0=sqrtf(sf0);
l7=sf0;
sf0=1;
sf1=l8;
sf0-=sf1;
sf0=sqrtf(sf0);
l8=sf0;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
si1=512U;
si0+=si1;
l3=si0;
si0=0U;
l1=si0;
L9:;
{
si0=l1;
si1=512U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l6;
si1=l1;
si0+=si1;
sf1=l8;
si2=l5;
si3=l1;
si2+=si3;
l0=si2;
sf2=f32_load(i->m0,(U64)si2);
sf1*=sf2;
f32_store(i->m0,(U64)si0,sf1);
si0=l3;
si1=l1;
si0+=si1;
sf1=l7;
si2=l0;
sf2=f32_load(i->m0,(U64)si2);
sf1*=sf2;
f32_store(i->m0,(U64)si0,sf1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L9;
}
L8:;
si0=1U;
si1=l1;
si2=1058656U;
f4(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=0U;
si1=0U;
si2=1058672U;
f4(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
l5=si1;
si2=l0;
si2=i32_load(i->m0,(U64)si2+8U);
l6=si2;
si3=1U;
si4=1058688U;
si1=f2(i,si1,si2,si3,si4);
si1=i32_load(i->m0,(U64)si1);
si2=1058704U;
si0=f3(i,si0,si1,si2);
l0=si0;
si0=l1;
si1=l5;
si2=l6;
si3=0U;
si4=1058720U;
si1=f2(i,si1,si2,si3,si4);
si1=i32_load(i->m0,(U64)si1);
si2=1058736U;
si0=f3(i,si0,si1,si2);
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si0=l4;
si1=l2;
si2=l3;
si3=1058784U;
f371(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=0U;
l1=si0;
L12:;
{
si0=l1;
si1=512U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si0+=si1;
si1=l6;
si2=l1;
si1+=si2;
l0=si1;
sf1=f32_load(i->m0,(U64)si1);
sf2=1;
si3=l5;
si4=l1;
si3+=si4;
sf3=f32_load(i->m0,(U64)si3);
sf4=1;
sf3+=sf4;
sf4=0.5;
sf3*=sf4;
l7=sf3;
sf2-=sf3;
sf2=sqrtf(sf2);
sf1*=sf2;
f32_store(i->m0,(U64)si0,sf1);
si0=l3;
si1=l1;
si0+=si1;
si1=l0;
sf1=f32_load(i->m0,(U64)si1);
sf2=l7;
sf2=sqrtf(sf2);
sf1*=sf2;
f32_store(i->m0,(U64)si0,sf1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L12;
}
L11:;
si0=0U;
si1=0U;
si2=1058800U;
f4(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=0U;
si1=0U;
si2=1058816U;
f4(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1058608U;
f14(i,si0);
UNREACHABLE;
L4:;
si0=0U;
si1=0U;
si2=1058640U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1058752U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1058768U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2526(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,F32 l4) {
U32 si0,si1,si2,si3,si5;
F32 sf4;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
sf4=l4;
si5=1U;
f2518(i,si0,si1,si2,si3,sf4,si5);
L0:;
}

U32 f1804(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si0=i32_load(i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1121864U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1121868U;
si2=4U;
si3=l2;
si4=12U;
si3+=si4;
si4=1117604U;
si0=f408(i,si0,si1,si2,si3,si4);
l1=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f419(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
f431(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
UNREACHABLE;
L2:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f228(i);
UNREACHABLE;
L0:;
}

void f2374(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
F64 sd1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l6;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sd1=f2345(i,si1);
sd1=-(sd1);
f2347(i,si0,sd1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=0U;
si1=0U;
si2=1168304U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1271(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
f1055(i,si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
l0=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si2=l2;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
L0:;
return si0;
}

void f1517(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si2=l3;
f1654(i,si0,si1,si2);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+16U);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+24U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=257ULL;
sj2=1ULL;
si3=l4;
si4=l4;
si5=8U;
si4+=si5;
si3=f1652(i,si3,si4);
sj1=si3?sj1:sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2924(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l6;
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f1268(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+24U);
l4=si0;
if(si0){
goto L1;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+28U);
l4=si1;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
goto L3;
L4:;
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l4=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
L3:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=l4;
f996(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l3;
si2=l4;
si0=f3065(i,si0,si1,si2);
l3=si0;
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l7;
i32_store(i->m0,(U64)si0+32U,si1);
goto L5;
L6:;
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l5;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+32U,sj1);
L5:;
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f2567(i,si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+24U);
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
f1035(i,si0);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=0U;
si1=0U;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+28U);
i32_store(i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+32U,si1);
si0=1178224U;
si1=43U;
si2=l5;
si3=32U;
si2+=si3;
si3=1119036U;
si4=1174576U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f1096(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
L2:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l0;
f1062(i,si0);
si0=l0;
si1=24U;
si0+=si1;
l0=si0;
goto L2;
}
L1:;
L0:;
}

void f879(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=224U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=160U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+164U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+160U);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
l4=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
i32_store8(i->m0,(U64)si0+141U,si1);
L2:;
si0=l2;
si1=40U;
i32_store8(i->m0,(U64)si0+175U,si1);
si0=l2;
si1=152U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+156U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+152U);
if(si0){
goto L5;
}
si0=l1;
si1=20U;
si0+=si1;
l5=si0;
si0=0U;
l6=si0;
si0=0U;
l7=si0;
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+136U);
l8=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
L6:;
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+192U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+188U,si1);
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+184U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=184U;
si1+=si2;
f841(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+136U);
l8=si0;
L7:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
si0=l2;
si1=l1;
si2=92U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+176U,si1);
si0=l2;
si1=l1;
si2=120U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+180U,si1);
si0=l2;
si1=144U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l5;
si1=l10;
si0+=si1;
si1=0U;
si2=l8;
si3=l3;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+148U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+144U);
if(si0){
goto L8;
}
si0=l2;
si1=216U;
si0+=si1;
l10=si0;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+124U);
i64_store(i->m0,(U64)si0+208U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=136U;
si0+=si1;
si1=l1;
si2=1114737U;
si3=7U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+140U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+136U);
if(si0){
goto L9;
}
si0=l2;
si1=128U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+132U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+128U);
if(si0){
goto L9;
}
si0=l2;
si1=192U;
si0+=si1;
l11=si0;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+124U);
i64_store(i->m0,(U64)si0+184U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l12=si0;
si0=l2;
si1=120U;
si0+=si1;
si1=l1;
f845(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+124U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+120U);
if(si0){
goto L12;
}
si0=l2;
si1=112U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+116U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+112U);
if(si0){
goto L12;
}
L13:;
{
si0=l2;
si1=104U;
si0+=si1;
si1=l1;
f845(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+108U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L13;
}
}
si0=l2;
si1=96U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+100U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+96U);
if(si0){
goto L9;
}
si0=l1;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1+140U);
l12=si1;
si2=1U;
si1=si1 != si2;
i32_store8(i->m0,(U64)si0+140U,si1);
si0=l2;
si1=192U;
si0+=si1;
l11=si0;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+124U);
i64_store(i->m0,(U64)si0+184U,sj1);
si0=l1;
si1=48U;
si0+=si1;
f851(i,si0);
si0=l2;
si1=88U;
si0+=si1;
si1=l1;
f913(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+92U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+88U);
if(si0){
goto L11;
}
si0=0U;
l13=si0;
goto L10;
L12:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+184U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l11;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l12;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si1=l12;
i32_store(i->m0,(U64)si0+20U,si1);
goto L9;
L11:;
si0=l2;
si1=80U;
si0+=si1;
si1=l1;
f847(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+80U);
si1=0U;
si0=si0 != si1;
l13=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+84U);
l1=si0;
L10:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+184U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=l12;
i32_store8(i->m0,(U64)si0+140U,si1);
si0=l1;
si1=132U;
si0+=si1;
si1=l11;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=48U;
si0+=si1;
f853(i,si0);
si0=l13;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=72U;
si0+=si1;
si1=l1;
f904(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+76U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+72U);
if(si0){
goto L9;
}
si0=l2;
si1=64U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+68U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+64U);
if(si0){
goto L9;
}
si0=l2;
si1=192U;
si0+=si1;
l11=si0;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+124U);
i64_store(i->m0,(U64)si0+184U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l12=si0;
si0=l2;
si1=56U;
si0+=si1;
si1=l1;
f845(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+60U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+56U);
if(si0){
goto L16;
}
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+52U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+48U);
if(si0){
goto L16;
}
L17:;
{
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
f845(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+44U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L17;
}
}
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+36U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+32U);
if(si0){
goto L9;
}
si0=l1;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1+140U);
l11=si1;
si2=1U;
si1=si1 != si2;
i32_store8(i->m0,(U64)si0+140U,si1);
si0=l2;
si1=192U;
si0+=si1;
l13=si0;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+124U);
i64_store(i->m0,(U64)si0+184U,sj1);
si0=l1;
si1=48U;
si0+=si1;
f851(i,si0);
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f913(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
if(si0){
goto L15;
}
si0=0U;
l12=si0;
goto L14;
L16:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+184U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l11;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l12;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si1=l12;
i32_store(i->m0,(U64)si0+20U,si1);
goto L9;
L15:;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
f847(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
si1=0U;
si0=si0 != si1;
l12=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l1=si0;
L14:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+184U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=l11;
i32_store8(i->m0,(U64)si0+140U,si1);
si0=l1;
si1=132U;
si0+=si1;
si1=l13;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=48U;
si0+=si1;
f853(i,si0);
si0=l12;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f904(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
L9:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+208U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l10;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l8;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l8;
i32_store(i->m0,(U64)si0+20U,si1);
L8:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
si0=l2;
si1=l2;
si2=175U;
si1+=si2;
i32_store(i->m0,(U64)si0+216U,si1);
si0=l2;
si1=l2;
si2=176U;
si1+=si2;
i32_store(i->m0,(U64)si0+212U,si1);
si0=l2;
si1=l2;
si2=180U;
si1+=si2;
i32_store(i->m0,(U64)si0+208U,si1);
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=40U;
si2=l3;
si3=l6;
si4=l7;
si5=l5;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=208U;
si0+=si1;
si1=l1;
f843(i,si0,si1);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l9;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=l9;
i32_store(i->m0,(U64)si0+20U,si1);
L5:;
si0=1U;
l3=si0;
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L3;
L4:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
si0=l2;
si1=l2;
si2=175U;
si1+=si2;
i32_store(i->m0,(U64)si0+216U,si1);
si0=l2;
si1=l2;
si2=176U;
si1+=si2;
i32_store(i->m0,(U64)si0+212U,si1);
si0=l2;
si1=l2;
si2=180U;
si1+=si2;
i32_store(i->m0,(U64)si0+208U,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l1;
si1=40U;
si2=l3;
si3=l6;
si4=l7;
si5=l5;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
L18:;
si0=l8;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si2=l9;
si0=f842(i,si0,si1,si2);
l8=si0;
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L19;
}
si0=l8;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l9;
i32_store(i->m0,(U64)si0+188U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+200U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+192U,si1);
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+175U);
i32_store8(i->m0,(U64)si0+185U,si1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+184U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=184U;
si1+=si2;
f841(i,si0,si1);
L20:;
si0=l2;
si1=208U;
si0+=si1;
si1=l1;
f843(i,si0,si1);
si0=0U;
l3=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L1;
L19:;
si0=1120424U;
si1=40U;
si2=1111860U;
f16(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=l4;
i32_store8(i->m0,(U64)si0+141U,si1);
L1:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=224U;
si0+=si1;
i->g0=si0;
L0:;
}

void f941(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
f325(i,si0,si1);
si0=l0;
si1=12U;
si0+=si1;
f326(i,si0);
si0=l0;
si1=24U;
si0+=si1;
f326(i,si0);
L0:;
}

void f549(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
F32 sf1,sf2,sf4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=-2147483648U;
si0^=si1;
l4=si0;
si1=4U;
si2=l4;
si3=17U;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si1=-8U;
si0+=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L12;
case 2:
goto L12;
case 3:
goto L12;
case 4:
goto L10;
case 5:
goto L9;
case 6:
goto L12;
case 7:
goto L8;
case 8:
goto L7;
default:
goto L13;
}
L13:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
L12:;
si0=l3;
si1=-2147483633U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L11:;
si0=l0;
si1=l1;
sf1=f32_load(i->m0,(U64)si1+4U);
f32_store(i->m0,(U64)si0+28U,sf1);
goto L4;
L10:;
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
f6(i,si0,si1);
goto L4;
L9:;
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+8U);
f7(i,si0,si1,si2);
goto L4;
L8:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+20U);
if(si0){
goto L4;
}
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
si2=4U;
si1+=si2;
si2=l0;
sf2=f32_load(i->m0,(U64)si2+28U);
si3=l0;
si3=i32_load(i->m0,(U64)si3+32U);
si4=l0;
sf4=f32_load(i->m0,(U64)si4+24U);
f506(i,si0,si1,sf2,si3,sf4);
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
f19(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+4U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l3;
si1=-2147483633U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L2;
L7:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+5U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
goto L4;
L6:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l1;
sf1=f32_load(i->m0,(U64)si1+4U);
f32_store(i->m0,(U64)si0+24U,sf1);
goto L4;
L5:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1+4U);
i32_store8(i->m0,(U64)si0+44U,si1);
L4:;
si0=l3;
si1=-2147483633U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l1;
si1=4U;
si0+=si1;
f33(i,si0);
goto L1;
L2:;
si0=l1;
f8(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f417(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si3=1U;
f444(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+12U);
f432(i,si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1037(glicolwasmInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
si0=l0;
f352(i,si0);
L0:;
}

void f2099(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=6U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=6U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l2;
si1=l3;
si0=si0 > si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l0;
si1=4U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
l4=si1;
si2=l3;
si3=2U;
si2<<=(si3&31);
si0=f3065(i,si0,si1,si2);
si0=l4;
si1=l2;
f1758(i,si0,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
si2=l3;
f1757(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
f532(i,si0,si1);
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1514(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f1625(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+24U);
l5=si0;
si1=l4;
si2=28U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l6=si1;
si0=f1626(i,si0,si1);
l7=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
f1636(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l8=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
l2=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L4;
}
si0=l3;
si1=0U;
si2=l3;
si2=i32_load(i->m0,(U64)si2);
l2=si2;
si3=l2;
si4=1U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l3;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+20U,si1);
si0=f1473(i);
l2=si0;
si1=16U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l4;
si1=20U;
si0+=si1;
f1474(i,si0);
si0=l2;
l3=si0;
goto L1;
L7:;
si0=1129016U;
f14(i,si0);
UNREACHABLE;
L6:;
si0=0U;
si1=0U;
si2=1129000U;
f4(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+12U);
i32_store(i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+20U,si1);
si0=1178224U;
si1=43U;
si2=l4;
si3=20U;
si2+=si3;
si3=1119036U;
si4=1129048U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
UNREACHABLE;
L3:;
si0=f1473(i);
l3=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f1372(i,si0,si1);
si0=l4;
si1=8U;
si0+=si1;
f1035(i,si0);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
goto L1;
L2:;
si0=1U;
si1=1U;
si2=1129032U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=8U;
si0+=si1;
l2=si0;
si1=l8;
f1637(i,si0,si1);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l7;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
goto L10;
L11:;
si0=l4;
si1=l2;
f1004(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
L10:;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0+20U,sj1);
si0=l4;
si1=l2;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l1;
si1=l4;
si2=20U;
si1+=si2;
si0=f1634(i,si0,si1);
l2=si0;
if(si0){
goto L14;
}
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
if(si0){
goto L13;
}
goto L12;
L14:;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
f1035(i,si0);
si0=l5;
si0=!(si0);
if(si0){
goto L12;
}
L13:;
si0=l6;
si1=l6;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L12:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L9:;
si0=1129064U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f1703(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+8U);
si1=4U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
L2:;
si0=l0;
goto L0;
L1:;
si0=1160504U;
f14(i,si0);
UNREACHABLE;
L0:;
return si0;
}

U32 f1888(glicolwasmInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si1=255U;
si0&=si1;
l0=si0;
si1=31U;
si0=si0 < si1;
si1=2130706435U;
si2=l0;
si1>>=(si2&31);
si0&=si1;
L0:;
return si0;
}

F64 f3107(glicolwasmInstance*i,F64 l0) {
U64 sj0,sj1;
F64 sd0,sd1;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
sj1=-9223372036854775808ULL;
sj0&=sj1;
sj1=4602678819172646911ULL;
sj0|=sj1;
sd0=f64_reinterpret_i64(sj0);
sd1=l0;
sd0+=sd1;
sd0=trunc(sd0);
L0:;
return sd0;
}

F64 f405(glicolwasmInstance*i,U32 l0) {
U64 l1=0;
U32 si0,si1;
U64 sj0,sj1,sj2;
F64 sd0;
si0=l0;
si1=l0;
sj1=i64_load(i->m0,(U64)si1);
l1=sj1;
sj2=1ULL;
sj1+=sj2;
i64_store(i->m0,(U64)si0,sj1);
sj0=l1;
sd0=f406(i,sj0);
L0:;
return sd0;
}

void f2231(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+4U);
si1-=si2;
f155(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
L2:;
{
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f2232(i,si0,si1);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l3;
si0+=si1;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+9U);
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
goto L2;
}
L1:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f89(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si1=8U;
si0+=si1;
l2=si0;
L1:;
{
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L2;
}
goto L0;
L2:;
si0=l0;
si1=l3;
si2=-1U;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
f1102(i,si0);
goto L1;
}
L0:;
}

void f2578(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l6;
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=4U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f2428(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si1=i32_load8_u(i->m0,(U64)si1);
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f1740(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+36U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+32U);
l6=sj1;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si1=f1741(i,si1);
l3=si1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l3;
si2=i32_load(i->m0,(U64)si2+8U);
si3=l5;
si3=i32_load(i->m0,(U64)si3+4U);
l3=si3;
si4=0U;
si5=l3;
si6=0U;
si5=(U32)((I32)si5>(I32)si6);
si3=si5?si3:si4;
l3=si3;
si4=l5;
si4=i32_load(i->m0,(U64)si4+8U);
l4=si4;
si5=l3;
si6=l4;
si7=l3;
si6=(U32)((I32)si6>(I32)si7);
si4=si6?si4:si5;
si5=l3;
si4-=si5;
si5=1U;
si4+=si5;
f2576(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f2567(i,si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+24U);
i64_store(i->m0,(U64)si0,sj1);
sj0=l6;
si0=(U32)(sj0);
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
f1704(i,si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=l4;
si2=1170256U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1170660U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f348(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=l1;
l3=si0;
si0=l2;
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=1U;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load16_u(i->m0,(U64)si0+136U);
l4=si0;
L1:;
si0=l1;
si1=200U;
si2=152U;
si3=l2;
si1=si3?si1:si2;
f264(i,si0,si1);
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
si2=l3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+4U,sj1);
L0:;
}

void f311(glicolwasmInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
f12(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+16U);
si1=l0;
si2=20U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f12(i,si0,si1);
L0:;
}

void f873(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=176U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=112U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+116U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+112U);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
l4=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
i32_store8(i->m0,(U64)si0+141U,si1);
L2:;
si0=l2;
si1=64U;
i32_store8(i->m0,(U64)si0+127U,si1);
si0=l2;
si1=104U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+108U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+104U);
if(si0){
goto L5;
}
si0=l1;
si1=20U;
si0+=si1;
l5=si0;
si0=0U;
l6=si0;
si0=0U;
l7=si0;
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+136U);
l8=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
L6:;
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+140U,si1);
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+136U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=136U;
si1+=si2;
f841(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+136U);
l8=si0;
L7:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
si0=l2;
si1=l1;
si2=92U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+128U,si1);
si0=l2;
si1=l1;
si2=120U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+132U,si1);
si0=l2;
si1=96U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l5;
si1=l10;
si0+=si1;
si1=0U;
si2=l8;
si3=l3;
si2=si2 == si3;
si0=si2?si0:si1;
l5=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+100U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+96U);
if(si0){
goto L8;
}
si0=l2;
si1=160U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+124U);
i64_store(i->m0,(U64)si0+160U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=88U;
si0+=si1;
si1=l1;
si2=1114850U;
si3=3U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+92U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=80U;
si0+=si1;
si1=l1;
si2=1114853U;
si3=8U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+84U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+80U);
if(si0){
goto L9;
}
L10:;
si0=l2;
si1=72U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+76U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+72U);
if(si0){
goto L9;
}
si0=l2;
si1=144U;
si0+=si1;
l11=si0;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+124U);
i64_store(i->m0,(U64)si0+136U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
si0=l2;
si1=64U;
si0+=si1;
si1=l1;
f845(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+68U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+64U);
if(si0){
goto L11;
}
si0=l2;
si1=56U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+60U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+56U);
if(si0){
goto L11;
}
L12:;
{
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
f845(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+52U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L12;
}
}
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+44U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+40U);
if(si0){
goto L9;
}
si0=l1;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1+140U);
l10=si1;
si2=1U;
si1=si1 != si2;
i32_store8(i->m0,(U64)si0+140U,si1);
si0=l2;
si1=144U;
si0+=si1;
l11=si0;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+124U);
i64_store(i->m0,(U64)si0+136U,sj1);
si0=l1;
si1=48U;
si0+=si1;
f851(i,si0);
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
f913(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+32U);
l12=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+36U);
l1=si0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+136U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=l10;
i32_store8(i->m0,(U64)si0+140U,si1);
si0=l1;
si1=132U;
si0+=si1;
si1=l11;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=48U;
si0+=si1;
f853(i,si0);
si0=l12;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f904(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
f911(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f912(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
if(si0){
goto L9;
}
L13:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
si0=l2;
si1=l2;
si2=127U;
si1+=si2;
i32_store(i->m0,(U64)si0+168U,si1);
si0=l2;
si1=l2;
si2=128U;
si1+=si2;
i32_store(i->m0,(U64)si0+164U,si1);
si0=l2;
si1=l2;
si2=132U;
si1+=si2;
i32_store(i->m0,(U64)si0+160U,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l1;
si1=64U;
si2=l3;
si3=l6;
si4=l7;
si5=l5;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
L14:;
si0=l8;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si2=l9;
si0=f842(i,si0,si1,si2);
l8=si0;
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l8;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l9;
i32_store(i->m0,(U64)si0+140U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+127U);
i32_store8(i->m0,(U64)si0+137U,si1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+136U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=136U;
si1+=si2;
f841(i,si0,si1);
L15:;
si0=l2;
si1=160U;
si0+=si1;
si1=l1;
f843(i,si0,si1);
si0=0U;
l3=si0;
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L3;
L11:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+136U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l11;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l10;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si1=l10;
i32_store(i->m0,(U64)si0+20U,si1);
L9:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+160U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l2;
si2=168U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l8;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l8;
i32_store(i->m0,(U64)si0+20U,si1);
L8:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
si0=l2;
si1=l2;
si2=127U;
si1+=si2;
i32_store(i->m0,(U64)si0+168U,si1);
si0=l2;
si1=l2;
si2=128U;
si1+=si2;
i32_store(i->m0,(U64)si0+164U,si1);
si0=l2;
si1=l2;
si2=132U;
si1+=si2;
i32_store(i->m0,(U64)si0+160U,si1);
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=64U;
si2=l3;
si3=l6;
si4=l7;
si5=l5;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=160U;
si0+=si1;
si1=l1;
f843(i,si0,si1);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l9;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=l9;
i32_store(i->m0,(U64)si0+20U,si1);
L5:;
si0=1U;
l3=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L1;
L4:;
si0=1120424U;
si1=40U;
si2=1111860U;
f16(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=l4;
i32_store8(i->m0,(U64)si0+141U,si1);
L1:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2918(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=144U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
sj0=i64_load(i->m0,(U64)si0);
l7=sj0;
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l7;
i64_store(i->m0,(U64)si0+96U,sj1);
si0=l5;
si1=40U;
si0+=si1;
si1=l5;
si2=96U;
si1+=si2;
f1268(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+40U);
l6=si0;
if(si0){
goto L2;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+44U);
l6=si1;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l7=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l7;
i64_store(i->m0,(U64)si0+96U,sj1);
si0=l5;
si1=96U;
si0+=si1;
si0=f2594(i,si0);
l3=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l6;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
goto L4;
L5:;
si0=l5;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l6=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
L4:;
si0=l5;
si1=40U;
si0+=si1;
si1=l4;
si2=l6;
si3=l3;
f1984(i,si0,si1,si2,si3);
si0=l5;
si1=96U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f2214(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+96U);
si1=13U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l5;
sj1=17179869184ULL;
i64_store(i->m0,(U64)si0+24U,sj1);
goto L6;
L7:;
si0=l5;
sj0=i64_load(i->m0,(U64)si0+96U);
l7=sj0;
si0=l5;
si1=4U;
f75(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+4U);
l6=si0;
sj1=l7;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+84U,si1);
si0=l5;
si1=96U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
si2=40U;
si0=f3065(i,si0,si1,si2);
si0=8U;
l4=si0;
si0=1U;
l3=si0;
L9:;
{
si0=l5;
si1=136U;
si0+=si1;
si1=l5;
si2=96U;
si1+=si2;
f2214(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+136U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l5;
sj0=i64_load(i->m0,(U64)si0+136U);
l7=sj0;
si0=l3;
si1=l5;
si1=i32_load(i->m0,(U64)si1+84U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l5;
si1=84U;
si0+=si1;
si1=1U;
f76(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+88U);
l6=si0;
L10:;
si0=l6;
si1=l4;
si0+=si1;
sj1=l7;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L9;
}
L8:;
si0=l5;
si1=136U;
si0+=si1;
f1001(i,si0);
si0=l5;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=84U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+84U);
i64_store(i->m0,(U64)si0+24U,sj1);
L6:;
si0=l5;
si1=96U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f2408(i,si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+96U);
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
f1035(i,si0);
si0=l5;
si1=144U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1U;
si1=1U;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+44U);
i32_store(i->m0,(U64)si0+100U,si1);
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0+96U,si1);
si0=1178224U;
si1=43U;
si2=l5;
si3=96U;
si2+=si3;
si3=1119036U;
si4=1174576U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1119(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0+80U);
l1=si0;
si1=6U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=4U;
si1<<=(si2&31);
f264(i,si0,si1);
L1:;
L0:;
}

U32 f949(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=1114113U;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=1114113U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
si0=f520(i,si0);
l1=si0;
L1:;
si0=l1;
L0:;
return si0;
}

void f568(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
F32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
F32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
F32 sf0,sf1,sf2,sf3,sf4;
si0=i->g0;
si1=112U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=-2147483648U;
si0^=si1;
l4=si0;
si1=4U;
si2=l4;
si3=17U;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
switch(si0){
case 0:
goto L14;
case 1:
goto L4;
case 2:
goto L9;
case 3:
goto L4;
case 4:
goto L4;
case 5:
goto L4;
case 6:
goto L4;
case 7:
goto L7;
case 8:
goto L4;
case 9:
goto L4;
case 10:
goto L4;
case 11:
goto L4;
case 12:
goto L8;
case 13:
goto L13;
case 14:
goto L12;
default:
goto L4;
}
L14:;
si0=l1;
sf0=f32_load(i->m0,(U64)si0+4U);
l6=sf0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+8U);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
default:
goto L3;
}
L13:;
si0=l0;
si1=36U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+8U);
f7(i,si0,si1,si2);
goto L3;
L12:;
si0=l0;
si1=44U;
si0+=si1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
goto L3;
L11:;
si0=l0;
sf1=l6;
f32_store(i->m0,(U64)si0+64U,sf1);
goto L3;
L10:;
si0=l0;
sf1=l6;
f32_store(i->m0,(U64)si0+68U,sf1);
goto L3;
L9:;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+16U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L5;
L8:;
si0=l0;
si1=36U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
f6(i,si0,si1);
goto L3;
L7:;
si0=l0;
si1=48U;
si0+=si1;
f134(i,si0);
si0=l0;
si1=56U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+4U);
i64_store(i->m0,(U64)si0+48U,sj1);
goto L1;
L6:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=0U;
f155(i,si0,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l2;
si1=l3;
si2=l4;
si1+=si2;
i32_store(i->m0,(U64)si0+108U,si1);
L16:;
{
si0=l2;
si1=104U;
si0+=si1;
si0=f520(i,si0);
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l4;
si0=f367(i,si0);
if(si0){
goto L16;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l4;
f403(i,si0,si1);
goto L16;
}
L15:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
l8=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l4=si0;
si1=l2;
si1=i32_load(i->m0,(U64)si1+32U);
l9=si1;
si2=1154114U;
si0=f94(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l4;
si2=l9;
si3=1154114U;
f191(i,si0,si1,si2,si3);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f60(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
l9=si0;
si0=l2;
sf0=f32_load(i->m0,(U64)si0+20U);
l6=sf0;
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f60(i,si0,si1);
si0=l9;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l2;
sf0=f32_load(i->m0,(U64)si0+12U);
l10=sf0;
sf0=l6;
si1=l0;
si1=i32_load(i->m0,(U64)si1+72U);
sf1=(F32)(si1);
sf0*=sf1;
l6=sf0;
sf1=4.2949673e+09;
si0=sf0 < sf1;
sf1=l6;
sf2=0;
si1=sf1 >= sf2;
l11=si1;
si0&=si1;
si0=!(si0);
if(si0){
goto L19;
}
sf0=l6;
si0=I32_TRUNC_U_F32(sf0);
l9=si0;
goto L18;
L19:;
si0=0U;
l9=si0;
L18:;
si0=l0;
si1=24U;
si0+=si1;
si1=-1U;
si2=l9;
si3=0U;
si4=l11;
si2=si4?si2:si3;
sf3=l6;
sf4=4.29496704e+09;
si3=sf3 > sf4;
si1=si3?si1:si2;
sf2=l10;
f11(i,si0,si1,sf2);
L17:;
si0=l8;
si1=l4;
f58(i,si0,si1);
L5:;
si0=l7;
si1=l3;
f58(i,si0,si1);
si0=0U;
l3=si0;
L4:;
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si1=7U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si1=4U;
si0+=si1;
f134(i,si0);
goto L1;
L3:;
si0=l1;
f8(i,si0);
goto L1;
L2:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
L1:;
si0=l2;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f2097(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
f2150(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=0U;
l0=si0;
goto L1;
L2:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f3047(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=1178604U;
si2=l1;
si0=f623(i,si0,si1,si2);
L0:;
return si0;
}

void f2037(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l2;
si1=20U;
si0+=si1;
si1=l1;
f2052(i,si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+20U);
f155(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+44U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+40U);
l3=si0;
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=-1U;
si1+=si2;
si0=f1253(i,si0,si1);
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
L2:;
L3:;
{
si0=l2;
si1=32U;
si0+=si1;
si0=f520(i,si0);
l3=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
f1179(i,si0,si1);
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
if(si0){
goto L3;
}
}
L1:;
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1438(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1123497U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l3;
i32_store8(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
f1265(i,si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
l1=si1;
si2=l1;
si3=l2;
si3=i32_load(i->m0,(U64)si3+4U);
si4=12U;
si3*=si4;
si2+=si3;
si0=f1423(i,si0,si1,si2);
si0=i32_load(i->m0,(U64)si0);
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+12U);
si0=f245(i,si0,si1);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

F64 f3087(glicolwasmInstance*i,F64 l0,U32 l1) {
U32 si0,si1,si2,si3;
U64 sj1,sj2;
F64 sd0,sd1;
si0=l1;
si1=1023U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l1;
si1=-1022U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L1;
}
sd0=l0;
sd1=2.0041683600089728e-292;
sd0*=sd1;
l0=sd0;
si0=l1;
si1=-1992U;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l1;
si1=969U;
si0+=si1;
l1=si0;
goto L1;
L4:;
sd0=l0;
sd1=8.9884656743115795e+307;
sd0*=sd1;
l0=sd0;
si0=l1;
si1=2046U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=-1023U;
si0+=si1;
l1=si0;
goto L1;
L3:;
sd0=l0;
sd1=2.0041683600089728e-292;
sd0*=sd1;
l0=sd0;
si0=l1;
si1=-2960U;
si2=l1;
si3=-2960U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
si1=1938U;
si0+=si1;
l1=si0;
goto L1;
L2:;
sd0=l0;
sd1=8.9884656743115795e+307;
sd0*=sd1;
l0=sd0;
si0=l1;
si1=3069U;
si2=l1;
si3=3069U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
si1=-2046U;
si0+=si1;
l1=si0;
L1:;
sd0=l0;
si1=l1;
si2=1023U;
si1+=si2;
sj1=(U64)(si1);
sj2=52ULL;
sj1<<=(sj2&63);
sd1=f64_reinterpret_i64(sj1);
sd0*=sd1;
L0:;
return sd0;
}

U32 f631(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=11U;
si0<<=(si1&31);
l1=si0;
si0=0U;
l2=si0;
si0=35U;
l3=si0;
si0=35U;
l4=si0;
L3:;
{
si0=l3;
si1=1U;
si0>>=(si1&31);
si1=l2;
si0+=si1;
l3=si0;
si1=2U;
si0<<=(si1&31);
si1=1081560U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=11U;
si0<<=(si1&31);
l5=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=l4;
si2=l5;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
si1=l3;
si2=1U;
si1+=si2;
si2=l2;
si3=l5;
si4=l1;
si3=si3 < si4;
si1=si3?si1:si2;
l2=si1;
si0-=si1;
l3=si0;
si0=l4;
si1=l2;
si0=si0 > si1;
if(si0){
goto L3;
}
goto L1;
}
L2:;
si0=l3;
si1=1U;
si0+=si1;
l2=si0;
L1:;
si0=l2;
si1=34U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l3=si0;
si1=1081560U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l1=si0;
si0=l2;
si1=34U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=33U;
l2=si0;
si0=875U;
l5=si0;
goto L5;
L7:;
si0=l2;
si1=35U;
si2=1070932U;
f4(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l3;
si1=1081564U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l5=si0;
si0=l2;
if(si0){
goto L8;
}
si0=0U;
l2=si0;
goto L4;
L8:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
L5:;
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=1081560U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=2097151U;
si0&=si1;
l2=si0;
L4:;
si0=l5;
si1=l1;
si2=-1U;
si1^=si2;
si0+=si1;
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=l2;
si0-=si1;
l4=si0;
si0=l1;
si1=875U;
si2=l1;
si3=875U;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=0U;
l2=si0;
L11:;
{
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
si1=l1;
si2=1081700U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
si0+=si1;
l2=si0;
si1=l4;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l5;
si1=l1;
si2=1U;
si1+=si2;
l1=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=l5;
l1=si0;
L10:;
si0=l1;
si1=1U;
si0&=si1;
goto L0;
L9:;
si0=l3;
si1=875U;
si2=1070948U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f1824(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+120U);
l4=si1;
si2=l4;
si3=5U;
si2=si2 > si3;
l5=si2;
si0=si2?si0:si1;
l6=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l4;
si1=5U;
si2=l5;
si0=si2?si0:si1;
l7=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=6U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=-2147483647U;
l5=si0;
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
sj0=(U64)(si0);
sj1=24ULL;
sj0*=sj1;
l9=sj0;
si0=(U32)(sj0);
l3=si0;
si0=0U;
l5=si0;
sj0=l9;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L1;
}
si0=l3;
si1=2147483644U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l4;
si1=6U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l7;
sj0=(U64)(si0);
sj1=24ULL;
sj0*=sj1;
l9=sj0;
si0=(U32)(sj0);
l4=si0;
sj0=l9;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L6;
}
goto L2;
L8:;
si0=-2147483647U;
l5=si0;
si0=l4;
si1=5U;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l1;
si1=l8;
si2=l3;
si3=24U;
si2*=si3;
si0=f3065(i,si0,si1,si2);
si1=l3;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l8;
si1=l7;
f1855(i,si0,si1);
L7:;
goto L1;
L6:;
si0=l4;
si1=2147483644U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=4U;
l5=si0;
si0=l8;
si1=l4;
si2=4U;
si3=l3;
si0=f615(i,si0,si1,si2,si3);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
goto L3;
L5:;
si0=4U;
l5=si0;
si0=4U;
si1=l3;
si0=f438(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l1;
si2=l4;
si3=24U;
si2*=si3;
si0=f3065(i,si0,si1,si2);
goto L3;
L4:;
si0=1122980U;
si1=32U;
si2=1123012U;
f16(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=l2;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l1;
si1=l6;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
i32_store(i->m0,(U64)si0,si1);
si0=-2147483647U;
l5=si0;
goto L1;
L2:;
si0=l4;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f1060(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si1=12U;
si0+=si1;
f1035(i,si0);
si0=l0;
f1070(i,si0);
si0=l0;
f87(i,si0);
L0:;
}

void f1351(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=6337701729009040854ULL;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=-8202046714581771301ULL;
i64_store(i->m0,(U64)si0,sj1);
L0:;
}

U32 f656(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
U64 l16=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=160U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
si2=160U;
si0=f3112(i,si0,si1,si2);
l4=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+160U);
l5=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l5;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l5;
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l5;
si1=1U;
si0+=si1;
l7=si0;
si0=l1;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=0U;
l9=si0;
si0=0U;
l10=si0;
L7:;
{
si0=l4;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l11=si0;
L8:;
{
si0=l9;
l12=si0;
si0=l11;
l3=si0;
si0=l1;
si1=l8;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=4U;
si0+=si1;
l11=si0;
si0=l12;
si1=1U;
si0+=si1;
l9=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l13=si0;
si0=l1;
si1=4U;
si0+=si1;
l14=si0;
l1=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L8;
}
}
si0=l13;
sj0=(U64)(si0);
l15=sj0;
sj0=0ULL;
l16=sj0;
si0=l6;
l13=si0;
si0=l12;
l1=si0;
si0=l0;
l11=si0;
L10:;
{
si0=l1;
si1=40U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l3;
sj1=l16;
si2=l3;
sj2=i64_load32_u(i->m0,(U64)si2);
sj1+=sj2;
si2=l11;
sj2=i64_load32_u(i->m0,(U64)si2);
sj3=l15;
sj2*=sj3;
sj1+=sj2;
l16=sj1;
i64_store32(i->m0,(U64)si0,sj1);
sj0=l16;
sj1=32ULL;
sj0>>=(sj1&63);
l16=sj0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si0=l13;
si1=-4U;
si0+=si1;
l13=si0;
if(si0){
goto L10;
}
}
si0=l5;
l3=si0;
sj0=l16;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L11;
}
si0=l12;
si1=l5;
si0+=si1;
l3=si0;
si1=40U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l4;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
l3=si0;
L11:;
si0=l10;
si1=l3;
si2=l12;
si1+=si2;
l3=si1;
si2=l10;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=l14;
l1=si0;
goto L7;
L9:;
}
si0=l1;
si1=40U;
si2=1071044U;
f4(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l5;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l2;
si1=1U;
si0+=si1;
l7=si0;
si0=l0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l14=si0;
si0=0U;
l12=si0;
si0=l0;
l11=si0;
si0=0U;
l10=si0;
L12:;
{
si0=l4;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
L13:;
{
si0=l12;
l13=si0;
si0=l9;
l3=si0;
si0=l11;
si1=l14;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=4U;
si0+=si1;
l9=si0;
si0=l13;
si1=1U;
si0+=si1;
l12=si0;
si0=l11;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l11;
si1=4U;
si0+=si1;
l5=si0;
l11=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L13;
}
}
si0=l8;
sj0=(U64)(si0);
l15=sj0;
sj0=0ULL;
l16=sj0;
si0=l6;
l8=si0;
si0=l13;
l11=si0;
si0=l1;
l9=si0;
L15:;
{
si0=l11;
si1=40U;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l3;
sj1=l16;
si2=l3;
sj2=i64_load32_u(i->m0,(U64)si2);
sj1+=sj2;
si2=l9;
sj2=i64_load32_u(i->m0,(U64)si2);
sj3=l15;
sj2*=sj3;
sj1+=sj2;
l16=sj1;
i64_store32(i->m0,(U64)si0,sj1);
sj0=l16;
sj1=32ULL;
sj0>>=(sj1&63);
l16=sj0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l9;
si1=4U;
si0+=si1;
l9=si0;
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
if(si0){
goto L15;
}
}
si0=l2;
l3=si0;
sj0=l16;
si0=(U32)(sj0);
l11=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l13;
si1=l2;
si0+=si1;
l3=si0;
si1=40U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l11;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
l3=si0;
L16:;
si0=l10;
si1=l3;
si2=l13;
si1+=si2;
l3=si1;
si2=l10;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
si0=l5;
l11=si0;
goto L12;
L14:;
}
si0=l11;
si1=40U;
si2=1071044U;
f4(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l0;
si1=l4;
si2=160U;
si0=f3065(i,si0,si1,si2);
l3=si0;
si1=l10;
i32_store(i->m0,(U64)si0+160U,si1);
si0=l4;
si1=160U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L4:;
si0=l5;
si1=40U;
si2=1071044U;
f376(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l3;
si1=40U;
si2=1071044U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l5;
si1=40U;
si2=1071044U;
f376(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=40U;
si2=1071044U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

