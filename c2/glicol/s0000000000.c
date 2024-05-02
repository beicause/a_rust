#include "w2c2_base.h"

#include "glicol.h"

void f1545(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
F32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
F32 sf0,sf3,sf4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f1646(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
if(si0){
goto L2;
}
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
sf0=f32_load(i->m0,(U64)si0+4U);
l6=sf0;
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
f1607(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178224U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119036U;
si4=1167732U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1U;
si1=1U;
si2=1167732U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
sj1=257ULL;
sj2=1ULL;
sf3=l6;
si4=l4;
si4=i32_load(i->m0,(U64)si4+4U);
sf4=(F32)(I32)(si4);
sf3-=sf4;
sf3=fabsf(sf3);
sf4=1.1920929e-07;
si3=sf3 > sf4;
sj1=si3?sj1:sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l5;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178224U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119036U;
si4=1167732U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1167732U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1696(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
f1636(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+24U);
l3=si0;
if(si0){
goto L9;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(i->m0,(U64)si1+28U);
si2=l4;
si3=20U;
si2+=si3;
si3=4U;
f1181(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f1720(i,si0,si1);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+36U);
l6=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+32U);
l7=si0;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+32U);
l8=sj0;
si0=(U32)(sj0);
l2=si0;
sj0=l8;
sj1=1095216660480ULL;
sj0&=sj1;
sj1=8589934592ULL;
si0=sj0 == sj1;
if(si0){
goto L10;
}
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+8U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
L10:;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l9;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
goto L11;
L12:;
si0=l4;
si1=l9;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
L11:;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=l2;
si2=l3;
si1+=si2;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l4;
si2=32U;
si1+=si2;
si0=f1634(i,si0,si1);
l2=si0;
if(si0){
goto L13;
}
si0=l7;
si1=l6;
si0=f1721(i,si0,si1);
l2=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=0U;
si2=l1;
si2=i32_load(i->m0,(U64)si2);
l1=si2;
si3=l1;
si4=1U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l1;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
goto L3;
L14:;
si0=l4;
si1=l1;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=f1473(i);
l9=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l9;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l9;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=32U;
si0+=si1;
f1474(i,si0);
si0=l9;
l1=si0;
goto L3;
L13:;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
goto L1;
L9:;
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+28U);
i32_store(i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+32U,si1);
si0=1178224U;
si1=43U;
si2=l4;
si3=32U;
si2+=si3;
si3=1119036U;
si4=1129640U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=1129656U;
f14(i,si0);
UNREACHABLE;
L7:;
si0=1129672U;
f14(i,si0);
UNREACHABLE;
L6:;
si0=1160488U;
f14(i,si0);
UNREACHABLE;
L5:;
si0=1U;
si1=l3;
si2=1129624U;
f4(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=f1473(i);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
f1372(i,si0,si1);
si0=l2;
f1035(i,si0);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L3:;
si0=l1;
si1=8U;
si0+=si1;
si1=l5;
si2=l3;
f1375(i,si0,si1,si2);
L2:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
L1:;
si0=l7;
si1=l6;
f1704(i,si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f796(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
si3=1112268U;
si0=f794(i,si0,si1,si2,si3);
l0=si0;
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
goto L0;
L1:;
si0=1120424U;
si1=40U;
si2=1112284U;
f16(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f2221(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2);
si1-=si2;
si2=3U;
si1>>=(si2&31);
f75(i,si0,si1);
si0=l2;
si1=20U;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=20U;
si0+=si1;
si1=l1;
f2222(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+20U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f776(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
if(si0){
goto L2;
}
si0=0U;
si0=i32_load8_u(i->m0,(U64)si0+1183624U);
si0=l2;
si1=l1;
si0=f439(i,si0,si1);
l1=si0;
goto L1;
L2:;
si0=l2;
si0=f618(i,si0);
l1=si0;
L1:;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

U32 f1856(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=0U;
l2=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
if(si0){
goto L2;
}
si0=1180264U;
l4=si0;
si0=0U;
l5=si0;
goto L1;
L2:;
si0=l3;
si0=f1769(i,si0);
l4=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
L1:;
si0=l5;
si1=12U;
si0*=si1;
l5=si0;
si0=l0;
si1=8U;
si0+=si1;
l6=si0;
L3:;
{
si0=l5;
si1=l2;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=1180264U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
L5:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
goto L0;
L4:;
si0=l1;
si1=4U;
si0+=si1;
si1=l6;
si2=l2;
si1+=si2;
f1823(i,si0,si1);
si0=l4;
si1=l2;
si0+=si1;
si1=8U;
si0+=si1;
l0=si0;
si1=8U;
si0+=si1;
si1=l1;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+4U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=12U;
si0+=si1;
l2=si0;
goto L3;
}
L0:;
return si0;
}

void f2953(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2,si3,si4;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si1=l2;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l1;
si1=l3;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=l2;
si2=0U;
si3=l3;
si4=l4;
f518(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f1727(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
F32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
F32 sf0,sf1,sf2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
f1646(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l4;
sf0=f32_load(i->m0,(U64)si0+4U);
l5=sf0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f1723(i,si0,si1);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l2=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=1167988U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=1U;
si1=l3;
si2=1167988U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l6=si0;
si1=l2;
si0=f1724(i,si0,si1);
l3=si0;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
sf1=l5;
si2=l3;
sf2=f32_load(i->m0,(U64)si2);
sf1*=sf2;
f32_store(i->m0,(U64)si0,sf1);
si0=l6;
si1=l2;
f1704(i,si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178224U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119036U;
si4=1167988U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f1799(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si0=f1780(i,si0,si1);
L0:;
return si0;
}

void f1700(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
sj0=i64_load(i->m0,(U64)si0);
l5=sj0;
si0=l1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
l2=si1;
si1=i32_load8_u(i->m0,(U64)si1);
si2=l2;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f1737(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+20U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+16U);
l6=sj1;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si0=f1738(i,si0);
sj1=l5;
f994(i,si0,sj1);
sj0=l6;
si0=(U32)(sj0);
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
f1704(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
f1686(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l3;
si2=l4;
si2=i32_load(i->m0,(U64)si2+20U);
l2=si2;
si3=l4;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
l1=si3;
si4=l2;
si2=si4?si2:si3;
si3=0U;
si4=0U;
f1498(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l2;
si0=!(si0);
if(si0){
goto L7;
}
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L7:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
goto L5;
L6:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L5:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=1129784U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=1129800U;
f14(i,si0);
UNREACHABLE;
L2:;
si0=1129816U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1U;
si1=l3;
si2=1129768U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f501(glicolwasmInstance*i,U32 l0,U32 l1,F32 l2) {
U32 l3=0;
U32 l4=0;
F32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
F32 sf0,sf1,sf2,sf3,sf4;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
sf0=l2;
sf1=0;
si0=sf0 == sf1;
if(si0){
goto L2;
}
sf0=l2;
sf1=1000;
sf0/=sf1;
l2=sf0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+48U);
l4=si0;
sf0=(F32)(si0);
l5=sf0;
goto L1;
L2:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+48U);
l4=si0;
sf0=(F32)(si0);
l2=sf0;
sf0=3;
l5=sf0;
L1:;
sf0=l2;
sf1=l5;
sf0*=sf1;
l2=sf0;
sf1=4.2949673e+09;
si0=sf0 < sf1;
sf1=l2;
sf2=0;
si1=sf1 >= sf2;
l6=si1;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
sf0=l2;
si0=I32_TRUNC_U_F32(sf0);
l7=si0;
goto L3;
L4:;
si0=0U;
l7=si0;
L3:;
si0=l3;
si1=8U;
si0+=si1;
si1=-1U;
si2=l7;
si3=0U;
si4=l6;
si2=si4?si2:si3;
sf3=l2;
sf4=4.29496704e+09;
si3=sf3 > sf4;
si1=si3?si1:si2;
l6=si1;
si2=1U;
f547(i,si0,si1,si2);
si0=l3;
si1=l6;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+20U,sj1);
si0=l0;
si1=l3;
si2=20U;
si1+=si2;
f521(i,si0,si1);
si0=l3;
si1=l6;
si2=1U;
f547(i,si0,si1,si2);
si0=l3;
si1=l6;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l3;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+20U,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
f521(i,si0,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l1;
sf1=f32_load(i->m0,(U64)si1+44U);
f32_store(i->m0,(U64)si0+44U,sf1);
si0=l0;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+32U);
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=40U;
si0+=si1;
si1=l1;
si2=40U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
f12(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f12(i,si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1145(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj1,sj3;
si0=l1;
si1=l1;
si2=l2;
sj3=l3;
si1=f1152(i,si1,si2,sj3);
l4=si1;
si0+=si1;
l5=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l6=si0;
si0=l5;
sj1=l3;
si1=(U32)(sj1);
si2=25U;
si1>>=(si2&31);
l7=si1;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=-8U;
si0+=si1;
si1=l2;
si0&=si1;
si1=l1;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store8(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f585(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l2;
si0+=si1;
sj1=l3;
si1=(U32)(sj1);
si2=25U;
si1>>=(si2&31);
l4=si1;
i32_store8(i->m0,(U64)si0,si1);
si0=l2;
si1=-8U;
si0+=si1;
si1=l1;
si0&=si1;
si1=l0;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
i32_store8(i->m0,(U64)si0,si1);
L0:;
}

U32 f2216(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
if(si0){
goto L1;
}
si0=1114112U;
goto L0;
L1:;
si0=l0;
si1=l1;
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si0=f2048(i,si0);
L0:;
return si0;
}

void f1728(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
F32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
F32 sf0,sf1,sf2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
f1646(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l4;
sf0=f32_load(i->m0,(U64)si0+4U);
l5=sf0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f1723(i,si0,si1);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l2=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=1167988U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=1U;
si1=l3;
si2=1167988U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l6=si0;
si1=l2;
si0=f1724(i,si0,si1);
l3=si0;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
sf1=f32_load(i->m0,(U64)si1);
sf2=l5;
sf1-=sf2;
f32_store(i->m0,(U64)si0,sf1);
si0=l6;
si1=l2;
f1704(i,si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178224U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119036U;
si4=1167988U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f2264(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=-1U;
si0+=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L2;
}
L3:;
{
si0=l2;
si1=l1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=0U;
i32_store8(i->m0,(U64)si0+24U,si1);
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=16U;
si1+=si2;
si2=l0;
si3=l1;
f2265(i,si0,si1,si2,si3);
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
l4=si0;
si1=3U;
si0<<=(si1&31);
si1=l3;
si1=i32_load(i->m0,(U64)si1+8U);
l5=si1;
si0+=si1;
l6=si0;
si1=-8U;
si0+=si1;
l7=si0;
si1=l6;
si2=-16U;
si1+=si2;
l8=si1;
si0=f2266(i,si0,si1);
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
sj0=i64_load(i->m0,(U64)si0);
l9=sj0;
si0=l7;
si1=l8;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
sj1=l9;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=-2U;
si0+=si1;
l7=si0;
si0=l6;
si1=-24U;
si0+=si1;
l6=si0;
L4:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l6;
si0=f2266(i,si0,si1);
if(si0){
goto L5;
}
si0=l6;
si1=8U;
si0+=si1;
l5=si0;
L6:;
si0=l5;
sj1=l9;
i64_store(i->m0,(U64)si0,sj1);
goto L3;
L5:;
si0=l6;
si1=8U;
si0+=si1;
si1=l6;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l6;
si1=-8U;
si0+=si1;
l6=si0;
goto L4;
}
}
L2:;
si0=1118908U;
si1=46U;
si2=1118956U;
f16(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1101(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
sj0=(U64)(si0);
si1=l2;
sj1=(U64)(si1);
sj0*=sj1;
l3=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L2;
}
sj0=l3;
si0=(U32)(sj0);
l1=si0;
si1=7U;
si0+=si1;
l4=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si1=l4;
si2=-8U;
si1&=si2;
l1=si1;
si0+=si1;
si1=8U;
si0+=si1;
l2=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=2147483640U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f491(glicolwasmInstance*i,U32 l0,F32 l1) {
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
F32 sf1;
si0=i->g0;
si1=192U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
sj1=4398046512128ULL;
i64_store(i->m0,(U64)si0+152U,sj1);
si0=l2;
sj1=8589978692ULL;
i64_store(i->m0,(U64)si0+144U,sj1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=144U;
si1+=si2;
f232(i,si0,si1);
si0=l2;
si1=4U;
si0+=si1;
si0=f211(i,si0);
l3=si0;
si0=l2;
si1=44100U;
i32_store(i->m0,(U64)si0+172U,si1);
si0=l2;
sj1=4575657221408423936ULL;
i64_store(i->m0,(U64)si0+164U,sj1);
si0=l2;
sf1=l1;
f32_store(i->m0,(U64)si0+160U,sf1);
si0=l2;
sj1=4270709483920949248ULL;
i64_store(i->m0,(U64)si0+152U,sj1);
si0=l2;
sj1=17179869184ULL;
i64_store(i->m0,(U64)si0+144U,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=1051616U;
si2=1U;
si3=l2;
si4=4U;
si3+=si4;
si4=l2;
si5=144U;
si4+=si5;
si3=f213(i,si3,si4);
l4=si3;
f496(i,si0,si1,si2,si3);
si0=l2;
sj1=189409123106816ULL;
i64_store(i->m0,(U64)si0+168U,sj1);
si0=l2;
sj1=1036831949ULL;
i64_store(i->m0,(U64)si0+160U,sj1);
si0=l2;
sj1=4333543704410193920ULL;
i64_store(i->m0,(U64)si0+152U,sj1);
si0=l2;
sj1=17179869184ULL;
i64_store(i->m0,(U64)si0+144U,sj1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=144U;
si1+=si2;
si0=f213(i,si0,si1);
l5=si0;
si0=l2;
sj1=17179869184ULL;
i64_store(i->m0,(U64)si0+144U,sj1);
si0=l2;
sj1=4776067404826411008ULL;
i64_store(i->m0,(U64)si0+152U,sj1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=144U;
si1+=si2;
si0=f223(i,si0,si1);
l6=si0;
si0=l2;
sj1=17179869184ULL;
i64_store(i->m0,(U64)si0+144U,sj1);
si0=l2;
sj1=4787326403894837248ULL;
i64_store(i->m0,(U64)si0+152U,sj1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=144U;
si1+=si2;
si0=f222(i,si0,si1);
l7=si0;
si0=l2;
sj1=189408057753600ULL;
i64_store(i->m0,(U64)si0+160U,sj1);
si0=l2;
sj1=4575657221408423936ULL;
i64_store(i->m0,(U64)si0+152U,sj1);
si0=l2;
sj1=17179869184ULL;
i64_store(i->m0,(U64)si0+144U,sj1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=144U;
si1+=si2;
si0=f215(i,si0,si1);
l8=si0;
si0=l2;
sj1=17179869184ULL;
i64_store(i->m0,(U64)si0+144U,sj1);
si0=l2;
sj1=0ULL;
i64_store(i->m0,(U64)si0+152U,sj1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=144U;
si1+=si2;
si0=f219(i,si0,si1);
l9=si0;
si0=12U;
si1=4U;
si0=f164(i,si0,si1);
l10=si0;
si1=l2;
si1=i32_load(i->m0,(U64)si1+124U);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l10;
si1=l9;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l2;
si1=l10;
i32_store(i->m0,(U64)si0+148U,si1);
si0=l2;
si1=3U;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l2;
si1=180U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=l2;
si3=144U;
si2+=si3;
f229(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0+180U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+184U);
f12(i,si0,si1);
si0=12U;
si1=4U;
si0=f164(i,si0,si1);
l10=si0;
si1=l9;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l10;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l2;
si1=l10;
i32_store(i->m0,(U64)si0+148U,si1);
si0=l2;
si1=3U;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l2;
si1=180U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=l2;
si3=144U;
si2+=si3;
f229(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0+180U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+184U);
f12(i,si0,si1);
si0=20U;
si1=4U;
si0=f164(i,si0,si1);
l10=si0;
si1=l8;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l10;
si1=l7;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l10;
si1=l6;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l10;
si1=l5;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l10;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=5U;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l2;
si1=l10;
i32_store(i->m0,(U64)si0+148U,si1);
si0=l2;
si1=5U;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l2;
si1=180U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=l2;
si3=144U;
si2+=si3;
f229(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0+180U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+184U);
f12(i,si0,si1);
si0=l0;
si1=l2;
si2=4U;
si1+=si2;
si2=140U;
si0=f3065(i,si0,si1,si2);
l10=si0;
si1=148U;
si0+=si1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l10;
sj1=17179869184ULL;
i64_store(i->m0,(U64)si0+140U,sj1);
si0=l10;
si1=l3;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l2;
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1572(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f1625(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
sj0=i64_load(i->m0,(U64)si0+8U);
l5=sj0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l4;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si0=f1626(i,si0,si1);
l6=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=4U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
f1625(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
sj0=i64_load(i->m0,(U64)si0+8U);
l7=sj0;
si0=l0;
sj1=257ULL;
sj2=1ULL;
si3=l6;
si4=l4;
si4=i32_load(i->m0,(U64)si4+8U);
si5=l4;
si6=12U;
si5+=si6;
si5=i32_load(i->m0,(U64)si5);
si4=f1626(i,si4,si5);
si3=f1632(i,si3,si4);
sj1=si3?sj1:sj2;
i64_store(i->m0,(U64)si0,sj1);
sj0=l7;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L5;
}
sj0=l7;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L5:;
sj0=l5;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L6;
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
L6:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=1167492U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1167492U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1167492U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1U;
si1=1U;
si2=1167492U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f2736(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1,sj2;
si0=i->g0;
si1=160U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l1;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l7;
si1=l0;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l7;
si1=l3;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l7;
si1=l2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l7;
si1=l6;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l7;
si1=l5;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l4;
si1=48U;
si0+=si1;
si1=0U;
si2=l4;
si2=i32_load(i->m0,(U64)si2+48U);
si0=si2?si0:si1;
l1=si0;
si0=l7;
si1=l7;
si2=24U;
si1+=si2;
i32_store(i->m0,(U64)si0+148U,si1);
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l7;
si1=l7;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+140U,si1);
si0=l7;
si1=l7;
si2=32U;
si1+=si2;
i32_store(i->m0,(U64)si0+136U,si1);
L2:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
i32_store(i->m0,(U64)si0+64U,si1);
si0=l7;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l0=si1;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l7;
si1=l0;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l7;
si1=l0;
si2=l1;
si2=i32_load(i->m0,(U64)si2+4U);
si1+=si2;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l7;
si1=l0;
sj1=i64_load(i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l7;
si1=136U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
f1858(i,si0,si1);
si0=0U;
l1=si0;
goto L2;
}
L1:;
si0=l4;
si1=100U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si0=l7;
si1=l4;
si2=104U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=0U;
si3=l4;
si3=i32_load(i->m0,(U64)si3+96U);
l1=si3;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l7;
si1=l0;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l7;
si1=l1;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l7;
si1=0U;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l7;
si1=l1;
si2=0U;
si1=si1 != si2;
l4=si1;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l7;
si1=l0;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l7;
si1=l1;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l7;
si1=0U;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l7;
si1=l4;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l7;
si1=100U;
si0+=si1;
si1=1U;
si0|=si1;
l6=si0;
si1=7U;
si0+=si1;
l5=si0;
L5:;
{
si0=l7;
si1=80U;
si0+=si1;
si1=l7;
si2=40U;
si1+=si2;
f2737(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+80U);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=l7;
si1=i32_load(i->m0,(U64)si1+84U);
i32_store(i->m0,(U64)si0+96U,si1);
si0=l7;
si1=l1;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+88U);
l0=si0;
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=1U;
i32_store8(i->m0,(U64)si0+100U,si1);
si0=l7;
si1=3U;
i32_store(i->m0,(U64)si0+116U,si1);
si0=l7;
si1=1127272U;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l7;
sj1=3ULL;
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l7;
si1=4U;
i32_store(i->m0,(U64)si0+156U,si1);
si0=l7;
si1=4U;
i32_store(i->m0,(U64)si0+148U,si1);
si0=l7;
si1=1124168U;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l7;
si1=4U;
i32_store(i->m0,(U64)si0+140U,si1);
si0=l7;
si1=l7;
si2=136U;
si1+=si2;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l7;
si1=l7;
si2=92U;
si1+=si2;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l7;
si1=l7;
si2=24U;
si1+=si2;
i32_store(i->m0,(U64)si0+136U,si1);
si0=l7;
si1=100U;
si0+=si1;
si1=l7;
si2=112U;
si1+=si2;
si0=f1331(i,si0,si1);
if(si0){
goto L3;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+20U);
l4=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+16U);
l3=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+100U);
l1=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l1;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+108U);
l2=si0;
goto L6;
L7:;
si0=l7;
si1=8U;
si0+=si1;
si1=l7;
si2=100U;
si1+=si2;
f1004(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
L6:;
si0=l3;
si1=l4;
si2=l1;
si3=l2;
si4=l0;
si4=i32_load(i->m0,(U64)si4);
si5=8U;
si4+=si5;
si5=l7;
si5=i32_load(i->m0,(U64)si5+32U);
si6=l7;
si6=i32_load(i->m0,(U64)si6+36U);
f2736(i,si0,si1,si2,si3,si4,si5,si6);
si0=l7;
si1=100U;
si0+=si1;
f266(i,si0);
goto L5;
}
L4:;
si0=l7;
si1=160U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1178224U;
si1=43U;
si2=l7;
si3=112U;
si2+=si3;
si3=1116712U;
si4=1147788U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f2896(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
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
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
si1=f2502(i,si1);
i32_store8(i->m0,(U64)si0+3U,si1);
si0=l5;
si1=4U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(i->m0,(U64)si0+5U,sj1);
si0=l5;
si1=1U;
i32_store8(i->m0,(U64)si0+4U,si1);
si0=l5;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l5;
si1=1178640U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l5;
si1=227U;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l5;
si2=3U;
si1+=si2;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l5;
si1=4U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
si0=f1331(i,si0,si1);
if(si0){
goto L1;
}
si0=l5;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+4U);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l5;
si2=16U;
si1+=si2;
si1=f81(i,si1);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=0U;
si1=0U;
si2=1174076U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1178224U;
si1=43U;
si2=l5;
si3=16U;
si2+=si3;
si3=1116712U;
si4=1173956U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f2456(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4,si5;
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
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=l5;
si2=24U;
si1+=si2;
f1264(i,si0,si1);
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
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
l4=si0;
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
f1737(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+28U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+24U);
l7=sj1;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
si2=l5;
si3=16U;
si2+=si3;
si2=f1738(i,si2);
l3=si2;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l3;
si3=i32_load(i->m0,(U64)si3+8U);
si4=l5;
si5=l4;
f2322(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(i->m0,(U64)si0+24U);
if(si0){
goto L6;
}
si0=l0;
si1=l5;
sj1=i64_load32_u(i->m0,(U64)si1+28U);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=4ULL;
sj1|=sj2;
i64_store(i->m0,(U64)si0,sj1);
goto L5;
L6:;
si0=l0;
si1=l5;
si1=i32_load(i->m0,(U64)si1+28U);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
L5:;
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
L4:;
si0=2U;
si1=2U;
si2=1168816U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1U;
si1=l4;
si2=1168816U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1169432U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1168816U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f2300(glicolwasmInstance*i,U64 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
U64 sj1;
si0=16U;
si1=8U;
si0=f1024(i,si0,si1);
l2=si0;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
sj1=l0;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
L0:;
return si0;
}

U32 f1133(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
sj0=i64_load(i->m0,(U64)si0+8U);
l3=sj0;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+16U);
l4=si1;
si1=i32_load(i->m0,(U64)si1);
si2=l4;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si3=l0;
sj3=i64_load(i->m0,(U64)si3);
f1145(i,si0,si1,si2,sj3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+8U);
si2=l5;
si3=1U;
si2&=si3;
si1-=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-16U;
si0+=si1;
l4=si0;
sj1=l3;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f2607(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1121756U;
si2=13U;
si3=1121769U;
si4=5U;
si5=l0;
si6=1121776U;
si7=1121792U;
si8=5U;
si9=l2;
si10=12U;
si9+=si10;
si10=1121800U;
si0=f456(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f2168(glicolwasmInstance*i,U32 l0) {
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
si3=12U;
si2*=si3;
si0=f3065(i,si0,si1,si2);
si0=l4;
si1=l2;
f1233(i,si0,si1);
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
f1768(i,si0,si1,si2);
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

void f486(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=178956970U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=12U;
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

void f2952(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f360(i,si0,si1,si2,si3,si4);
si0=l5;
si1=4U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
f1669(i,si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+4U);
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f224(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=l1;
si2=l2;
si0=f225(i,si0,si1,si2);
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
si2=l2;
si3=1053840U;
si0=f122(i,si0,si1,si2,si3);
l0=si0;
si0=l3;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
sj1=2147483661ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l3;
si2=l0;
si3=16U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si2=i32_load(i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1378(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
l4=si1;
si2=l4;
si3=l2;
si2+=si3;
l4=si2;
si3=l0;
si3=i32_load(i->m0,(U64)si3);
si4=l0;
si4=i32_load(i->m0,(U64)si4+4U);
si5=1116316U;
f824(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(i->m0,(U64)si1+12U);
si2=l1;
si3=l2;
si4=1116332U;
f1379(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f263(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si1=24U;
si0+=si1;
l2=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l1;
si0-=si1;
si1=5U;
si0>>=(si1&31);
l1=si0;
L2:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=-4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
l2=si0;
goto L2;
}
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l2;
si2=5U;
si1<<=(si2&31);
f264(i,si0,si1);
L3:;
L0:;
}

void f1057(glicolwasmInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
f1069(i,si0);
si0=l0;
f87(i,si0);
L0:;
}

void f2582(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4,si5;
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
si1=8U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f2428(i,si0,si1);
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
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f2510(i,si0,si1);
si0=l5;
si1=40U;
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
si0=i32_load8_u(i->m0,(U64)si0+44U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+40U);
l7=sj1;
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=32U;
si0+=si1;
si0=f1741(i,si0);
si1=l5;
si1=i32_load(i->m0,(U64)si1+8U);
l3=si1;
si2=0U;
si3=l3;
si4=0U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l3=si1;
si2=l5;
si2=i32_load(i->m0,(U64)si2+12U);
l4=si2;
si3=l3;
si4=l4;
si5=l3;
si4=(U32)((I32)si4>(I32)si5);
si2=si4?si2:si3;
si3=l3;
si2-=si3;
si3=1U;
si2+=si3;
si3=l5;
si4=20U;
si3+=si4;
f2581(i,si0,si1,si2,si3);
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
si1=48U;
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
si0=1170612U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f389(glicolwasmInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=1U;
f386(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
L1:;
si0=l2;
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=8U;
si0+=si1;
sj1=l1;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f2584(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L3;
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
f1740(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+28U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+24U);
l6=sj1;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=16U;
si0+=si1;
si0=f1741(i,si0);
l7=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l8=si0;
if(si0){
goto L5;
}
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
sj0=l6;
si0=(U32)(sj0);
l3=si0;
goto L4;
L5:;
si0=0U;
l3=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
si2=l8;
si3=1U;
si2>>=(si3&31);
l4=si2;
si3=l7;
si3=i32_load(i->m0,(U64)si3+4U);
l7=si3;
si4=l4;
si5=1118448U;
f824(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l9=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l10=si0;
si0=l5;
si1=0U;
si2=l4;
si3=l7;
si4=l8;
si3+=si4;
si4=l4;
si3-=si4;
si4=l4;
si5=1118464U;
f824(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+4U);
l11=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l12=si0;
L7:;
{
si0=l4;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l9;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l10;
si1=l3;
si0+=si1;
l8=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l7=si0;
si0=l8;
si1=l12;
si2=l4;
si1+=si2;
l13=si1;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0,si1);
si0=l13;
si1=l7;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
goto L7;
L8:;
}
si0=l4;
si1=l11;
si2=1118496U;
f4(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+20U);
l4=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
l3=si0;
L4:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
f1704(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=0U;
si1=0U;
si2=1170580U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1170580U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=l9;
si1=l9;
si2=1118480U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1999(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3;
si0=l1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=1120080U;
si1=40U;
si2=1120120U;
f16(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=l0;
si2=l1;
si3=4U;
si2<<=(si3&31);
si0=f3065(i,si0,si1,si2);
L0:;
}

void f2993(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
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
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f1268(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+20U);
l6=si0;
if(si0){
goto L2;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+24U);
l6=si1;
i32_store(i->m0,(U64)si0+16U,si1);
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
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=32U;
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
l8=si0;
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
l8=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
L4:;
si0=l5;
si1=20U;
si0+=si1;
si1=8U;
si0+=si1;
l6=si0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(i->m0,(U64)si0+21U,sj1);
si0=l5;
si1=1U;
i32_store8(i->m0,(U64)si0+20U,si1);
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si2=l8;
f1375(i,si0,si1,si2);
si0=l5;
si1=20U;
si0+=si1;
si1=l3;
f1637(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+20U);
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=l5;
si2=32U;
si1+=si2;
si1=f81(i,si1);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
f1035(i,si0);
si0=l5;
si1=48U;
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
si1=i32_load(i->m0,(U64)si1+24U);
i32_store(i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l6;
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
L1:;
si0=0U;
si1=0U;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f628(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(i->m0,(U64)si0+14U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(i->m0,(U64)si0+13U,si1);
si0=3U;
l1=si0;
goto L2;
L5:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(i->m0,(U64)si0+15U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(i->m0,(U64)si0+14U,si1);
si0=l2;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=7U;
si1&=si2;
si2=240U;
si1|=si2;
i32_store8(i->m0,(U64)si0+12U,si1);
si0=4U;
l1=si0;
goto L2;
L4:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l0;
si1=l3;
f620(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
L6:;
si0=l0;
si1=l3;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l3;
si0+=si1;
si1=l1;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l2;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(i->m0,(U64)si0+13U,si1);
si0=l2;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(i->m0,(U64)si0+12U,si1);
si0=2U;
l1=si0;
L2:;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l0;
si1=l3;
si2=l1;
f605(i,si0,si1,si2);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
L7:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l3;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=l1;
si0=f3065(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=l1;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U64 f595(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj0;
si0=l0;
si1=0U;
si2=l1;
si1-=si2;
si2=12U;
si1*=si2;
si0+=si1;
si1=-12U;
si0+=si1;
l1=si0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
sj0=f474(i,si0,si1);
L0:;
return sj0;
}

void f2683(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
F32 l8=0;
F32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
F32 sf0,sf1,sf2,sf3;
si0=i->g0;
si1=32U;
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
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=8U;
si0+=si1;
sf0=f2376(i,si0);
l8=sf0;
si0=l4;
si1=1U;
si0=si0 == si1;
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
sf0=f2376(i,si0);
l9=sf0;
si0=l4;
si1=2U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=2U;
si1=2U;
si2=1172028U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1172028U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1U;
si1=1U;
si2=1172028U;
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
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=8U;
si0+=si1;
sf1=l8;
sf2=l9;
si3=l5;
si4=8U;
si3+=si4;
sf3=f2376(i,si3);
f2675(i,si0,sf1,sf2,sf3);
si0=l0;
si1=l5;
si2=8U;
si1+=si2;
f2676(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2958(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si3=l4;
si4=l6;
si5=l3;
si6=l8;
si3=f1760(i,si3,si4,si5,si6);
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

void f1061(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
f1075(i,si0);
si0=l0;
si1=8U;
si0+=si1;
f1075(i,si0);
L0:;
}

void f1681(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L7;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L5;
case 5:
goto L4;
case 6:
goto L3;
case 7:
goto L7;
case 8:
goto L7;
case 9:
goto L7;
case 10:
goto L2;
default:
goto L7;
}
L7:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
goto L1;
L6:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=i32_load(i->m0,(U64)si0+8U);
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
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
goto L8;
L9:;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
L8:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
goto L1;
L5:;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
f1684(i,si0,si1);
goto L1;
L4:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si1=i32_load(i->m0,(U64)si1+8U);
i32_store(i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
f1685(i,si0,si1);
goto L1;
L2:;
si0=l2;
si1=20U;
si0+=si1;
si1=l1;
f1686(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l0;
si1=l2;
si1=i32_load(i->m0,(U64)si1+24U);
l1=si1;
si2=l2;
si3=28U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
l3=si2;
si3=l1;
si1=si3?si1:si2;
f1681(i,si0,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=1126884U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f2502(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=12U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=8U;
l2=si0;
si0=1160852U;
l3=si0;
goto L1;
L2:;
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
f96(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
L1:;
si0=l1;
si1=l2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l3;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l0;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l1;
si1=56U;
si0+=si1;
si1=l1;
si2=32U;
si1+=si2;
f1767(i,si0,si1);
si0=l1;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+56U);
l4=sj1;
i64_store(i->m0,(U64)si0+24U,sj1);
sj0=l4;
sj1=255ULL;
sj0&=sj1;
l5=sj0;
sj1=1ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l1;
si1=13U;
i32_store8(i->m0,(U64)si0+72U,si1);
si0=l1;
sj1=l4;
sj2=8ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l0=si1;
i32_store8(i->m0,(U64)si0+73U,si1);
si0=l1;
si1=24U;
si0+=si1;
f1032(i,si0);
goto L4;
L5:;
si0=l1;
sj1=l4;
i64_store(i->m0,(U64)si0+72U,sj1);
sj0=l5;
sj1=13ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
sj0=l4;
sj1=8ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l0=si0;
L4:;
si0=l1;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
goto L0;
L3:;
si0=l1;
si1=72U;
si0+=si1;
f1032(i,si0);
si0=l1;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=56U;
si0+=si1;
si1=12U;
si0+=si1;
si1=4U;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l1;
si1=1161392U;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l1;
si1=4U;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l1;
si1=4U;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l1;
si1=1116967U;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l1;
si1=l1;
si2=56U;
si1+=si2;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l1;
si1=l1;
si2=72U;
si1+=si2;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l1;
si1=l1;
si2=16U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l1;
si1=32U;
si0+=si1;
si1=1161408U;
f372(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f2742(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=544U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L12;
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
i64_store(i->m0,(U64)si0+208U,sj1);
si0=l5;
si1=424U;
si0+=si1;
si1=l5;
si2=208U;
si1+=si2;
f1268(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+424U);
l4=si0;
if(si0){
goto L11;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+428U);
l4=si1;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L10;
}
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
goto L14;
}
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
goto L13;
L14:;
si0=l5;
si1=48U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+52U);
l3=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+48U);
l8=si0;
L13:;
si0=l5;
si1=208U;
si0+=si1;
si1=16U;
si0+=si1;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
si0=l5;
sj1=-9223372036854775808ULL;
i64_store(i->m0,(U64)si0+208U,sj1);
si0=l5;
si1=208U;
si0+=si1;
si0=f102(i,si0);
l9=si0;
si1=l9;
si1=i32_load(i->m0,(U64)si1);
si2=1U;
si1+=si2;
l4=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=160U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+208U,si1);
si0=l5;
si1=208U;
si0+=si1;
si1=1U;
f2060(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+212U);
si1=l5;
si2=212U;
si1+=si2;
si2=l5;
si2=i32_load(i->m0,(U64)si2+208U);
l2=si2;
si3=3U;
si2=si2 > si3;
l4=si2;
si0=si2?si0:si1;
si1=l5;
si2=208U;
si1+=si2;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l11=si1;
si1=i32_load(i->m0,(U64)si1);
l12=si1;
si2=12U;
si1*=si2;
si0+=si1;
l13=si0;
si0=l2;
si1=3U;
si2=l4;
si0=si2?si0:si1;
l14=si0;
si0=l8;
si1=l3;
si0+=si1;
l15=si0;
si0=-1U;
l3=si0;
si0=-12U;
l4=si0;
L16:;
{
si0=l12;
si1=l3;
si0+=si1;
si1=1U;
si0+=si1;
l2=si0;
si1=l14;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l11;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=0U;
si1=l3;
si0-=si1;
l4=si0;
L18:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L15;
}
si0=l5;
si1=l15;
i32_store(i->m0,(U64)si0+432U,si1);
si0=l5;
si1=l8;
i32_store(i->m0,(U64)si0+428U,si1);
si0=l5;
si1=1114113U;
i32_store(i->m0,(U64)si0+424U,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l5;
si1=208U;
si0+=si1;
si1=l5;
si2=424U;
si1+=si2;
f104(i,si0,si1);
goto L18;
}
L17:;
si0=l4;
si0=!(si0);
if(si0){
goto L19;
}
si0=l13;
si1=l4;
si0+=si1;
l2=si0;
si1=20U;
si0+=si1;
si1=l15;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=1114113U;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
goto L16;
L19:;
}
si0=l11;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
L15:;
si0=l5;
si1=80U;
si0+=si1;
si1=l5;
si2=208U;
si1+=si2;
si2=40U;
si0=f3065(i,si0,si1,si2);
si0=0U;
l4=si0;
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+252U,si1);
si0=l5;
sj1=4785074605195264ULL;
i64_store(i->m0,(U64)si0+244U,sj1);
si0=l5;
si1=0U;
i32_store16(i->m0,(U64)si0+240U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+236U,si1);
si0=l5;
si1=l10;
i32_store(i->m0,(U64)si0+232U,si1);
si0=l5;
si1=l9;
i32_store(i->m0,(U64)si0+228U,si1);
si0=l5;
si1=1114112U;
i32_store(i->m0,(U64)si0+224U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+208U,si1);
si0=l5;
si1=256U;
si0+=si1;
si1=l5;
si2=80U;
si1+=si2;
si2=40U;
si0=f3065(i,si0,si1,si2);
si0=l5;
si1=176U;
si0+=si1;
si1=1180264U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=172U;
si0+=si1;
si1=1180264U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=91U;
i32_store(i->m0,(U64)si0+312U,si1);
si0=l5;
si1=1123340U;
i32_store(i->m0,(U64)si0+308U,si1);
si0=l5;
si1=1178584U;
i32_store(i->m0,(U64)si0+304U,si1);
si0=l5;
si1=1U;
i32_store(i->m0,(U64)si0+300U,si1);
si0=l5;
si1=l7;
i32_store(i->m0,(U64)si0+296U,si1);
si0=l5;
si1=144U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1122120U);
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=0ULL;
i64_store(i->m0,(U64)si0+192U,sj1);
si0=l5;
si1=5U;
i32_store(i->m0,(U64)si0+164U,si1);
si0=l5;
si1=l9;
i32_store(i->m0,(U64)si0+156U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+200U,si1);
si0=l5;
si1=1180264U;
i32_store(i->m0,(U64)si0+168U,si1);
si0=l5;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1122112U);
i64_store(i->m0,(U64)si0+136U,sj1);
si0=l5;
si1=l5;
si2=136U;
si1+=si2;
i32_store(i->m0,(U64)si0+160U,si1);
si0=l5;
si1=l5;
si2=208U;
si1+=si2;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l5;
si1=1U;
i32_store8(i->m0,(U64)si0+204U,si1);
si0=l5;
si1=1180264U;
i32_store(i->m0,(U64)si0+180U,si1);
si0=l5;
si1=1180264U;
i32_store(i->m0,(U64)si0+188U,si1);
si0=l5;
si1=1180264U;
i32_store(i->m0,(U64)si0+184U,si1);
si0=l7;
si1=140U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l7;
si0=i32_load16_u(i->m0,(U64)si0+236U);
l2=si0;
si0=l5;
si1=49U;
i32_store8(i->m0,(U64)si0+438U,si1);
si0=l5;
si1=l2;
si2=1011U;
si1&=si2;
i32_store16(i->m0,(U64)si0+436U,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+432U,si1);
si0=l5;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+424U,sj1);
si0=l5;
si1=376U;
si0+=si1;
si1=l7;
si2=l5;
si3=152U;
si2+=si3;
si3=l5;
si4=424U;
si3+=si4;
f2085(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+376U);
l3=si0;
si1=22U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l5;
si1=l5;
si1=i32_load8_u(i->m0,(U64)si1+379U);
i32_store8(i->m0,(U64)si0+415U,si1);
si0=l5;
si1=l5;
si1=i32_load16_u(i->m0,(U64)si1+377U);
i32_store16(i->m0,(U64)si0+413U,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+380U);
i64_store(i->m0,(U64)si0+416U,sj1);
si0=l5;
si1=l3;
i32_store8(i->m0,(U64)si0+412U,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+152U);
si0=f2061(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0);
si1=89U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+520U,si1);
si0=l5;
si1=412U;
si0+=si1;
si0=f1309(i,si0);
l4=si0;
si0=l5;
si1=11U;
i32_store8(i->m0,(U64)si0+376U,si1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+380U,si1);
si0=l5;
si1=424U;
si0+=si1;
si1=l5;
si2=376U;
si1+=si2;
f1228(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+192U);
l2=si0;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+160U);
l3=si1;
si1=i32_load(i->m0,(U64)si1+12U);
i32_store(i->m0,(U64)si0+400U,si1);
si0=l5;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
l4=si1;
i32_store(i->m0,(U64)si0+392U,si1);
si0=l5;
si1=l4;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+384U,si1);
si0=l5;
si1=l4;
si2=l3;
si2=i32_load(i->m0,(U64)si2+4U);
si1+=si2;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+388U,si1);
si0=l5;
si1=l4;
sj1=i64_load(i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(i->m0,(U64)si0+376U,sj1);
si0=l5;
si1=528U;
si0+=si1;
si1=l5;
si2=376U;
si1+=si2;
f2067(i,si0,si1);
si0=l5;
si1=360U;
si0+=si1;
si1=l7;
si2=l2;
si3=l5;
si4=424U;
si3+=si4;
si4=l5;
si5=528U;
si4+=si5;
si5=0U;
f394(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(i->m0,(U64)si0+360U);
l4=si0;
goto L7;
L20:;
si0=l5;
si1=424U;
si0+=si1;
si1=l4;
f2107(i,si0,si1);
si0=l5;
si1=-2147483648U;
i32_store(i->m0,(U64)si0+436U,si1);
si0=l5;
si1=376U;
si0+=si1;
si1=l5;
si2=424U;
si1+=si2;
si2=l4;
si2=i32_load16_u(i->m0,(U64)si2+8U);
si3=l4;
si4=10U;
si3+=si4;
si3=i32_load16_u(i->m0,(U64)si3);
f2065(i,si0,si1,si2,si3);
si0=0U;
l4=si0;
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+360U,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+376U);
i64_store(i->m0,(U64)si0+364U,sj1);
si0=l5;
si1=412U;
si0+=si1;
f1070(i,si0);
goto L7;
L12:;
si0=0U;
si1=0U;
si2=1172560U;
f4(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+428U);
i32_store(i->m0,(U64)si0+212U,si1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+208U,si1);
si0=1178224U;
si1=43U;
si2=l5;
si3=208U;
si2+=si3;
si3=1119036U;
si4=1172560U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L10:;
si0=1172560U;
f14(i,si0);
UNREACHABLE;
L9:;
si0=1153712U;
f14(i,si0);
UNREACHABLE;
L8:;
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+380U);
i64_store(i->m0,(U64)si0+364U,sj1);
L7:;
si0=l5;
si1=152U;
si0+=si1;
f1951(i,si0);
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+372U);
l3=si1;
i32_store(i->m0,(U64)si0+132U,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+364U);
l6=sj1;
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l5;
si1=136U;
si0+=si1;
f107(i,si0);
si0=l5;
si1=208U;
si0+=si1;
f1952(i,si0);
si0=l5;
si1=1180264U;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l5;
si1=1180264U;
i32_store(i->m0,(U64)si0+140U,si1);
si0=l5;
si1=1180264U;
i32_store(i->m0,(U64)si0+136U,si1);
si0=l5;
si1=424U;
si0+=si1;
si1=l7;
si2=64U;
si1+=si2;
f83(i,si0,si1);
si0=l5;
si1=464U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=469U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=1180264U;
i32_store(i->m0,(U64)si0+448U,si1);
si0=l5;
si1=1180264U;
i32_store(i->m0,(U64)si0+444U,si1);
si0=l5;
si1=1180264U;
i32_store(i->m0,(U64)si0+440U,si1);
si0=l5;
sj1=0ULL;
i64_store(i->m0,(U64)si0+456U,sj1);
si0=l5;
sj1=0ULL;
i64_store(i->m0,(U64)si0+432U,sj1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+352U,si1);
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l2=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
L21:;
si0=l5;
si1=l2;
i32_store(i->m0,(U64)si0+452U,si1);
sj0=l6;
si0=(U32)(sj0);
l2=si0;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
l8=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l5;
si1=448U;
si0+=si1;
si1=l2;
f84(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L22;
}
si0=l3;
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
goto L6;
}
L22:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+468U);
l2=si0;
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+468U,si1);
si0=l5;
sj1=0ULL;
i64_store(i->m0,(U64)si0+384U,sj1);
si0=l5;
si1=l2;
i32_store(i->m0,(U64)si0+380U,si1);
si0=l5;
si1=1U;
i32_store(i->m0,(U64)si0+376U,si1);
si0=l5;
si1=l5;
si2=424U;
si1+=si2;
i32_store(i->m0,(U64)si0+392U,si1);
si0=l5;
si1=360U;
si0+=si1;
si1=l7;
si2=l5;
si3=424U;
si2+=si3;
si3=l5;
si4=208U;
si3+=si4;
si4=l5;
si5=136U;
si4+=si5;
si5=0U;
si6=l4;
si7=8U;
si6+=si7;
si7=l4;
si7=i32_load(i->m0,(U64)si7);
si8=0U;
f85(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l5;
si1=528U;
si0+=si1;
si1=l5;
si2=360U;
si1+=si2;
si2=1U;
f1953(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+528U);
si1=13U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+532U);
l3=si0;
goto L24;
L25:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+532U);
l3=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+528U);
l2=si0;
si1=255U;
si0&=si1;
l4=si0;
si1=13U;
si0=si0 != si1;
if(si0){
goto L23;
}
L24:;
si0=l5;
si1=376U;
si0+=si1;
f2312(i,si0);
goto L4;
L23:;
si0=l5;
si1=376U;
si0+=si1;
f2312(i,si0);
si0=l4;
si1=13U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=l3;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
si2=l2;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+376U,sj1);
si0=l5;
si1=360U;
si0+=si1;
si1=l5;
si2=376U;
si1+=si2;
f2314(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+360U);
if(si0){
goto L27;
}
si0=l5;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l5;
si2=360U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+364U);
i64_store(i->m0,(U64)si0+68U,sj1);
si0=0U;
l4=si0;
goto L26;
L27:;
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+364U);
i64_store(i->m0,(U64)si0+528U,sj1);
si0=1116999U;
l3=si0;
si0=131U;
l4=si0;
si0=1123336U;
si1=2U;
si2=1116999U;
si3=131U;
si0=f2310(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L28;
}
si0=l5;
si1=40U;
si0+=si1;
si1=l7;
si2=1116999U;
si3=131U;
f1261(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(i->m0,(U64)si0+44U);
l4=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+40U);
l3=si0;
L28:;
si0=l5;
si1=32U;
si0+=si1;
si1=l4;
f996(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+32U);
l2=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+36U);
si1=l3;
si2=l4;
si0=f3065(i,si0,si1,si2);
l8=si0;
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=528U;
si1+=si2;
f96(i,si0,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=l7;
si2=l5;
si2=i32_load(i->m0,(U64)si2+24U);
si3=l5;
si3=i32_load(i->m0,(U64)si3+28U);
f1261(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
l15=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si1=i32_load(i->m0,(U64)si1+20U);
l3=si1;
f996(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l12=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l15;
si2=l3;
si0=f3065(i,si0,si1,si2);
l15=si0;
si0=l5;
si1=404U;
si0+=si1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=400U;
si0+=si1;
si1=l15;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=392U;
si0+=si1;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=388U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l12;
i32_store(i->m0,(U64)si0+396U,si1);
si0=l5;
si1=l2;
i32_store(i->m0,(U64)si0+384U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+378U,si1);
si0=l5;
si1=13U;
i32_store8(i->m0,(U64)si0+376U,si1);
si0=l5;
si1=376U;
si0+=si1;
si0=f97(i,si0);
l4=si0;
si0=l5;
si1=528U;
si0+=si1;
f1032(i,si0);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+68U,si1);
si0=1U;
l4=si0;
L26:;
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l5;
si1=208U;
si0+=si1;
f91(i,si0);
si0=l5;
si1=424U;
si0+=si1;
f1192(i,si0);
goto L3;
L6:;
UNREACHABLE;
L5:;
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+364U);
i64_store(i->m0,(U64)si0+424U,sj1);
si0=l5;
si1=424U;
si0+=si1;
si0=f1955(i,si0);
l4=si0;
si0=l5;
si1=136U;
si0+=si1;
f107(i,si0);
si0=l5;
si1=208U;
si0+=si1;
f1952(i,si0);
goto L2;
L4:;
si0=1U;
l4=si0;
si0=l5;
si1=1U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l5;
si1=208U;
si0+=si1;
f91(i,si0);
si0=l5;
si1=424U;
si0+=si1;
f1192(i,si0);
L3:;
si0=l5;
si1=136U;
si0+=si1;
f1870(i,si0);
si0=l5;
si1=120U;
si0+=si1;
f1954(i,si0);
si0=l4;
si0=!(si0);
if(si0){
goto L29;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+68U);
l4=si0;
goto L2;
L29:;
si0=l5;
si1=208U;
si0+=si1;
si1=l5;
si2=68U;
si1+=si2;
f2743(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+212U);
l4=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+208U);
l3=si0;
si1=255U;
si0&=si1;
si1=13U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
L1:;
si0=l5;
si1=60U;
si0+=si1;
f1035(i,si0);
si0=l5;
si1=544U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2414(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L6;
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
si1=32U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f1268(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+32U);
l4=si0;
if(si0){
goto L5;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+36U);
l4=si1;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l5;
si1=48U;
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
si0=i32_load8_u(i->m0,(U64)si0+52U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+48U);
l6=sj1;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
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
goto L8;
}
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
goto L7;
L8:;
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
L7:;
si0=l5;
si1=32U;
si0+=si1;
si1=l3;
si2=l4;
si1=f1139(i,si1,si2);
f1335(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+32U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+40U);
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+36U);
i32_store(i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=l2;
si2=l7;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l7;
si3=i32_load(i->m0,(U64)si3+8U);
si4=l5;
si5=48U;
si4+=si5;
f2328(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+32U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+32U);
i64_store(i->m0,(U64)si0,sj1);
goto L1;
L6:;
si0=1U;
si1=l4;
si2=1166116U;
f4(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+36U);
i32_store(i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+48U,si1);
si0=1178224U;
si1=43U;
si2=l5;
si3=48U;
si2+=si3;
si3=1119036U;
si4=1166116U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1166304U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=1166116U;
f14(i,si0);
UNREACHABLE;
L2:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+36U);
l3=si0;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
L1:;
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
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f646(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=0U;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l2=si1;
si0-=si1;
l3=si0;
si0=l1;
si1=63U;
si0&=si1;
sj0=(U64)(si0);
l4=sj0;
si0=-768U;
l1=si0;
sj0=0ULL;
l5=sj0;
L6:;
{
si0=l3;
si1=l1;
si0+=si1;
l6=si0;
si1=-768U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
sj0=l5;
sj1=10ULL;
sj0*=sj1;
si1=l0;
si2=l1;
si1+=si2;
l7=si1;
si2=776U;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0+=sj1;
l5=sj0;
sj1=l4;
sj0>>=(sj1&63);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l6;
si1=-769U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=10ULL;
sj0*=sj1;
si1=l7;
si2=777U;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0+=sj1;
l5=sj0;
sj1=l4;
sj0>>=(sj1&63);
si0=!(sj0);
if(si0){
goto L6;
}
}
si0=l1;
si1=768U;
si0+=si1;
l1=si0;
goto L2;
L5:;
si0=768U;
si1=768U;
si2=1062228U;
f4(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=769U;
si0+=si1;
l1=si0;
goto L2;
L3:;
sj0=l5;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l5;
sj1=l4;
sj0>>=(sj1&63);
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L7;
}
si0=l2;
l1=si0;
goto L2;
L7:;
si0=l2;
l1=si0;
L8:;
{
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l5;
sj1=10ULL;
sj0*=sj1;
l5=sj0;
sj1=l4;
sj0>>=(sj1&63);
si0=!(sj0);
if(si0){
goto L8;
}
}
L2:;
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si1-=si2;
si2=1U;
si1+=si2;
l6=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l6;
si1=-2047U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L9;
}
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0+776U,si1);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
goto L0;
L9:;
sj0=-1ULL;
sj1=l4;
sj0<<=(sj1&63);
sj1=-1ULL;
sj0^=sj1;
l8=sj0;
si0=l2;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L14;
}
si0=0U;
si1=l2;
si0-=si1;
l9=si0;
si0=l1;
si1=8U;
si0+=si1;
l7=si0;
si0=l2;
si1=l1;
si0-=si1;
l6=si0;
si0=l1;
si1=768U;
si2=l1;
si3=768U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-768U;
si0+=si1;
l3=si0;
si0=8U;
l1=si0;
L15:;
{
si0=l3;
si1=l1;
si0+=si1;
si1=8U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l0;
si1=l7;
si0+=si1;
sj0=i64_load8_u(i->m0,(U64)si0);
l10=sj0;
si0=l0;
si1=l1;
si0+=si1;
sj1=l5;
sj2=l4;
sj1>>=(sj2&63);
i64_store8(i->m0,(U64)si0,sj1);
sj0=l10;
sj1=l5;
sj2=l8;
sj1&=sj2;
sj2=10ULL;
sj1*=sj2;
sj0+=sj1;
l5=sj0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l9;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0+=si1;
si1=8U;
si0=si0 != si1;
if(si0){
goto L15;
}
}
sj0=l5;
si0=!(sj0);
if(si0){
goto L13;
}
goto L11;
L14:;
si0=0U;
l6=si0;
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L13:;
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
goto L10;
L12:;
si0=l7;
si1=-8U;
si0+=si1;
si1=768U;
si2=1062244U;
f4(i,si0,si1,si2);
UNREACHABLE;
L11:;
L16:;
{
sj0=l5;
l10=sj0;
sj1=l8;
sj0&=sj1;
sj1=10ULL;
sj0*=sj1;
l5=sj0;
sj0=l10;
sj1=l4;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
si0=l6;
si1=768U;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l1;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+776U,si1);
goto L17;
L18:;
si0=l0;
si1=l6;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store8(i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
L17:;
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L16;
}
}
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
L10:;
si0=l6;
si1=768U;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l6;
si1=7U;
si0+=si1;
l1=si0;
L20:;
{
si0=l0;
si1=l1;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=-8U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si1=7U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L20;
}
L19:;
si0=l6;
si1=-1U;
si0+=si1;
si1=768U;
si2=1062196U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
L0:;
}

void f2747(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
F32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
F32 sf0,sf1;
si0=i->g0;
si1=48U;
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
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l6;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=40U;
si0+=si1;
sf0=f2376(i,si0);
l7=sf0;
si0=i32_reinterpret_f32(sf0);
l4=si0;
si1=2147483647U;
si0&=si1;
si1=2139095039U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l4;
si1=2139095040U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
sf0=l7;
sf1=0;
si0=sf0 < sf1;
si0=!(si0);
if(si0){
goto L8;
}
si0=60U;
l4=si0;
si0=1118024U;
l3=si0;
goto L7;
L8:;
sj0=0ULL;
l6=sj0;
si0=0U;
l0=si0;
si0=l4;
si1=23U;
si0>>=(si1&31);
l3=si0;
si1=96U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l4;
si1=8388607U;
si0&=si1;
si1=8388608U;
si0|=si1;
l8=si0;
si0=l3;
si1=127U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si1=150U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si1=191U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=73U;
l4=si0;
si0=1118084U;
l3=si0;
L7:;
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l5;
si1=40U;
si0+=si1;
f2261(i,si0);
UNREACHABLE;
L6:;
si0=l4;
si1=l3;
si2=1U;
si1+=si2;
si0<<=(si1&31);
si1=8388607U;
si0&=si1;
sj0=(U64)(si0);
sj1=1000000000ULL;
sj0*=sj1;
l6=sj0;
sj1=4194304ULL;
sj0&=sj1;
sj1=22ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l6;
sj2=23ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l4=si1;
sj2=l6;
sj3=8388096ULL;
sj2&=sj3;
sj3=4194304ULL;
si2=sj2 != sj3;
si1|=si2;
si0&=si1;
si1=l4;
si0+=si1;
l0=si0;
si0=l8;
si1=22U;
si2=l3;
si1-=si2;
si0>>=(si1&31);
sj0=(U64)(si0);
l6=sj0;
goto L1;
L5:;
si0=l8;
sj0=(U64)(si0);
si1=l3;
si2=42U;
si1+=si2;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l6=sj0;
goto L1;
L4:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=0U;
si1=0U;
si2=1172560U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
sj0=0ULL;
l6=sj0;
si0=l5;
si1=24U;
si0+=si1;
si1=l8;
sj1=(U64)(si1);
si2=l3;
si3=42U;
si2+=si3;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
sj1<<=(sj2&63);
sj2=0ULL;
sj3=1000000000ULL;
sj4=0ULL;
f3109(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
sj0=i64_load(i->m0,(U64)si0+24U);
l9=sj0;
sj1=63ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=l5;
si2=32U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l4=si1;
sj2=l9;
sj3=-512ULL;
sj2&=sj3;
sj3=-9223372036854775808ULL;
si2=sj2 != sj3;
si1|=si2;
si0&=si1;
si1=l4;
si0+=si1;
l0=si0;
L1:;
si0=l5;
si1=8U;
si0+=si1;
sj1=l6;
si2=l0;
f989(i,si0,sj1,si2);
f99(i);
UNREACHABLE;
L0:;
}

void f897(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=272U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=208U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+212U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+208U);
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
si1=17U;
i32_store8(i->m0,(U64)si0+223U,si1);
si0=l2;
si1=200U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+204U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+200U);
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
i32_store(i->m0,(U64)si0+240U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+236U,si1);
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+232U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=232U;
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
i32_store(i->m0,(U64)si0+224U,si1);
si0=l2;
si1=l1;
si2=120U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+228U,si1);
si0=l2;
si1=192U;
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
si0=i32_load(i->m0,(U64)si0+196U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+192U);
if(si0){
goto L8;
}
si0=l2;
si1=256U;
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
i64_store(i->m0,(U64)si0+256U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=184U;
si0+=si1;
si1=l1;
si2=1114641U;
si3=8U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+188U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+184U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=176U;
si0+=si1;
si1=l1;
si2=1114649U;
si3=9U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+180U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+176U);
if(si0){
goto L9;
}
L10:;
si0=l2;
si1=168U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+172U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+168U);
if(si0){
goto L9;
}
si0=l2;
si1=240U;
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
i64_store(i->m0,(U64)si0+232U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
si0=l2;
si1=160U;
si0+=si1;
si1=l1;
f845(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+164U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+160U);
if(si0){
goto L13;
}
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
goto L13;
}
L14:;
{
si0=l2;
si1=144U;
si0+=si1;
si1=l1;
f845(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+148U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+144U);
si0=!(si0);
if(si0){
goto L14;
}
}
si0=l2;
si1=136U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+140U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+136U);
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
si1=240U;
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
i64_store(i->m0,(U64)si0+232U,sj1);
si0=l1;
si1=48U;
si0+=si1;
f851(i,si0);
si0=l2;
si1=128U;
si0+=si1;
si1=l1;
f913(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+128U);
l12=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+132U);
l1=si0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+232U);
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
si1=120U;
si0+=si1;
si1=l1;
f914(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+124U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+120U);
if(si0){
goto L9;
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
goto L9;
}
si0=l2;
si1=240U;
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
i64_store(i->m0,(U64)si0+232U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
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
if(si0){
goto L12;
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
goto L12;
}
L15:;
{
si0=l2;
si1=88U;
si0+=si1;
si1=l1;
f845(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+92U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L15;
}
}
si0=l2;
si1=80U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+84U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+80U);
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
si1=240U;
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
i64_store(i->m0,(U64)si0+232U,sj1);
si0=l1;
si1=48U;
si0+=si1;
f851(i,si0);
si0=l2;
si1=72U;
si0+=si1;
si1=l1;
f913(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+72U);
l12=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+76U);
l1=si0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+232U);
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
si1=64U;
si0+=si1;
si1=l1;
f904(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+68U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+64U);
if(si0){
goto L9;
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
goto L9;
}
si0=l2;
si1=240U;
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
i64_store(i->m0,(U64)si0+232U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
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
if(si0){
goto L11;
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
goto L11;
}
L16:;
{
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
f845(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+36U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L16;
}
}
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
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
si1=240U;
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
i64_store(i->m0,(U64)si0+232U,sj1);
si0=l1;
si1=48U;
si0+=si1;
f851(i,si0);
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
f913(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
l12=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l1=si0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+232U);
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
si1=8U;
si0+=si1;
si1=l1;
f904(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
if(si0){
goto L9;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
si0=l2;
si1=l2;
si2=223U;
si1+=si2;
i32_store(i->m0,(U64)si0+264U,si1);
si0=l2;
si1=l2;
si2=224U;
si1+=si2;
i32_store(i->m0,(U64)si0+260U,si1);
si0=l2;
si1=l2;
si2=228U;
si1+=si2;
i32_store(i->m0,(U64)si0+256U,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l1;
si1=17U;
si2=l3;
si3=l6;
si4=l7;
si5=l5;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
L17:;
si0=l8;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L18;
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
i32_store(i->m0,(U64)si0+236U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+248U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+223U);
i32_store8(i->m0,(U64)si0+233U,si1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+232U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=232U;
si1+=si2;
f841(i,si0,si1);
L18:;
si0=l2;
si1=256U;
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
L13:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+232U);
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
goto L9;
L12:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+232U);
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
goto L9;
L11:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+232U);
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
sj1=i64_load(i->m0,(U64)si1+256U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l2;
si2=264U;
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
si2=223U;
si1+=si2;
i32_store(i->m0,(U64)si0+264U,si1);
si0=l2;
si1=l2;
si2=224U;
si1+=si2;
i32_store(i->m0,(U64)si0+260U,si1);
si0=l2;
si1=l2;
si2=228U;
si1+=si2;
i32_store(i->m0,(U64)si0+256U,si1);
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=17U;
si2=l3;
si3=l6;
si4=l7;
si5=l5;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=256U;
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
si1=272U;
si0+=si1;
i->g0=si0;
L0:;
}

F32 f3095(glicolwasmInstance*i,F32 l0,F32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
F32 l6=0;
U32 si0,si1,si2;
F32 sf0,sf1,sf2;
sf0=l1;
sf1=l1;
si0=sf0 != sf1;
sf1=l0;
sf2=l0;
si1=sf1 != sf2;
si0|=si1;
if(si0){
goto L1;
}
sf0=l1;
si0=i32_reinterpret_f32(sf0);
l2=si0;
si1=1065353216U;
si0=si0 != si1;
if(si0){
goto L2;
}
sf0=l0;
sf0=f3094(i,sf0);
goto L0;
L2:;
si0=l2;
si1=30U;
si0>>=(si1&31);
si1=2U;
si0&=si1;
l3=si0;
sf1=l0;
si1=i32_reinterpret_f32(sf1);
l4=si1;
si2=31U;
si1>>=(si2&31);
si0|=si1;
l5=si0;
si0=l4;
si1=2147483647U;
si0&=si1;
l4=si0;
if(si0){
goto L9;
}
sf0=-3.14159274;
l6=sf0;
si0=l5;
switch(si0){
case 0:
goto L8;
case 1:
goto L8;
case 2:
goto L7;
default:
goto L3;
}
L9:;
si0=l2;
si1=2147483647U;
si0&=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=2139095040U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l4;
si1=2139095040U;
si0=si0 != si1;
if(si0){
goto L4;
}
sf0=-2.3561945;
l6=sf0;
si0=l5;
si1=3U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=2U;
si0<<=(si1&31);
si1=1182680U;
si0+=si1;
sf0=f32_load(i->m0,(U64)si0);
goto L0;
L8:;
sf0=l0;
goto L0;
L7:;
sf0=3.14159274;
goto L0;
L6:;
sf0=1.57079637;
sf1=l0;
sf0=copysignf(sf0,sf1);
goto L0;
L5:;
si0=l4;
si1=2139095040U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l2;
si1=218103808U;
si0+=si1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L10;
}
L11:;
sf0=1.57079637;
sf1=l0;
sf0=copysignf(sf0,sf1);
goto L0;
L10:;
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
sf0=0;
l6=sf0;
si0=l4;
si1=218103808U;
si0+=si1;
si1=l2;
si0=si0 < si1;
if(si0){
goto L12;
}
L13:;
sf0=l0;
sf1=l1;
sf0/=sf1;
sf0=fabsf(sf0);
sf0=f3094(i,sf0);
l6=sf0;
L12:;
si0=l5;
switch(si0){
case 0:
goto L3;
case 1:
goto L15;
case 2:
goto L14;
default:
goto L16;
}
L16:;
sf0=l6;
sf1=8.74227766e-08;
sf0+=sf1;
sf1=-3.14159274;
sf0+=sf1;
goto L0;
L15:;
sf0=l6;
sf0=-(sf0);
goto L0;
L14:;
sf0=3.14159274;
sf1=l6;
sf2=8.74227766e-08;
sf1+=sf2;
sf0-=sf1;
goto L0;
L4:;
sf0=-3.14159274;
l6=sf0;
si0=l5;
si1=3U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=2U;
si0<<=(si1&31);
si1=1182692U;
si0+=si1;
sf0=f32_load(i->m0,(U64)si0);
l6=sf0;
L3:;
sf0=l6;
goto L0;
L1:;
sf0=l0;
sf1=l1;
sf0+=sf1;
L0:;
return sf0;
}

void f768(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
f199(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l2;
si2=40U;
si1*=si2;
si0+=si1;
si1=l1;
si2=40U;
si0=f3065(i,si0,si1,si2);
si0=l0;
si1=l2;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
L0:;
}

void f2732(glicolwasmInstance*i,U32 l0) {
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
si1=1142372U;
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

void f434(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=8U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
if(si0){
goto L7;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f719(i,si0,si1,si2);
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
goto L5;
L7:;
si0=l3;
si0=i32_load(i->m0,(U64)si0);
si1=l5;
si2=l1;
si3=l2;
si0=f615(i,si0,si1,si2,si3);
l3=si0;
si0=l2;
l5=si0;
goto L5;
L6:;
si0=l4;
si1=l1;
si2=l2;
f719(i,si0,si1,si2);
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(i->m0,(U64)si0,si1);
si0=0U;
l2=si0;
goto L1;
L8:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
goto L2;
L4:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+4U,si1);
L2:;
si0=1U;
l2=si0;
L1:;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1807(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si1=i32_load(i->m0,(U64)si1+20U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+24U);
si0=f1808(i,si0,si1,si2);
L0:;
return si0;
}

void f2765(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
F64 sd3,sd4;
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
si2=1172876U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1172876U;
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
sj1=257ULL;
sj2=1ULL;
si3=l5;
si4=8U;
si3+=si4;
sd3=f2345(i,si3);
si4=l6;
sd4=(F64)(I32)(si4);
si3=sd3 <= sd4;
sj1=si3?sj1:sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2377(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
F32 sf3,sf4;
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
sj1=257ULL;
sj2=1ULL;
si3=l5;
si4=8U;
si3+=si4;
sf3=f2376(i,si3);
sf4=0;
si3=sf3 == sf4;
sj1=si3?sj1:sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=0U;
si1=0U;
si2=1168280U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1557(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
F32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
F32 sf0,sf3,sf4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f1646(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
if(si0){
goto L2;
}
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
sf0=f32_load(i->m0,(U64)si0+4U);
l6=sf0;
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
f1646(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178224U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119036U;
si4=1167716U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1U;
si1=1U;
si2=1167716U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
sj1=257ULL;
sj2=1ULL;
sf3=l6;
si4=l4;
sf4=f32_load(i->m0,(U64)si4+4U);
sf3-=sf4;
sf3=fabsf(sf3);
sf4=1.1920929e-07;
si3=sf3 > sf4;
sj1=si3?sj1:sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l5;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178224U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119036U;
si4=1167716U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1167716U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f627(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
f628(i,si0,si1);
si0=0U;
L0:;
return si0;
}

void f1973(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1;
si0=i->g0;
si1=224U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l6;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0);
l8=si0;
si1=11U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=0U;
l9=si0;
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+52U);
if(si0){
goto L10;
}
si0=l8;
si1=10U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0+1U);
l9=si0;
if(si0){
goto L10;
}
si0=l7;
si1=l6;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
l9=si0;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
si0=l7;
si1=l9;
si2=8U;
si1+=si2;
l9=si1;
i32_store(i->m0,(U64)si0+200U,si1);
si0=l7;
si1=2U;
i32_store(i->m0,(U64)si0+128U,si1);
si0=l7;
si1=l9;
si2=l10;
si3=2U;
si2<<=(si3&31);
l10=si2;
si1+=si2;
l11=si1;
i32_store(i->m0,(U64)si0+204U,si1);
si0=l7;
si1=2U;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l7;
si1=l7;
si2=52U;
si1+=si2;
i32_store(i->m0,(U64)si0+208U,si1);
si0=l7;
si1=128U;
si0+=si1;
l12=si0;
L14:;
{
si0=l10;
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
si1=0U;
i32_store(i->m0,(U64)si0+80U,si1);
si0=l7;
si1=1U;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l9;
si0=i32_load(i->m0,(U64)si0);
si1=56U;
si0+=si1;
l13=si0;
si0=i32_load(i->m0,(U64)si0);
l14=si0;
si0=l7;
si1=0U;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l7;
si1=l13;
si2=0U;
si3=l14;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
si0=l9;
si1=4U;
si0+=si1;
l9=si0;
si0=l7;
si1=56U;
si0+=si1;
si1=l7;
si2=208U;
si1+=si2;
si0=f2055(i,si0,si1);
l13=si0;
si0=!(si0);
if(si0){
goto L14;
}
}
si0=l7;
si1=l9;
i32_store(i->m0,(U64)si0+200U,si1);
goto L12;
L13:;
si0=l7;
si1=l11;
i32_store(i->m0,(U64)si0+200U,si1);
si0=l7;
si1=2U;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+128U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l12;
si1=l7;
si2=208U;
si1+=si2;
si0=f2055(i,si0,si1);
l13=si0;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
si0=l7;
si0=i32_load(i->m0,(U64)si0+52U);
si0=i32_load(i->m0,(U64)si0);
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(i->m0,(U64)si1);
l10=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l10;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l13;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
si1=l10;
si1=i32_load(i->m0,(U64)si1);
l13=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l13;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l7;
si1=l10;
i32_store(i->m0,(U64)si0+220U,si1);
si0=l7;
si1=0U;
i32_store(i->m0,(U64)si0+216U,si1);
si0=l7;
si1=1180264U;
i32_store(i->m0,(U64)si0+212U,si1);
si0=l7;
si1=l9;
i32_store(i->m0,(U64)si0+208U,si1);
si0=l0;
si1=l7;
si2=208U;
si1+=si2;
si1=f1267(i,si1);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=9U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L11:;
si0=l7;
si0=i32_load(i->m0,(U64)si0+52U);
si0=i32_load(i->m0,(U64)si0);
si0=i32_load(i->m0,(U64)si0+4U);
l9=si0;
L10:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+88U);
si0=!(si0);
if(si0){
goto L16;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0);
si0=i32_load(i->m0,(U64)si0);
l14=si0;
si0=l7;
si1=40U;
si0+=si1;
si1=l8;
si2=l6;
si2=i32_load(i->m0,(U64)si2+8U);
si3=1U;
f1311(i,si0,si1,si2,si3);
si0=l7;
si0=i32_load(i->m0,(U64)si0+40U);
l10=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+44U);
l13=si0;
si0=l7;
si1=84U;
si0+=si1;
si1=l5;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=80U;
si0+=si1;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=76U;
si0+=si1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=72U;
si0+=si1;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l9;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l7;
si1=l13;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l7;
si1=l10;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l7;
si1=l1;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l7;
si1=208U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+88U);
si2=l10;
si3=l13;
si4=l9;
si5=l7;
si6=68U;
si5+=si6;
si6=l1;
si7=92U;
si6+=si7;
si6=i32_load(i->m0,(U64)si6);
si6=i32_load(i->m0,(U64)si6+20U);
TF(i->t0,si6,void (*)(glicolwasmInstance*,U32,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4,si5);
si0=l14;
si1=l4;
si1=i32_load(i->m0,(U64)si1);
si1=i32_load(i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+52U,si1);
L17:;
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+208U);
si1=-13U;
si0+=si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
default:
goto L18;
}
L18:;
si0=l7;
si1=l7;
sj1=i64_load(i->m0,(U64)si1+208U);
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l7;
si1=56U;
si0+=si1;
si1=1U;
si0=f388(i,si0,si1);
l9=si0;
si0=l0;
si1=2U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+4U,sj1);
goto L1;
L16:;
si0=l9;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l13=si0;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
si1=l9;
si0-=si1;
l9=si0;
goto L4;
L15:;
si0=l7;
si1=32U;
si0+=si1;
si1=l6;
f1277(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+212U);
si1=l7;
si1=i32_load16_u(i->m0,(U64)si1+32U);
si2=l7;
si2=i32_load16_u(i->m0,(U64)si2+34U);
si0=f1497(i,si0,si1,si2);
l9=si0;
si0=l0;
si1=8U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(i->m0,(U64)si0+4U,si1);
goto L1;
L9:;
si0=1127000U;
si1=1127100U;
f1274(i,si0,si1);
UNREACHABLE;
L8:;
si0=l7;
si1=68U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=1U;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l7;
si1=1127192U;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l7;
si1=30U;
i32_store(i->m0,(U64)si0+212U,si1);
si0=l7;
si1=l7;
si2=208U;
si1+=si2;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l7;
si1=l7;
si2=48U;
si1+=si2;
i32_store(i->m0,(U64)si0+208U,si1);
si0=l7;
si1=56U;
si0+=si1;
si1=1127200U;
f372(i,si0,si1);
UNREACHABLE;
L7:;
UNREACHABLE;
L6:;
si0=1127216U;
f14(i,si0);
UNREACHABLE;
L5:;
si0=l7;
si1=24U;
si0+=si1;
si1=l8;
si2=l6;
si2=i32_load(i->m0,(U64)si2+8U);
si3=1U;
f1311(i,si0,si1,si2,si3);
si0=l7;
si0=i32_load(i->m0,(U64)si0+24U);
l14=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=16U;
si0+=si1;
si1=l4;
si1=i32_load(i->m0,(U64)si1);
si2=l4;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l14;
si4=l7;
si4=i32_load(i->m0,(U64)si4+28U);
l6=si4;
f1909(i,si0,si1,si2,si3,si4);
si0=l7;
si0=i32_load(i->m0,(U64)si0+16U);
if(si0){
goto L19;
}
si0=l1;
si1=184U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l9=si0;
si0=l1;
si1=180U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
L23:;
{
si0=l9;
si0=!(si0);
if(si0){
goto L22;
}
si0=l7;
si1=56U;
si0+=si1;
si1=l10;
si1=i32_load(i->m0,(U64)si1);
l13=si1;
si2=116U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l13;
si3=120U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si3=l14;
si4=l6;
si1=f2040(i,si1,si2,si3,si4);
f1971(i,si0,si1);
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+56U);
si1=13U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l9;
si1=-4U;
si0+=si1;
l9=si0;
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
si0=l7;
si1=56U;
si0+=si1;
f1001(i,si0);
goto L23;
L24:;
}
si0=l7;
sj0=i64_load(i->m0,(U64)si0+56U);
l15=sj0;
sj1=255ULL;
sj0&=sj1;
sj1=13ULL;
si0=sj0 != sj1;
if(si0){
goto L21;
}
L22:;
si0=l7;
si1=8U;
si0+=si1;
si1=l6;
f996(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+8U);
l9=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l14;
si2=l6;
si0=f3065(i,si0,si1,si2);
l10=si0;
si0=l7;
si1=l7;
si1=i32_load(i->m0,(U64)si1+48U);
f1277(i,si0,si1);
si0=l7;
si1=72U;
si0+=si1;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=68U;
si0+=si1;
si1=l10;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l9;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l7;
si1=4U;
i32_store8(i->m0,(U64)si0+56U,si1);
si0=l7;
si1=l7;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+58U,si1);
si0=l0;
si1=l7;
si2=56U;
si1+=si2;
si1=f97(i,si1);
i32_store(i->m0,(U64)si0+4U,si1);
si0=8U;
l9=si0;
goto L20;
L21:;
si0=l0;
sj1=l15;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=2U;
l9=si0;
L20:;
si0=l0;
si1=l9;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L19:;
si0=l7;
si0=i32_load(i->m0,(U64)si0+20U);
l9=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l13=si0;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
L4:;
si0=l10;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l13;
si2=l9;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=8U;
si1+=si2;
f1931(i,si0,si1);
goto L1;
L3:;
si0=1127232U;
f14(i,si0);
UNREACHABLE;
L2:;
si0=l9;
si1=l10;
si2=1165956U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l7;
si1=224U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f733(glicolwasmInstance*i) {
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
si2=280U;
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
i32_store16(i->m0,(U64)si0+226U,si1);
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f2218(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
l3=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si2=l3;
si3=l1;
f444(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+12U);
f432(i,si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1837(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=5U;
si2=l3;
si3=5U;
si2=si2 > si3;
l4=si2;
si0=si2?si0:si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l3;
si3=l4;
si1=si3?si1:si2;
l3=si1;
si0-=si1;
si1=l1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=-2147483647U;
l0=si0;
goto L1;
L2:;
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=l1;
si1+=si2;
l1=si1;
si2=l3;
si1=si1 >= si2;
si2=l1;
f1447(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=0U;
l0=si0;
goto L1;
L3:;
si0=l2;
si1=l0;
si2=l3;
f1849(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
L1:;
si0=l0;
si1=l3;
f532(i,si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1618(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f1616(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
if(si0){
goto L2;
}
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
f1616(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178224U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119036U;
si4=1167380U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1U;
si1=1U;
si2=1167380U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+4U);
si2=l3;
si1|=si2;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj2=8ULL;
sj1<<=(sj2&63);
sj2=1ULL;
sj1|=sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l5;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178224U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119036U;
si4=1167380U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1167380U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f449(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
l4=si1;
si0|=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l2;
si0+=si1;
l5=si0;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=1U;
si0+=si1;
l6=si0;
si0=0U;
l7=si0;
si0=l1;
l8=si0;
L4:;
{
si0=l8;
l4=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load8_s(i->m0,(U64)si0);
l9=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l4;
si1=1U;
si0+=si1;
l8=si0;
si0=l9;
si1=255U;
si0&=si1;
l9=si0;
goto L5;
L6:;
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l10=si0;
si0=l9;
si1=31U;
si0&=si1;
l8=si0;
si0=l9;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l10;
si0|=si1;
l9=si0;
si0=l4;
si1=2U;
si0+=si1;
l8=si0;
goto L5;
L7:;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l10=si0;
si0=l9;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l10;
si1=l8;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l9=si0;
si0=l4;
si1=3U;
si0+=si1;
l8=si0;
goto L5;
L8:;
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l8;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l9=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=4U;
si0+=si1;
l8=si0;
L5:;
si0=l7;
si1=l4;
si0-=si1;
si1=l8;
si0+=si1;
l7=si0;
si0=l9;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L2;
}
L3:;
si0=l4;
si1=l5;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load8_s(i->m0,(U64)si0);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L9;
}
si0=l8;
si1=-32U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l8;
si1=-16U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+2U);
si1=63U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+1U);
si2=63U;
si1&=si2;
si2=12U;
si1<<=(si2&31);
si0|=si1;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l8;
si2=255U;
si1&=si2;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L2;
}
L9:;
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si1=l2;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=0U;
l4=si0;
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L11;
}
goto L10;
L12:;
si0=0U;
l4=si0;
si0=l1;
si1=l7;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L10;
}
L11:;
si0=l1;
l4=si0;
L10:;
si0=l7;
si1=l2;
si2=l4;
si0=si2?si0:si1;
l2=si0;
si0=l4;
si1=l1;
si2=l4;
si0=si2?si0:si1;
l1=si0;
L2:;
si0=l3;
if(si0){
goto L13;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si2=l2;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L0;
L13:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l7=si0;
si0=l2;
si1=16U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l1;
si1=l2;
si0=f645(i,si0,si1);
l8=si0;
goto L14;
L15:;
si0=l2;
if(si0){
goto L16;
}
si0=0U;
l8=si0;
goto L14;
L16:;
si0=l2;
si1=3U;
si0&=si1;
l9=si0;
si0=l2;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L18;
}
si0=0U;
l8=si0;
si0=0U;
l5=si0;
goto L17;
L18:;
si0=0U;
l8=si0;
si0=l1;
l4=si0;
si0=l2;
si1=-4U;
si0&=si1;
l5=si0;
l6=si0;
L19:;
{
si0=l8;
si1=l4;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l4;
si2=1U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l4;
si2=2U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l4;
si2=3U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l8=si0;
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
if(si0){
goto L19;
}
}
L17:;
si0=l9;
si0=!(si0);
if(si0){
goto L14;
}
si0=l1;
si1=l5;
si0+=si1;
l4=si0;
L20:;
{
si0=l8;
si1=l4;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l8=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L20;
}
}
L14:;
si0=l7;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L22;
}
si0=l7;
si1=l8;
si0-=si1;
l7=si0;
si0=0U;
l4=si0;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+32U);
switch(si0){
case 0:
goto L23;
case 1:
goto L25;
case 2:
goto L24;
case 3:
goto L23;
default:
goto L23;
}
L25:;
si0=l7;
l4=si0;
si0=0U;
l7=si0;
goto L23;
L24:;
si0=l7;
si1=1U;
si0>>=(si1&31);
l4=si0;
si0=l7;
si1=1U;
si0+=si1;
si1=1U;
si0>>=(si1&31);
l7=si0;
L23:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+16U);
l6=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+20U);
l9=si0;
L26:;
{
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l9;
si1=l6;
si2=l8;
si2=i32_load(i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L26;
}
}
si0=1U;
goto L0;
L22:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si2=l2;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L0;
L21:;
si0=1U;
l4=si0;
si0=l9;
si1=l1;
si2=l2;
si3=l8;
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L27;
}
si0=0U;
l4=si0;
L29:;
{
si0=l7;
si1=l4;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l7;
l4=si0;
goto L28;
L30:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l9;
si1=l6;
si2=l8;
si2=i32_load(i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L29;
}
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
L28:;
si0=l4;
si1=l7;
si0=si0 < si1;
l4=si0;
L27:;
si0=l4;
goto L0;
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si2=l2;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

void f2731(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1;
si0=l1;
si1=l2;
si0=f2730(i,si0,si1);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
f2727(i,si0,si1);
goto L0;
L1:;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
L0:;
}

U32 f219(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=f170(i,si0);
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
si1=1052008U;
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

void f1402(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
f1467(i,si0,si1);
L0:;
}

U32 f1759(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=-9U;
si0+=si1;
l1=si0;
si1=24U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=0U;
l1=si0;
si0=l0;
si1=128U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si0=f1763(i,si0);
l1=si0;
goto L1;
L2:;
si0=-1U;
si1=0U;
si2=8388639U;
si3=l1;
si2>>=(si3&31);
si3=1U;
si2&=si3;
si0=si2?si0:si1;
l1=si0;
L1:;
si0=l1;
si1=1U;
si0&=si1;
L0:;
return si0;
}

void f1291(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
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
l9=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L119;
}
sj0=l6;
sj1=-7729146682714798459ULL;
sj0^=sj1;
sj1=l5;
sj2=-4489258845294998855ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L111;
}
sj0=l6;
sj1=-5478090529232052866ULL;
sj0^=sj1;
sj1=l5;
sj2=-846063727984524776ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L116;
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
goto L113;
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
goto L118;
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
goto L115;
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
goto L114;
}
sj0=l6;
sj1=9206259327432385233ULL;
sj0^=sj1;
sj1=l5;
sj2=5704815055083480348ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L112;
}
sj0=l6;
sj1=5817408772836814867ULL;
sj0^=sj1;
sj1=l5;
sj2=6255172110400608400ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L117;
}
si0=0U;
l3=si0;
sj0=l6;
sj1=-8202046714581771301ULL;
sj0^=sj1;
sj1=l5;
sj2=6337701729009040854ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L107;
}
si0=2U;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=-55U;
si0+=si1;
switch(si0){
case 0:
goto L48;
case 1:
goto L47;
default:
goto L1;
}
L119:;
sj0=l6;
sj1=5817408772836814867ULL;
sj0^=sj1;
sj1=l5;
sj2=6255172110400608400ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L108;
}
si0=0U;
l3=si0;
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
goto L107;
}
L118:;
sj0=l7;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l8;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L110;
}
si0=0U;
l3=si0;
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
goto L107;
}
si0=2U;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=-13U;
si0+=si1;
switch(si0){
case 0:
goto L74;
case 1:
goto L1;
case 2:
goto L73;
case 3:
goto L1;
case 4:
goto L72;
case 5:
goto L71;
case 6:
goto L70;
case 7:
goto L69;
default:
goto L109;
}
L117:;
si0=31U;
l2=si0;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=-13U;
si0+=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L2;
case 2:
goto L30;
case 3:
goto L2;
case 4:
goto L29;
case 5:
goto L28;
case 6:
goto L27;
case 7:
goto L26;
case 8:
goto L25;
case 9:
goto L24;
case 10:
goto L2;
case 11:
goto L2;
case 12:
goto L2;
case 13:
goto L2;
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
goto L23;
case 21:
goto L22;
default:
goto L120;
}
L120:;
si0=l1;
si1=-51U;
si0+=si1;
switch(si0){
case 0:
goto L21;
case 1:
goto L20;
case 2:
goto L19;
case 3:
goto L18;
case 4:
goto L17;
case 5:
goto L16;
case 6:
goto L2;
case 7:
goto L15;
case 8:
goto L2;
case 9:
goto L14;
case 10:
goto L13;
default:
goto L2;
}
L116:;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=-51U;
si0+=si1;
l2=si0;
si1=11U;
si0=si0 < si1;
if(si0){
goto L95;
}
goto L2;
L115:;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=-51U;
si0+=si1;
switch(si0){
case 0:
goto L36;
case 1:
goto L35;
case 2:
goto L34;
case 3:
goto L33;
case 4:
goto L32;
case 5:
goto L31;
default:
goto L121;
}
L121:;
si0=2U;
l3=si0;
si0=l1;
si1=-13U;
si0+=si1;
switch(si0){
case 0:
goto L38;
case 1:
goto L1;
case 2:
goto L37;
default:
goto L1;
}
L114:;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=-51U;
si0+=si1;
switch(si0){
case 0:
goto L44;
case 1:
goto L43;
case 2:
goto L42;
case 3:
goto L41;
case 4:
goto L40;
case 5:
goto L39;
default:
goto L122;
}
L122:;
si0=l2;
si1=13U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=32U;
l2=si0;
si0=1U;
l3=si0;
goto L1;
L113:;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=-55U;
si0+=si1;
switch(si0){
case 0:
goto L46;
case 1:
goto L45;
default:
goto L123;
}
L123:;
si0=l2;
si1=13U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=33U;
l2=si0;
si0=1U;
l3=si0;
goto L1;
L112:;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=-51U;
si0+=si1;
l2=si0;
si1=6U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=1181768U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
goto L3;
L111:;
si0=2U;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=-55U;
si0+=si1;
switch(si0){
case 0:
goto L50;
case 1:
goto L49;
default:
goto L1;
}
L110:;
si0=2U;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=-13U;
si0+=si1;
switch(si0){
case 0:
goto L62;
case 1:
goto L1;
case 2:
goto L61;
case 3:
goto L1;
case 4:
goto L60;
case 5:
goto L59;
case 6:
goto L58;
case 7:
goto L57;
default:
goto L124;
}
L124:;
si0=l1;
si1=-51U;
si0+=si1;
switch(si0){
case 0:
goto L56;
case 1:
goto L55;
case 2:
goto L54;
case 3:
goto L53;
case 4:
goto L52;
case 5:
goto L51;
default:
goto L1;
}
L109:;
si0=l1;
si1=-51U;
si0+=si1;
switch(si0){
case 0:
goto L68;
case 1:
goto L67;
case 2:
goto L66;
case 3:
goto L65;
case 4:
goto L64;
case 5:
goto L63;
default:
goto L1;
}
L108:;
si0=1U;
l3=si0;
sj0=l7;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l8;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L106;
}
L107:;
si0=l1;
si1=1128336U;
si0=f1505(i,si0,si1);
si0=!(si0);
if(si0){
goto L125;
}
sj0=l7;
sj1=9206259327432385233ULL;
sj0^=sj1;
sj1=l8;
sj2=5704815055083480348ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L125;
}
si0=34U;
l2=si0;
si0=l3;
if(si0){
goto L3;
}
L125:;
si0=l1;
si1=1128336U;
si0=f1505(i,si0,si1);
l10=si0;
sj0=l7;
sj1=5817408772836814867ULL;
sj0^=sj1;
sj1=l8;
sj2=6255172110400608400ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L126;
}
sj0=l6;
sj1=9206259327432385233ULL;
sj0^=sj1;
sj1=l5;
sj2=5704815055083480348ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L126;
}
si0=35U;
l2=si0;
si0=l10;
if(si0){
goto L3;
}
L126:;
si0=36U;
l2=si0;
si0=l1;
si1=1128336U;
si0=f1505(i,si0,si1);
sj1=l7;
sj2=9206259327432385233ULL;
sj1^=sj2;
sj2=l8;
sj3=5704815055083480348ULL;
sj2^=sj3;
sj1|=sj2;
si1=!(sj1);
si0&=si1;
si1=l3;
si0&=si1;
if(si0){
goto L3;
}
si0=l1;
si1=1128336U;
si0=f1505(i,si0,si1);
if(si0){
goto L105;
}
sj0=l6;
sj1=-7729146682714798459ULL;
sj0^=sj1;
sj1=l5;
sj2=-4489258845294998855ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L99;
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
goto L100;
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
goto L104;
}
sj0=l6;
sj1=-8202046714581771301ULL;
sj0^=sj1;
sj1=l5;
sj2=6337701729009040854ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L98;
}
sj0=l6;
sj1=9206259327432385233ULL;
sj0^=sj1;
sj1=l5;
sj2=5704815055083480348ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L103;
}
sj0=l6;
sj1=-6589857296642063093ULL;
sj0^=sj1;
sj1=l5;
sj2=4403346059154598174ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
goto L12;
L106:;
si0=2U;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=-13U;
si0+=si1;
switch(si0){
case 0:
goto L86;
case 1:
goto L1;
case 2:
goto L85;
case 3:
goto L1;
case 4:
goto L84;
case 5:
goto L83;
case 6:
goto L82;
case 7:
goto L81;
default:
goto L127;
}
L127:;
si0=l1;
si1=-51U;
si0+=si1;
switch(si0){
case 0:
goto L80;
case 1:
goto L79;
case 2:
goto L78;
case 3:
goto L77;
case 4:
goto L76;
case 5:
goto L75;
default:
goto L1;
}
L105:;
sj0=l6;
sj1=-7729146682714798459ULL;
sj0^=sj1;
sj1=l5;
sj2=-4489258845294998855ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L99;
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
goto L100;
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
goto L104;
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
goto L12;
}
sj0=l6;
sj1=-8202046714581771301ULL;
sj0^=sj1;
sj1=l5;
sj2=6337701729009040854ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L98;
}
sj0=l6;
sj1=9206259327432385233ULL;
sj0^=sj1;
sj1=l5;
sj2=5704815055083480348ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L11;
}
sj0=l7;
sj1=-7740204043524863337ULL;
sj0^=sj1;
sj1=l8;
sj2=634436761013121356ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L102;
}
si0=37U;
l2=si0;
sj0=l7;
sj1=5817408772836814867ULL;
sj0^=sj1;
sj1=l8;
sj2=6255172110400608400ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
goto L11;
L104:;
sj0=l7;
sj1=-6589857296642063093ULL;
sj0^=sj1;
sj1=l8;
sj2=4403346059154598174ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L128;
}
sj0=l7;
sj1=9206259327432385233ULL;
sj0^=sj1;
sj1=l8;
sj2=5704815055083480348ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=-51U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L4;
case 2:
goto L4;
case 3:
goto L4;
case 4:
goto L4;
case 5:
goto L96;
default:
goto L101;
}
L128:;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=-51U;
si0+=si1;
switch(si0){
case 0:
goto L92;
case 1:
goto L91;
case 2:
goto L90;
case 3:
goto L89;
case 4:
goto L88;
case 5:
goto L87;
default:
goto L129;
}
L129:;
si0=2U;
l3=si0;
si0=l1;
si1=-13U;
si0+=si1;
switch(si0){
case 0:
goto L94;
case 1:
goto L1;
case 2:
goto L93;
default:
goto L1;
}
L103:;
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
goto L11;
}
L102:;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=-51U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L4;
case 2:
goto L4;
case 3:
goto L4;
case 4:
goto L4;
case 5:
goto L96;
default:
goto L130;
}
L130:;
si0=l2;
si1=13U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=38U;
l2=si0;
goto L3;
L101:;
si0=l2;
si1=13U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=39U;
l2=si0;
goto L3;
L100:;
sj0=l7;
sj1=-6589857296642063093ULL;
sj0^=sj1;
sj1=l8;
sj2=4403346059154598174ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L11;
}
si0=1U;
si1=2U;
si2=l1;
si2=i32_load(i->m0,(U64)si2);
si3=13U;
si2=si2 == si3;
si0=si2?si0:si1;
l3=si0;
si0=40U;
l2=si0;
goto L1;
L99:;
sj0=l7;
sj1=-8202046714581771301ULL;
sj0^=sj1;
sj1=l8;
sj2=6337701729009040854ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L97;
}
goto L11;
L98:;
sj0=l7;
sj1=-7729146682714798459ULL;
sj0^=sj1;
sj1=l8;
sj2=-4489258845294998855ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L11;
}
L97:;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=36U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=56U;
si0=si0 != si1;
if(si0){
goto L2;
}
L96:;
si0=41U;
l2=si0;
goto L3;
L95:;
si0=l2;
si1=1181712U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=1181724U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
goto L1;
L94:;
si0=42U;
l2=si0;
si0=1U;
l3=si0;
goto L1;
L93:;
si0=43U;
l2=si0;
goto L3;
L92:;
si0=44U;
l2=si0;
goto L3;
L91:;
si0=45U;
l2=si0;
goto L3;
L90:;
si0=46U;
l2=si0;
goto L3;
L89:;
si0=47U;
l2=si0;
goto L3;
L88:;
si0=48U;
l2=si0;
goto L3;
L87:;
si0=49U;
l2=si0;
goto L3;
L86:;
si0=50U;
l2=si0;
goto L3;
L85:;
si0=51U;
l2=si0;
goto L3;
L84:;
si0=52U;
l2=si0;
goto L3;
L83:;
si0=53U;
l2=si0;
goto L3;
L82:;
si0=54U;
l2=si0;
goto L3;
L81:;
si0=55U;
l2=si0;
goto L3;
L80:;
si0=56U;
l2=si0;
goto L3;
L79:;
si0=57U;
l2=si0;
goto L3;
L78:;
si0=58U;
l2=si0;
goto L3;
L77:;
si0=59U;
l2=si0;
goto L3;
L76:;
si0=60U;
l2=si0;
goto L3;
L75:;
si0=61U;
l2=si0;
goto L3;
L74:;
si0=62U;
l2=si0;
goto L3;
L73:;
si0=63U;
l2=si0;
goto L3;
L72:;
si0=64U;
l2=si0;
goto L3;
L71:;
si0=65U;
l2=si0;
goto L3;
L70:;
si0=66U;
l2=si0;
goto L3;
L69:;
si0=67U;
l2=si0;
goto L3;
L68:;
si0=68U;
l2=si0;
goto L3;
L67:;
si0=69U;
l2=si0;
goto L3;
L66:;
si0=70U;
l2=si0;
goto L3;
L65:;
si0=71U;
l2=si0;
goto L3;
L64:;
si0=72U;
l2=si0;
goto L3;
L63:;
si0=73U;
l2=si0;
goto L3;
L62:;
si0=74U;
l2=si0;
goto L3;
L61:;
si0=75U;
l2=si0;
goto L3;
L60:;
si0=76U;
l2=si0;
goto L3;
L59:;
si0=77U;
l2=si0;
goto L3;
L58:;
si0=78U;
l2=si0;
goto L3;
L57:;
si0=79U;
l2=si0;
goto L3;
L56:;
si0=80U;
l2=si0;
goto L3;
L55:;
si0=81U;
l2=si0;
goto L3;
L54:;
si0=82U;
l2=si0;
goto L3;
L53:;
si0=83U;
l2=si0;
goto L3;
L52:;
si0=84U;
l2=si0;
goto L3;
L51:;
si0=85U;
l2=si0;
goto L3;
L50:;
si0=86U;
l2=si0;
goto L3;
L49:;
si0=87U;
l2=si0;
goto L3;
L48:;
si0=88U;
l2=si0;
goto L3;
L47:;
si0=89U;
l2=si0;
goto L3;
L46:;
si0=90U;
l2=si0;
goto L3;
L45:;
si0=91U;
l2=si0;
goto L3;
L44:;
si0=92U;
l2=si0;
goto L3;
L43:;
si0=93U;
l2=si0;
goto L3;
L42:;
si0=94U;
l2=si0;
goto L3;
L41:;
si0=95U;
l2=si0;
goto L3;
L40:;
si0=96U;
l2=si0;
goto L3;
L39:;
si0=97U;
l2=si0;
goto L3;
L38:;
si0=98U;
l2=si0;
si0=1U;
l3=si0;
goto L1;
L37:;
si0=99U;
l2=si0;
goto L3;
L36:;
si0=100U;
l2=si0;
goto L3;
L35:;
si0=101U;
l2=si0;
goto L3;
L34:;
si0=102U;
l2=si0;
goto L3;
L33:;
si0=103U;
l2=si0;
goto L3;
L32:;
si0=104U;
l2=si0;
goto L3;
L31:;
si0=105U;
l2=si0;
goto L3;
L30:;
si0=106U;
l2=si0;
goto L1;
L29:;
si0=107U;
l2=si0;
goto L1;
L28:;
si0=108U;
l2=si0;
goto L1;
L27:;
si0=109U;
l2=si0;
goto L1;
L26:;
si0=110U;
l2=si0;
goto L1;
L25:;
si0=111U;
l2=si0;
goto L1;
L24:;
si0=112U;
l2=si0;
goto L1;
L23:;
si0=113U;
l2=si0;
goto L1;
L22:;
si0=114U;
l2=si0;
goto L1;
L21:;
si0=115U;
l2=si0;
goto L1;
L20:;
si0=116U;
l2=si0;
goto L1;
L19:;
si0=117U;
l2=si0;
goto L1;
L18:;
si0=118U;
l2=si0;
goto L1;
L17:;
si0=119U;
l2=si0;
goto L1;
L16:;
si0=120U;
l2=si0;
goto L1;
L15:;
si0=121U;
l2=si0;
goto L1;
L14:;
si0=122U;
l2=si0;
goto L1;
L13:;
si0=123U;
l2=si0;
goto L1;
L12:;
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
goto L11;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=-51U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L8;
case 3:
goto L7;
case 4:
goto L6;
case 5:
goto L5;
default:
goto L131;
}
L131:;
si0=l2;
si1=13U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=124U;
l2=si0;
si0=1U;
l3=si0;
goto L1;
L11:;
sj0=l9;
si0=!(sj0);
if(si0){
goto L2;
}
si0=2U;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=-51U;
si0+=si1;
switch(si0){
case 0:
goto L138;
case 1:
goto L137;
case 2:
goto L136;
case 3:
goto L135;
case 4:
goto L134;
case 5:
goto L133;
default:
goto L1;
}
L138:;
sj0=l6;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l5;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L139;
}
sj0=l6;
sj1=-8671986846239669186ULL;
sj0^=sj1;
sj1=l5;
sj2=472265404662890772ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L139;
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
goto L4;
}
L139:;
sj0=l7;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l8;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=l7;
sj1=-8671986846239669186ULL;
sj0^=sj1;
sj1=l8;
sj2=472265404662890772ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
si0=2U;
l3=si0;
sj0=l7;
sj1=5817408772836814867ULL;
sj0^=sj1;
sj1=l8;
sj2=6255172110400608400ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
goto L4;
L137:;
sj0=l6;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l5;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L140;
}
sj0=l6;
sj1=-8671986846239669186ULL;
sj0^=sj1;
sj1=l5;
sj2=472265404662890772ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L140;
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
goto L4;
}
L140:;
sj0=l7;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l8;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=l7;
sj1=-8671986846239669186ULL;
sj0^=sj1;
sj1=l8;
sj2=472265404662890772ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
si0=2U;
l3=si0;
sj0=l7;
sj1=5817408772836814867ULL;
sj0^=sj1;
sj1=l8;
sj2=6255172110400608400ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
goto L4;
L136:;
sj0=l6;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l5;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L141;
}
sj0=l6;
sj1=-8671986846239669186ULL;
sj0^=sj1;
sj1=l5;
sj2=472265404662890772ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L141;
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
goto L4;
}
L141:;
sj0=l7;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l8;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=l7;
sj1=-8671986846239669186ULL;
sj0^=sj1;
sj1=l8;
sj2=472265404662890772ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
si0=2U;
l3=si0;
sj0=l7;
sj1=5817408772836814867ULL;
sj0^=sj1;
sj1=l8;
sj2=6255172110400608400ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
goto L4;
L135:;
sj0=l6;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l5;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L142;
}
sj0=l6;
sj1=-8671986846239669186ULL;
sj0^=sj1;
sj1=l5;
sj2=472265404662890772ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L142;
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
goto L4;
}
L142:;
sj0=l7;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l8;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=l7;
sj1=-8671986846239669186ULL;
sj0^=sj1;
sj1=l8;
sj2=472265404662890772ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
si0=2U;
l3=si0;
sj0=l7;
sj1=5817408772836814867ULL;
sj0^=sj1;
sj1=l8;
sj2=6255172110400608400ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
goto L4;
L134:;
sj0=l6;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l5;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L132;
}
sj0=l6;
sj1=-8671986846239669186ULL;
sj0^=sj1;
sj1=l5;
sj2=472265404662890772ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L132;
}
sj0=l6;
sj1=5817408772836814867ULL;
sj0^=sj1;
sj1=l5;
sj2=6255172110400608400ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L132;
}
goto L4;
L133:;
si0=41U;
l2=si0;
sj0=l6;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l5;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L143;
}
sj0=l6;
sj1=-8671986846239669186ULL;
sj0^=sj1;
sj1=l5;
sj2=472265404662890772ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L143;
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
goto L3;
}
L143:;
sj0=l7;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l8;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=l7;
sj1=5817408772836814867ULL;
sj0^=sj1;
sj1=l8;
sj2=6255172110400608400ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
si0=0U;
l3=si0;
sj0=l7;
sj1=-8671986846239669186ULL;
sj0^=sj1;
sj1=l8;
sj2=472265404662890772ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L2;
}
goto L1;
L132:;
sj0=l7;
sj1=7133089339927796971ULL;
sj0^=sj1;
sj1=l8;
sj2=-654752528677450734ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=l7;
sj1=-8671986846239669186ULL;
sj0^=sj1;
sj1=l8;
sj2=472265404662890772ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
si0=2U;
l3=si0;
sj0=l7;
sj1=5817408772836814867ULL;
sj0^=sj1;
sj1=l8;
sj2=6255172110400608400ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
goto L4;
L10:;
si0=125U;
l2=si0;
goto L3;
L9:;
si0=126U;
l2=si0;
goto L3;
L8:;
si0=127U;
l2=si0;
goto L3;
L7:;
si0=128U;
l2=si0;
goto L3;
L6:;
si0=129U;
l2=si0;
goto L3;
L5:;
si0=130U;
l2=si0;
goto L3;
L4:;
si0=131U;
l2=si0;
L3:;
si0=0U;
l3=si0;
goto L1;
L2:;
si0=2U;
l3=si0;
L1:;
si0=l0;
si1=l3;
i32_store8(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1231(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+144U);
l2=si2;
si3=l2;
si4=3U;
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

U32 f1495(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=1U;
l2=si0;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L1;
case 1:
goto L4;
case 2:
goto L1;
case 3:
goto L3;
case 4:
goto L2;
default:
goto L1;
}
L4:;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+2U);
si1=0U;
si0=si0 != si1;
l2=si0;
goto L1;
L3:;
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f1490(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
si1=i32_load(i->m0,(U64)si1+24U);
si0=TF(i->t0,si1,U32 (*)(glicolwasmInstance*,U32))(i,si0);
l2=si0;
goto L1;
L2:;
si0=0U;
l2=si0;
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f2790(glicolwasmInstance*i,U32 l0) {
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
si1=1143044U;
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

void f696(glicolwasmInstance*i,U32 l0,U64 l1,U64 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U32 si0,si1,si2,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
sj0=0ULL;
l4=sj0;
si0=0U;
l5=si0;
sj0=l1;
sj1=-342ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L1;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L1;
}
si0=2047U;
l5=si0;
sj0=l1;
sj1=308ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L1;
}
sj0=0ULL;
l4=sj0;
si0=l3;
si1=16U;
si0+=si1;
sj1=l1;
si1=(U32)(sj1);
l6=si1;
si2=4U;
si1<<=(si2&31);
si2=1076616U;
si1+=si2;
l7=si1;
sj1=i64_load(i->m0,(U64)si1);
sj2=0ULL;
sj3=l2;
sj4=l2;
sj4=I64_CLZ(sj4);
l8=sj4;
sj3<<=(sj4&63);
l9=sj3;
sj4=0ULL;
f3109(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj0=i64_load(i->m0,(U64)si0+16U);
l10=sj0;
si0=l3;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
sj0=i64_load(i->m0,(U64)si0);
l2=sj0;
sj1=511ULL;
sj0&=sj1;
sj1=511ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l3;
si1=l7;
sj1=i64_load(i->m0,(U64)si1+8U);
sj2=0ULL;
sj3=l9;
sj4=0ULL;
f3109(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=8U;
si0+=si1;
sj0=i64_load(i->m0,(U64)si0);
l9=sj0;
sj1=l10;
sj0+=sj1;
l10=sj0;
sj1=l9;
si0=sj0 < sj1;
sj0=(U64)(si0);
sj1=l2;
sj0+=sj1;
l2=sj0;
L2:;
sj0=l1;
sj1=27ULL;
sj0+=sj1;
sj1=83ULL;
si0=sj0 < sj1;
if(si0){
goto L3;
}
sj0=l10;
sj1=-1ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=-1U;
l5=si0;
goto L1;
L3:;
sj0=l2;
sj1=l2;
sj2=63ULL;
sj1>>=(sj2&63);
l11=sj1;
sj2=9ULL;
sj1+=sj2;
l12=sj1;
sj0>>=(sj1&63);
l9=sj0;
si0=l6;
si1=217706U;
si0*=si1;
si1=16U;
si0=(U32)((I32)si0>>(si1&31));
sj1=l8;
si1=(U32)(sj1);
si0-=si1;
sj1=l11;
si1=(U32)(sj1);
si0+=si1;
si1=63U;
si0+=si1;
l6=si0;
si1=-1022U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
si0=1024U;
si1=1023U;
sj2=l9;
sj3=72057594037927934ULL;
sj2&=sj3;
sj3=l9;
sj4=l9;
sj5=l12;
sj4<<=(sj5&63);
sj5=l2;
si4=sj4 == sj5;
sj2=si4?sj2:sj3;
sj3=l9;
sj4=l9;
sj5=3ULL;
sj4&=sj5;
sj5=1ULL;
si4=sj4 == sj5;
sj2=si4?sj2:sj3;
sj3=l9;
sj4=l10;
sj5=2ULL;
si4=sj4 < sj5;
sj2=si4?sj2:sj3;
sj3=l9;
sj4=l1;
sj5=4ULL;
sj4+=sj5;
sj5=28ULL;
si4=sj4 < sj5;
sj2=si4?sj2:sj3;
l1=sj2;
sj3=1ULL;
sj2&=sj3;
sj3=l1;
sj2+=sj3;
l1=sj2;
sj3=18014398509481983ULL;
si2=sj2 > sj3;
l7=si2;
si0=si2?si0:si1;
si1=l6;
si0+=si1;
l6=si0;
si1=2046U;
si0=si0 > si1;
if(si0){
goto L1;
}
sj0=0ULL;
sj1=l1;
sj2=1ULL;
sj1>>=(sj2&63);
sj2=67553994410557439ULL;
sj1&=sj2;
si2=l7;
sj0=si2?sj0:sj1;
l4=sj0;
si0=l6;
l5=si0;
goto L1;
L4:;
si0=0U;
l5=si0;
si0=l6;
si1=-1085U;
si0=si0 < si1;
if(si0){
goto L1;
}
sj0=l9;
si1=2U;
si2=l6;
si1-=si2;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
l1=sj0;
sj1=1ULL;
sj0&=sj1;
sj1=l1;
sj0+=sj1;
l1=sj0;
sj1=9007199254740991ULL;
si0=sj0 > sj1;
l5=si0;
sj0=l1;
sj1=1ULL;
sj0>>=(sj1&63);
l4=sj0;
L1:;
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l4;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2598(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
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
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si0=f2346(i,si0);
l4=si0;
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
l8=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=l6;
si3=0U;
f2323(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l6=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l8;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l3;
si2=l6;
si3=1170180U;
si0=f1184(i,si0,si1,si2,si3);
si1=l4;
i32_store8(i->m0,(U64)si0,si1);
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
si0=1170372U;
f14(i,si0);
UNREACHABLE;
L0:;
}

F32 f3068(glicolwasmInstance*i,F32 l0,F32 l1) {
F32 sf0,sf1;
sf0=l0;
sf1=l1;
sf0=f3066(i,sf0,sf1);
L0:;
return sf0;
}

void f66(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
si0=l1;
if(si0){
goto L4;
}
si0=1U;
l2=si0;
goto L3;
L4:;
si0=l1;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=1U;
si1=l1;
si0=f818(i,si0,si1);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L2:;
f228(i);
UNREACHABLE;
L1:;
UNREACHABLE;
L0:;
}

U32 f558(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+24U);
if(si0){
goto L2;
}
si0=0U;
l0=si0;
goto L1;
L2:;
L4:;
{
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
f43(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=1U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+16U);
si2=-224U;
si1+=si2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
l2=si1;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(i->m0,(U64)si0,sj1);
goto L4;
}
L3:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+24U);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+16U);
si1=0U;
si2=l2;
si1-=si2;
si2=28U;
si1*=si2;
si0+=si1;
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

void f2608(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
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
si0=l5;
si1=32U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
l4=si1;
si1=i32_load8_u(i->m0,(U64)si1);
si2=l4;
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
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si0=f1741(i,si0);
l3=si0;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=l5;
si1=l3;
si1=i32_load(i->m0,(U64)si1+8U);
l7=si1;
f75(i,si0,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l7;
f76(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+40U);
l3=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=l3;
si0+=si1;
l8=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+36U);
si1=l3;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
L4:;
{
si0=l3;
si1=l4;
sj1=i64_load8_u(i->m0,(U64)si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=4ULL;
sj1|=sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L4;
}
}
si0=l8;
l3=si0;
L3:;
si0=l5;
si1=24U;
si0+=si1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+32U);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
f2408(i,si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+32U);
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
si0=0U;
si1=0U;
si2=1170292U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1170292U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f1924(glicolwasmInstance*i) {
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
si1=4U;
si2=188U;
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
i32_store16(i->m0,(U64)si0+138U,si1);
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f1006(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l4;
si2=l3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
f390(i,si0,si1);
si0=12U;
si1=4U;
si0=f1024(i,si0,si1);
l1=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+4U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=6U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2425(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
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
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=16U;
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
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=16U;
si0+=si1;
si0=f2346(i,si0);
l4=si0;
si0=l5;
si1=16U;
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
si0=i32_load8_u(i->m0,(U64)si0+20U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+16U);
l7=sj1;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si1=f1738(i,si1);
si2=l6;
si3=l4;
f2426(i,si0,si1,si2,si3);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
f2408(i,si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
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
si2=1168816U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1U;
si1=l4;
si2=1168816U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1169800U;
f14(i,si0);
UNREACHABLE;
L0:;
}

F32 f3119(glicolwasmInstance*i,F32 l0) {
F32 sf0;
sf0=l0;
sf0=f3118(i,sf0);
L0:;
return sf0;
}

void f2497(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si0=si0 == si1;
if(si0){
goto L1;
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
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si0=f2346(i,si0);
l8=si0;
si0=l4;
si1=2U;
si0=si0 <= si1;
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
si1=l6;
si2=l8;
si3=l5;
si4=8U;
si3+=si4;
si3=f2346(i,si3);
f2498(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
if(si0){
goto L5;
}
si0=l0;
si1=l5;
sj1=i64_load32_u(i->m0,(U64)si1+12U);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=4ULL;
sj1|=sj2;
i64_store(i->m0,(U64)si0,sj1);
goto L4;
L5:;
si0=l0;
si1=l5;
si1=i32_load(i->m0,(U64)si1+12U);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
L4:;
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=2U;
si1=2U;
si2=1169956U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1169956U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1U;
si1=1U;
si2=1169956U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f2381(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
sf1=-(sf1);
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
si2=1168280U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f2135(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=1148088U;
l3=si0;
si0=8U;
l4=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L2;
case 3:
goto L10;
case 4:
goto L9;
case 5:
goto L8;
case 6:
goto L8;
case 7:
goto L7;
case 8:
goto L6;
case 9:
goto L5;
default:
goto L11;
}
L12:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l4=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si1=12U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
si0=l4;
si1=16U;
si0+=si1;
l6=si0;
si0=l4;
si1=8U;
si0+=si1;
l7=si0;
si0=l4;
si1=l5;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=l7;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l2;
si1=l6;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l2;
si1=68U;
si0+=si1;
f986(i,si0);
goto L3;
L13:;
si0=l7;
si1=l5;
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
L11:;
si0=l0;
si1=l1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
goto L1;
L10:;
si0=1148096U;
l3=si0;
si0=23U;
l4=si0;
goto L2;
L9:;
si0=1148119U;
l3=si0;
si0=11U;
l4=si0;
goto L2;
L8:;
si0=1148130U;
l3=si0;
si0=8U;
l4=si0;
goto L2;
L7:;
si0=1148138U;
l3=si0;
si0=8U;
l4=si0;
goto L2;
L6:;
si0=1148146U;
l3=si0;
si0=13U;
l4=si0;
goto L2;
L5:;
si0=1180260U;
l3=si0;
si0=2U;
l4=si0;
goto L2;
L4:;
si0=l2;
si1=40U;
si0+=si1;
sj1=1ULL;
f988(i,si0,sj1);
f99(i);
UNREACHABLE;
L3:;
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
f96(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+36U);
l4=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+32U);
l3=si0;
L2:;
si0=l2;
si1=24U;
si0+=si1;
si1=20U;
f996(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
l6=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l5=si0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1148159U);
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1148175U);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1148167U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l4;
f996(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l3;
si2=l4;
si0=f3065(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=92U;
si0+=si1;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=68U;
si0+=si1;
si1=20U;
si0+=si1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=20U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=68U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l7;
i32_store(i->m0,(U64)si0+84U,si1);
si0=l2;
si1=l6;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l2;
si1=19U;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f1325(i,si0,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=l2;
si2=68U;
si1+=si2;
si2=l2;
si2=i32_load16_u(i->m0,(U64)si2+8U);
si3=l2;
si3=i32_load16_u(i->m0,(U64)si3+10U);
f2069(i,si0,si1,si2,si3);
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+56U);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
si0=l1;
f1070(i,si0);
L1:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1427(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si0=l0;
si0=i32_load16_u(i->m0,(U64)si0+2U);
l3=si0;
si1=l0;
si1=i32_load16_u(i->m0,(U64)si1);
l4=si1;
si0|=si1;
si1=65535U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=65535U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=65535U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=l2;
si1=32U;
si0+=si1;
si1=12U;
si0+=si1;
si1=151U;
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
si1=1165712U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=151U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=8U;
si2+=si3;
si0=f682(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l2;
si1=20U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1178640U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=151U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=32U;
si1+=si2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=8U;
si2+=si3;
si0=f682(i,si0,si1,si2);
l0=si0;
goto L1;
L2:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1165700U;
si2=4U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f161(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
U64 sj1;
si0=28U;
si1=4U;
si0=f164(i,si0,si1);
l1=si0;
si1=24U;
si0+=si1;
si1=l0;
si2=24U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=l0;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
L0:;
return si0;
}

void f540(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
F32 l3=0;
U32 si0,si1,si2,si3;
F32 sf0,sf1;
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
l2=si0;
si1=-12U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L6;
default:
goto L9;
}
L9:;
si0=l2;
if(si0){
goto L1;
}
si0=l1;
sf0=f32_load(i->m0,(U64)si0+4U);
l3=sf0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+8U);
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L2;
default:
goto L1;
}
L8:;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
f6(i,si0,si1);
goto L1;
L7:;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+8U);
f7(i,si0,si1,si2);
goto L1;
L6:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
goto L1;
L5:;
si0=l0;
sf1=l3;
f32_store(i->m0,(U64)si0+12U,sf1);
goto L1;
L4:;
si0=l0;
sf1=l3;
f32_store(i->m0,(U64)si0+16U,sf1);
goto L1;
L3:;
si0=l0;
sf1=l3;
f32_store(i->m0,(U64)si0+20U,sf1);
goto L1;
L2:;
si0=l0;
sf1=l3;
f32_store(i->m0,(U64)si0+24U,sf1);
L1:;
si0=l1;
f8(i,si0);
L0:;
}

U32 f391(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si1=4U;
si0+=si1;
l6=si0;
si0=l0;
si0=i32_load16_u(i->m0,(U64)si0+182U);
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
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=136U;
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
si1=184U;
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

void f420(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
f421(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
L1:;
si0=l0;
si1=l2;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l2;
si2=5U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si1=l1;
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
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
L0:;
}

void f2861(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
if(si0){
goto L1;
}
si0=1168164U;
f14(i,si0);
UNREACHABLE;
L1:;
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
si1=f2346(i,si1);
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

void f1262(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
F32 sf1;
si0=i->g0;
si1=256U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L3;
case 1:
goto L12;
case 2:
goto L11;
case 3:
goto L10;
case 4:
goto L9;
case 5:
goto L8;
case 6:
goto L7;
case 7:
goto L4;
case 8:
goto L6;
case 9:
goto L5;
default:
goto L4;
}
L12:;
si0=l0;
si1=l2;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1+1U);
i32_store8(i->m0,(U64)si0+1U,si1);
goto L2;
L11:;
si0=l0;
si1=l2;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=5U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
i32_store16(i->m0,(U64)si0,si1);
goto L2;
L10:;
si0=l0;
si1=l2;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=4U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
i32_store16(i->m0,(U64)si0,si1);
goto L2;
L9:;
si0=l0;
si1=l2;
i32_store16(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=2U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=10U;
si0+=si1;
si1=l3;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+4U,si1);
goto L2;
L8:;
si0=l0;
si1=l2;
i32_store16(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=3U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=10U;
si0+=si1;
si1=l3;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sf1=f32_load(i->m0,(U64)si1+4U);
f32_store(i->m0,(U64)si0+4U,sf1);
goto L2;
L7:;
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
l5=si1;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=160U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f1006(i,si0,si1);
si0=8U;
si1=4U;
si0=f1024(i,si0,si1);
l6=si0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+160U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
si0=l5;
f87(i,si0);
goto L2;
L6:;
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
l5=si1;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=160U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f993(i,si0,si1);
si0=8U;
si1=4U;
si0=f1024(i,si0,si1);
l6=si0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+160U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
si0=l5;
f87(i,si0);
goto L2;
L5:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l5=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si0=i32_load(i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l4;
si1=l5;
i32_store(i->m0,(U64)si0+20U,si1);
si0=1123693U;
si1=2U;
si0=f1139(i,si0,si1);
l7=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l6=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l6;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l8;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
goto L13;
L14:;
si0=l4;
si1=8U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l8=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l6=si0;
L13:;
si0=l6;
si1=l8;
si2=1U;
sj0=f1196(i,si0,si1,si2);
l9=sj0;
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l5;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l6;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
goto L15;
L16:;
si0=l4;
si1=l6;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
L15:;
si0=l5;
si1=l6;
si0=f1139(i,si0,si1);
l5=si0;
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+160U,si1);
si0=l4;
si1=l5;
i32_store(i->m0,(U64)si0+236U,si1);
si0=l4;
si1=l3;
i32_store16(i->m0,(U64)si0+232U,si1);
si0=l4;
si1=l2;
i32_store16(i->m0,(U64)si0+230U,si1);
si0=l4;
si1=5U;
i32_store8(i->m0,(U64)si0+228U,si1);
si0=l4;
si1=160U;
si0+=si1;
si1=1U;
f1475(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+164U);
si1=l4;
si2=164U;
si1+=si2;
si2=l4;
si2=i32_load(i->m0,(U64)si2+160U);
l10=si2;
si3=5U;
si2=si2 > si3;
l8=si2;
si0=si2?si0:si1;
si1=l4;
si2=160U;
si1+=si2;
si2=l8;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l11=si1;
si1=i32_load(i->m0,(U64)si1);
l6=si1;
si2=12U;
si1*=si2;
si0+=si1;
l5=si0;
si0=l10;
si1=5U;
si2=l8;
si0=si2?si0:si1;
l10=si0;
L18:;
{
si0=l6;
si1=l10;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l11;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=240U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=228U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+228U);
l12=sj1;
i64_store(i->m0,(U64)si0+240U,sj1);
si0=l4;
si1=22U;
i32_store8(i->m0,(U64)si0+240U,si1);
sj0=l12;
si0=(U32)(sj0);
l5=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=1U;
si0|=si1;
l6=si0;
si0=l4;
si1=240U;
si0+=si1;
si1=1U;
si0|=si1;
l8=si0;
L20:;
{
si0=l5;
si1=255U;
si0&=si1;
si1=22U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l4;
si1=240U;
si0+=si1;
f1476(i,si0);
goto L17;
L21:;
si0=l6;
si1=l8;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
si1=7U;
si0+=si1;
si1=l8;
si2=7U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store8(i->m0,(U64)si0+24U,si1);
si0=l4;
si1=160U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f1477(i,si0,si1);
si0=22U;
l5=si0;
goto L20;
}
L19:;
si0=l4;
si1=24U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
si1=l4;
si2=228U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+228U);
l12=sj1;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=22U;
i32_store8(i->m0,(U64)si0+228U,si1);
sj0=l12;
si0=(U32)(sj0);
si1=255U;
si0&=si1;
si1=22U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l5;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+24U);
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l8;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
goto L18;
L22:;
}
si0=l4;
si1=24U;
si0+=si1;
f1476(i,si0);
si0=l11;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=228U;
si0+=si1;
f1476(i,si0);
L17:;
si0=l4;
si1=24U;
si0+=si1;
si1=64U;
si0+=si1;
si1=l4;
si2=160U;
si1+=si2;
si2=64U;
si0=f3065(i,si0,si1,si2);
si0=l4;
si1=64U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=72U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=80U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l7;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l4;
si1=0U;
i32_store8(i->m0,(U64)si0+156U,si1);
si0=l4;
sj1=l9;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l4;
sj1=l9;
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l4;
sj1=1ULL;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=90U;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l4;
si1=24U;
si0+=si1;
si0=f1478(i,si0);
l5=si0;
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=15U;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=20U;
si0+=si1;
f1038(i,si0);
goto L2;
L4:;
si0=l1;
sj0=i64_load(i->m0,(U64)si0);
si0=f1276(i,sj0);
l1=si0;
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=l2;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=9U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l3;
i32_store16(i->m0,(U64)si0,si1);
L2:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
l0=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=1U;
si1=l0;
si0<<=(si1&31);
si1=836U;
si0&=si1;
if(si0){
goto L1;
}
L23:;
si0=l1;
f1032(i,si0);
L1:;
si0=l4;
si1=256U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1634(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=160U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l4;
si0=si0 > si1;
if(si0){
goto L3;
}
L4:;
si0=l0;
si1=164U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=l4;
si0=si0 > si1;
if(si0){
goto L2;
}
L5:;
si0=0U;
l1=si0;
si0=l0;
si1=168U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l0;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l2;
si1=16U;
si0+=si1;
si1=18U;
f996(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
l0=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l1=si0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1126900U);
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load16_u(i->m0,(U64)si1+1126916U);
i32_store16(i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1126908U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=28U;
si0+=si1;
si1=16U;
si0+=si1;
si1=18U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+30U,si1);
si0=l2;
si1=28U;
i32_store8(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=28U;
si0+=si1;
si0=f97(i,si0);
l1=si0;
goto L1;
L3:;
si0=l2;
si1=16U;
f996(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1126936U);
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1126944U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=28U;
si0+=si1;
si1=16U;
si0+=si1;
si1=16U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+30U,si1);
si0=l2;
si1=28U;
i32_store8(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=28U;
si0+=si1;
si0=f97(i,si0);
l1=si0;
goto L1;
L2:;
si0=l2;
si1=8U;
si0+=si1;
si1=18U;
f996(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1126918U);
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load16_u(i->m0,(U64)si1+1126934U);
i32_store16(i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1126926U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=28U;
si0+=si1;
si1=16U;
si0+=si1;
si1=18U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+30U,si1);
si0=l2;
si1=28U;
i32_store8(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=28U;
si0+=si1;
si0=f97(i,si0);
l1=si0;
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f122(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2;
si0=l1;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l2=si0;
si0=i32_load(i->m0,(U64)si0);
si1=-2147483648U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l3;
f14(i,si0);
UNREACHABLE;
L1:;
si0=l2;
L0:;
return si0;
}

void f1909(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=l2;
si2=8U;
si1+=si2;
l2=si1;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l5;
si1=l2;
si2=l6;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si2=l3;
si3=l4;
si4=l5;
si5=28U;
si4+=si5;
f77(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L2;
}
goto L1;
L2:;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=l5;
si1=i32_load(i->m0,(U64)si1+12U);
si2=-1U;
si1^=si2;
si0+=si1;
l4=si0;
L1:;
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1374(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l2;
f1375(i,si0,si1,si2);
si0=0U;
L0:;
return si0;
}

void f1166(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=12U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
f1164(i,si0,si1);
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
L3:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l3;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=l1;
si2=i32_load(i->m0,(U64)si2+4U);
si1+=si2;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l3;
sj1=i64_load(i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=12U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
f1164(i,si0,si1);
si0=0U;
l1=si0;
goto L3;
}
L2:;
si0=l0;
si1=56U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=12U;
si0+=si1;
si1=l0;
si2=40U;
si1+=si2;
f1164(i,si0,si1);
L4:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3021(glicolwasmInstance*i,U32 l0,U64 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj3;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l3;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l4;
si1=48U;
si0+=si1;
si1=l3;
sj1=(U64)(si1);
f988(i,si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
sj1=l1;
si2=l2;
si3=l4;
sj3=i64_load(i->m0,(U64)si3+48U);
si4=l4;
si4=i32_load(i->m0,(U64)si4+56U);
f3003(i,si0,sj1,si2,sj3,si4);
si0=l4;
si0=i32_load(i->m0,(U64)si0+40U);
l3=si0;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+32U);
l1=sj0;
goto L1;
L2:;
si0=l4;
si1=16U;
si0+=si1;
si1=0U;
si2=l3;
si1-=si2;
sj1=(U64)(si1);
f988(i,si0,sj1);
si0=l4;
sj1=l1;
si2=l2;
si3=l4;
sj3=i64_load(i->m0,(U64)si3+16U);
si4=l4;
si4=i32_load(i->m0,(U64)si4+24U);
f3005(i,si0,sj1,si2,sj3,si4);
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=l4;
sj0=i64_load(i->m0,(U64)si0);
l1=sj0;
L1:;
si0=l3;
si1=1000000000U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=92U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=2U;
i32_store(i->m0,(U64)si0+84U,si1);
si0=l4;
si1=1175448U;
i32_store(i->m0,(U64)si0+80U,si1);
si0=l4;
si1=133U;
i32_store(i->m0,(U64)si0+108U,si1);
si0=l4;
si1=l4;
si2=104U;
si1+=si2;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l4;
si2=64U;
si1+=si2;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l4;
si1=68U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f1492(i,si0,si1);
si0=l4;
si1=68U;
si0+=si1;
si0=f1658(i,si0);
l3=si0;
si0=l0;
si1=1000000000U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l1;
i64_store(i->m0,(U64)si0,sj1);
L3:;
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1569(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f1636(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
if(si0){
goto L2;
}
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
f1636(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178224U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119036U;
si4=1167540U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1U;
si1=1U;
si2=1167540U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
sj1=1ULL;
sj2=257ULL;
si3=l3;
si4=l4;
si4=i32_load(i->m0,(U64)si4+4U);
si3=si3 == si4;
sj1=si3?sj1:sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l5;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178224U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119036U;
si4=1167540U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1167540U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1666(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l0;
si1=255U;
si0&=si1;
si1=11U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
si2=i32_load(i->m0,(U64)si2+4U);
si2=i32_load(i->m0,(U64)si2+28U);
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+24U);
l3=si1;
si2=l2;
si2=i32_load(i->m0,(U64)si2+28U);
si2=i32_load(i->m0,(U64)si2+12U);
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l3;
si1=0U;
si2=l2;
sj2=i64_load(i->m0,(U64)si2+8U);
sj3=-7729146682714798459ULL;
sj2^=sj3;
si3=l2;
si4=16U;
si3+=si4;
sj3=i64_load(i->m0,(U64)si3);
sj4=-4489258845294998855ULL;
sj3^=sj4;
sj2|=sj3;
si2=!(sj2);
si0=si2?si0:si1;
l3=si0;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

