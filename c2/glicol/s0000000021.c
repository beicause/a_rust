#include "w2c2_base.h"

#include "glicol.h"

U32 f1481(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=4U;
si1=l0;
si1=f1122(i,si1);
si0=f438(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l0;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
goto L0;
L1:;
UNREACHABLE;
L0:;
return si0;
}

U32 f2730(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
l4=si0;
si0=0U;
l5=si0;
si0=0U;
l6=si0;
L2:;
{
si0=l1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
l7=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=3ULL;
sj1|=sj2;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l2;
si1=8U;
si0+=si1;
f1001(i,si0);
si0=l7;
l3=si0;
goto L2;
L3:;
}
si0=l2;
si1=13U;
i32_store8(i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l6;
si0-=si1;
l5=si0;
si0=l2;
si1=8U;
si0+=si1;
f1001(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f1370(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=4U;
si2=24U;
f719(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
si1=-2147483648U;
si0^=si1;
l3=si0;
si1=7U;
si2=l3;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L9;
case 3:
goto L8;
case 4:
goto L7;
case 5:
goto L6;
case 6:
goto L5;
case 7:
goto L4;
case 8:
goto L3;
default:
goto L11;
}
L11:;
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f52(i,si0,si1,si2);
si0=l1;
si1=-2147483648U;
i32_store(i->m0,(U64)si0+20U,si1);
goto L2;
L10:;
si0=l1;
si1=-2147483647U;
i32_store(i->m0,(U64)si0+20U,si1);
goto L2;
L9:;
si0=l1;
si1=-2147483646U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+8U,si1);
goto L2;
L8:;
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f52(i,si0,si1,si2);
si0=l1;
si1=-2147483645U;
i32_store(i->m0,(U64)si0+20U,si1);
goto L2;
L7:;
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f52(i,si0,si1,si2);
si0=l1;
si1=-2147483644U;
i32_store(i->m0,(U64)si0+20U,si1);
goto L2;
L6:;
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f52(i,si0,si1,si2);
si0=l1;
si1=-2147483643U;
i32_store(i->m0,(U64)si0+20U,si1);
goto L2;
L5:;
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f52(i,si0,si1,si2);
si0=l1;
si1=-2147483642U;
i32_store(i->m0,(U64)si0+20U,si1);
goto L2;
L4:;
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f52(i,si0,si1,si2);
si0=l1;
si1=20U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si3=20U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f52(i,si0,si1,si2);
goto L2;
L3:;
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f52(i,si0,si1,si2);
si0=l1;
si1=-2147483640U;
i32_store(i->m0,(U64)si0+20U,si1);
L2:;
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l2;
goto L0;
L1:;
UNREACHABLE;
L0:;
return si0;
}

void f433(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1062060U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l3;
si2=32U;
si1+=si2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
f372(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f1431(glicolwasmInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
l4=si0;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si0=i32_load8_u(i->m0,(U64)si0);
l5=si0;
l6=si0;
si0=1U;
l7=si0;
L2:;
{
si0=l1;
si1=4U;
si2=l1;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l8=si0;
si0=l1;
si1=12U;
si0*=si1;
si1=1122760U;
si0+=si1;
l0=si0;
L6:;
{
si0=l8;
si1=l1;
si0=si0 == si1;
l9=si0;
if(si0){
goto L5;
}
si0=l6;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=4U;
si0=si0 < si1;
l9=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si1=0U;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=i32_load(i->m0,(U64)si0+4U);
l10=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si0=i32_load8_u(i->m0,(U64)si0+8U);
l11=si0;
si1=l6;
si0&=si1;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=l11;
si0&=si1;
si1=255U;
si0&=si1;
si1=l11;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L4;
}
L7:;
si0=l0;
si1=12U;
si0+=si1;
l0=si0;
goto L6;
}
L5:;
si0=0U;
l1=si0;
si0=l2;
si1=l6;
si2=0U;
si3=l9;
si1=si3?si1:si2;
l0=si1;
i32_store8(i->m0,(U64)si0+11U,si1);
si0=l0;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
l0=si0;
si0=l7;
si1=1U;
si0&=si1;
if(si0){
goto L8;
}
si0=l4;
si1=1122810U;
si2=3U;
si3=l0;
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L3;
}
L8:;
si0=l4;
si1=1122808U;
si2=2U;
si3=l0;
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L3;
}
si0=l2;
si1=l2;
si2=11U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=1178640U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
si1=137U;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l3;
si2=l2;
si3=16U;
si2+=si3;
si0=f682(i,si0,si1,si2);
if(si0){
goto L3;
}
goto L1;
L4:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
l0=si0;
si0=l9;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=l7;
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
si1=1122810U;
si2=3U;
si3=l0;
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L3;
}
L9:;
si0=l6;
si1=l11;
si2=-1U;
si1^=si2;
si0&=si1;
l6=si0;
si0=0U;
l7=si0;
si0=l4;
si1=l9;
si2=l10;
si3=l0;
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
L3:;
}
si0=1U;
l1=si0;
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f3002(glicolwasmInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U64 l3=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
sj1=l1;
sj2=1000ULL;
sj1=DIV_U(sj1,sj2);
l3=sj1;
sj2=l1;
sj3=l3;
sj4=1000ULL;
sj3*=sj4;
sj2-=sj3;
si2=(U32)(sj2);
si3=1000000U;
si2*=si3;
f989(i,si0,sj1,si2);
si0=l2;
sj0=i64_load(i->m0,(U64)si0);
l1=sj0;
si0=l0;
si1=l2;
si1=i32_load(i->m0,(U64)si1+8U);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l1;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f130(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
F32 l5=0;
F32 l6=0;
U32 l7=0;
U32 l8=0;
F32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
F32 l16=0;
F32 l17=0;
U32 l18=0;
F32 l19=0;
F32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 si0,si1,si2,si3,si4;
F32 sf0,sf1,sf2,sf3,sf4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+68U);
si1=l0;
si1=i32_load(i->m0,(U64)si1+80U);
sf1=(F32)(si1);
l5=sf1;
sf0*=sf1;
l6=sf0;
sf1=4.2949673e+09;
si0=sf0 < sf1;
sf1=l6;
sf2=0;
si1=sf1 >= sf2;
l7=si1;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
sf0=l6;
si0=I32_TRUNC_U_F32(sf0);
l8=si0;
goto L1;
L2:;
si0=0U;
l8=si0;
L1:;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+64U);
sf1=l5;
sf0*=sf1;
l9=sf0;
sf1=4.2949673e+09;
si0=sf0 < sf1;
sf1=l9;
sf2=0;
si1=sf1 >= sf2;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
sf0=l9;
si0=I32_TRUNC_U_F32(sf0);
l10=si0;
goto L3;
L4:;
si0=0U;
l10=si0;
L3:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
if(si0){
goto L5;
}
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=0U;
si2=l7;
si0=si2?si0:si1;
l1=si0;
sf0=l6;
sf1=4.29496704e+09;
si0=sf0 > sf1;
l3=si0;
si0=l10;
si1=0U;
sf2=l9;
sf3=0;
si2=sf2 >= sf3;
si0=si2?si0:si1;
l7=si0;
sf0=l9;
sf1=4.29496704e+09;
si0=sf0 > sf1;
l8=si0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+76U);
si1=l0;
sf1=f32_load(i->m0,(U64)si1+72U);
sf0*=sf1;
sf1=l5;
sf0*=sf1;
l9=sf0;
sf1=4.2949673e+09;
si0=sf0 < sf1;
sf1=l9;
sf2=0;
si1=sf1 >= sf2;
l10=si1;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
sf0=l9;
si0=I32_TRUNC_U_F32(sf0);
l11=si0;
goto L7;
L8:;
si0=0U;
l11=si0;
L7:;
si0=-1U;
si1=l1;
si2=l3;
si0=si2?si0:si1;
l12=si0;
si0=-1U;
si1=l7;
si2=l8;
si0=si2?si0:si1;
l13=si0;
si0=-1U;
si1=l11;
si2=0U;
si3=l10;
si1=si3?si1:si2;
sf2=l9;
sf3=4.29496704e+09;
si2=sf2 > sf3;
si0=si2?si0:si1;
l8=si0;
si0=l0;
si1=12U;
si0+=si1;
l11=si0;
si0=0U;
l14=si0;
L9:;
{
si0=l14;
si1=128U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=l14;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l15=si0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+32U);
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
L10:;
{
si0=l3;
if(si0){
goto L11;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
l1=si1;
f114(i,si0,si1);
sf0=0;
l5=sf0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+64U);
l16=sf0;
si1=l0;
sf1=f32_load(i->m0,(U64)si1+68U);
l17=sf1;
sf0+=sf1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+80U);
sf1=(F32)(si1);
l9=sf1;
sf0*=sf1;
l6=sf0;
sf1=4.2949673e+09;
si0=sf0 < sf1;
sf1=l6;
sf2=0;
si1=sf1 >= sf2;
l3=si1;
si0&=si1;
si0=!(si0);
if(si0){
goto L13;
}
sf0=l6;
si0=I32_TRUNC_U_F32(sf0);
l10=si0;
goto L12;
L13:;
si0=0U;
l10=si0;
L12:;
si0=0U;
l7=si0;
si0=-1U;
si1=l10;
si2=0U;
si3=l3;
si1=si3?si1:si2;
sf2=l6;
sf3=4.29496704e+09;
si2=sf2 > sf3;
si0=si2?si0:si1;
l18=si0;
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+20U);
l3=si1;
si2=l1;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
sf0=l17;
sf1=l9;
sf0*=sf1;
l19=sf0;
sf0=l16;
sf1=l9;
sf0*=sf1;
l20=sf0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+84U);
l21=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+16U);
l22=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l23=si0;
L14:;
{
si0=l23;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
L15:;
{
si0=l10;
si1=l7;
l1=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l7=si0;
L17:;
{
si0=l1;
if(si0){
goto L18;
}
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+84U);
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+84U,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l7;
f12(i,si0,si1);
goto L9;
L18:;
si0=l0;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l7;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si2=1050672U;
f13(i,si0,si1,si2);
si0=l11;
si1=l3;
si2=1050688U;
f131(i,si0,si1,si2);
goto L17;
}
L16:;
si0=l1;
si1=1U;
si0+=si1;
l7=si0;
si0=l18;
si1=l21;
si2=l3;
si2=i32_load(i->m0,(U64)si2);
si1-=si2;
l24=si1;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l1;
f6(i,si0,si1);
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
goto L15;
L19:;
}
si0=l22;
si1=l1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=l24;
si1=l13;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l13;
if(si0){
goto L21;
}
goto L23;
L24:;
si0=l12;
if(si0){
goto L22;
}
L23:;
sf0=0;
l17=sf0;
goto L20;
L22:;
si0=l18;
si1=l24;
si0-=si1;
sf0=(F32)(si0);
sf1=l19;
sf0/=sf1;
l17=sf0;
goto L20;
L21:;
si0=l24;
sf0=(F32)(si0);
sf1=l20;
sf0/=sf1;
l17=sf0;
L20:;
si0=l1;
si1=l1;
sf1=f32_load(i->m0,(U64)si1);
l6=sf1;
si2=l3;
sf2=f32_load(i->m0,(U64)si2+4U);
sf3=l9;
sf2/=sf3;
sf1+=sf2;
l16=sf1;
sf2=-1;
sf1+=sf2;
sf2=l16;
sf3=l16;
sf4=1;
si3=sf3 > sf4;
sf1=si3?sf1:sf2;
f32_store(i->m0,(U64)si0,sf1);
si0=l15;
sf1=l5;
sf2=l17;
sf3=l6;
sf4=l6;
sf3+=sf4;
sf4=-1;
sf3+=sf4;
sf2*=sf3;
sf3=0.100000001;
sf2*=sf3;
sf1+=sf2;
l5=sf1;
f32_store(i->m0,(U64)si0,sf1);
goto L14;
}
L11:;
si0=l8;
si0=!(si0);
if(si0){
goto L27;
}
si0=l1;
sf0=f32_load(i->m0,(U64)si0);
si1=l0;
sf1=f32_load(i->m0,(U64)si1+76U);
sf0*=sf1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+80U);
sf1=(F32)(si1);
sf0*=sf1;
l9=sf0;
sf1=0;
si0=sf0 >= sf1;
l7=si0;
sf0=l9;
sf1=4.2949673e+09;
si0=sf0 < sf1;
sf1=l9;
sf2=0;
si1=sf1 >= sf2;
si0&=si1;
si0=!(si0);
if(si0){
goto L29;
}
sf0=l9;
si0=I32_TRUNC_U_F32(sf0);
l10=si0;
goto L28;
L29:;
si0=0U;
l10=si0;
L28:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+84U);
l24=si0;
si1=l8;
si0=REM_U(si0,si1);
si1=-1U;
si2=l10;
si3=0U;
si4=l7;
si2=si4?si2:si3;
sf3=l9;
sf4=4.29496704e+09;
si3=sf3 > sf4;
si1=si3?si1:si2;
si0=si0 == si1;
if(si0){
goto L26;
}
goto L25;
L27:;
si0=1049104U;
si1=57U;
si2=1050704U;
f16(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l0;
si1=l24;
si2=l1;
sf2=f32_load(i->m0,(U64)si2+4U);
sf3=-69;
sf2+=sf3;
sf3=12;
sf2/=sf3;
sf2=f3080(i,sf2);
sf3=440;
sf2*=sf3;
f11(i,si0,si1,sf2);
si0=l11;
f132(i,si0);
L25:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
goto L10;
}
}
L6:;
si0=0U;
si1=0U;
si2=1050656U;
f4(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1144(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si0=f1154(i,si0,si1);
L1:;
L0:;
}

void f29(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
F32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
F32 l14=0;
F32 l15=0;
U32 l16=0;
U32 l17=0;
U32 si0,si1,si2,si3,si4;
F32 sf0,sf1,sf2;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
sf0=240;
si1=l0;
sf1=f32_load(i->m0,(U64)si1+32U);
sf0/=sf1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+36U);
sf1=(F32)(si1);
sf0*=sf1;
si1=l0;
sf1=f32_load(i->m0,(U64)si1+28U);
sf0/=sf1;
l4=sf0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=16U;
si0+=si1;
l5=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l6=si0;
si1=1U;
si0>>=(si1&31);
l7=si0;
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+40U);
l10=si0;
si0=0U;
l11=si0;
L2:;
{
si0=l11;
si1=128U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
si1=l11;
si2=2U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
l13=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l10;
sf0=(F32)(si0);
sf1=l4;
sf0/=sf1;
l14=sf0;
sf0=0;
l15=sf0;
si0=0U;
l16=si0;
L8:;
{
si0=l5;
si1=l16;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=l16;
si1=1U;
si0<<=(si1&31);
si1=1U;
si0|=si1;
l17=si0;
L10:;
{
si0=l7;
si1=l16;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=l17;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0);
si1=-2147483648U;
si0=si0 != si1;
if(si0){
goto L7;
}
sf0=l14;
sf1=l15;
si2=l3;
si3=4U;
si2+=si3;
sf2=f32_load(i->m0,(U64)si2);
sf1+=sf2;
l15=sf1;
si0=sf0 < sf1;
if(si0){
goto L9;
}
si0=l3;
si1=32U;
si0+=si1;
l3=si0;
si0=l17;
si1=2U;
si0+=si1;
l17=si0;
si0=l7;
si1=l16;
si2=1U;
si1+=si2;
l16=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l9;
si2=l8;
si3=0U;
si4=1049404U;
si1=f2(i,si1,si2,si3,si4);
si1=i32_load(i->m0,(U64)si1);
si2=1049420U;
si0=f3(i,si0,si1,si2);
l3=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l13;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
si2=l12;
si1+=si2;
sf1=f32_load(i->m0,(U64)si1);
f32_store(i->m0,(U64)si0,sf1);
si0=0U;
l10=si0;
si0=l7;
l16=si0;
goto L8;
L9:;
}
si0=l1;
si1=l9;
si2=l8;
si3=l16;
si4=1049452U;
si1=f2(i,si1,si2,si3,si4);
si1=i32_load(i->m0,(U64)si1);
si2=1049468U;
si0=f3(i,si0,si1,si2);
l3=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l13;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
si2=l12;
si1+=si2;
sf1=f32_load(i->m0,(U64)si1);
f32_store(i->m0,(U64)si0,sf1);
goto L3;
L7:;
goto L0;
L6:;
si0=l17;
si1=l6;
si2=1049388U;
f4(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=0U;
si1=0U;
si2=1049436U;
f4(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=0U;
si1=0U;
si2=1049484U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
i32_store(i->m0,(U64)si0+40U,si1);
goto L2;
}
L1:;
si0=0U;
si1=0U;
si2=1049372U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f471(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f48(i,si0,si1);
si1=0U;
si0=si0 != si1;
L0:;
return si0;
}

U32 f2174(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=l0;
si1=8U;
si0+=si1;
l3=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l0;
si1=-1073741824U;
si0&=si1;
l5=si0;
L2:;
{
si0=l4;
l6=si0;
if(si0){
goto L3;
}
si0=l5;
l0=si0;
goto L1;
L3:;
si0=l6;
si1=-4U;
si0+=si1;
l4=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
si0=l3;
si1=l1;
si2=l2;
si0=f1414(i,si0,si1,si2);
l7=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si1=1U;
si0+=si1;
si1=0U;
si2=l6;
si0=si2?si0:si1;
L0:;
return si0;
}

void f2314(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
f1767(i,si0,si1);
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1);
l3=sj1;
i64_store(i->m0,(U64)si0,sj1);
sj0=l3;
sj1=255ULL;
sj0&=sj1;
sj1=8ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l0;
sj1=l3;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l1=si1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
f87(i,si0);
si0=0U;
l1=si0;
goto L1;
L2:;
si0=l0;
sj1=l3;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2477(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
f1121(i,si0,si1);
L0:;
}

void f1668(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=0U;
l8=si0;
si0=l7;
si1=0U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l7;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f360(i,si0,si1,si2,si3,si4);
L1:;
{
si0=l7;
si1=84U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
f1669(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+84U);
if(si0){
goto L2;
}
si0=l7;
si1=4U;
si0+=si1;
si1=l1;
si2=l8;
si1+=si2;
si2=l2;
si3=l8;
si2-=si3;
f156(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(i->m0,(U64)si1+4U);
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l7;
si0=i32_load(i->m0,(U64)si0+88U);
si1=l8;
si0-=si1;
l4=si0;
si0=l1;
si1=l8;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+92U);
l8=si0;
si0=l7;
si1=4U;
si0+=si1;
si1=l3;
si2=l4;
f156(i,si0,si1,si2);
si0=l7;
si1=4U;
si0+=si1;
si1=l5;
si2=l6;
f156(i,si0,si1,si2);
goto L1;
}
L0:;
}

void f2935(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=0U;
l8=si0;
si0=l7;
si1=0U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l7;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f360(i,si0,si1,si2,si3,si4);
L1:;
{
si0=l7;
si1=84U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
f1669(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+84U);
if(si0){
goto L2;
}
si0=l7;
si1=4U;
si0+=si1;
si1=l1;
si2=l8;
si1+=si2;
si2=l2;
si3=l8;
si2-=si3;
f156(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l7;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
sj1=i64_load(i->m0,(U64)si1+4U);
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l7;
si0=i32_load(i->m0,(U64)si0+88U);
si1=l8;
si0-=si1;
l4=si0;
si0=l1;
si1=l8;
si0+=si1;
l3=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+92U);
l8=si0;
si0=l7;
si1=4U;
si0+=si1;
si1=l3;
si2=l4;
f156(i,si0,si1,si2);
si0=l7;
si1=4U;
si0+=si1;
si1=l5;
si2=l6;
f156(i,si0,si1,si2);
goto L1;
}
L0:;
}

void f2296(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+16U);
l3=si1;
si2=l0;
si2=i32_load(i->m0,(U64)si2+12U);
l4=si2;
si1+=si2;
l5=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l2;
si1=l5;
si2=l1;
f1173(i,si0,si1,si2);
L1:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
si1=l4;
si2=l1;
si1+=si2;
l1=si1;
si0+=si1;
si1=l2;
si2=l4;
si1+=si2;
si2=l3;
si0=f3076(i,si0,si1,si2);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
L0:;
}

void f2552(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L3;
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
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si0=f2346(i,si0);
l8=si0;
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
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
si0=f2346(i,si0);
l6=si0;
si0=l4;
si1=3U;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
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
si0=f2346(i,si0);
l4=si0;
si0=l5;
si1=8U;
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
si0=i32_load8_u(i->m0,(U64)si0+12U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
l7=sj1;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si0=f1741(i,si0);
l3=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l3;
si1=i32_load(i->m0,(U64)si1+8U);
si2=l8;
si3=l6;
si4=l4;
f2553(i,si0,si1,si2,si3,si4);
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
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=3U;
si1=3U;
si2=1171300U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1U;
si1=l4;
si2=1171300U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=2U;
si1=2U;
si2=1171300U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1171356U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f427(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
L2:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
goto L2;
}
L1:;
L0:;
}

U32 f1788(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si0=f1791(i,si0,si1);
L0:;
return si0;
}

void f2482(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
l4=si1;
si1=i32_load8_u(i->m0,(U64)si1);
si2=l4;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f1737(i,si0,si1,si2);
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
l6=sj1;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si0=f1738(i,si0);
l4=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L4;
}
sj0=0ULL;
l7=sj0;
goto L3;
L4:;
si0=l4;
si1=l3;
si2=-1U;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l5;
sj1=0ULL;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si2=l5;
si3=24U;
si2+=si3;
f2483(i,si0,si1,si2);
si0=l5;
sj0=i64_load(i->m0,(U64)si0+8U);
l7=sj0;
L3:;
si0=l0;
sj1=l7;
i64_store(i->m0,(U64)si0,sj1);
sj0=l6;
si0=(U32)(sj0);
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
f1704(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=0U;
si1=0U;
si2=1169080U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1169080U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f1630(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f1671(i,si0,si1);
si1=1U;
si0+=si1;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 < si1;
L0:;
return si0;
}

void f395(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
f2078(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si0=f1122(i,si0);
si0=l0;
f87(i,si0);
L0:;
}

void f1636(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
l3=si0;
si1=3U;
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
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+4U,si1);
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
si1=l1;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l1;
si2=16U;
si1+=si2;
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
si0=l1;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+16U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L5;
}
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
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
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

void f2978(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=48U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
f1720(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+52U);
l6=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+48U);
l7=si0;
si1=l6;
si0=f1721(i,si0,si1);
l3=si0;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si1=-1U;
si2=l4;
si2=i32_load(i->m0,(U64)si2+4U);
l8=si2;
si3=l8;
si4=1U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l4;
si1=1U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l8;
l4=si0;
L7:;
si0=l4;
si1=8U;
si0+=si1;
l9=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l8=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l8;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
goto L4;
L6:;
si0=l8;
si1=8U;
si0+=si1;
l4=si0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l8;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
goto L8;
L9:;
si0=l5;
si1=16U;
si0+=si1;
si1=l4;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+20U);
l8=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
l3=si0;
L8:;
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=l8;
f380(i,si0,si1,si2);
si0=l4;
si1=l5;
si1=i32_load(i->m0,(U64)si1+8U);
l3=si1;
si2=l5;
si2=i32_load(i->m0,(U64)si2+12U);
l8=si2;
si0=f2241(i,si0,si1,si2);
if(si0){
goto L3;
}
si0=l5;
si1=48U;
si0+=si1;
si1=l3;
si2=l8;
f80(i,si0,si1,si2);
si0=l4;
f266(i,si0);
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+48U);
i64_store(i->m0,(U64)si0,sj1);
goto L3;
L5:;
si0=l5;
si1=40U;
si0+=si1;
si1=l9;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+44U);
l4=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+40U);
l8=si0;
L4:;
si0=l5;
si1=32U;
si0+=si1;
si1=l8;
si2=l4;
f380(i,si0,si1,si2);
si0=l5;
si0=i32_load(i->m0,(U64)si0+36U);
l4=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+32U);
l8=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=l9;
f392(i,si0,si1);
si0=l8;
si1=l4;
si2=l5;
si2=i32_load(i->m0,(U64)si2+24U);
si3=l5;
si3=i32_load(i->m0,(U64)si3+28U);
si0=f247(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
si0=l8;
si1=l4;
si0=f1139(i,si0,si1);
l4=si0;
si0=l3;
f1035(i,si0);
si0=l3;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
L3:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=l6;
f1704(i,si0,si1);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=0U;
si1=0U;
si2=1174936U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1174936U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f2(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2;
si0=l1;
si1=l2;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si2=l3;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
L0:;
return si0;
}

void f1227(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=4U;
si0+=si1;
l3=si0;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
f1816(i,si0,si1);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+32U);
si1=17U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
L11:;
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
si1=l2;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+32U);
l4=sj1;
i64_store(i->m0,(U64)si0+16U,sj1);
sj0=l4;
si0=(U32)(sj0);
si1=255U;
si0&=si1;
si1=17U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+16U);
i64_store(i->m0,(U64)si0,sj1);
goto L7;
L10:;
si0=l2;
si1=17U;
i32_store8(i->m0,(U64)si0+16U,si1);
goto L8;
L9:;
si0=l2;
si1=17U;
i32_store8(i->m0,(U64)si0+32U,si1);
goto L6;
L8:;
si0=l1;
si1=12U;
si0+=si1;
l3=si0;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=l3;
f1816(i,si0,si1);
goto L12;
L13:;
si0=l2;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
L12:;
si0=l2;
si1=16U;
si0+=si1;
f1229(i,si0);
L7:;
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0);
si1=17U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
L14:;
si0=l2;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1);
l4=sj1;
i64_store(i->m0,(U64)si0+32U,sj1);
sj0=l4;
si0=(U32)(sj0);
si1=255U;
si0&=si1;
si1=17U;
si0=si0 != si1;
if(si0){
goto L5;
}
L6:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=28U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
if(si0){
goto L16;
}
si0=l3;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L15;
}
goto L3;
L16:;
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si1=l3;
si0-=si1;
si1=12U;
si0=DIV_U(si0,si1);
si1=l5;
si0=si0 <= si1;
if(si0){
goto L17;
}
si0=l3;
si1=l5;
si2=12U;
si1*=si2;
si0+=si1;
l3=si0;
goto L3;
L17:;
si0=l1;
si1=l6;
i32_store(i->m0,(U64)si0+20U,si1);
L15:;
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
goto L2;
L5:;
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+32U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l1;
si1=l3;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l3;
sj0=i64_load(i->m0,(U64)si0);
l4=sj0;
si0=l3;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+2U,si1);
si0=l0;
sj1=l4;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=32U;
si0+=si1;
f1229(i,si0);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2393(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l3;
si2=l3;
si3=8U;
si2+=si3;
f2394(i,si0,si1,si2);
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1925(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load16_u(i->m0,(U64)si0+138U);
l4=si0;
si0=l3;
si1=0U;
i32_store8(i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l4;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l1;
si1=140U;
si0+=si1;
l5=si0;
L2:;
{
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
f1027(i,si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=l3;
si1=i32_load(i->m0,(U64)si1+12U);
l4=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si1=l4;
i32_store16(i->m0,(U64)si0+136U,si1);
si0=l6;
si1=l1;
i32_store(i->m0,(U64)si0+88U,si1);
goto L2;
}
L1:;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f454(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+8U);
f397(i,si0,si1,si2);
L0:;
}

U32 f2618(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+4U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si0=i32_load8_u(i->m0,(U64)si0+8U);
si1=9U;
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
si0=i32_load(i->m0,(U64)si0);
goto L0;
L1:;
si0=1160504U;
f14(i,si0);
UNREACHABLE;
L0:;
return si0;
}

void f2693(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=1166020U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f2694(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=1166020U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f2695(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=1166020U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

U32 f1808(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+12U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si1=l0;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=60U;
si0+=si1;
si1=174U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=133U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l3;
si1=1125084U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l3;
si1=133U;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l0;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l1;
si1=l2;
si2=l3;
si3=16U;
si2+=si3;
si0=f682(i,si0,si1,si2);
l0=si0;
goto L1;
L2:;
si0=l3;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=60U;
si0+=si1;
si1=174U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
si1=133U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l3;
si1=1125108U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l0;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l3;
si1=133U;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l1;
si1=l2;
si2=l3;
si3=16U;
si2+=si3;
si0=f682(i,si0,si1,si2);
l0=si0;
L1:;
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f1874(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
sj1=8589934592ULL;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=2U;
f1279(i,si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l0;
si2=40U;
si1+=si2;
si2=l0;
si2=i32_load(i->m0,(U64)si2+40U);
l3=si2;
si3=5U;
si2=si2 > si3;
l4=si2;
si0=si2?si0:si1;
l5=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=l4;
si0=si2?si0:si1;
si1=l0;
si2=4U;
si3=40U;
si4=l4;
si2=si4?si2:si3;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l1=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l3;
si1=5U;
si2=l4;
si0=si2?si0:si1;
l3=si0;
L2:;
{
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l5;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
l7=sj1;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=24U;
si0+=si1;
sj1=l7;
si1=(U32)(sj1);
l1=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si0=l2;
si1=44U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
L4:;
{
si0=l6;
si1=l1;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
sj0=i64_load(i->m0,(U64)si0);
l7=sj0;
sj1=255ULL;
sj0&=sj1;
sj1=13ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l6=si0;
L6:;
si0=l2;
si1=l6;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=24U;
si0+=si1;
f1875(i,si0);
goto L1;
L5:;
si0=l0;
sj1=l7;
f1281(i,si0,sj1);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L4;
}
L3:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+16U);
l4=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l2;
si1=13U;
i32_store8(i->m0,(U64)si0+24U,si1);
goto L8;
L9:;
si0=l2;
si1=l4;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
l7=sj1;
i64_store(i->m0,(U64)si0+24U,sj1);
sj0=l7;
sj1=255ULL;
sj0&=sj1;
sj1=13ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
L8:;
si0=l2;
si1=24U;
si0+=si1;
f1001(i,si0);
si0=l5;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
f1875(i,si0);
goto L1;
L7:;
si0=l6;
sj1=l7;
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
goto L2;
}
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2114(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load16_u(i->m0,(U64)si0+2U);
l1=si0;
si1=l0;
si1=i32_load16_u(i->m0,(U64)si1);
si0|=si1;
si1=65535U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=65535U;
si1&=si2;
si2=1U;
si1+=si2;
l1=si1;
si2=65535U;
si3=l1;
si4=65535U;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store16(i->m0,(U64)si0+2U,si1);
goto L0;
L1:;
si0=1165517U;
si1=29U;
si2=1165548U;
f1453(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1939(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=4U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
si2=2U;
si1<<=(si2&31);
f264(i,si0,si1);
L1:;
L0:;
}

void f1612(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
if(si0){
goto L2;
}
si0=l3;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
si1=133U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=2U;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1177972U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l3;
si1=133U;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f1492(i,si0,si1);
si0=l0;
si1=l3;
si2=16U;
si1+=si2;
si1=f1658(i,si1);
i32_store(i->m0,(U64)si0+4U,si1);
si0=1U;
l2=si0;
goto L1;
L2:;
si0=l1;
si1=-2147483648U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
si1=133U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l3;
si1=1178008U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l3;
si1=133U;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l3;
si2=64U;
si1+=si2;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l3;
si1=28U;
si0+=si1;
si1=l3;
si2=40U;
si1+=si2;
f1492(i,si0,si1);
si0=l0;
si1=l3;
si2=28U;
si1+=si2;
si1=f1658(i,si1);
i32_store(i->m0,(U64)si0+4U,si1);
si0=1U;
l2=si0;
goto L1;
L3:;
si0=l0;
si1=l1;
si2=l2;
si1=I32_DIV_S(si1,si2);
i32_store(i->m0,(U64)si0+4U,si1);
si0=0U;
l2=si0;
L1:;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1082(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=5U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
f1055(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
f1088(i,si0,si1);
goto L1;
L2:;
si0=l1;
si1=l0;
sj1=i64_load(i->m0,(U64)si1+4U);
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l1;
si1=l2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l1;
si1=20U;
si0+=si1;
f1092(i,si0);
L1:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f906(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
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
si1=11U;
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
goto L6;
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
goto L7;
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
L7:;
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L8;
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
L8:;
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
goto L9;
}
si0=l2;
si1=168U;
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
f905(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+92U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=80U;
si0+=si1;
si1=l1;
f904(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+84U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+80U);
if(si0){
goto L10;
}
L11:;
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
goto L10;
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
goto L12;
}
si0=l2;
si1=144U;
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
i64_store(i->m0,(U64)si0+136U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
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
goto L13;
}
L14:;
{
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
f900(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+52U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L14;
}
}
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
f907(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+44U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+40U);
if(si0){
goto L13;
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
goto L13;
}
L15:;
{
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f900(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L15;
}
}
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
f908(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f909(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L12;
}
L13:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+136U);
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
goto L12;
}
si0=l1;
si1=l8;
i32_store(i->m0,(U64)si0+20U,si1);
L12:;
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
goto L16;
}
si0=l1;
si1=11U;
si2=l3;
si3=l6;
si4=l7;
si5=l5;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
L16:;
si0=l8;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
if(si0){
goto L5;
}
goto L4;
L10:;
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
goto L9;
}
si0=l1;
si1=l8;
i32_store(i->m0,(U64)si0+20U,si1);
L9:;
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
goto L6;
}
si0=l1;
si1=11U;
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
goto L6;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l9;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=l9;
i32_store(i->m0,(U64)si0+20U,si1);
L6:;
si0=1U;
l3=si0;
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L3;
L5:;
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
goto L17;
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
goto L4;
L17:;
si0=1120424U;
si1=40U;
si2=1111860U;
f16(i,si0,si1,si2);
UNREACHABLE;
L4:;
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

void f397(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
f398(i,si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si1=l2;
si2=268435455U;
si1&=si2;
l5=si1;
si2=l4;
si3=l5;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si0=0U;
l5=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
l7=si0;
L1:;
{
si0=l6;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=l5;
si1+=si2;
f32(i,si0,si1);
si0=l7;
si1=l5;
si0+=si1;
l8=si0;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l8;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+16U);
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
goto L1;
}
L0:;
}

void f2995(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj4,sj6,sj7;
si0=i->g0;
si1=32U;
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
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f1268(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
l4=si0;
if(si0){
goto L6;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+20U);
l7=si1;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
f1710(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+28U);
l8=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
sj0=i64_load(i->m0,(U64)si0+24U);
l6=sj0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+24U);
l9=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l4;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l7;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
goto L8;
L9:;
si0=l5;
si1=l7;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+4U);
l7=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
L8:;
si0=l5;
si1=1127312U;
si2=9U;
si3=l2;
sj4=l6;
si4=(U32)(sj4);
l3=si4;
si5=l3;
si6=8U;
si5+=si6;
sj6=l6;
sj7=1095216660480ULL;
sj6&=sj7;
sj7=8589934592ULL;
si6=sj6 == sj7;
si4=si6?si4:si5;
si1=f1941(i,si1,si2,si3,si4);
l3=si1;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L1;
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
si0=l2;
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
l3=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l3;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
goto L2;
L10:;
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+24U,si1);
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
si0=l5;
si1=l2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l5;
si1=24U;
si0+=si1;
f1474(i,si0);
si0=l2;
l3=si0;
goto L2;
L7:;
si0=1U;
si1=l4;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+20U);
i32_store(i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+24U,si1);
si0=1178224U;
si1=43U;
si2=l5;
si3=24U;
si2+=si3;
si3=1119036U;
si4=1174576U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1174808U;
f14(i,si0);
UNREACHABLE;
L4:;
si0=1174576U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=f1473(i);
l3=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f1372(i,si0,si1);
si0=l5;
si1=16U;
si0+=si1;
f1035(i,si0);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+16U,si1);
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=l7;
f1375(i,si0,si1,si2);
L1:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
si0=l9;
si1=l8;
f1704(i,si0,si1);
si0=l5;
si1=12U;
si0+=si1;
f1035(i,si0);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f748(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
l1=si1;
si0-=si1;
si1=40U;
si0=DIV_U(si0,si1);
l2=si0;
L2:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
f749(i,si0);
si0=l1;
si1=40U;
si0+=si1;
l1=si0;
goto L2;
}
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l0;
si1=i32_load(i->m0,(U64)si1);
f337(i,si0,si1);
L0:;
}

void f685(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
switch(si0){
case 0:
goto L5;
case 1:
goto L2;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L2;
case 5:
goto L2;
case 6:
goto L2;
case 7:
goto L2;
case 8:
goto L2;
case 9:
goto L9;
case 10:
goto L7;
case 11:
goto L2;
case 12:
goto L2;
case 13:
goto L8;
case 14:
goto L2;
case 15:
goto L2;
case 16:
goto L2;
case 17:
goto L2;
case 18:
goto L2;
case 19:
goto L2;
case 20:
goto L2;
case 21:
goto L2;
case 22:
goto L2;
case 23:
goto L2;
case 24:
goto L2;
case 25:
goto L2;
case 26:
goto L2;
case 27:
goto L2;
case 28:
goto L2;
case 29:
goto L2;
case 30:
goto L2;
case 31:
goto L2;
case 32:
goto L2;
case 33:
goto L2;
case 34:
goto L4;
case 35:
goto L2;
case 36:
goto L2;
case 37:
goto L2;
case 38:
goto L2;
case 39:
goto L3;
default:
goto L10;
}
L10:;
si0=l1;
si1=92U;
si0=si0 == si1;
if(si0){
goto L6;
}
goto L2;
L9:;
si0=l0;
si1=512U;
i32_store16(i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=29788U;
i32_store16(i->m0,(U64)si0,si1);
goto L1;
L8:;
si0=l0;
si1=512U;
i32_store16(i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=29276U;
i32_store16(i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l0;
si1=512U;
i32_store16(i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=28252U;
i32_store16(i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l0;
si1=512U;
i32_store16(i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=23644U;
i32_store16(i->m0,(U64)si0,si1);
goto L1;
L5:;
si0=l0;
si1=512U;
i32_store16(i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=12380U;
i32_store16(i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l2;
si1=65536U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=512U;
i32_store16(i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=8796U;
i32_store16(i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l2;
si1=256U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=512U;
i32_store16(i->m0,(U64)si0+10U,si1);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=10076U;
i32_store16(i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l2;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=11U;
si0<<=(si1&31);
l4=si0;
si0=0U;
l2=si0;
si0=33U;
l5=si0;
si0=33U;
l6=si0;
L20:;
{
si0=l5;
si1=1U;
si0>>=(si1&31);
si1=l2;
si0+=si1;
l5=si0;
si1=2U;
si0<<=(si1&31);
si1=1082980U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=11U;
si0<<=(si1&31);
l7=si0;
si1=l4;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l5;
si1=l6;
si2=l7;
si3=l4;
si2=si2 > si3;
si0=si2?si0:si1;
l6=si0;
si1=l5;
si2=1U;
si1+=si2;
si2=l2;
si3=l7;
si4=l4;
si3=si3 < si4;
si1=si3?si1:si2;
l2=si1;
si0-=si1;
l5=si0;
si0=l6;
si1=l2;
si0=si0 > si1;
if(si0){
goto L20;
}
goto L18;
}
L19:;
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
L18:;
si0=l2;
si1=32U;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
l5=si0;
si1=1082980U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l4=si0;
si0=l2;
si1=32U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=31U;
l2=si0;
si0=727U;
l7=si0;
goto L22;
L24:;
si0=l2;
si1=33U;
si2=1070932U;
f4(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l5;
si1=1082984U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=21U;
si0>>=(si1&31);
l7=si0;
si0=l2;
if(si0){
goto L25;
}
si0=0U;
l2=si0;
goto L21;
L25:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
L22:;
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=1082980U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=2097151U;
si0&=si1;
l2=si0;
L21:;
si0=l7;
si1=l4;
si2=-1U;
si1^=si2;
si0+=si1;
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
si1=l2;
si0-=si1;
l6=si0;
si0=l4;
si1=727U;
si2=l4;
si3=727U;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=0U;
l2=si0;
L27:;
{
si0=l5;
si1=l4;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l2;
si1=l4;
si2=1083112U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
si0+=si1;
l2=si0;
si1=l6;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=l7;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L27;
}
}
si0=l7;
l4=si0;
L26:;
si0=l4;
si1=1U;
si0&=si1;
if(si0){
goto L16;
}
L17:;
si0=l1;
si1=32U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si1=127U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l1;
si1=65536U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l1;
si1=131072U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l1;
si1=-205744U;
si0+=si1;
si1=712016U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si1=-201547U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si1=-195102U;
si0+=si1;
si1=1506U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si1=-191457U;
si0+=si1;
si1=3103U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si1=-183970U;
si0+=si1;
si1=14U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si1=-2U;
si0&=si1;
si1=178206U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l1;
si1=-32U;
si0&=si1;
si1=173792U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l1;
si1=-177978U;
si0+=si1;
si1=6U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l1;
si1=-918000U;
si0+=si1;
si1=196112U;
si0=si0 < si1;
if(si0){
goto L11;
}
goto L13;
L16:;
si0=l3;
si1=6U;
si0+=si1;
si1=2U;
si0+=si1;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store16(i->m0,(U64)si0+6U,si1);
si0=l3;
si1=l1;
si2=8U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067683U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067683U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+11U,si1);
si0=l3;
si1=l1;
si2=16U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067683U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+10U,si1);
si0=l3;
si1=l1;
si2=20U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067683U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+9U,si1);
si0=l3;
si1=6U;
si0+=si1;
si1=l1;
si2=1U;
si1|=si2;
si1=I32_CLZ(si1);
si2=2U;
si1>>=(si2&31);
si2=-2U;
si1+=si2;
l2=si1;
si0+=si1;
l4=si0;
si1=0U;
si1=i32_load16_u(i->m0,(U64)si1+1070990U);
i32_store16(i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
si2=4U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067683U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+13U,si1);
si0=l4;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(i->m0,(U64)si1+1070992U);
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=6U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=l1;
si2=15U;
si1&=si2;
si2=1067683U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+6U);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=125U;
i32_store8(i->m0,(U64)si0+15U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load16_u(i->m0,(U64)si1);
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=10U;
i32_store8(i->m0,(U64)si0+11U,si1);
si0=l0;
si1=l2;
i32_store8(i->m0,(U64)si0+10U,si1);
goto L1;
L15:;
si0=l1;
si1=1069440U;
si2=44U;
si3=1069528U;
si4=196U;
si5=1069724U;
si6=450U;
si0=f686(i,si0,si1,si2,si3,si4,si5,si6);
if(si0){
goto L13;
}
goto L11;
L14:;
si0=l1;
si1=1070174U;
si2=40U;
si3=1070254U;
si4=287U;
si5=1070541U;
si6=303U;
si0=f686(i,si0,si1,si2,si3,si4,si5,si6);
si0=!(si0);
if(si0){
goto L11;
}
L13:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=128U;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L12:;
si0=l5;
si1=727U;
si2=1070948U;
f4(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l3;
si1=6U;
si0+=si1;
si1=2U;
si0+=si1;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=0U;
i32_store16(i->m0,(U64)si0+6U,si1);
si0=l3;
si1=l1;
si2=8U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067683U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067683U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+11U,si1);
si0=l3;
si1=l1;
si2=16U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067683U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+10U,si1);
si0=l3;
si1=l1;
si2=20U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067683U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+9U,si1);
si0=l3;
si1=6U;
si0+=si1;
si1=l1;
si2=1U;
si1|=si2;
si1=I32_CLZ(si1);
si2=2U;
si1>>=(si2&31);
si2=-2U;
si1+=si2;
l2=si1;
si0+=si1;
l4=si0;
si1=0U;
si1=i32_load16_u(i->m0,(U64)si1+1070990U);
i32_store16(i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
si2=4U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067683U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+13U,si1);
si0=l4;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(i->m0,(U64)si1+1070992U);
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=6U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=l1;
si2=15U;
si1&=si2;
si2=1067683U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+6U);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=125U;
i32_store8(i->m0,(U64)si0+15U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load16_u(i->m0,(U64)si1);
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=10U;
i32_store8(i->m0,(U64)si0+11U,si1);
si0=l0;
si1=l2;
i32_store8(i->m0,(U64)si0+10U,si1);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2434(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si0=1169720U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f1815(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si0=f1427(i,si0,si1);
L0:;
return si0;
}

void f895(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=144U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=80U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+84U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+80U);
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
si1=19U;
i32_store8(i->m0,(U64)si0+95U,si1);
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
i32_store(i->m0,(U64)si0+112U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+108U,si1);
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+104U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=104U;
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
i32_store(i->m0,(U64)si0+96U,si1);
si0=l2;
si1=l1;
si2=120U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+100U,si1);
si0=l2;
si1=64U;
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
si0=i32_load(i->m0,(U64)si0+68U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+64U);
if(si0){
goto L8;
}
si0=l2;
si1=136U;
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
i64_store(i->m0,(U64)si0+128U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=56U;
si0+=si1;
si1=l1;
si2=1114684U;
si3=3U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+60U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+56U);
if(si0){
goto L9;
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
goto L9;
}
si0=l2;
si1=112U;
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
i64_store(i->m0,(U64)si0+104U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l12=si0;
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
if(si0){
goto L10;
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
goto L10;
}
L11:;
{
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f845(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L11;
}
}
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
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
si1=112U;
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
i64_store(i->m0,(U64)si0+104U,sj1);
si0=l1;
si1=48U;
si0+=si1;
f851(i,si0);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f913(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l13=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+104U);
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
si1=l1;
f904(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
if(si0){
goto L9;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
si0=l2;
si1=l2;
si2=95U;
si1+=si2;
i32_store(i->m0,(U64)si0+136U,si1);
si0=l2;
si1=l2;
si2=96U;
si1+=si2;
i32_store(i->m0,(U64)si0+132U,si1);
si0=l2;
si1=l2;
si2=100U;
si1+=si2;
i32_store(i->m0,(U64)si0+128U,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
si1=19U;
si2=l3;
si3=l6;
si4=l7;
si5=l5;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
L12:;
si0=l8;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L13;
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
i32_store(i->m0,(U64)si0+108U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+95U);
i32_store8(i->m0,(U64)si0+105U,si1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+104U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=104U;
si1+=si2;
f841(i,si0,si1);
L13:;
si0=l2;
si1=128U;
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
L10:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+104U);
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
L9:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+128U);
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
si2=95U;
si1+=si2;
i32_store(i->m0,(U64)si0+136U,si1);
si0=l2;
si1=l2;
si2=96U;
si1+=si2;
i32_store(i->m0,(U64)si0+132U,si1);
si0=l2;
si1=l2;
si2=100U;
si1+=si2;
i32_store(i->m0,(U64)si0+128U,si1);
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=19U;
si2=l3;
si3=l6;
si4=l7;
si5=l5;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=128U;
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
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2624(glicolwasmInstance*i,U32 l0) {
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
si1=1138116U;
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

U32 f44(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si0=f247(i,si0,si1,si2,si3);
L0:;
return si0;
}

U32 f249(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si0=f247(i,si0,si1,si2,si3);
L0:;
return si0;
}

U32 f569(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si0=f247(i,si0,si1,si2,si3);
L0:;
return si0;
}

void f335(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si1=104U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+100U);
si1=l1;
si2=12U;
f268(i,si0,si1,si2);
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
f279(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l2;
si2=28U;
si1*=si2;
f264(i,si0,si1);
L2:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=20U;
si1*=si2;
f264(i,si0,si1);
L3:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+40U);
si1=l0;
si2=44U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f12(i,si0,si1);
si0=l0;
si1=52U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=56U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
si0=l0;
si1=68U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=72U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
si0=l0;
si1=88U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=84U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=16U;
f268(i,si0,si1,si2);
L4:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+140U);
si1=l0;
si2=144U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f12(i,si0,si1);
L0:;
}

U32 f836(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=1U;
si0<<=(si1&31);
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
si2=1U;
si1<<=(si2&31);
l1=si1;
si0-=si1;
l4=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
si0+=si1;
l1=si0;
L1:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
f781(i,si0,si1);
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+8U);
l5=si0;
si1=88U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
si0=!(si0);
goto L0;
L2:;
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+9U);
l6=si0;
si0=l1;
si1=l5;
i32_store8(i->m0,(U64)si0,si1);
si0=l1;
si1=l6;
i32_store8(i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l4;
si1=-2U;
si0+=si1;
l4=si0;
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
goto L1;
}
L0:;
return si0;
}

U32 f472(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2;
si0=l1;
si1=l2;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si2=l3;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l2;
si2=12U;
si1*=si2;
si0+=si1;
L0:;
return si0;
}

U32 f651(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si2=i32_load(i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
L0:;
return si0;
}

void f2536(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
F32 sf1;
si0=i->g0;
si1=16U;
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
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si0=f2346(i,si0);
l6=si0;
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
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si0=f2346(i,si0);
l4=si0;
si0=l5;
si1=8U;
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
si0=i32_load8_u(i->m0,(U64)si0+12U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
l7=sj1;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
si1=f1741(i,si1);
l3=si1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l3;
si2=i32_load(i->m0,(U64)si2+8U);
si3=l6;
si4=l4;
sf1=f2537(i,si1,si2,si3,si4);
f32_store(i->m0,(U64)si0+4U,sf1);
si0=l0;
si1=5U;
i32_store(i->m0,(U64)si0,si1);
sj0=l7;
si0=(U32)(sj0);
sj1=l7;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
f1704(i,si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=2U;
si1=2U;
si2=1171100U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1U;
si1=l4;
si2=1171100U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1171164U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f2752(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
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
si1=0U;
i32_store(i->m0,(U64)si0+14U,si1);
si0=l5;
sj1=l6;
i64_store(i->m0,(U64)si0+20U,sj1);
si0=l5;
si1=34U;
i32_store8(i->m0,(U64)si0+12U,si1);
si0=l5;
si1=12U;
si0+=si1;
si0=f97(i,si0);
l4=si0;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=0U;
si1=0U;
si2=1172560U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1077(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
f1082(i,si0);
si0=l0;
si1=64U;
si0+=si1;
f1048(i,si0);
si0=l0;
si1=88U;
si0+=si1;
f1032(i,si0);
si0=l0;
f87(i,si0);
L0:;
}

void f2140(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
L1:;
{
si0=l1;
si1=4U;
si0+=si1;
si1=l0;
f2139(i,si0,si1);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si1=4U;
si0+=si1;
f1476(i,si0);
si0=l2;
si1=22U;
si0=si0 != si1;
if(si0){
goto L1;
}
}
si0=l0;
f2138(i,si0);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1791(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si0=f1390(i,si0,si1);
L0:;
return si0;
}

void f459(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
if(si0){
goto L4;
}
si0=4U;
l3=si0;
goto L3;
L4:;
si0=l1;
si1=107374182U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=20U;
si0*=si1;
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
si1=4U;
si2=l3;
f719(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
f228(i);
UNREACHABLE;
L1:;
UNREACHABLE;
L0:;
}

void f2305(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=1U;
si2=l1;
si3=l1;
si4=8U;
si3+=si4;
f1860(i,si0,si1,si2,si3);
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2753(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
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
si0=f2346(i,si0);
l6=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=1U;
si1=1U;
si2=1172844U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1172844U;
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
si0=l0;
si1=l6;
si2=l5;
si3=8U;
si2+=si3;
si2=f2346(i,si2);
l4=si2;
si3=l6;
si4=l4;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=4ULL;
sj1|=sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f218(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=f185(i,si0);
l1=si0;
si0=512U;
si1=4U;
si0=f164(i,si0,si1);
si1=0U;
si2=512U;
si0=f3112(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=28U;
si0+=si1;
si1=1052468U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l2;
si2=12U;
si1+=si2;
si0=f212(i,si0,si1);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f2472(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=l1;
si3=l2;
f2323(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(i->m0,(U64)si0+16U);
l2=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l0;
si2=l2;
si3=l2;
si4=l4;
si4=i32_load(i->m0,(U64)si4+20U);
si3+=si4;
f2287(i,si0,si1,si2,si3);
si0=l4;
si1=56U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=52U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1+4U);
l0=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=60U;
si0+=si1;
si1=l0;
si2=l3;
si2=i32_load(i->m0,(U64)si2+8U);
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l0;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l4;
si1=48U;
si0+=si1;
l5=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+28U);
l0=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+32U);
l3=si0;
L5:;
{
si0=l0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=13U;
i32_store8(i->m0,(U64)si0+80U,si1);
goto L2;
L6:;
si0=l4;
si1=l0;
sj1=i64_load(i->m0,(U64)si1);
l6=sj1;
i64_store(i->m0,(U64)si0+80U,sj1);
sj0=l6;
sj1=255ULL;
sj0&=sj1;
sj1=13ULL;
si0=sj0 == sj1;
if(si0){
goto L2;
}
si0=l4;
sj1=l6;
i64_store(i->m0,(U64)si0+64U,sj1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=l4;
si1=64U;
si0+=si1;
f1032(i,si0);
goto L5;
}
L4:;
si0=l0;
si1=l3;
f1750(i,si0,si1);
goto L1;
L3:;
si0=l0;
f1039(i,si0);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l4;
si1=80U;
si0+=si1;
f1001(i,si0);
si0=l4;
si1=1178584U;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l4;
si1=1178584U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+44U);
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+36U);
si1=l5;
f2212(i,si0,si1);
goto L7;
L8:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+36U);
si1=l4;
si1=i32_load(i->m0,(U64)si1+40U);
si2=l5;
si0=f2294(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+60U);
l0=si0;
si1=l4;
si1=i32_load(i->m0,(U64)si1+52U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
l3=si0;
goto L9;
L10:;
si0=l4;
si1=28U;
si0+=si1;
si1=l0;
si2=l3;
si1-=si2;
si2=3U;
si1>>=(si2&31);
f2295(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+36U);
si1=l4;
si1=i32_load(i->m0,(U64)si1+40U);
si2=l5;
si0=f2294(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+52U);
l0=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+60U);
l3=si0;
L9:;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l0;
si1-=si2;
si2=3U;
si1>>=(si2&31);
f75(i,si0,si1);
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+80U,sj1);
si0=l4;
si1=80U;
si0+=si1;
si1=l5;
f2212(i,si0,si1);
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+80U);
i32_store(i->m0,(U64)si0+72U,si1);
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+84U);
l0=si1;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l4;
si1=l0;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l4;
si1=l0;
si2=l4;
si2=i32_load(i->m0,(U64)si2+88U);
l3=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
f2295(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+36U);
si1=l4;
si1=i32_load(i->m0,(U64)si1+40U);
si2=l4;
si3=64U;
si2+=si3;
si0=f2294(i,si0,si1,si2);
L11:;
si0=l4;
si1=64U;
si0+=si1;
f1141(i,si0);
L7:;
si0=l4;
si1=28U;
si0+=si1;
f2223(i,si0);
si0=l5;
f1141(i,si0);
L1:;
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f50(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si3=9U;
si2+=si3;
si0=f3065(i,si0,si1,si2);
si0=l3;
sj0=i64_load(i->m0,(U64)si0);
l4=sj0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l5=si0;
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
l6=si1;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l5;
si2=l3;
si1+=si2;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
sj1=l4;
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(i->m0,(U64)si0+8U,sj1);
L2:;
{
si0=l2;
si1=8U;
si0+=si1;
si0=f51(i,si0);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=40U;
si0+=si1;
si1=l7;
si2=-24U;
si1+=si2;
l5=si1;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l5;
si3=8U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f52(i,si0,si1,si2);
si0=l5;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=l5;
si2=20U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l5=si1;
f53(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
si0=l2;
si1=40U;
si0+=si1;
si1=16U;
si0+=si1;
l11=si0;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l9;
si3=l5;
si4=2U;
si3<<=(si4&31);
si1=f3065(i,si1,si2,si3);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l3;
si2=l7;
si1-=si2;
si2=-24U;
si1=I32_DIV_S(si1,si2);
si2=24U;
si1*=si2;
si0+=si1;
si1=-24U;
si0+=si1;
l7=si0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+40U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=l10;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l7;
si1=8U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=l5;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l7;
si1=16U;
si0+=si1;
si1=l11;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
goto L2;
}
L1:;
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+8U);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1189(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=i32_load(i->m0,(U64)si0);
si1=1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
l3=si1;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l2;
si1=l3;
si2=1U;
si1<<=(si2&31);
si2=-1U;
si3=l3;
si4=-1U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
si2=4U;
si3=l3;
si1=si3?si1:si2;
l4=si1;
si2=l2;
si3=l4;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si0=l1;
si1=1180264U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l2;
si0=f1818(i,si0);
l1=si0;
goto L4;
L5:;
si0=l1;
si1=l3;
si1=f1240(i,si1);
si2=4U;
si3=l2;
si3=f1240(i,si3);
si0=f615(i,si0,si1,si2,si3);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
L4:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L3:;
goto L0;
L2:;
si0=1116144U;
si1=17U;
si2=1123092U;
f37(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si0=f1817(i,si0);
UNREACHABLE;
L0:;
}

void f564(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
F64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
F32 l13=0;
F64 l14=0;
U32 l15=0;
U32 l16=0;
F32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U64 l27=0;
U64 l28=0;
U32 l29=0;
U64 l30=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
F32 sf0,sf1;
F64 sd0,sd1,sd2,sd3,sd4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
if(si0){
goto L7;
}
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
sd0=240;
si1=l0;
sf1=f32_load(i->m0,(U64)si1+44U);
sd1=(F64)(sf1);
sd0/=sd1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+48U);
sd1=(F64)(si1);
sd0*=sd1;
si1=l0;
sf1=f32_load(i->m0,(U64)si1+40U);
sd1=(F64)(sf1);
sd0/=sd1;
l5=sd0;
sd1=4294967296;
si0=sd0 < sd1;
sd1=l5;
sd2=0;
si1=sd1 >= sd2;
l3=si1;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
sd0=l5;
si0=I32_TRUNC_U_F64(sd0);
l6=si0;
goto L8;
L9:;
si0=0U;
l6=si0;
L8:;
si0=-1U;
si1=l6;
si2=0U;
si3=l3;
si1=si3?si1:si2;
sd2=l5;
sd3=4294967295;
si2=sd2 > sd3;
si0=si2?si0:si1;
l7=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l8=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
si2=20U;
si1*=si2;
si0+=si1;
l9=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+52U);
l10=si0;
si0=0U;
l11=si0;
L10:;
{
si0=l11;
si1=128U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
sf0=0;
l13=sf0;
si0=l8;
l6=si0;
L11:;
{
si0=l12;
sf1=l13;
f32_store(i->m0,(U64)si0,sf1);
L12:;
{
si0=l6;
l3=si0;
si1=l9;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l0;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
i32_store(i->m0,(U64)si0+52U,si1);
goto L10;
L13:;
si0=l7;
si0=!(si0);
if(si0){
goto L5;
}
sd0=l5;
si1=l3;
sf1=f32_load(i->m0,(U64)si1);
sd1=(F64)(sf1);
sd0*=sd1;
l14=sd0;
sd1=0;
si0=sd0 >= sd1;
l15=si0;
sd0=l14;
sd1=4294967296;
si0=sd0 < sd1;
sd1=l14;
sd2=0;
si1=sd1 >= sd2;
si0&=si1;
si0=!(si0);
if(si0){
goto L15;
}
sd0=l14;
si0=I32_TRUNC_U_F64(sd0);
l16=si0;
goto L14;
L15:;
si0=0U;
l16=si0;
L14:;
si0=l3;
si1=20U;
si0+=si1;
l6=si0;
si0=l10;
si1=l7;
si0=REM_U(si0,si1);
si1=-1U;
si2=l16;
si3=0U;
si4=l15;
si2=si4?si2:si3;
sd3=l14;
sd4=4294967295;
si3=sd3 > sd4;
si1=si3?si1:si2;
si0=si0 != si1;
if(si0){
goto L12;
}
}
sf0=0;
l13=sf0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
si1=-2147483648U;
si0=si0 != si1;
if(si0){
goto L11;
}
sf0=0;
l13=sf0;
si0=l3;
si1=8U;
si0+=si1;
sf0=f32_load(i->m0,(U64)si0);
l17=sf0;
sf1=0;
si0=sf0 == sf1;
if(si0){
goto L11;
}
sf0=l17;
sf1=-60;
sf0+=sf1;
sf1=12;
sf0/=sf1;
sf0=f3080(i,sf0);
l13=sf0;
goto L11;
}
}
L7:;
si0=0U;
l18=si0;
si0=l1;
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l19=si1;
si2=l0;
si3=20U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
l20=si2;
si3=0U;
si4=1060496U;
si1=f2(i,si1,si2,si3,si4);
si1=i32_load(i->m0,(U64)si1);
si2=1060512U;
si0=f3(i,si0,si1,si2);
l6=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
sf0=f32_load(i->m0,(U64)si0);
l13=sf0;
sf1=0;
si0=sf0 > sf1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l6;
sf0=f32_load(i->m0,(U64)si0+4U);
sf1=0;
si0=sf0 != sf1;
if(si0){
goto L4;
}
si0=l0;
sf1=l13;
f32_store(i->m0,(U64)si0+40U,sf1);
si0=1U;
l18=si0;
goto L4;
L6:;
si0=0U;
si1=0U;
si2=1060464U;
f4(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1049104U;
si1=57U;
si2=1060480U;
f16(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
sd0=240;
si1=l0;
sf1=f32_load(i->m0,(U64)si1+44U);
sd1=(F64)(sf1);
sd0/=sd1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+48U);
sd1=(F64)(si1);
sd0*=sd1;
si1=l0;
sf1=f32_load(i->m0,(U64)si1+40U);
sd1=(F64)(sf1);
sd0/=sd1;
l5=sd0;
sd1=4294967296;
si0=sd0 < sd1;
sd1=l5;
sd2=0;
si1=sd1 >= sd2;
l3=si1;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
sd0=l5;
si0=I32_TRUNC_U_F64(sd0);
l6=si0;
goto L16;
L17:;
si0=0U;
l6=si0;
L16:;
si0=-1U;
si1=l6;
si2=0U;
si3=l3;
si1=si3?si1:si2;
sd2=l5;
sd3=4294967295;
si2=sd2 > sd3;
si0=si2?si0:si1;
l6=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+24U);
l9=si0;
si1=-4U;
si0+=si1;
l21=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l22=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
si2=20U;
si1*=si2;
si0+=si1;
l10=si0;
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l11=si0;
si0=l0;
si1=36U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l23=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+52U);
l16=si0;
si0=0U;
l24=si0;
L18:;
{
si0=l24;
si1=128U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=l24;
si2=2U;
si1<<=(si2&31);
l25=si1;
si0+=si1;
l26=si0;
si0=l24;
si1=1U;
si0+=si1;
l24=si0;
sf0=0;
l13=sf0;
si0=l22;
l3=si0;
L19:;
{
si0=l26;
sf1=l13;
f32_store(i->m0,(U64)si0,sf1);
L24:;
{
si0=l3;
si1=l10;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l0;
si1=l16;
si2=1U;
si1+=si2;
l16=si1;
i32_store(i->m0,(U64)si0+52U,si1);
goto L18;
L25:;
si0=l6;
si0=!(si0);
if(si0){
goto L23;
}
sd0=l5;
si1=l3;
sf1=f32_load(i->m0,(U64)si1);
sd1=(F64)(sf1);
sd0*=sd1;
l14=sd0;
sd1=0;
si0=sd0 >= sd1;
l7=si0;
sd0=l14;
sd1=4294967296;
si0=sd0 < sd1;
sd1=l14;
sd2=0;
si1=sd1 >= sd2;
si0&=si1;
si0=!(si0);
if(si0){
goto L27;
}
sd0=l14;
si0=I32_TRUNC_U_F64(sd0);
l15=si0;
goto L26;
L27:;
si0=0U;
l15=si0;
L26:;
si0=l3;
si1=20U;
si0+=si1;
l3=si0;
si0=l16;
si1=l6;
si0=REM_U(si0,si1);
si1=-1U;
si2=l15;
si3=0U;
si4=l7;
si2=si4?si2:si3;
sd3=l14;
sd4=4294967295;
si3=sd3 > sd4;
si1=si3?si1:si2;
si0=si0 != si1;
if(si0){
goto L24;
}
}
si0=l3;
si1=-20U;
si0+=si1;
l7=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=-2147483648U;
si0^=si1;
l15=si0;
si1=7U;
si2=l15;
si3=14U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L28;
case 1:
goto L3;
case 2:
goto L3;
case 3:
goto L29;
default:
goto L3;
}
L29:;
si0=l23;
si0=!(si0);
if(si0){
goto L20;
}
si0=l11;
si1=l7;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l7;
si3=16U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
sj1=f474(i,si1,si2);
l27=sj1;
si1=(U32)(sj1);
si0&=si1;
l15=si0;
sj0=l27;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l28=sj0;
si0=l7;
si1=8U;
si0+=si1;
l12=si0;
si0=0U;
l29=si0;
L30:;
{
si0=l4;
si1=l9;
si2=l15;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
l27=sj1;
sj2=l28;
sj1^=sj2;
l30=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=l30;
sj3=-72340172838076673ULL;
sj2+=sj3;
sj1&=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(i->m0,(U64)si0+8U,sj1);
L31:;
{
si0=l4;
si1=l4;
si2=8U;
si1+=si2;
f43(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
if(si0){
goto L32;
}
sj0=l27;
sj1=l27;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l15;
si1=l29;
si2=8U;
si1+=si2;
l29=si1;
si0+=si1;
si1=l11;
si0&=si1;
l15=si0;
goto L30;
L32:;
si0=l12;
si1=l9;
si2=l4;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l15;
si2+=si3;
si3=l11;
si2&=si3;
l8=si2;
si3=4U;
si2<<=(si3&31);
si1-=si2;
si2=-16U;
si1+=si2;
l7=si1;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l7;
si3=8U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si0=f565(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L31;
}
}
}
si0=l1;
si1=l19;
si2=l20;
si3=l21;
si4=0U;
si5=l8;
si4-=si5;
si5=4U;
si4<<=(si5&31);
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si4=l18;
si3+=si4;
si4=1060592U;
si1=f2(i,si1,si2,si3,si4);
si1=i32_load(i->m0,(U64)si1);
si2=1060608U;
si0=f3(i,si0,si1,si2);
l7=si0;
si0=i32_load(i->m0,(U64)si0+4U);
if(si0){
goto L22;
}
si0=0U;
si1=0U;
si2=1060624U;
f4(i,si0,si1,si2);
UNREACHABLE;
L28:;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
goto L21;
L23:;
si0=1049104U;
si1=57U;
si2=1060560U;
f16(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l7;
si0=i32_load(i->m0,(U64)si0);
si1=l25;
si0+=si1;
l7=si0;
L21:;
sf0=0;
l13=sf0;
si0=l7;
sf0=f32_load(i->m0,(U64)si0);
l17=sf0;
sf1=0;
si0=sf0 == sf1;
if(si0){
goto L19;
}
sf0=l17;
sf1=-60;
sf0+=sf1;
sf1=12;
sf0/=sf1;
sf0=f3080(i,sf0);
l13=sf0;
goto L19;
L20:;
}
}
si0=1049500U;
si1=22U;
si2=1060576U;
f37(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=0U;
si1=0U;
si2=1060544U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1060528U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1287(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+80U);
l2=si2;
si3=l2;
si4=5U;
si3=si3 > si4;
l2=si3;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
si3=l2;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f2301(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+80U);
l2=si2;
si3=l2;
si4=5U;
si3=si3 > si4;
l2=si3;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
si3=l2;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

U32 f626(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l3;
si2=l2;
f605(i,si0,si1,si2);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l3;
si0+=si1;
si1=l1;
si2=l2;
si0=f3065(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l2;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=0U;
L0:;
return si0;
}

U32 f2035(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l0;
if(si0){
goto L1;
}
si0=1U;
goto L0;
L1:;
si0=2U;
l1=si0;
si0=1U;
l2=si0;
L2:;
{
si0=l0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=l2;
si0*=si1;
goto L0;
L3:;
si0=l1;
si1=1U;
si2=l0;
si3=1U;
si2&=si3;
si0=si2?si0:si1;
si1=l2;
si0*=si1;
l2=si0;
si0=l1;
si1=l1;
si0*=si1;
l1=si0;
si0=l0;
si1=1U;
si0>>=(si1&31);
l0=si0;
goto L2;
}
L0:;
return si0;
}

void f2103(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=400U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
l5=si1;
f2066(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+24U);
si1=90U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+34U);
l6=si0;
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+32U);
l7=si0;
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+24U);
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=24U;
si0+=si1;
f1075(i,si0);
si0=l4;
si1=168U;
si0+=si1;
si1=l3;
si2=l7;
si3=l6;
f2093(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(i->m0,(U64)si0+168U);
if(si0){
goto L11;
}
si0=l4;
si1=180U;
si0+=si1;
sj0=i64_load(i->m0,(U64)si0);
l8=sj0;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+172U);
l9=sj0;
si0=l4;
si1=168U;
si0+=si1;
si1=l5;
f2134(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+168U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l4;
sj0=i64_load(i->m0,(U64)si0+168U);
l10=sj0;
si0=(U32)(sj0);
if(si0){
goto L8;
}
L12:;
si0=l4;
sj1=l8;
i64_store(i->m0,(U64)si0+176U,sj1);
si0=l4;
sj1=l9;
sj2=48ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l6=si1;
i32_store16(i->m0,(U64)si0+174U,si1);
si0=l4;
sj1=l9;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l7=si1;
i32_store16(i->m0,(U64)si0+172U,si1);
si0=l4;
sj1=l9;
si1=(U32)(sj1);
l5=si1;
i32_store(i->m0,(U64)si0+168U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
si4=168U;
si3+=si4;
f2085(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+24U);
l3=si0;
si1=22U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+27U);
i32_store8(i->m0,(U64)si0+15U,si1);
si0=l4;
si1=l4;
si1=i32_load16_u(i->m0,(U64)si1+25U);
i32_store16(i->m0,(U64)si0+13U,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+28U);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=l3;
i32_store8(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=156U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
f2135(i,si0,si1);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+156U);
l3=si0;
si1=22U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+159U);
i32_store8(i->m0,(U64)si0+3U,si1);
si0=l4;
si1=l4;
si1=i32_load16_u(i->m0,(U64)si1+157U);
i32_store16(i->m0,(U64)si0+1U,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+160U);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=l3;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=168U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f2136(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+168U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
sj0=i64_load(i->m0,(U64)si0+168U);
l9=sj0;
si0=(U32)(sj0);
if(si0){
goto L5;
}
L13:;
si0=l4;
sj1=l8;
i64_store(i->m0,(U64)si0+176U,sj1);
si0=l4;
si1=l6;
i32_store16(i->m0,(U64)si0+174U,si1);
si0=l4;
si1=l7;
i32_store16(i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l5;
i32_store(i->m0,(U64)si0+168U,si1);
si0=l4;
si1=156U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
si4=168U;
si3+=si4;
f2081(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+156U);
l3=si0;
si1=17U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+159U);
i32_store8(i->m0,(U64)si0+135U,si1);
si0=l4;
si1=l4;
si1=i32_load16_u(i->m0,(U64)si1+157U);
i32_store16(i->m0,(U64)si0+133U,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+160U);
i64_store(i->m0,(U64)si0+136U,sj1);
si0=l4;
si1=l3;
i32_store8(i->m0,(U64)si0+132U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=132U;
si1+=si2;
f1323(i,si0,si1);
si0=l4;
si1=168U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
si2=1152416U;
f2091(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+168U);
if(si0){
goto L15;
}
si0=l4;
si1=0U;
i32_store8(i->m0,(U64)si0+144U,si1);
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+146U,si1);
goto L14;
L15:;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=f2061(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0);
si1=41U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l4;
sj1=l8;
i64_store(i->m0,(U64)si0+176U,sj1);
si0=l4;
si1=l6;
i32_store16(i->m0,(U64)si0+174U,si1);
si0=l4;
si1=l7;
i32_store16(i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l5;
i32_store(i->m0,(U64)si0+168U,si1);
si0=l4;
si1=156U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
si4=168U;
si3+=si4;
f2103(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+156U);
l2=si0;
si1=17U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+159U);
i32_store8(i->m0,(U64)si0+147U,si1);
si0=l4;
si1=l4;
si1=i32_load16_u(i->m0,(U64)si1+157U);
i32_store16(i->m0,(U64)si0+145U,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+160U);
i64_store(i->m0,(U64)si0+148U,sj1);
si0=l4;
si1=l2;
i32_store8(i->m0,(U64)si0+144U,si1);
goto L14;
L16:;
si0=l4;
sj1=l8;
i64_store(i->m0,(U64)si0+176U,sj1);
si0=l4;
si1=l6;
i32_store16(i->m0,(U64)si0+174U,si1);
si0=l4;
si1=l7;
i32_store16(i->m0,(U64)si0+172U,si1);
si0=l4;
si1=l5;
i32_store(i->m0,(U64)si0+168U,si1);
si0=l4;
si1=156U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
si4=168U;
si3+=si4;
f2081(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+156U);
l2=si0;
si1=17U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+159U);
i32_store8(i->m0,(U64)si0+147U,si1);
si0=l4;
si1=l4;
si1=i32_load16_u(i->m0,(U64)si1+157U);
i32_store16(i->m0,(U64)si0+145U,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+160U);
i64_store(i->m0,(U64)si0+148U,sj1);
si0=l4;
si1=l2;
i32_store8(i->m0,(U64)si0+144U,si1);
L14:;
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
f1323(i,si0,si1);
si0=l4;
si1=168U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+168U,sj1);
si0=l4;
si1=180U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=108U;
si0=f3065(i,si0,si1,si2);
si0=l0;
si1=l4;
si2=168U;
si1+=si2;
si1=f1324(i,si1);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store16(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L11:;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+172U);
l9=sj0;
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l9;
i64_store(i->m0,(U64)si0+4U,sj1);
goto L1;
L10:;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+160U);
l9=sj0;
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l9;
i64_store(i->m0,(U64)si0+4U,sj1);
goto L2;
L9:;
si0=1148264U;
f14(i,si0);
UNREACHABLE;
L8:;
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l10;
i64_store(i->m0,(U64)si0+4U,sj1);
goto L1;
L7:;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+28U);
l9=sj0;
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l9;
i64_store(i->m0,(U64)si0+4U,sj1);
goto L1;
L6:;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+160U);
l9=sj0;
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l9;
i64_store(i->m0,(U64)si0+4U,sj1);
goto L1;
L5:;
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l9;
i64_store(i->m0,(U64)si0+4U,sj1);
goto L2;
L4:;
si0=1152424U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+160U);
l9=sj0;
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l9;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=32U;
si0+=si1;
f1046(i,si0);
L2:;
si0=l4;
f1070(i,si0);
L1:;
si0=l4;
si1=400U;
si0+=si1;
i->g0=si0;
L0:;
}

void f972(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l5;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l5;
si1=1U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l2;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l2;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l1;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l4;
si1=3U;
si0+=si1;
l6=si0;
si0=l5;
si1=44U;
si0+=si1;
l7=si0;
si0=l3;
si1=255U;
si0&=si1;
l8=si0;
si0=0U;
l9=si0;
si0=0U;
l10=si0;
L2:;
{
si0=l2;
si1=l10;
si0=si0 < si1;
l11=si0;
if(si0){
goto L1;
}
si0=l1;
si1=l10;
si0+=si1;
l12=si0;
si0=l2;
si1=l10;
si0-=si1;
l13=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=0U;
si1=l12;
si2=l11;
si0=si2?si0:si1;
l11=si0;
si0=0U;
l14=si0;
si0=0U;
l12=si0;
L5:;
{
si0=l13;
si1=l12;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l13;
l12=si0;
goto L3;
L6:;
si0=l11;
si1=l12;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=1U;
l14=si0;
goto L3;
L7:;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
goto L5;
}
L4:;
si0=l5;
si1=l3;
si2=l12;
si3=l13;
f362(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(i->m0,(U64)si0+4U);
l12=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l14=si0;
L3:;
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l5;
si1=l12;
si2=l10;
si1+=si2;
l12=si1;
si2=1U;
si1+=si2;
l10=si1;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l10;
si0=!(si0);
if(si0){
goto L2;
}
si0=l10;
si1=l2;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=l12;
si0+=si1;
si1=1U;
si2=l7;
si3=1U;
si0=f247(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l9;
si1+=si2;
si2=l12;
si3=l9;
si2-=si3;
f981(i,si0,si1,si2);
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
si2=l6;
f982(i,si0,si1,si2);
si0=l10;
l9=si0;
goto L2;
}
L1:;
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=l9;
si1+=si2;
si2=l2;
si3=l9;
si2-=si3;
f981(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1605(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
l2=si1;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
l1=si0;
goto L1;
L2:;
si0=l1;
si1=l2;
si2=-1U;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0);
l3=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l4=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=l1;
si1=l2;
si2=-2U;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0);
l3=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l5=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
si0=l3;
si1=31U;
si0&=si1;
l1=si0;
goto L4;
L5:;
si0=l1;
si1=l2;
si2=-3U;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0);
l3=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l6=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=l3;
si1=15U;
si0&=si1;
l1=si0;
goto L6;
L7:;
si0=l1;
si1=l2;
si2=-4U;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0);
si1=7U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l6;
si2=63U;
si1&=si2;
si0|=si1;
l1=si0;
L6:;
si0=l1;
si1=6U;
si0<<=(si1&31);
si1=l5;
si2=63U;
si1&=si2;
si0|=si1;
l1=si0;
L4:;
si0=l1;
si1=6U;
si0<<=(si1&31);
si1=l4;
si2=63U;
si1&=si2;
si0|=si1;
l3=si0;
L3:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f2961(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
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
l6=si0;
sj0=i64_load(i->m0,(U64)si0);
l7=sj0;
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l7;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f1268(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+32U);
l6=si0;
if(si0){
goto L3;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+36U);
l6=si1;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
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
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f1268(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+32U);
l4=si0;
if(si0){
goto L1;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+36U);
l8=si1;
i32_store(i->m0,(U64)si0+40U,si1);
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
goto L6;
}
si0=l6;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
goto L5;
L6:;
si0=l5;
si1=16U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+20U);
l6=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
l4=si0;
L5:;
si0=l8;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l8;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
goto L7;
L8:;
si0=l5;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l8=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
L7:;
si0=l0;
sj1=257ULL;
sj2=1ULL;
si3=l3;
si4=l8;
si5=l4;
si6=l6;
si3=f2310(i,si3,si4,si5,si6);
sj1=si3?sj1:sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
f1035(i,si0);
si0=l5;
si1=28U;
si0+=si1;
f1035(i,si0);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=1U;
si1=1U;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+36U);
i32_store(i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0+40U,si1);
si0=1178224U;
si1=43U;
si2=l5;
si3=40U;
si2+=si3;
si3=1119036U;
si4=1174576U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+36U);
i32_store(i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+40U,si1);
si0=1178224U;
si1=43U;
si2=l5;
si3=40U;
si2+=si3;
si3=1119036U;
si4=1174576U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f1600(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f1647(i,si0,si1,si2);
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
si3=f1650(i,si3,si4);
sj1=si3?sj1:sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f900(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
si2=1160376U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=0U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+44U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+40U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si2=1123478U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+36U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si2=1154129U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=1159071U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=1159069U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
L1:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f184(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si0=f176(i,si0);
l1=si0;
si0=l0;
si1=1U;
f162(i,si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=1052308U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
L0:;
}

void f1851(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l1;
si1=l2;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+4U,si1);
goto L0;
L2:;
UNREACHABLE;
L0:;
}

void f2360(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
F64 sd1,sd2;
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
si0=f2346(i,si0);
l6=si0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=1U;
si1=1U;
si2=1168304U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1168304U;
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
si1=l6;
sd1=(F64)(I32)(si1);
si2=l5;
si3=8U;
si2+=si3;
sd2=f2345(i,si2);
sd1-=sd2;
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

void f2214(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=l1;
f1985(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L2;
}
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l1;
si2=l2;
si2=i32_load(i->m0,(U64)si2+12U);
si1=f1139(i,si1,si2);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2723(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1;
si0=l1;
si1=l2;
si0=f2722(i,si0,si1);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
f2720(i,si0,si1);
goto L0;
L1:;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
L0:;
}

void f2637(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
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
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
l4=si1;
si1=i32_load8_u(i->m0,(U64)si1);
si2=l4;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f2631(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l4=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l5;
si1=i32_load(i->m0,(U64)si1+8U);
l3=si1;
si2=l4;
si1=f2632(i,si1,si2);
sj1=i64_load32_u(i->m0,(U64)si1+4U);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=4ULL;
sj1|=sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
f1704(i,si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=0U;
si1=0U;
si2=1172300U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1172300U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f708(glicolwasmInstance*i,U32 l0,F64 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1;
si0=i->g0;
si1=128U;
si0-=si1;
l4=si0;
i->g0=si0;
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
l5=sj0;
sd0=l1;
sd1=l1;
si0=sd0 == sd1;
if(si0){
goto L2;
}
si0=2U;
l6=si0;
goto L1;
L2:;
sj0=l5;
sj1=4503599627370495ULL;
sj0&=sj1;
l7=sj0;
sj1=4503599627370496ULL;
sj0|=sj1;
sj1=l5;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=9007199254740990ULL;
sj1&=sj2;
sj2=l5;
sj3=52ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=2047U;
si2&=si3;
l8=si2;
sj0=si2?sj0:sj1;
l9=sj0;
sj1=1ULL;
sj0&=sj1;
l10=sj0;
si0=3U;
l6=si0;
si0=1U;
si1=2U;
si2=4U;
sj3=l5;
sj4=9218868437227405312ULL;
sj3&=sj4;
l11=sj3;
si3=!(sj3);
l12=si3;
si1=si3?si1:si2;
sj2=l11;
sj3=9218868437227405312ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
si1=3U;
si2=4U;
si3=l12;
si1=si3?si1:si2;
sj2=l7;
si2=!(sj2);
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L5;
case 2:
goto L4;
case 3:
goto L3;
default:
goto L1;
}
L5:;
si0=4U;
l6=si0;
goto L1;
L4:;
si0=l8;
si1=-1075U;
si0+=si1;
l13=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
sj0=1ULL;
l14=sj0;
goto L1;
L3:;
sj0=18014398509481984ULL;
sj1=l9;
sj2=1ULL;
sj1<<=(sj2&63);
sj2=l9;
sj3=4503599627370496ULL;
si2=sj2 == sj3;
l6=si2;
sj0=si2?sj0:sj1;
l9=sj0;
sj0=2ULL;
sj1=1ULL;
si2=l6;
sj0=si2?sj0:sj1;
l14=sj0;
si0=-1077U;
si1=-1076U;
si2=l6;
si0=si2?si0:si1;
si1=l8;
si0+=si1;
l13=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
L1:;
si0=l4;
si1=l13;
i32_store16(i->m0,(U64)si0+120U,si1);
si0=l4;
sj1=l14;
i64_store(i->m0,(U64)si0+112U,sj1);
si0=l4;
sj1=1ULL;
i64_store(i->m0,(U64)si0+104U,sj1);
si0=l4;
sj1=l9;
i64_store(i->m0,(U64)si0+96U,sj1);
si0=l4;
si1=l6;
i32_store8(i->m0,(U64)si0+122U,si1);
si0=l6;
si1=-2U;
si0+=si1;
si1=255U;
si0&=si1;
l6=si0;
si1=3U;
si2=l6;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
l12=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=1151321U;
si1=1151320U;
sj2=l5;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
l6=si2;
si0=si2?si0:si1;
si1=1151321U;
si2=1178584U;
si3=l6;
si1=si3?si1:si2;
si2=l2;
si0=si2?si0:si1;
l13=si0;
si0=1U;
l6=si0;
si0=1U;
sj1=l5;
sj2=63ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=l2;
si0=si2?si0:si1;
l2=si0;
si0=l12;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L10;
default:
goto L8;
}
L10:;
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
si2=l4;
si3=15U;
si2+=si3;
f660(i,si0,si1,si2);
si0=l4;
si0=i32_load(i->m0,(U64)si0+32U);
if(si0){
goto L12;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l4;
si2=96U;
si1+=si2;
si2=l4;
si3=15U;
si2+=si3;
f657(i,si0,si1,si2);
goto L11;
L12:;
si0=l4;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+32U);
i64_store(i->m0,(U64)si0+80U,sj1);
L11:;
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+80U);
si2=l4;
si2=i32_load(i->m0,(U64)si2+84U);
si3=l4;
si3=i32_load16_u(i->m0,(U64)si3+88U);
si4=l3;
si5=l4;
si6=32U;
si5+=si6;
f663(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l12=si0;
goto L6;
L9:;
si0=l4;
si1=3U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1067146U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l4;
si1=2U;
i32_store16(i->m0,(U64)si0+32U,si1);
si0=1U;
l6=si0;
si0=l4;
si1=32U;
si0+=si1;
l12=si0;
si0=0U;
l2=si0;
si0=1178584U;
l13=si0;
goto L6;
L8:;
si0=l4;
si1=3U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1067149U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l4;
si1=2U;
i32_store16(i->m0,(U64)si0+32U,si1);
si0=l4;
si1=32U;
si0+=si1;
l12=si0;
goto L6;
L7:;
si0=2U;
l6=si0;
si0=l4;
si1=2U;
i32_store16(i->m0,(U64)si0+32U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
si0=l4;
si1=48U;
si0+=si1;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store16(i->m0,(U64)si0+44U,si1);
si0=l4;
si1=2U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1067108U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l4;
si1=32U;
si0+=si1;
l12=si0;
goto L6;
L13:;
si0=1U;
l6=si0;
si0=l4;
si1=1U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1159264U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l4;
si1=32U;
si0+=si1;
l12=si0;
L6:;
si0=l4;
si1=92U;
si0+=si1;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l12;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l2;
i32_store(i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l13;
i32_store(i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l4;
si2=80U;
si1+=si2;
si0=f699(i,si0,si1);
l6=si0;
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l6;
L0:;
return si0;
}

U32 f2289(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
si0+=si1;
l2=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=l2;
si2=1U;
si1+=si2;
si2=l3;
si3=l1;
si4=-1U;
si3^=si4;
si2+=si3;
si0=f3076(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l4;
goto L0;
L1:;
si0=l1;
si1=l3;
si2=l2;
f115(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

U32 f974(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
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
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1112508U;
si2=12U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L14:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1112520U;
si2=13U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L13:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1176384U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L12:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1112533U;
si2=15U;
si3=l2;
si4=12U;
si3+=si4;
si4=1112548U;
si0=f408(i,si0,si1,si2,si3,si4);
l0=si0;
goto L1;
L11:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1112564U;
si2=21U;
si3=l2;
si4=12U;
si3+=si4;
si4=1112548U;
si0=f408(i,si0,si1,si2,si3,si4);
l0=si0;
goto L1;
L10:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1112585U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L9:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1112592U;
si2=7U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L8:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1112599U;
si2=23U;
si3=l2;
si4=12U;
si3+=si4;
si4=1112548U;
si0=f408(i,si0,si1,si2,si3,si4);
l0=si0;
goto L1;
L7:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1112622U;
si2=12U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L1;
L6:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1112634U;
si2=8U;
si3=l2;
si4=12U;
si3+=si4;
si4=1112548U;
si0=f408(i,si0,si1,si2,si3,si4);
l0=si0;
goto L1;
L5:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1112642U;
si2=8U;
si3=l2;
si4=12U;
si3+=si4;
si4=1112548U;
si0=f408(i,si0,si1,si2,si3,si4);
l0=si0;
goto L1;
L4:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1112650U;
si2=9U;
si3=l2;
si4=12U;
si3+=si4;
si4=1112548U;
si0=f408(i,si0,si1,si2,si3,si4);
l0=si0;
goto L1;
L3:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1112659U;
si2=9U;
si3=l2;
si4=12U;
si3+=si4;
si4=1112548U;
si0=f408(i,si0,si1,si2,si3,si4);
l0=si0;
goto L1;
L2:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1112668U;
si2=11U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
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

U32 f1997(glicolwasmInstance*i) {
U32 l0=0;
U32 l1=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=8U;
si0+=si1;
si1=8U;
si2=272U;
f719(i,si0,si1,si2);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L1;
}
UNREACHABLE;
L1:;
si0=l1;
si1=0U;
i32_store16(i->m0,(U64)si0+270U,si1);
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0+264U,si1);
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f1678(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
f1172(i,si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(i->m0,(U64)si0);
l5=sj0;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+16U);
l6=sj0;
si0=l4;
si1=l3;
f1172(i,si0,si1);
sj0=l6;
si1=l4;
sj1=i64_load(i->m0,(U64)si1);
l7=sj1;
sj0^=sj1;
sj1=l5;
si2=l4;
si3=8U;
si2+=si3;
sj2=i64_load(i->m0,(U64)si2);
l8=sj2;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L19;
}
sj0=l6;
sj1=-4934329412750585044ULL;
sj0^=sj1;
sj1=l5;
sj2=-1131414303982419246ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L15;
}
si0=2U;
l2=si0;
sj0=l6;
sj1=-5478090529232052866ULL;
sj0^=sj1;
sj1=l5;
sj2=-846063727984524776ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L8;
}
sj0=l6;
sj1=7152074590014949270ULL;
sj0^=sj1;
sj1=l5;
sj2=-684005379736877845ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L14;
}
sj0=l6;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l5;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L18;
}
sj0=l6;
sj1=-7740204043524863337ULL;
sj0^=sj1;
sj1=l5;
sj2=634436761013121356ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L16;
}
sj0=l6;
sj1=-6589857296642063093ULL;
sj0^=sj1;
sj1=l5;
sj2=4403346059154598174ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L17;
}
sj0=l6;
sj1=5817408772836814867ULL;
sj0^=sj1;
sj1=l5;
sj2=6255172110400608400ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=-70U;
si0+=si1;
l1=si0;
si1=11U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
si1=1181792U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=0U;
l2=si0;
goto L1;
L19:;
sj0=l6;
sj1=-4934329412750585044ULL;
sj0^=sj1;
sj1=l5;
sj2=-1131414303982419246ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
si0=2U;
l2=si0;
sj0=l6;
sj1=7152074590014949270ULL;
sj0^=sj1;
sj1=l5;
sj2=-684005379736877845ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L9;
}
sj0=l6;
sj1=-6589857296642063093ULL;
sj0^=sj1;
sj1=l5;
sj2=4403346059154598174ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L10;
}
sj0=l6;
sj1=-7740204043524863337ULL;
sj0^=sj1;
sj1=l5;
sj2=634436761013121356ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L13;
}
sj0=l6;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l5;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
L18:;
si0=2U;
l2=si0;
sj0=l7;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l8;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
sj0=l7;
sj1=5817408772836814867ULL;
sj0^=sj1;
sj1=l8;
sj2=6255172110400608400ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l1;
si1=-70U;
si0+=si1;
l1=si0;
si1=11U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
si1=1181904U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=2U;
si0<<=(si1&31);
si1=1181916U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
goto L1;
L17:;
si0=l1;
si1=70U;
si0=si0 != si1;
si1=1U;
si0<<=(si1&31);
l2=si0;
si0=155U;
l3=si0;
goto L1;
L16:;
si0=l1;
si1=-70U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
default:
goto L1;
}
L15:;
si0=1U;
si1=2U;
si2=l1;
si3=70U;
si2=si2 == si3;
si0=si2?si0:si1;
l2=si0;
si0=156U;
l3=si0;
goto L1;
L14:;
si0=1U;
si1=2U;
si2=l1;
si3=70U;
si2=si2 == si3;
si0=si2?si0:si1;
l2=si0;
si0=157U;
l3=si0;
goto L1;
L13:;
sj0=l7;
sj1=-6589857296642063093ULL;
sj0^=sj1;
sj1=l8;
sj2=4403346059154598174ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L11;
}
L12:;
goto L1;
L11:;
si0=l1;
si1=-70U;
si0+=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
default:
goto L1;
}
L10:;
sj0=l7;
sj1=-7740204043524863337ULL;
sj0^=sj1;
sj1=l8;
sj2=634436761013121356ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=1U;
si1=2U;
si2=l1;
si3=70U;
si2=si2 == si3;
si0=si2?si0:si1;
l2=si0;
si0=158U;
l3=si0;
goto L1;
L9:;
sj0=l7;
sj1=-7740204043524863337ULL;
sj0^=sj1;
sj1=l8;
sj2=634436761013121356ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L20;
}
sj0=l7;
sj1=-6589857296642063093ULL;
sj0^=sj1;
sj1=l8;
sj2=4403346059154598174ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L21;
}
sj0=l7;
sj1=5817408772836814867ULL;
sj0^=sj1;
sj1=l8;
sj2=6255172110400608400ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L1;
}
si0=1U;
si1=2U;
si2=l1;
si3=70U;
si2=si2 == si3;
si0=si2?si0:si1;
l2=si0;
si0=159U;
l3=si0;
goto L1;
L21:;
si0=1U;
si1=2U;
si2=l1;
si3=70U;
si2=si2 == si3;
si0=si2?si0:si1;
l2=si0;
si0=160U;
l3=si0;
goto L1;
L20:;
si0=1U;
si1=2U;
si2=l1;
si3=70U;
si2=si2 == si3;
si0=si2?si0:si1;
l2=si0;
si0=161U;
l3=si0;
goto L1;
L8:;
si0=l1;
si1=-76U;
si0+=si1;
l1=si0;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
si1=1181836U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=0U;
l2=si0;
goto L1;
L7:;
si0=l1;
si1=-70U;
si0+=si1;
l1=si0;
si1=11U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
si1=1181848U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=2U;
si0<<=(si1&31);
si1=1181860U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
goto L1;
L6:;
si0=162U;
l3=si0;
si0=1U;
l2=si0;
goto L1;
L5:;
si0=163U;
l3=si0;
si0=0U;
l2=si0;
goto L1;
L4:;
si0=164U;
l3=si0;
si0=1U;
l2=si0;
goto L1;
L3:;
si0=165U;
l3=si0;
si0=0U;
l2=si0;
goto L1;
L2:;
si0=1U;
si1=2U;
si2=l1;
si3=70U;
si2=si2 == si3;
si0=si2?si0:si1;
l2=si0;
si0=166U;
l3=si0;
L1:;
si0=l0;
si1=l2;
i32_store8(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f3036(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1178284U;
si2=11U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

void f919(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=112U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=27U;
i32_store8(i->m0,(U64)si0+63U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+52U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+48U);
if(si0){
goto L1;
}
si0=l1;
si1=20U;
si0+=si1;
l4=si0;
si0=0U;
l5=si0;
si0=0U;
l6=si0;
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+136U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
L2:;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l7;
i32_store(i->m0,(U64)si0+80U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+72U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
f841(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+136U);
l3=si0;
L3:;
si0=l1;
si1=44U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=l1;
si1=32U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=l1;
si2=92U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l1;
si2=120U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+68U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l4;
si1=l9;
si0+=si1;
si1=0U;
si2=l3;
si3=l7;
si2=si2 == si3;
si0=si2?si0:si1;
l9=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+44U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+40U);
if(si0){
goto L5;
}
si0=l2;
si1=96U;
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
i64_store(i->m0,(U64)si0+96U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
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
goto L6;
}
si0=l1;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1+140U);
l4=si1;
si2=1U;
si1=si1 != si2;
i32_store8(i->m0,(U64)si0+140U,si1);
si0=l2;
si1=72U;
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
i64_store(i->m0,(U64)si0+72U,sj1);
si0=l1;
si1=48U;
si0+=si1;
f851(i,si0);
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si2=1152396U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
if(si0){
goto L8;
}
si0=0U;
l10=si0;
goto L7;
L8:;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=1114687U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
si1=0U;
si0=si0 != si1;
l10=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l1=si0;
L7:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+72U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=l4;
i32_store8(i->m0,(U64)si0+140U,si1);
si0=l1;
si1=132U;
si0+=si1;
si1=l2;
si2=80U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=48U;
si0+=si1;
f853(i,si0);
si0=l10;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f850(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
if(si0){
goto L6;
}
si0=l2;
si1=l1;
f923(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
L6:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+96U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l2;
si2=104U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l3;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=l3;
i32_store(i->m0,(U64)si0+20U,si1);
L5:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l4=si0;
si0=1U;
l3=si0;
si0=l2;
si1=l2;
si2=63U;
si1+=si2;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
i32_store(i->m0,(U64)si0+100U,si1);
si0=l2;
si1=l2;
si2=68U;
si1+=si2;
i32_store(i->m0,(U64)si0+96U,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=27U;
si2=l7;
si3=l5;
si4=l6;
si5=l9;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=96U;
si0+=si1;
si1=l1;
f843(i,si0,si1);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l8;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=l8;
i32_store(i->m0,(U64)si0+20U,si1);
goto L1;
L4:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l3=si0;
si0=l2;
si1=l2;
si2=63U;
si1+=si2;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l2;
si1=l2;
si2=64U;
si1+=si2;
i32_store(i->m0,(U64)si0+100U,si1);
si0=l2;
si1=l2;
si2=68U;
si1+=si2;
i32_store(i->m0,(U64)si0+96U,si1);
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l1;
si1=27U;
si2=l7;
si3=l5;
si4=l6;
si5=l9;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l3=si0;
L9:;
si0=l3;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L10;
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
si2=l8;
si0=f842(i,si0,si1,si2);
l7=si0;
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L11;
}
si0=l7;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=l8;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+63U);
i32_store8(i->m0,(U64)si0+73U,si1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+72U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=72U;
si1+=si2;
f841(i,si0,si1);
goto L10;
L11:;
si0=1120424U;
si1=40U;
si2=1111860U;
f16(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l2;
si1=96U;
si0+=si1;
si1=l1;
f843(i,si0,si1);
si0=0U;
l3=si0;
L1:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2698(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=l2;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
si2=0U;
si1=(U32)((I32)si1<(I32)si2);
si2=l3;
si3=l1;
si2=(U32)((I32)si2<(I32)si3);
si1^=si2;
si2=1U;
si1^=si2;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f2134(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
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
si1=6U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si1=9U;
f996(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1148179U);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load8_u(i->m0,(U64)si1+1148187U);
i32_store8(i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
si1=9U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=20U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=20U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si2=l1;
si2=i32_load16_u(i->m0,(U64)si2+8U);
si3=l1;
si4=10U;
si3+=si4;
si3=i32_load16_u(i->m0,(U64)si3);
f2069(i,si0,si1,si2,si3);
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
L2:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1148208U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f532(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
UNREACHABLE;
L2:;
goto L0;
L1:;
si0=1116144U;
si1=17U;
si2=1122832U;
f16(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f136(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
F32 l5=0;
U32 l6=0;
F32 l7=0;
F32 l8=0;
U32 l9=0;
U32 l10=0;
F32 l11=0;
U32 l12=0;
U32 l13=0;
F32 l14=0;
F32 l15=0;
F32 l16=0;
F32 l17=0;
F32 l18=0;
U32 l19=0;
F32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
F32 l24=0;
F32 l25=0;
F32 l26=0;
F32 l27=0;
U32 l28=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
F32 sf0,sf1,sf2,sf3,sf4,sf5;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
sf0=1;
si1=l0;
sf1=f32_load(i->m0,(U64)si1+40U);
sf0/=sf1;
l5=sf0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
default:
goto L1;
}
L9:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+32U);
l6=si0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+24U);
l7=sf0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+28U);
l8=sf0;
si0=l4;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l9=si1;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l9;
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
si2=l9;
si1+=si2;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l9;
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
goto L7;
}
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
sf0=l7;
sf1=60;
sf2=l8;
sf1/=sf2;
sf2=4;
sf1*=sf2;
l11=sf1;
sf0*=sf1;
si1=l6;
sf1=(F32)(si1);
l8=sf1;
sf0*=sf1;
l7=sf0;
sf1=4.2949673e+09;
si0=sf0 < sf1;
sf1=l7;
sf2=0;
si1=sf1 >= sf2;
l1=si1;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
sf0=l7;
si0=I32_TRUNC_U_F32(sf0);
l3=si0;
goto L10;
L11:;
si0=0U;
l3=si0;
L10:;
si0=-1U;
si1=l3;
si2=0U;
si3=l1;
si1=si3?si1:si2;
sf2=l7;
sf3=4.29496704e+09;
si2=sf2 > sf3;
si0=si2?si0:si1;
l9=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l12=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+60U);
l14=sf0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+56U);
l15=sf0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+52U);
l16=sf0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+48U);
l17=sf0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+36U);
l18=sf0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+64U);
l19=si0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+44U);
l20=sf0;
si0=0U;
l1=si0;
L12:;
{
si0=l1;
si1=128U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si0+=si1;
l21=si0;
si0=l10;
si1=l1;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l22=si0;
si0=l2;
si1=l1;
si0+=si1;
l23=si0;
si0=l12;
l3=si0;
L13:;
{
si0=l3;
l1=si0;
si1=l13;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l0;
sf1=l17;
f32_store(i->m0,(U64)si0+52U,sf1);
si0=l0;
sf1=l15;
f32_store(i->m0,(U64)si0+60U,sf1);
si0=l0;
si1=l22;
sf1=f32_load(i->m0,(U64)si1);
l24=sf1;
f32_store(i->m0,(U64)si0+48U,sf1);
si0=l0;
si1=l19;
si2=1U;
si1+=si2;
l19=si1;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l23;
sf1=l16;
sf2=1;
sf3=l5;
sf4=l18;
sf5=6.28318548;
sf4*=sf5;
sf5=l8;
sf4/=sf5;
l25=sf4;
sf4=f3082(i,sf4);
sf3*=sf4;
sf4=0.5;
sf3*=sf4;
l7=sf3;
sf2-=sf3;
sf3=0.5;
sf2*=sf3;
sf3=l7;
sf4=1;
sf3+=sf4;
sf2/=sf3;
l7=sf2;
sf3=0.5;
sf2+=sf3;
l26=sf2;
sf3=l26;
sf4=l25;
sf4=f3126(i,sf4);
sf3*=sf4;
l25=sf3;
sf2-=sf3;
l26=sf2;
sf3=0.5;
sf2*=sf3;
l27=sf2;
sf1*=sf2;
sf2=l17;
sf3=l26;
sf2*=sf3;
sf3=l20;
sf4=l27;
sf3*=sf4;
sf2+=sf3;
sf1+=sf2;
sf2=l15;
sf3=l25;
sf4=l25;
sf3+=sf4;
sf2*=sf3;
sf1+=sf2;
sf2=l14;
sf3=l7;
sf4=l7;
sf3+=sf4;
sf2*=sf3;
sf1-=sf2;
l7=sf1;
f32_store(i->m0,(U64)si0,sf1);
si0=l0;
sf1=l7;
f32_store(i->m0,(U64)si0+56U,sf1);
sf0=l15;
l14=sf0;
sf0=l7;
l15=sf0;
sf0=l17;
l16=sf0;
sf0=l24;
l17=sf0;
si0=l21;
l1=si0;
goto L12;
L14:;
si0=l9;
si0=!(si0);
if(si0){
goto L6;
}
sf0=l11;
si1=l1;
sf1=f32_load(i->m0,(U64)si1+4U);
sf0*=sf1;
sf1=l8;
sf0*=sf1;
l7=sf0;
sf1=0;
si0=sf0 >= sf1;
l6=si0;
sf0=l7;
sf1=4.2949673e+09;
si0=sf0 < sf1;
sf1=l7;
sf2=0;
si1=sf1 >= sf2;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
sf0=l7;
si0=I32_TRUNC_U_F32(sf0);
l28=si0;
goto L15;
L16:;
si0=0U;
l28=si0;
L15:;
si0=l1;
si1=8U;
si0+=si1;
l3=si0;
si0=l19;
si1=l9;
si0=REM_U(si0,si1);
si1=-1U;
si2=l28;
si3=0U;
si4=l6;
si2=si4?si2:si3;
sf3=l7;
sf4=4.29496704e+09;
si3=sf3 > sf4;
si1=si3?si1:si2;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l0;
si1=l1;
sf1=f32_load(i->m0,(U64)si1);
l18=sf1;
f32_store(i->m0,(U64)si0+36U,sf1);
goto L13;
}
}
L8:;
si0=l1;
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l6=si1;
si2=l0;
si3=20U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
l28=si2;
si3=0U;
si4=1050896U;
si1=f2(i,si1,si2,si3,si4);
si1=i32_load(i->m0,(U64)si1);
si2=1050912U;
si0=f3(i,si0,si1,si2);
l9=si0;
si0=l1;
si1=l6;
si2=l28;
si3=1U;
si4=1050928U;
si1=f2(i,si1,si2,si3,si4);
si1=i32_load(i->m0,(U64)si1);
si2=1050944U;
si0=f3(i,si0,si1,si2);
l1=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
sf0=f32_load(i->m0,(U64)si0);
sf1=6.28318548;
sf0*=sf1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+32U);
sf1=(F32)(si1);
sf0/=sf1;
l7=sf0;
sf0=f3082(i,sf0);
l8=sf0;
sf0=l7;
sf0=f3126(i,sf0);
l11=sf0;
si0=l3;
si0=!(si0);
if(si0){
goto L18;
}
si0=l9;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L17;
}
sf0=1;
sf1=l5;
sf2=l8;
sf1*=sf2;
sf2=0.5;
sf1*=sf2;
l7=sf1;
sf0-=sf1;
sf1=0.5;
sf0*=sf1;
sf1=l7;
sf2=1;
sf1+=sf2;
sf0/=sf1;
l7=sf0;
sf1=l7;
sf0+=sf1;
l17=sf0;
sf0=l11;
sf1=l7;
sf2=0.5;
sf1+=sf2;
l8=sf1;
sf0*=sf1;
l7=sf0;
sf1=l7;
sf0+=sf1;
l25=sf0;
si0=l9;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si0=l0;
si1=48U;
si0+=si1;
l9=si0;
sf0=l8;
sf1=l7;
sf0-=sf1;
l14=sf0;
sf1=0.5;
sf0*=sf1;
l16=sf0;
si1=l0;
sf1=f32_load(i->m0,(U64)si1+44U);
sf0*=sf1;
l18=sf0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+64U);
l28=si0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+60U);
l11=sf0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+56U);
l8=sf0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+52U);
l15=sf0;
si0=0U;
l1=si0;
si0=0U;
l3=si0;
L19:;
{
si0=l9;
sf0=f32_load(i->m0,(U64)si0);
l7=sf0;
si0=l1;
si1=512U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l1;
si0+=si1;
sf1=l18;
sf2=l14;
sf3=l7;
sf2*=sf3;
sf1+=sf2;
sf2=l16;
sf3=l15;
sf2*=sf3;
sf1+=sf2;
sf2=l25;
sf3=l8;
sf2*=sf3;
sf1+=sf2;
sf2=l17;
sf3=l11;
sf2*=sf3;
sf1-=sf2;
l15=sf1;
f32_store(i->m0,(U64)si0,sf1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l6;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
sf0=l8;
l11=sf0;
sf0=l15;
l8=sf0;
sf0=l7;
l15=sf0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
goto L19;
}
L18:;
si0=0U;
si1=0U;
si2=1050976U;
f4(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=0U;
si1=0U;
si2=1050992U;
f4(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1050832U;
f14(i,si0);
UNREACHABLE;
L6:;
si0=1049104U;
si1=57U;
si2=1050880U;
f16(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=0U;
si1=0U;
si2=1050960U;
f4(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=0U;
si1=0U;
si2=1050864U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1050848U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l0;
sf1=l11;
f32_store(i->m0,(U64)si0+60U,sf1);
si0=l0;
sf1=l8;
f32_store(i->m0,(U64)si0+56U,sf1);
si0=l0;
sf1=l15;
f32_store(i->m0,(U64)si0+52U,sf1);
si0=l0;
sf1=l7;
f32_store(i->m0,(U64)si0+48U,sf1);
si0=l0;
si1=l28;
si2=128U;
si1+=si2;
i32_store(i->m0,(U64)si0+64U,si1);
L1:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f603(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=l2;
si3=-1U;
si2+=si3;
f670(i,si0,si1,si2);
L0:;
}

void f2521(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=4U;
si3=l2;
si4=l3;
f2522(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=l4;
si1=i32_load(i->m0,(U64)si1+8U);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2657(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
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
goto L3;
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
si0=f2346(i,si0);
l6=si0;
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l8=si0;
sj0=i64_load(i->m0,(U64)si0);
l7=sj0;
si0=l8;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l7;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si0=f2346(i,si0);
l8=si0;
si0=l4;
si1=2U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=2U;
si1=2U;
si2=1172052U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1172052U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1U;
si1=1U;
si2=1172052U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
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
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=l6;
si2=l8;
si3=l5;
si3=f2346(i,si3);
f2656(i,si0,si1,si2,si3);
si0=l0;
si1=l5;
f2648(i,si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f346(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
l2=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
if(si0){
goto L2;
}
si0=0U;
l4=si0;
si0=0U;
l5=si0;
goto L1;
L2:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si0=1U;
l4=si0;
L1:;
L5:;
{
si0=l5;
if(si0){
goto L6;
}
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
l6=si0;
goto L4;
L7:;
L8:;
{
si0=l6;
if(si0){
goto L9;
}
si0=0U;
l6=si0;
si0=l3;
l2=si0;
goto L4;
L9:;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+184U);
l3=si0;
goto L8;
}
L6:;
si0=l4;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l4;
if(si0){
goto L10;
}
si0=1119576U;
f14(i,si0);
UNREACHABLE;
L11:;
si0=l3;
l2=si0;
L13:;
{
si0=l6;
if(si0){
goto L14;
}
si0=1U;
l4=si0;
si0=0U;
l3=si0;
si0=0U;
l6=si0;
goto L10;
L14:;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+184U);
l2=si0;
goto L13;
}
L10:;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
L15:;
{
si0=l6;
si1=l2;
si1=i32_load16_u(i->m0,(U64)si1+182U);
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l6;
si1=1U;
si0+=si1;
l0=si0;
si0=l3;
if(si0){
goto L18;
}
si0=l2;
l7=si0;
goto L17;
L18:;
si0=l2;
si1=l0;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=184U;
si0+=si1;
l0=si0;
L19:;
{
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si1=184U;
si0+=si1;
l0=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L19;
}
}
si0=0U;
l0=si0;
L17:;
si0=l2;
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
si1=4U;
si0+=si1;
f266(i,si0);
si0=l2;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=136U;
si0+=si1;
f1102(i,si0);
si0=0U;
l3=si0;
si0=l0;
l6=si0;
si0=l7;
l2=si0;
goto L5;
L16:;
si0=l1;
si1=4U;
si0+=si1;
si1=l2;
si2=l3;
f349(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l6=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
goto L15;
L20:;
}
}
si0=1120900U;
f14(i,si0);
UNREACHABLE;
L4:;
L21:;
{
si0=l1;
si1=4U;
si0+=si1;
si1=l2;
si2=l6;
f349(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l6=si0;
goto L21;
}
L3:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f344(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+256U);
si1=l0;
si2=260U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+268U);
si1=l0;
si2=272U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
si0=l0;
si1=240U;
si0+=si1;
f111(i,si0);
si0=l0;
si1=292U;
si0+=si1;
f110(i,si0);
si0=l0;
si1=180U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=l0;
si2=184U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f345(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+176U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l3;
si2=2U;
si1<<=(si2&31);
f264(i,si0,si1);
L1:;
si0=l0;
si1=188U;
si0+=si1;
f346(i,si0);
si0=l0;
si0=i32_load(i->m0,(U64)si0+72U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l0;
si2=76U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si1=i32_load(i->m0,(U64)si1);
TF(i->t0,si1,void (*)(glicolwasmInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l3;
f264(i,si0,si1);
L2:;
si0=l0;
f269(i,si0);
si0=0U;
l2=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+200U);
l4=si0;
if(si0){
goto L4;
}
si0=0U;
l5=si0;
si0=0U;
l6=si0;
goto L3;
L4:;
si0=l0;
si1=204U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=208U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si0=1U;
l5=si0;
L3:;
L7:;
{
si0=l6;
if(si0){
goto L8;
}
si0=l5;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
l3=si0;
si0=l2;
l4=si0;
goto L6;
L9:;
L10:;
{
si0=l3;
if(si0){
goto L11;
}
si0=0U;
l3=si0;
goto L6;
L11:;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+140U);
l4=si0;
goto L10;
}
L8:;
si0=l5;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l5;
if(si0){
goto L12;
}
si0=1119576U;
f14(i,si0);
UNREACHABLE;
L13:;
si0=l4;
l2=si0;
L15:;
{
si0=l3;
if(si0){
goto L16;
}
si0=1U;
l5=si0;
si0=0U;
l4=si0;
si0=0U;
l3=si0;
goto L12;
L16:;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+140U);
l2=si0;
goto L15;
}
L12:;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
L17:;
{
si0=l3;
si1=l2;
si1=i32_load16_u(i->m0,(U64)si1+138U);
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=l3;
si1=1U;
si0+=si1;
l7=si0;
si0=l4;
if(si0){
goto L20;
}
si0=l2;
l8=si0;
goto L19;
L20:;
si0=l2;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=140U;
si0+=si1;
l7=si0;
L21:;
{
si0=l7;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si1=140U;
si0+=si1;
l7=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L21;
}
}
si0=0U;
l7=si0;
L19:;
si0=l2;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
si1=4U;
si0+=si1;
f266(i,si0);
si0=0U;
l4=si0;
si0=l7;
l3=si0;
si0=l8;
l2=si0;
goto L7;
L18:;
si0=l1;
si1=4U;
si0+=si1;
si1=l2;
si2=l4;
f347(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
goto L17;
L22:;
}
}
si0=1120900U;
f14(i,si0);
UNREACHABLE;
L6:;
L23:;
{
si0=l1;
si1=4U;
si0+=si1;
si1=l4;
si2=l3;
f347(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
goto L23;
}
L5:;
si0=0U;
l4=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+212U);
l2=si0;
if(si0){
goto L25;
}
si0=0U;
l5=si0;
si0=0U;
l6=si0;
goto L24;
L25:;
si0=l0;
si1=216U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=220U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si0=1U;
l5=si0;
L24:;
L28:;
{
si0=l6;
if(si0){
goto L29;
}
si0=l5;
si0=!(si0);
if(si0){
goto L26;
}
si0=l4;
si0=!(si0);
if(si0){
goto L30;
}
si0=l2;
l3=si0;
goto L27;
L30:;
L31:;
{
si0=l3;
if(si0){
goto L32;
}
si0=0U;
l3=si0;
si0=l2;
l4=si0;
goto L27;
L32:;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+152U);
l2=si0;
goto L31;
}
L29:;
si0=l5;
si0=!(si0);
if(si0){
goto L35;
}
si0=l4;
si0=!(si0);
if(si0){
goto L34;
}
L35:;
si0=l5;
if(si0){
goto L33;
}
si0=1119576U;
f14(i,si0);
UNREACHABLE;
L34:;
L37:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+152U);
l2=si0;
goto L37;
}
L36:;
si0=0U;
l3=si0;
si0=1U;
l5=si0;
si0=l2;
l4=si0;
si0=0U;
l2=si0;
L33:;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
L38:;
{
si0=l3;
si1=l4;
si1=i32_load16_u(i->m0,(U64)si1+138U);
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l3;
si1=1U;
si0+=si1;
l7=si0;
si0=l2;
if(si0){
goto L41;
}
si0=l4;
l8=si0;
goto L40;
L41:;
si0=l4;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=152U;
si0+=si1;
l7=si0;
L42:;
{
si0=l7;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si1=152U;
si0+=si1;
l7=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L42;
}
}
si0=0U;
l7=si0;
L40:;
si0=l4;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
si1=4U;
si0+=si1;
f266(i,si0);
si0=0U;
l2=si0;
si0=l8;
l4=si0;
si0=l7;
l3=si0;
goto L28;
L39:;
si0=l1;
si1=4U;
si0+=si1;
si1=l4;
si2=l2;
f348(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
goto L38;
L43:;
}
}
si0=1120900U;
f14(i,si0);
UNREACHABLE;
L27:;
L44:;
{
si0=l1;
si1=4U;
si0+=si1;
si1=l4;
si2=l3;
f348(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
goto L44;
}
L26:;
si0=0U;
l2=si0;
si0=l0;
si1=232U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=0U;
si2=l0;
si2=i32_load(i->m0,(U64)si2+224U);
l4=si2;
si0=si2?si0:si1;
l6=si0;
si0=l4;
si1=0U;
si0=si0 != si1;
l5=si0;
si0=l0;
si1=228U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
L47:;
{
si0=l6;
if(si0){
goto L48;
}
si0=l5;
si0=!(si0);
if(si0){
goto L46;
}
si0=l2;
if(si0){
goto L50;
}
L51:;
{
si0=l3;
if(si0){
goto L52;
}
si0=0U;
l3=si0;
goto L49;
L52:;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+184U);
l4=si0;
goto L51;
}
L50:;
si0=l4;
l3=si0;
si0=l2;
l4=si0;
L49:;
L53:;
{
si0=l1;
si1=4U;
si0+=si1;
si1=l4;
si2=l3;
f349(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
goto L53;
}
L48:;
si0=l2;
if(si0){
goto L55;
}
si0=l5;
si0=!(si0);
if(si0){
goto L55;
}
si0=l4;
l2=si0;
L56:;
{
si0=l3;
if(si0){
goto L57;
}
si0=0U;
l3=si0;
si0=0U;
l4=si0;
goto L54;
L57:;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+184U);
l2=si0;
goto L56;
}
L55:;
si0=l5;
si0=!(si0);
if(si0){
goto L45;
}
L54:;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
L58:;
{
si0=l3;
si1=l2;
si1=i32_load16_u(i->m0,(U64)si1+182U);
si0=si0 >= si1;
if(si0){
goto L59;
}
si0=l3;
si1=1U;
si0+=si1;
l7=si0;
si0=l4;
if(si0){
goto L61;
}
si0=l2;
l8=si0;
goto L60;
L61:;
si0=l2;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=184U;
si0+=si1;
l7=si0;
L62:;
{
si0=l7;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si1=184U;
si0+=si1;
l7=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L62;
}
}
si0=0U;
l7=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L46;
}
L60:;
si0=l2;
si1=l3;
si2=12U;
si1*=si2;
si0+=si1;
si1=4U;
si0+=si1;
f266(i,si0);
si0=l2;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=136U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
l3=si1;
si1=i32_load(i->m0,(U64)si1);
TF(i->t0,si1,void (*)(glicolwasmInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L63;
}
si0=l4;
si1=l3;
f264(i,si0,si1);
L63:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si1=l2;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si1=i32_load(i->m0,(U64)si1);
TF(i->t0,si1,void (*)(glicolwasmInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L64;
}
si0=l4;
si1=l3;
f264(i,si0,si1);
L64:;
si0=l2;
f87(i,si0);
si0=1U;
l5=si0;
si0=0U;
l4=si0;
si0=l7;
l3=si0;
si0=l8;
l2=si0;
goto L47;
L59:;
si0=l1;
si1=4U;
si0+=si1;
si1=l2;
si2=l4;
f349(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
si0=!(si0);
if(si0){
goto L65;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
goto L58;
L65:;
}
}
si0=1120900U;
f14(i,si0);
UNREACHABLE;
L46:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+80U);
l2=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l2;
si1=l0;
si2=84U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si1=i32_load(i->m0,(U64)si1);
TF(i->t0,si1,void (*)(glicolwasmInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l2;
si1=l3;
f264(i,si0,si1);
L66:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+88U);
l2=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l2;
si1=l0;
si2=92U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si1=i32_load(i->m0,(U64)si1);
TF(i->t0,si1,void (*)(glicolwasmInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=l2;
si1=l3;
f264(i,si0,si1);
L67:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+96U);
l2=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l2;
si1=l0;
si2=100U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si1=i32_load(i->m0,(U64)si1);
TF(i->t0,si1,void (*)(glicolwasmInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l2;
si1=l3;
f264(i,si0,si1);
L68:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+104U);
l2=si0;
si0=!(si0);
if(si0){
goto L69;
}
si0=l2;
si1=l0;
si2=108U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si1=i32_load(i->m0,(U64)si1);
TF(i->t0,si1,void (*)(glicolwasmInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L69;
}
si0=l2;
si1=l3;
f264(i,si0,si1);
L69:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+112U);
l2=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=l2;
si1=l0;
si2=116U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si1=i32_load(i->m0,(U64)si1);
TF(i->t0,si1,void (*)(glicolwasmInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=l2;
si1=l3;
f264(i,si0,si1);
L70:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+120U);
l2=si0;
si0=!(si0);
if(si0){
goto L71;
}
si0=l2;
si1=l0;
si2=124U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si1=i32_load(i->m0,(U64)si1);
TF(i->t0,si1,void (*)(glicolwasmInstance*,U32))(i,si0);
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L71;
}
si0=l2;
si1=l3;
f264(i,si0,si1);
L71:;
si0=l0;
si1=64U;
si0+=si1;
f79(i,si0);
si0=l0;
si0=i32_load(i->m0,(U64)si0+280U);
si1=l0;
si2=284U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f12(i,si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L45:;
si0=1119576U;
f14(i,si0);
UNREACHABLE;
L0:;
}

