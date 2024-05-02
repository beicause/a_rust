#include "w2c2_base.h"

#include "glicol.h"

void f997(glicolwasmInstance*i,U32 l0,U64 l1) {
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
f420(i,si0,si1);
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
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l1;
i64_store(i->m0,(U64)si0,sj1);
L0:;
}

U32 f2050(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
goto L0;
L2:;
si0=l0;
si1=l1;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
goto L0;
L1:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si0=f2055(i,si0,si1);
L0:;
return si0;
}

void f1704(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f1741(i,si0,si1,si2);
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
si0=f1742(i,si0);
sj1=l5;
f997(i,si0,sj1);
sj0=l6;
si0=(U32)(sj0);
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
f1708(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l2;
f1690(i,si0,si1);
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
f1502(i,si0,si1,si2,si3,si4);
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
si0=1129864U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=1129880U;
f14(i,si0);
UNREACHABLE;
L2:;
si0=1129896U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1U;
si1=l3;
si2=1129848U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f437(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f720(i,si0,si1,si2);
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
f720(i,si0,si1,si2);
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

U32 f529(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si2=28U;
si1*=si2;
si0+=si1;
L0:;
return si0;
}

void f1566(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
l5=si1;
si1=i32_load8_u(i->m0,(U64)si1);
si2=l5;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f1642(i,si0,si1,si2);
si0=l4;
si0=i32_load(i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+24U);
l6=sj1;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si0=f1643(i,si0);
l5=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
l3=si1;
si1=i32_load8_u(i->m0,(U64)si1);
si2=l3;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f1642(i,si0,si1,si2);
si0=l4;
si0=i32_load(i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+24U);
l7=sj1;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=8U;
si0+=si1;
si0=f1643(i,si0);
l3=si0;
si0=l0;
sj1=257ULL;
sj2=1ULL;
si3=l5;
si3=i32_load(i->m0,(U64)si3+4U);
si4=l5;
si4=i32_load(i->m0,(U64)si4+8U);
si5=l3;
si5=i32_load(i->m0,(U64)si5+4U);
si6=l3;
si6=i32_load(i->m0,(U64)si6+8U);
si3=f49(i,si3,si4,si5,si6);
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
sj0=l6;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L6;
}
sj0=l6;
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
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=1167700U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1167700U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1167700U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1U;
si1=1U;
si2=1167700U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1905(glicolwasmInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f1241(i,si0);
si0=l0;
f1149(i,si0);
L1:;
L0:;
}

void f2570(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=l2;
si3=l3;
f2327(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
l1=si1;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l5;
si0=f2281(i,si0,si1);
l3=si0;
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l1;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l5;
si2=l3;
si1-=si2;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
l5=si1;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l5;
si2=l3;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
f2237(i,si0,si1);
si0=l4;
si1=28U;
si0+=si1;
si1=l1;
si2=l2;
f2288(i,si0,si1,si2);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=28U;
si1+=si2;
f2238(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+16U);
i64_store(i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0,sj1);
L1:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2902(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
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
goto L3;
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
f2621(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+36U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+32U);
l6=sj1;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=l5;
si2=8U;
si1+=si2;
si1=f2622(i,si1);
i32_store(i->m0,(U64)si0+16U,si1);
si0=l5;
si1=20U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(i->m0,(U64)si0+21U,sj1);
si0=l5;
si1=1U;
i32_store8(i->m0,(U64)si0+20U,si1);
si0=l5;
si1=44U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l5;
si1=1178720U;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l5;
si1=229U;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l5;
si2=56U;
si1+=si2;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l5;
si2=16U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l5;
si1=20U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
si0=f1335(i,si0,si1);
if(si0){
goto L1;
}
si0=l5;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
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
sj0=l6;
si0=(U32)(sj0);
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
f1708(i,si0,si1);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=0U;
si1=0U;
si2=1174236U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1174236U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1178304U;
si1=43U;
si2=l5;
si3=32U;
si2+=si3;
si3=1116792U;
si4=1174004U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f823(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=-1U;
si0+=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
L2:;
{
si0=l2;
si1=l1;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
si2=l2;
si3=1U;
si2+=si3;
l2=si2;
si3=l0;
si4=l1;
si5=1119052U;
f824(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
l4=si0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+8U);
l5=si1;
si0+=si1;
l6=si0;
si1=-1U;
si0+=si1;
l7=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l8=si0;
si1=l6;
si2=-2U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
l6=si1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l7;
si1=l6;
i32_store8(i->m0,(U64)si0,si1);
L5:;
{
si0=l4;
si1=2U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l5;
l6=si0;
goto L3;
L6:;
si0=l5;
si1=l4;
si0+=si1;
l7=si0;
si1=-2U;
si0+=si1;
l6=si0;
si0=l8;
si1=l7;
si2=-3U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
l7=si1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l6;
si1=l7;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
goto L5;
}
L4:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l6;
si1=l8;
i32_store8(i->m0,(U64)si0,si1);
goto L2;
}
L1:;
si0=1118988U;
si1=46U;
si2=1119036U;
f16(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f2432(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=112U;
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
si0=1160932U;
l4=si0;
goto L1;
L2:;
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
f96(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+52U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+48U);
l4=si0;
L1:;
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+88U,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=l2;
si2=88U;
si1+=si2;
f1771(i,si0,si1);
si0=l2;
sj0=i64_load(i->m0,(U64)si0+104U);
l5=sj0;
sj1=255ULL;
sj0&=sj1;
sj1=11ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l2;
si1=32U;
si0+=si1;
sj1=l5;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l3=si1;
si1=i32_load(i->m0,(U64)si1);
si2=l3;
si2=i32_load(i->m0,(U64)si2+4U);
si2=i32_load(i->m0,(U64)si2+12U);
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l2;
sj0=i64_load(i->m0,(U64)si0+32U);
sj1=-7729146682714798459ULL;
sj0^=sj1;
si1=l2;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
sj2=-4489258845294998855ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
si2=l3;
si2=i32_load(i->m0,(U64)si2+4U);
si2=i32_load(i->m0,(U64)si2+36U);
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+24U);
l4=si1;
si2=l2;
si2=i32_load(i->m0,(U64)si2+28U);
l1=si2;
si2=i32_load(i->m0,(U64)si2+12U);
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l2;
sj0=i64_load(i->m0,(U64)si0+8U);
sj1=-7729146682714798459ULL;
sj0^=sj1;
si1=l2;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
sj2=-4489258845294998855ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
l1=si0;
goto L6;
L7:;
si0=l4;
if(si0){
goto L5;
}
L6:;
si0=l2;
si1=104U;
si0+=si1;
si1=2U;
si0+=si1;
l6=si0;
si1=l1;
si2=11U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load16_u(i->m0,(U64)si1+9U);
i32_store16(i->m0,(U64)si0+104U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+8U);
l8=si0;
si0=l1;
f87(i,si0);
si0=l8;
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l7;
l1=si0;
L5:;
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+88U,si1);
si0=1178304U;
si1=43U;
si2=l2;
si3=88U;
si2+=si3;
si3=1119084U;
si4=1161440U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=l2;
si1=2U;
i32_store8(i->m0,(U64)si0+72U,si1);
si0=l2;
sj1=l5;
i64_store(i->m0,(U64)si0+64U,sj1);
si0=l2;
si1=64U;
si0+=si1;
f1035(i,si0);
si0=l2;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
si1=4U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l2;
si1=1161472U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l2;
si1=4U;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l2;
si1=37U;
i32_store(i->m0,(U64)si0+108U,si1);
si0=l2;
si1=1117305U;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l2;
si2=104U;
si1+=si2;
i32_store(i->m0,(U64)si0+96U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=64U;
si0+=si1;
si1=1161488U;
f377(i,si0,si1);
UNREACHABLE;
L3:;
si0=l2;
si1=64U;
si0+=si1;
si1=11U;
si0+=si1;
l1=si0;
si1=l6;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load16_u(i->m0,(U64)si1+104U);
i32_store16(i->m0,(U64)si0+73U,si1);
si0=l2;
si1=l8;
i32_store8(i->m0,(U64)si0+72U,si1);
si0=l2;
si1=l7;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l3;
f87(i,si0);
si0=l0;
si1=l2;
si1=i32_load16_u(i->m0,(U64)si1+73U);
i32_store16(i->m0,(U64)si0+9U,si1);
si0=l0;
si1=11U;
si0+=si1;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0,si1);
si0=l2;
sj0=i64_load(i->m0,(U64)si0+64U);
l5=sj0;
si0=l0;
si1=l8;
i32_store8(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l5;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f301(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
f335(i,si0);
L1:;
L0:;
}

void f1038(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
f335(i,si0);
L1:;
L0:;
}

void f984(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=l1;
si3=l2;
si2+=si3;
f985(i,si0,si1,si2);
L0:;
}

void f540(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
F32 l5=0;
F32 l6=0;
F32 l7=0;
U32 l8=0;
U32 l9=0;
F32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
F32 l17=0;
F32 l18=0;
F32 l19=0;
F32 l20=0;
F32 l21=0;
U32 si0,si1,si2,si3,si4;
F32 sf0,sf1,sf2,sf3,sf4,sf5;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
sf0=f32_load(i->m0,(U64)si0+12U);
l5=sf0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+16U);
l6=sf0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+24U);
l7=sf0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+52U);
l8=si0;
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l0;
si2=i32_load(i->m0,(U64)si2+8U);
si3=0U;
si4=1058980U;
si1=f2(i,si1,si2,si3,si4);
si1=i32_load(i->m0,(U64)si1);
si2=1058996U;
si0=f3(i,si0,si1,si2);
l1=si0;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
sf0=l7;
si1=l8;
sf1=(F32)(si1);
l10=sf1;
sf0*=sf1;
l7=sf0;
sf1=4.2949673e+09;
si0=sf0 < sf1;
sf1=l7;
sf2=0;
si1=sf1 >= sf2;
l11=si1;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
sf0=l7;
si0=I32_TRUNC_U_F32(sf0);
l12=si0;
goto L4;
L5:;
si0=0U;
l12=si0;
L4:;
sf0=l6;
sf1=l10;
sf0*=sf1;
l6=sf0;
sf1=4.2949673e+09;
si0=sf0 < sf1;
sf1=l6;
sf2=0;
si1=sf1 >= sf2;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
sf0=l6;
si0=I32_TRUNC_U_F32(sf0);
l8=si0;
goto L6;
L7:;
si0=0U;
l8=si0;
L6:;
sf0=l5;
sf1=l10;
sf0*=sf1;
l10=sf0;
sf1=4.2949673e+09;
si0=sf0 < sf1;
sf1=l10;
sf2=0;
si1=sf1 >= sf2;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
sf0=l10;
si0=I32_TRUNC_U_F32(sf0);
l13=si0;
goto L8;
L9:;
si0=0U;
l13=si0;
L8:;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=-1U;
si1=l13;
si2=0U;
sf3=l10;
sf4=0;
si3=sf3 >= sf4;
si1=si3?si1:si2;
sf2=l10;
sf3=4.29496704e+09;
si2=sf2 > sf3;
si0=si2?si0:si1;
l14=si0;
si1=-1U;
si2=l8;
si3=0U;
sf4=l6;
sf5=0;
si4=sf4 >= sf5;
si2=si4?si2:si3;
sf3=l6;
sf4=4.29496704e+09;
si3=sf3 > sf4;
si1=si3?si1:si2;
l15=si1;
si0+=si1;
l16=si0;
sf0=1;
si1=l0;
sf1=f32_load(i->m0,(U64)si1+20U);
l17=sf1;
sf0-=sf1;
l18=sf0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+40U);
l6=sf0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+48U);
l5=sf0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+28U);
l8=si0;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+56U);
l13=si0;
si0=l15;
sf0=(F32)(si0);
l19=sf0;
si0=l14;
sf0=(F32)(si0);
l20=sf0;
si0=-1U;
si1=l12;
si2=0U;
si3=l11;
si1=si3?si1:si2;
sf2=l7;
sf3=4.29496704e+09;
si2=sf2 > sf3;
si0=si2?si0:si1;
l11=si0;
sf0=(F32)(si0);
l21=sf0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+44U);
l12=si0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+36U);
l10=sf0;
si0=0U;
l1=si0;
L10:;
{
sf0=l10;
l7=sf0;
si0=l1;
si1=512U;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l9;
si1=l1;
si0+=si1;
sf0=f32_load(i->m0,(U64)si0);
l10=sf0;
sf1=0;
si0=sf0 > sf1;
si0=!(si0);
if(si0){
goto L20;
}
sf0=l7;
sf1=0;
si0=sf0 == sf1;
if(si0){
goto L17;
}
L20:;
sf0=l10;
sf1=0;
si0=sf0 != sf1;
if(si0){
goto L18;
}
sf0=l7;
sf1=0;
si0=sf0 > sf1;
si0=!(si0);
if(si0){
goto L18;
}
si0=l0;
si1=2U;
i32_store8(i->m0,(U64)si0+56U,si1);
si0=0U;
l8=si0;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l0;
sf1=l6;
f32_store(i->m0,(U64)si0+48U,sf1);
sf0=l6;
l5=sf0;
goto L12;
L19:;
si0=l0;
sf1=l6;
f32_store(i->m0,(U64)si0+40U,sf1);
si0=l0;
si1=l8;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l0;
sf1=l7;
f32_store(i->m0,(U64)si0+36U,sf1);
si0=l0;
si1=l12;
si2=128U;
si1+=si2;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l2;
si2=l3;
si3=1059044U;
f376(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l4;
si1=i32_load(i->m0,(U64)si1);
si2=512U;
si0=f3069(i,si0,si1,si2);
goto L3;
L18:;
sf0=0;
l6=sf0;
si0=l13;
si1=255U;
si0&=si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L21;
case 1:
goto L12;
default:
goto L11;
}
L21:;
si0=l8;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=1U;
l13=si0;
si0=l16;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L15;
}
goto L13;
L17:;
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+56U,si1);
si0=l0;
si1=1065353216U;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l0;
sf1=l6;
f32_store(i->m0,(U64)si0+48U,sf1);
si0=0U;
l8=si0;
sf0=l6;
l5=sf0;
L16:;
si0=1U;
l13=si0;
si0=l14;
if(si0){
goto L14;
}
sf0=0;
l6=sf0;
goto L11;
L15:;
si0=l15;
si0=!(si0);
if(si0){
goto L13;
}
sf0=l17;
si1=l16;
si2=l8;
si1-=si2;
sf1=(F32)(si1);
sf2=l19;
sf1/=sf2;
sf2=l18;
sf1*=sf2;
sf0+=sf1;
l6=sf0;
goto L11;
L14:;
si0=l8;
sf0=(F32)(si0);
sf1=l20;
sf0/=sf1;
sf1=1;
sf2=l5;
sf1-=sf2;
sf0*=sf1;
l6=sf0;
goto L11;
L13:;
sf0=l17;
l6=sf0;
goto L11;
L12:;
si0=2U;
l13=si0;
sf0=0;
l6=sf0;
si0=l11;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L11;
}
si0=l11;
si1=l8;
si0-=si1;
sf0=(F32)(si0);
sf1=l21;
sf0/=sf1;
sf1=l5;
sf0*=sf1;
l6=sf0;
L11:;
si0=l2;
si1=l1;
si0+=si1;
sf1=l6;
f32_store(i->m0,(U64)si0,sf1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
goto L10;
}
L3:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=0U;
si1=0U;
si2=1059028U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1059012U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f2553(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=48U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
f2327(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(i->m0,(U64)si0+36U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si0=i32_load(i->m0,(U64)si0+32U);
l2=si0;
si0=l6;
si1=l4;
si2=l4;
si3=24U;
si2<<=(si3&31);
si3=l4;
si4=65280U;
si3&=si4;
si4=8U;
si3<<=(si4&31);
si2|=si3;
si3=l4;
si4=8U;
si3>>=(si4&31);
si4=65280U;
si3&=si4;
si4=l4;
si5=24U;
si4>>=(si5&31);
si3|=si4;
si2|=si3;
si3=l5;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l6;
si1=24U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
si4=1171308U;
f2523(i,si0,si1,si2,si3,si4);
si0=l6;
si1=16U;
si0+=si1;
si1=l6;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l6;
si2=i32_load(i->m0,(U64)si2+28U);
si3=l3;
si4=4U;
si5=l3;
si6=4U;
si5=si5 < si6;
si3=si5?si3:si4;
l1=si3;
si4=1171324U;
f2524(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load(i->m0,(U64)si0+20U);
l3=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+16U);
l4=si0;
si0=l6;
si1=8U;
si0+=si1;
si1=l6;
si2=44U;
si1+=si2;
si2=l1;
si3=1171340U;
f2525(i,si0,si1,si2,si3);
si0=l4;
si1=l3;
si2=l6;
si2=i32_load(i->m0,(U64)si2+8U);
si3=l6;
si3=i32_load(i->m0,(U64)si3+12U);
si4=1171356U;
f1383(i,si0,si1,si2,si3,si4);
L1:;
si0=l6;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f380(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
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
si1=2U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1068912U;
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
f377(i,si0,si1);
UNREACHABLE;
L0:;
}

void f939(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
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
si1=81U;
i32_store8(i->m0,(U64)si0+39U,si1);
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
goto L4;
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
goto L5;
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
L5:;
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
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
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+60U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=60U;
si1+=si2;
f841(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+136U);
l8=si0;
L6:;
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
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l1;
si2=120U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+44U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=1124524U;
si3=2U;
f844(i,si0,si1,si2,si3);
si0=l5;
si1=l10;
si0+=si1;
si1=0U;
si2=l8;
si3=l3;
si2=si2 == si3;
si0=si2?si0:si1;
l10=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si1=l2;
si2=39U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
si0=l5;
if(si0){
goto L7;
}
si0=l8;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l1;
si1=81U;
si2=l3;
si3=l6;
si4=l7;
si5=l10;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
L8:;
si0=l8;
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
si2=l9;
si0=f842(i,si0,si1,si2);
l8=si0;
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L9;
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
i32_store(i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+39U);
i32_store8(i->m0,(U64)si0+61U,si1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+60U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=60U;
si1+=si2;
f841(i,si0,si1);
L10:;
si0=l2;
si1=48U;
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
L9:;
si0=1120504U;
si1=40U;
si2=1111940U;
f16(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l8;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=81U;
si2=l3;
si3=l6;
si4=l7;
si5=l10;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
f843(i,si0,si1);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l9;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l1;
si1=l9;
i32_store(i->m0,(U64)si0+20U,si1);
L4:;
si0=1U;
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
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1255(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=1116500U;
si1=19U;
si2=1123156U;
f16(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l1;
si1=l3;
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=l2;
si3=12U;
si2*=si3;
si1+=si2;
l1=si1;
si2=8U;
si1+=si2;
l4=si1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l1;
si2=20U;
si1+=si2;
si2=l3;
si3=l2;
si4=-1U;
si3^=si4;
si2+=si3;
si3=12U;
si2*=si3;
si0=f3080(i,si0,si1,si2);
L0:;
}

void f103(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
si2=1U;
f532(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
f533(i,si0,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f404(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1119616U;
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
si1=1119616U;
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

void f1232(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=17U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
f1057(i,si0);
L1:;
L0:;
}

void f2344(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
U64 sj1;
si0=8U;
si1=4U;
si0=f1027(i,si0,si1);
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
si1=1141620U;
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

void f2397(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
f2398(i,si0,si1,si2);
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

F32 f3127(glicolwasmInstance*i,F32 l0) {
F32 l1=0;
F32 l2=0;
U32 l3=0;
U32 si0,si1;
F32 sf0,sf1,sf2,sf3,sf4;
sf0=0.5;
sf1=l0;
sf0=copysignf(sf0,sf1);
l1=sf0;
sf0=l0;
sf0=fabsf(sf0);
l2=sf0;
sf0=l0;
si0=i32_reinterpret_f32(sf0);
si1=2147483647U;
si0&=si1;
l3=si0;
si1=1118925335U;
si0=si0 < si1;
if(si0){
goto L1;
}
sf0=l1;
sf1=l1;
sf0+=sf1;
sf1=l2;
sf2=-162.889587;
sf1+=sf2;
sf1=f3101(i,sf1);
sf2=1.66153499e+35;
sf1*=sf2;
sf2=1.66153499e+35;
sf1*=sf2;
sf0*=sf1;
goto L0;
L1:;
sf0=l2;
sf0=f3102(i,sf0);
l2=sf0;
si0=l3;
si1=1065353216U;
si0=si0 < si1;
if(si0){
goto L2;
}
sf0=l1;
sf1=l2;
sf2=l2;
sf3=l2;
sf4=1;
sf3+=sf4;
sf2/=sf3;
sf1+=sf2;
sf0*=sf1;
goto L0;
L2:;
si0=l3;
si1=964689920U;
si0=si0 < si1;
if(si0){
goto L3;
}
sf0=l1;
sf1=l2;
sf2=l2;
sf1+=sf2;
sf2=l2;
sf3=l2;
sf2*=sf3;
sf3=l2;
sf4=1;
sf3+=sf4;
sf2/=sf3;
sf1-=sf2;
sf0*=sf1;
l0=sf0;
L3:;
sf0=l0;
L0:;
return sf0;
}

void f564(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=-2147483648U;
si0^=si1;
l3=si0;
si1=4U;
si2=l3;
si3=17U;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si1=-12U;
si0+=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L6;
case 2:
goto L5;
default:
goto L8;
}
L8:;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l2;
si1=-2147483647U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L1;
L9:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
f12(i,si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+4U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=-2147483647U;
si0=si0 != si1;
if(si0){
goto L3;
}
goto L2;
L7:;
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
f6(i,si0,si1);
goto L4;
L6:;
si0=l0;
si1=12U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+8U);
f7(i,si0,si1,si2);
goto L4;
L5:;
si0=l0;
si1=20U;
si0+=si1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
L4:;
si0=l2;
si1=-2147483647U;
si0=si0 == si1;
if(si0){
goto L1;
}
L3:;
si0=l1;
f8(i,si0);
L2:;
goto L0;
L1:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f12(i,si0,si1);
L0:;
}

void f907(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
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
si1=13U;
i32_store8(i->m0,(U64)si0+39U,si1);
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
goto L4;
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
goto L5;
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
L5:;
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
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
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+60U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=60U;
si1+=si2;
f841(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+136U);
l8=si0;
L6:;
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
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l1;
si2=120U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+44U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=1151400U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l5;
si1=l10;
si0+=si1;
si1=0U;
si2=l8;
si3=l3;
si2=si2 == si3;
si0=si2?si0:si1;
l10=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
if(si0){
goto L9;
}
si0=l1;
si1=140U;
si0+=si1;
l8=si0;
si0=l2;
si1=l2;
si2=39U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(i->m0,(U64)si0+48U,si1);
goto L8;
L9:;
si0=l2;
si1=l1;
si2=1151401U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si1=140U;
si0+=si1;
l8=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=l2;
si2=39U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l5;
if(si0){
goto L7;
}
L8:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l5=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=13U;
si2=l3;
si3=l6;
si4=l7;
si5=l10;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l8;
si0=i32_load8_u(i->m0,(U64)si0);
l5=si0;
L10:;
si0=l5;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L12;
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
goto L11;
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
i32_store(i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+39U);
i32_store8(i->m0,(U64)si0+61U,si1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+60U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=60U;
si1+=si2;
f841(i,si0,si1);
L12:;
si0=l2;
si1=48U;
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
L11:;
si0=1120504U;
si1=40U;
si2=1111940U;
f16(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l8;
si0=i32_load8_u(i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=13U;
si2=l3;
si3=l6;
si4=l7;
si5=l10;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
f843(i,si0,si1);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l9;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l1;
si1=l9;
i32_store(i->m0,(U64)si0+20U,si1);
L4:;
si0=1U;
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
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1371(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
F32 sf1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
switch(si0){
case 0:
goto L12;
case 1:
goto L11;
case 2:
goto L10;
case 3:
goto L9;
case 4:
goto L8;
case 5:
goto L7;
case 6:
goto L2;
case 7:
goto L2;
case 8:
goto L2;
case 9:
goto L2;
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
goto L2;
case 35:
goto L2;
case 36:
goto L2;
case 37:
goto L2;
case 38:
goto L2;
case 39:
goto L2;
case 40:
goto L2;
case 41:
goto L2;
case 42:
goto L2;
case 43:
goto L2;
case 44:
goto L2;
case 45:
goto L2;
case 46:
goto L2;
case 47:
goto L2;
case 48:
goto L2;
case 49:
goto L2;
case 50:
goto L2;
case 51:
goto L2;
case 52:
goto L2;
case 53:
goto L2;
case 54:
goto L2;
case 55:
goto L2;
case 56:
goto L2;
case 57:
goto L2;
case 58:
goto L2;
case 59:
goto L2;
case 60:
goto L2;
case 61:
goto L2;
case 62:
goto L2;
case 63:
goto L2;
case 64:
goto L2;
case 65:
goto L2;
case 66:
goto L2;
case 67:
goto L2;
case 68:
goto L2;
case 69:
goto L2;
case 70:
goto L2;
case 71:
goto L2;
case 72:
goto L2;
case 73:
goto L2;
case 74:
goto L2;
case 75:
goto L2;
case 76:
goto L2;
case 77:
goto L2;
case 78:
goto L2;
case 79:
goto L2;
case 80:
goto L2;
case 81:
goto L2;
case 82:
goto L2;
case 83:
goto L2;
case 84:
goto L2;
case 85:
goto L6;
case 86:
goto L5;
case 87:
goto L4;
case 88:
goto L3;
case 89:
goto L2;
default:
goto L12;
}
L12:;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+4U,si1);
goto L2;
L11:;
si0=l2;
si1=4U;
si2=16U;
f720(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
l1=si1;
sf1=f32_load(i->m0,(U64)si1);
f32_store(i->m0,(U64)si0+16U,sf1);
si0=l2;
si1=16U;
si0+=si1;
si1=4U;
si0+=si1;
si1=l1;
si2=4U;
si1+=si2;
f1372(i,si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+16U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
goto L2;
L10:;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si1=f1373(i,si1);
i32_store(i->m0,(U64)si0+4U,si1);
goto L2;
L9:;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+4U,si1);
goto L2;
L8:;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si1=f1373(i,si1);
i32_store(i->m0,(U64)si0+4U,si1);
goto L2;
L7:;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si1=f1373(i,si1);
i32_store(i->m0,(U64)si0+4U,si1);
goto L2;
L6:;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si1=f1374(i,si1);
i32_store(i->m0,(U64)si0+4U,si1);
goto L2;
L5:;
si0=l2;
si1=8U;
si0+=si1;
si1=4U;
si2=12U;
f720(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
l1=si1;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
si3=8U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f52(i,si0,si1,si2);
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+16U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si1=f1373(i,si1);
i32_store(i->m0,(U64)si0+4U,si1);
goto L2;
L3:;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si1=f1373(i,si1);
i32_store(i->m0,(U64)si0+4U,si1);
L2:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
UNREACHABLE;
L0:;
}

U64 f1200(glicolwasmInstance*i,U64 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
sj1=3980015128758738638ULL;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l3;
sj1=-6320312175959058963ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
sj1=-781988948648572834ULL;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l3;
sj1=2653416731841273960ULL;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=l1;
si2=l2;
f1131(i,si0,si1,si2);
si0=l3;
sj0=f1132(i,si0);
l4=sj0;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
sj0=l4;
sj1=l0;
sj0^=sj1;
L0:;
return sj0;
}

void f851(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=32U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=24U;
si0+=si1;
si1=l2;
f951(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+32U);
l2=si0;
L1:;
si0=l0;
si1=l2;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l0;
si1=28U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l0=si0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f3113(glicolwasmInstance*i,U32 l0,U64 l1,U64 l2,U64 l3,U64 l4) {
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si2;
U64 sj1,sj2,sj3,sj4,sj5;
si0=l0;
sj1=l3;
sj2=4294967295ULL;
sj1&=sj2;
l5=sj1;
sj2=l1;
sj3=4294967295ULL;
sj2&=sj3;
l6=sj2;
sj1*=sj2;
l7=sj1;
sj2=l3;
sj3=32ULL;
sj2>>=(sj3&63);
l8=sj2;
sj3=l6;
sj2*=sj3;
l6=sj2;
sj3=l5;
sj4=l1;
sj5=32ULL;
sj4>>=(sj5&63);
l9=sj4;
sj3*=sj4;
sj2+=sj3;
l5=sj2;
sj3=32ULL;
sj2<<=(sj3&63);
sj1+=sj2;
l10=sj1;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
sj2=l9;
sj1*=sj2;
sj2=l5;
sj3=l6;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj3=32ULL;
sj2<<=(sj3&63);
sj3=l5;
sj4=32ULL;
sj3>>=(sj4&63);
sj2|=sj3;
sj1+=sj2;
sj2=l10;
sj3=l7;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=l4;
sj3=l1;
sj2*=sj3;
sj3=l3;
sj4=l2;
sj3*=sj4;
sj2+=sj3;
sj1+=sj2;
i64_store(i->m0,(U64)si0+8U,sj1);
L0:;
}

void f96(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=1180340U;
l3=si0;
si0=2U;
l4=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L3;
case 1:
goto L15;
case 2:
goto L14;
case 3:
goto L13;
case 4:
goto L12;
case 5:
goto L11;
case 6:
goto L10;
case 7:
goto L9;
case 8:
goto L8;
case 9:
goto L7;
case 10:
goto L6;
case 11:
goto L5;
case 12:
goto L4;
default:
goto L3;
}
L15:;
si0=1117047U;
l3=si0;
si0=4U;
l4=si0;
goto L3;
L14:;
si0=1123775U;
l3=si0;
si0=6U;
l4=si0;
goto L3;
L13:;
si0=1117255U;
l3=si0;
si0=4U;
l4=si0;
goto L3;
L12:;
si0=1117040U;
l3=si0;
si0=3U;
l4=si0;
goto L3;
L11:;
si0=1117210U;
l3=si0;
si0=3U;
l4=si0;
goto L3;
L10:;
si0=1123768U;
l3=si0;
si0=5U;
l4=si0;
goto L3;
L9:;
si0=1123764U;
l3=si0;
si0=4U;
l4=si0;
goto L3;
L8:;
si0=1123761U;
l3=si0;
si0=3U;
l4=si0;
goto L3;
L7:;
si0=1123773U;
l3=si0;
goto L3;
L6:;
si0=1123752U;
l3=si0;
si0=9U;
l4=si0;
goto L3;
L5:;
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
l3=si1;
si1=i32_load(i->m0,(U64)si1);
si2=l3;
si2=i32_load(i->m0,(U64)si2+4U);
si2=i32_load(i->m0,(U64)si2+40U);
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
goto L3;
L4:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
l5=si0;
si0=l3;
si1=8U;
si0+=si1;
l1=si0;
si0=l3;
si1=l4;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l5;
f96(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l4=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
l3=si0;
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L3:;
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l2;
si1=8U;
si0+=si1;
sj1=1ULL;
f991(i,si0,sj1);
f99(i);
UNREACHABLE;
L1:;
si0=l2;
si1=44U;
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l5;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l2;
si1=36U;
si0+=si1;
f989(i,si0);
si0=1160616U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f181(glicolwasmInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=52U;
si1=4U;
si0=f171(i,si0,si1);
si1=l0;
si2=52U;
si0=f3069(i,si0,si1,si2);
L0:;
return si0;
}

void f1519(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=20U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f1629(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L4;
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
si0=f1630(i,si0,si1);
l6=si0;
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
f1640(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+16U);
l2=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
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
si0=l6;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
goto L5;
L6:;
si0=l4;
si1=l6;
si2=8U;
si1+=si2;
f1007(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
L5:;
si0=l4;
si1=20U;
si0+=si1;
si1=l3;
si2=l6;
si3=l2;
f1659(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
si2=20U;
si1+=si2;
si1=f1483(i,si1);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
sj0=l5;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L7;
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
L7:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=1129176U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1129160U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+16U);
i32_store(i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+20U,si1);
si0=1178304U;
si1=43U;
si2=l4;
si3=20U;
si2+=si3;
si3=1119116U;
si4=1129208U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=1U;
si1=1U;
si2=1129192U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f2392(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
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
sj1=1ULL;
sj2=257ULL;
si3=l5;
si4=8U;
si3+=si4;
si3=f2350(i,si3);
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
si2=1168268U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f2601(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3;
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
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si0=f2350(i,si0);
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
f1744(i,si0,si1,si2);
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
l6=sj1;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si0=f1745(i,si0);
si1=l4;
f1185(i,si0,si1);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
sj0=l6;
si0=(U32)(sj0);
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
f1708(i,si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=l4;
si2=1170336U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1170468U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f228(glicolwasmInstance*i) {
U32 l0=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=20U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=1061884U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=1178664U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=1061892U;
f377(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1532(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
F32 sf3,sf4;
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
f1611(i,si0,si1);
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
f1650(i,si0,si1);
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
si0=1178304U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119116U;
si4=1167828U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1U;
si1=1U;
si2=1167828U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
sj1=257ULL;
sj2=1ULL;
si3=l4;
sf3=f32_load(i->m0,(U64)si3+4U);
si4=l3;
sf4=(F32)(I32)(si4);
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
si0=1178304U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119116U;
si4=1167828U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1167828U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f2916(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
U64 sj1;
si0=8U;
si1=4U;
si0=f1027(i,si0,si1);
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
si1=1143412U;
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

void f837(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
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
f781(i,si0,si1,si2);
L1:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
si1=l4;
si2=l1;
si1+=si2;
l1=si1;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
si2=l4;
si3=1U;
si2<<=(si3&31);
si1+=si2;
si2=l3;
si3=1U;
si2<<=(si3&31);
si0=f3080(i,si0,si1,si2);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
L0:;
}

U32 f1988(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si0=f2022(i,si0,si1);
L0:;
return si0;
}

U32 f1021(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
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
f397(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=l2;
si1=l1;
f397(i,si0,si1);
si0=l3;
si1=l0;
si2=l2;
si2=i32_load(i->m0,(U64)si2);
si3=l2;
si3=i32_load(i->m0,(U64)si3+4U);
si0=f49(i,si0,si1,si2,si3);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U64 f1398(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
sj0=i64_load(i->m0,(U64)si0);
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
si2=l1;
si3=l2;
si4=2U;
si3<<=(si4&31);
si2-=si3;
si3=-4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
sj0=f1395(i,sj0,sj1,si2);
L0:;
return sj0;
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
si0=f708(i,si0,sd1,si2,si3);
goto L0;
L1:;
si0=l1;
sd1=l3;
si2=l2;
si3=0U;
si0=f709(i,si0,sd1,si2,si3);
L0:;
return si0;
}

U32 f2255(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1121944U;
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
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1121948U;
si2=4U;
si3=l2;
si4=12U;
si3+=si4;
si4=1117652U;
si0=f413(i,si0,si1,si2,si3,si4);
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

void f1469(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si1=f1102(i,si1);
l1=si1;
si2=-24U;
si1+=si2;
l2=si1;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
si2=0U;
si3=l1;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f2963(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
f1272(i,si0,si1);
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
f1272(i,si0,si1);
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
f1007(i,si0,si1);
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
f1007(i,si0,si1);
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
si3=f363(i,si3,si4,si5,si6);
sj1=si3?sj1:sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=40U;
si0+=si1;
f1038(i,si0);
si0=l5;
si1=28U;
si0+=si1;
f1038(i,si0);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=1U;
si1=1U;
si2=1174656U;
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
si0=1178304U;
si1=43U;
si2=l5;
si3=40U;
si2+=si3;
si3=1119116U;
si4=1174656U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1174656U;
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
si0=1178304U;
si1=43U;
si2=l5;
si3=40U;
si2+=si3;
si3=1119116U;
si4=1174656U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f2665(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=16U;
si1=4U;
si0=f1027(i,si0,si1);
l2=si0;
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
i64_store(i->m0,(U64)si0,sj1);
si0=8U;
si1=4U;
si0=f1027(i,si0,si1);
l1=si0;
si1=1161152U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=11U;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f922(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=256U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=184U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+188U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+184U);
if(si0){
goto L1;
}
si0=l2;
si1=192U;
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
i64_store(i->m0,(U64)si0+192U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=176U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+180U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+176U);
if(si0){
goto L2;
}
si0=l2;
si1=208U;
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
i64_store(i->m0,(U64)si0+208U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=l2;
si1=168U;
si0+=si1;
si1=l1;
f925(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+172U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+168U);
if(si0){
goto L4;
}
si0=l2;
si1=160U;
si0+=si1;
si1=l1;
f850(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+164U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+160U);
if(si0){
goto L4;
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
goto L4;
}
si0=l2;
si1=232U;
si0+=si1;
l6=si0;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+124U);
i64_store(i->m0,(U64)si0+224U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=144U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+148U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+144U);
if(si0){
goto L5;
}
si0=l2;
si1=136U;
si0+=si1;
si1=l1;
f925(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+140U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+136U);
if(si0){
goto L6;
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
goto L6;
}
si0=l2;
si1=248U;
si0+=si1;
l5=si0;
L7:;
{
si0=l2;
si1=120U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+124U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+120U);
if(si0){
goto L6;
}
si0=l5;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+124U);
i64_store(i->m0,(U64)si0+240U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=112U;
si0+=si1;
si1=l1;
f850(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+116U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+112U);
if(si0){
goto L8;
}
si0=l2;
si1=104U;
si0+=si1;
si1=l1;
f925(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+108U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L7;
}
L8:;
}
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+240U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l2;
si2=248U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l7;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=l7;
i32_store(i->m0,(U64)si0+20U,si1);
L6:;
si0=l2;
si1=96U;
si0+=si1;
si1=l1;
f850(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+100U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+96U);
if(si0){
goto L2;
}
si0=l2;
si1=88U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+92U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+88U);
if(si0){
goto L2;
}
si0=l2;
si1=232U;
si0+=si1;
l7=si0;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+124U);
i64_store(i->m0,(U64)si0+224U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
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
goto L3;
}
si0=l2;
si1=72U;
si0+=si1;
si1=l1;
si2=1154264U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+76U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=64U;
si0+=si1;
si1=l1;
f925(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+68U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+64U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l2;
si1=56U;
si0+=si1;
si1=l1;
f924(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+60U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+56U);
if(si0){
goto L9;
}
L10:;
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
si1=248U;
si0+=si1;
l3=si0;
L11:;
{
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
si0=l3;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+124U);
i64_store(i->m0,(U64)si0+240U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
f850(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+36U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+32U);
if(si0){
goto L12;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si2=1154264U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
f925(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f924(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L11;
}
L12:;
}
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+240U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l2;
si2=248U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l4;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
si1=l4;
i32_store(i->m0,(U64)si0+20U,si1);
L9:;
si0=0U;
l3=si0;
goto L1;
L5:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+224U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l6;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l7;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l1;
si1=l7;
i32_store(i->m0,(U64)si0+20U,si1);
L4:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+208U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l2;
si2=216U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l5;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l5;
i32_store(i->m0,(U64)si0+20U,si1);
goto L2;
L3:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+224U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l7;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l5;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l5;
i32_store(i->m0,(U64)si0+20U,si1);
L2:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+192U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l2;
si2=200U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l4;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=l4;
i32_store(i->m0,(U64)si0+20U,si1);
L1:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=256U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1273(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
f999(i,si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l1;
si2=l2;
si0=f3069(i,si0,si1,si2);
l1=si0;
si0=l3;
si1=l2;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l1;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l4;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
si1=f1483(i,si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=31U;
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2616(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
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
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l6;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si0=f2350(i,si0);
l4=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=l3;
si2=l4;
si3=0U;
f2614(i,si0,si1,si2,si3);
si0=l0;
si1=l5;
f2615(i,si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=0U;
si1=0U;
si2=1170336U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1170336U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f61(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
F32 l3=0;
U32 si0,si1,si2,si3;
F32 sf0,sf1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
f55(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
l1=si0;
if(si0){
goto L4;
}
si0=0U;
l1=si0;
goto L3;
L4:;
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(i->m0,(U64)si2+20U);
si3=32U;
f62(i,si0,si1,si2,si3);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f60(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
sf0=f32_load(i->m0,(U64)si0+12U);
l3=sf0;
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
f60(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
sf1=f32_load(i->m0,(U64)si1+4U);
f32_store(i->m0,(U64)si0,sf1);
si0=l0;
sf1=l3;
f32_store(i->m0,(U64)si0+4U,sf1);
si0=1U;
l1=si0;
L3:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1057544U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1057560U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f2373(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
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
sd3=f2349(i,si3);
sd4=0;
si3=sd3 == sd4;
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
si2=1168384U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1035(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L8;
case 1:
goto L8;
case 2:
goto L7;
case 3:
goto L8;
case 4:
goto L8;
case 5:
goto L8;
case 6:
goto L6;
case 7:
goto L5;
case 8:
goto L4;
case 9:
goto L3;
case 10:
goto L2;
case 11:
goto L1;
default:
goto L9;
}
L9:;
si0=l0;
si1=4U;
si0+=si1;
f1037(i,si0);
L8:;
goto L0;
L7:;
si0=l0;
si1=4U;
si0+=si1;
f1038(i,si0);
goto L0;
L6:;
si0=l0;
si1=4U;
si0+=si1;
f1039(i,si0);
goto L0;
L5:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
f1040(i,si0);
goto L0;
L4:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
f302(i,si0);
si0=l0;
f359(i,si0);
goto L0;
L3:;
si0=l0;
si1=4U;
si0+=si1;
f1041(i,si0);
goto L0;
L2:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
f359(i,si0);
goto L0;
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
l2=si1;
si1=i32_load(i->m0,(U64)si1);
TF(i->t0,si1,void (*)(glicolwasmInstance*,U32))(i,si0);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=l2;
f264(i,si0,si1);
L10:;
si0=l0;
f359(i,si0);
L0:;
}

void f2410(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
f1272(i,si0,si1);
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
f1741(i,si0,si1,si2);
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
si0=f1742(i,si0);
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
f1007(i,si0,si1);
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
si1=f1142(i,si1,si2);
f1339(i,si0,si1);
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
f2339(i,si0,si1,si2,si3);
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
f2411(i,si0,si1);
sj0=l6;
si0=(U32)(sj0);
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
f1708(i,si0,si1);
si0=l5;
si1=20U;
si0+=si1;
f1038(i,si0);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=1U;
si1=l4;
si2=1166196U;
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
si0=1178304U;
si1=43U;
si2=l5;
si3=64U;
si2+=si3;
si3=1119116U;
si4=1166196U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1166480U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1166196U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f698(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=-2U;
si0+=si1;
si1=35U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l2;
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0+1U,si1);
goto L2;
L4:;
si0=l4;
si1=28U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=1U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l4;
si1=1067676U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l4;
si1=1U;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l4;
si1=l4;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l4;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=1067712U;
f377(i,si0,si1);
UNREACHABLE;
L3:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L9;
default:
goto L7;
}
L9:;
si0=l2;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l3;
si1=17U;
si0=si0 < si1;
if(si0){
goto L11;
}
L12:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l3;
sj0=(U64)(I64)(I32)(si0);
l5=sj0;
si0=0U;
l6=si0;
L15:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l6;
sj0=(U64)(I64)(I32)(si0);
sj1=l5;
sj0*=sj1;
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l8;
si1=(U32)(sj1);
l9=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l7;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
si1=l9;
si2=l7;
si1-=si2;
l6=si1;
si2=l9;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
si0=!(si0);
if(si0){
goto L15;
}
goto L13;
}
L14:;
si0=l2;
si1=-1U;
si0+=si1;
l7=si0;
si0=l3;
sj0=(U64)(I64)(I32)(si0);
l5=sj0;
si0=0U;
l6=si0;
L16:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l2=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l2=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l2;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L17:;
si0=l6;
sj0=(U64)(I64)(I32)(si0);
sj1=l5;
sj0*=sj1;
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l8;
si1=(U32)(sj1);
l9=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l2;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
si1=l9;
si2=l2;
si1-=si2;
l6=si1;
si2=l9;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
si0=!(si0);
if(si0){
goto L16;
}
}
L13:;
si0=l0;
si1=3U;
i32_store8(i->m0,(U64)si0+1U,si1);
goto L2;
L11:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=0U;
l6=si0;
L19:;
{
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=l3;
si0*=si1;
si1=l7;
si0-=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L19;
}
goto L6;
}
L18:;
si0=l2;
si1=-1U;
si0+=si1;
l7=si0;
si0=0U;
l6=si0;
L20:;
{
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l2=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l2=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l2;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L21:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l6;
si1=l3;
si0*=si1;
si1=l2;
si0-=si1;
l6=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L20;
}
goto L6;
}
L10:;
si0=l0;
si1=3U;
i32_store8(i->m0,(U64)si0+1U,si1);
goto L2;
L8:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L7:;
si0=l3;
si1=16U;
si0=si0 > si1;
if(si0){
goto L23;
}
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L22;
}
L23:;
si0=l3;
sj0=(U64)(I64)(I32)(si0);
l5=sj0;
si0=l3;
si1=11U;
si0=si0 < si1;
l10=si0;
si0=0U;
l6=si0;
L25:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l7=si0;
si0=l10;
if(si0){
goto L27;
}
si0=l7;
si1=10U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
L27:;
si0=l7;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L26:;
si0=l6;
sj0=(U64)(I64)(I32)(si0);
sj1=l5;
sj0*=sj1;
l8=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
sj1=l8;
si1=(U32)(sj1);
l9=si1;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l7;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
si1=l9;
si2=l7;
si1+=si2;
l6=si1;
si2=l9;
si1=(U32)((I32)si1<(I32)si2);
si0^=si1;
si0=!(si0);
if(si0){
goto L25;
}
}
si0=l0;
si1=2U;
i32_store8(i->m0,(U64)si0+1U,si1);
goto L2;
L24:;
si0=l0;
si1=2U;
i32_store8(i->m0,(U64)si0+1U,si1);
goto L2;
L22:;
si0=l3;
si1=10U;
si0=si0 > si1;
if(si0){
goto L28;
}
si0=0U;
l6=si0;
L29:;
{
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=l6;
si2=l3;
si1*=si2;
si0+=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L29;
}
goto L6;
}
L28:;
si0=0U;
l6=si0;
L30:;
{
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l7=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L31;
}
si0=-1U;
si1=l9;
si2=32U;
si1|=si2;
l7=si1;
si2=-87U;
si1+=si2;
l9=si1;
si2=l9;
si3=l7;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L5;
}
L31:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=l6;
si2=l3;
si1*=si2;
si0+=si1;
l6=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L30;
}
}
L6:;
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L5:;
si0=1U;
l1=si0;
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+1U,si1);
goto L1;
L2:;
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f168(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
U64 sj1;
si0=16U;
si1=4U;
si0=f171(i,si0,si1);
l1=si0;
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

void f2490(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
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
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f2399(i,si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
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
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f2399(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=l5;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
f1754(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+48U);
i64_store(i->m0,(U64)si0+32U,sj1);
goto L3;
L5:;
si0=l5;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=20U;
si0+=si1;
f1042(i,si0);
goto L3;
L4:;
si0=l5;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+20U);
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=8U;
si0+=si1;
f1042(i,si0);
L3:;
si0=l5;
si1=48U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f2412(i,si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+48U);
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=1U;
si2=1168896U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1168896U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1012(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+12U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
f1022(i,si0);
L1:;
L0:;
}

U32 f253(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
si0=l1;
si0=i32_load(i->m0,(U64)si0+28U);
l2=si0;
si1=16U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si1=32U;
si0&=si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si0=f254(i,si0,si1);
goto L0;
L2:;
si0=l0;
si1=l1;
si0=f255(i,si0,si1);
goto L0;
L1:;
si0=l0;
si1=l1;
si0=f256(i,si0,si1);
L0:;
return si0;
}

void f1644(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=12U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
l5=si0;
si0=l3;
si1=8U;
si0+=si1;
l6=si0;
si0=l3;
si1=l4;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l6;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l5;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=20U;
si0+=si1;
f989(i,si0);
L4:;
si0=l0;
si1=l1;
f83(i,si0,si1);
goto L1;
L3:;
si0=l0;
si1=l5;
f1644(i,si0,si1);
si0=l6;
si1=l6;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l2;
sj1=1ULL;
f991(i,si0,sj1);
f99(i);
UNREACHABLE;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f2244(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=l2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l2;
si2=l0;
si2=i32_load(i->m0,(U64)si2+8U);
l3=si2;
si1+=si2;
i32_store(i->m0,(U64)si0+28U,si1);
si0=1114112U;
l2=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=f1608(i,si0);
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=-1U;
l2=si0;
si0=l4;
si1=128U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=-2U;
l2=si0;
si0=l4;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=-3U;
si1=-4U;
si2=l4;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
L3:;
si0=l0;
si1=l2;
si2=l3;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l4;
l2=si0;
goto L1;
L2:;
si0=l1;
si1=16U;
si0+=si1;
si1=l0;
f1007(i,si0,si1);
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+16U);
l2=si1;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l2;
si2=l1;
si2=i32_load(i->m0,(U64)si2+20U);
si1+=si2;
i32_store(i->m0,(U64)si0+28U,si1);
si0=1114112U;
l2=si0;
si0=l1;
si1=24U;
si0+=si1;
si0=f1608(i,si0);
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
f1007(i,si0,si1);
si0=-1U;
l2=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l4;
si1=128U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=-2U;
l2=si0;
si0=l4;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=-3U;
si1=-4U;
si2=l4;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
L4:;
si0=l0;
si1=l0;
si1=i32_load8_u(i->m0,(U64)si1);
si2=1U;
si1&=si2;
si2=l2;
si3=l3;
si2+=si3;
si3=1U;
si2<<=(si3&31);
si1|=si2;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
l2=si0;
L1:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

U32 f517(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=1057656U;
si2=10U;
si3=l0;
si4=1057668U;
si5=l2;
si6=12U;
si5+=si6;
si6=1057684U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f862(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=160U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=96U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+100U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+96U);
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
si1=50U;
i32_store8(i->m0,(U64)si0+111U,si1);
si0=l2;
si1=88U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+92U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+88U);
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
i32_store(i->m0,(U64)si0+128U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+124U,si1);
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+120U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=120U;
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
i32_store(i->m0,(U64)si0+112U,si1);
si0=l2;
si1=l1;
si2=120U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+116U,si1);
si0=l2;
si1=80U;
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
si0=i32_load(i->m0,(U64)si0+84U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+80U);
if(si0){
goto L8;
}
si0=l2;
si1=152U;
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
i64_store(i->m0,(U64)si0+144U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=72U;
si0+=si1;
si1=l1;
si2=1114879U;
si3=3U;
f844(i,si0,si1,si2,si3);
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
si1=128U;
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
i64_store(i->m0,(U64)si0+120U,sj1);
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
goto L10;
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
goto L10;
}
L11:;
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
goto L11;
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
l12=si1;
si2=1U;
si1=si1 != si2;
i32_store8(i->m0,(U64)si0+140U,si1);
si0=l2;
si1=128U;
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
i64_store(i->m0,(U64)si0+120U,sj1);
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
si0=i32_load(i->m0,(U64)si0+24U);
l13=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+120U);
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
si1=16U;
si0+=si1;
si1=l1;
f904(i,si0,si1);
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
f847(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
if(si0){
goto L9;
}
L12:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
si0=l2;
si1=l2;
si2=111U;
si1+=si2;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l2;
si1=l2;
si2=112U;
si1+=si2;
i32_store(i->m0,(U64)si0+148U,si1);
si0=l2;
si1=l2;
si2=116U;
si1+=si2;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l1;
si1=50U;
si2=l3;
si3=l6;
si4=l7;
si5=l5;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
L13:;
si0=l8;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L14;
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
i32_store(i->m0,(U64)si0+124U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+136U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+128U,si1);
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+111U);
i32_store8(i->m0,(U64)si0+121U,si1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+120U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=120U;
si1+=si2;
f841(i,si0,si1);
L14:;
si0=l2;
si1=144U;
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
sj1=i64_load(i->m0,(U64)si1+120U);
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
sj1=i64_load(i->m0,(U64)si1+144U);
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
si2=111U;
si1+=si2;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l2;
si1=l2;
si2=112U;
si1+=si2;
i32_store(i->m0,(U64)si0+148U,si1);
si0=l2;
si1=l2;
si2=116U;
si1+=si2;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=50U;
si2=l3;
si3=l6;
si4=l7;
si5=l5;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=144U;
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
si0=1120504U;
si1=40U;
si2=1111940U;
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
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f76(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
l2=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=l1;
f1145(i,si0,si1,si2);
L1:;
L0:;
}

void f622(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=0U;
l4=si0;
L3:;
{
si0=l4;
si1=1U;
si0+=si1;
l5=si0;
si0=l3;
si1=l4;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l6=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
si0=l5;
l4=si0;
goto L4;
L5:;
si0=l6;
si1=1122380U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L14;
default:
goto L2;
}
L16:;
si0=l3;
si1=l5;
si0+=si1;
si1=1178664U;
si2=l5;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=192U;
si0&=si1;
si1=128U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si1=2U;
si0+=si1;
l4=si0;
goto L4;
L15:;
si0=l3;
si1=l5;
si0+=si1;
si1=1178664U;
si2=l5;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
si0=i32_load8_s(i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=-224U;
si0+=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L11;
case 2:
goto L11;
case 3:
goto L11;
case 4:
goto L11;
case 5:
goto L11;
case 6:
goto L11;
case 7:
goto L11;
case 8:
goto L11;
case 9:
goto L11;
case 10:
goto L11;
case 11:
goto L11;
case 12:
goto L11;
case 13:
goto L12;
default:
goto L11;
}
L14:;
si0=l3;
si1=l5;
si0+=si1;
si1=1178664U;
si2=l5;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
si0=i32_load8_s(i->m0,(U64)si0);
l8=si0;
si0=l6;
si1=-240U;
si0+=si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L10;
case 2:
goto L10;
case 3:
goto L10;
case 4:
goto L8;
default:
goto L10;
}
L13:;
si0=l8;
si1=-32U;
si0&=si1;
si1=-96U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L6;
L12:;
si0=l8;
si1=-97U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
goto L6;
L11:;
si0=l7;
si1=31U;
si0+=si1;
si1=255U;
si0&=si1;
si1=12U;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l7;
si1=-2U;
si0&=si1;
si1=-18U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l8;
si1=-64U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L2;
}
goto L6;
L17:;
si0=l8;
si1=-64U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L2;
}
goto L6;
L10:;
si0=l7;
si1=15U;
si0+=si1;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l8;
si1=-64U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L2;
}
goto L7;
L9:;
si0=l8;
si1=112U;
si0+=si1;
si1=255U;
si0&=si1;
si1=48U;
si0=si0 >= si1;
if(si0){
goto L2;
}
goto L7;
L8:;
si0=l8;
si1=-113U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
L7:;
si0=l3;
si1=l4;
si2=2U;
si1+=si2;
l5=si1;
si0+=si1;
si1=1178664U;
si2=l5;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=192U;
si0&=si1;
si1=128U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si1=l4;
si2=3U;
si1+=si2;
l5=si1;
si0+=si1;
si1=1178664U;
si2=l5;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=192U;
si0&=si1;
si1=128U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
goto L4;
L6:;
si0=l3;
si1=l4;
si2=2U;
si1+=si2;
l5=si1;
si0+=si1;
si1=1178664U;
si2=l5;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=192U;
si0&=si1;
si1=128U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si1=3U;
si0+=si1;
l4=si0;
L4:;
si0=l4;
l5=si0;
si0=l4;
si1=l2;
si0=si0 < si1;
if(si0){
goto L3;
}
}
L2:;
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
si2=l5;
si1-=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
si2=l5;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
si2=l4;
si1-=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
si2=l4;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
goto L0;
L1:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

U32 f2002(glicolwasmInstance*i) {
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
f720(i,si0,si1,si2);
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

void f2731(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l1;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=3ULL;
sj1|=sj2;
i64_store(i->m0,(U64)si0,sj1);
L0:;
}

void f2246(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=l0;
si1=l2;
si2=l1;
si1-=si2;
si2=4U;
si1>>=(si2&31);
f1287(i,si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l0;
si2=80U;
si1+=si2;
si2=l0;
si2=i32_load(i->m0,(U64)si2+80U);
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
si3=80U;
si4=l4;
si2=si4?si2:si3;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l6=si1;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
si0=l3;
si1=5U;
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
L4:;
{
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
sj1=i64_load(i->m0,(U64)si1);
si2=l1;
si3=8U;
si2+=si3;
sj2=i64_load(i->m0,(U64)si2);
f1289(i,si0,sj1,sj2);
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
goto L4;
}
L3:;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
sj0=i64_load(i->m0,(U64)si0);
l8=sj0;
si0=l7;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l7;
sj1=l8;
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
goto L2;
L5:;
}
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
L1:;
L0:;
}

void f1511(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
f1611(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178304U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119116U;
si4=1128792U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1U;
si1=l3;
si2=1128776U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
si2=l4;
si2=i32_load(i->m0,(U64)si2+4U);
f1340(i,si0,si1,si2);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f74(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj1,sj2;
si0=i->g0;
si1=352U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l5=si0;
si0=l1;
si1=l0;
si2=284U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si3=288U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si3=0U;
si4=1049808U;
si1=f2(i,si1,si2,si3,si4);
si1=i32_load(i->m0,(U64)si1);
si2=1049824U;
si0=f3(i,si0,si1,si2);
l1=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=l4;
si1=64U;
si0+=si1;
si1=128U;
f75(i,si0,si1);
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+64U);
i64_store(i->m0,(U64)si0+144U,sj1);
si0=l4;
si1=144U;
si0+=si1;
si1=128U;
f76(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+148U);
si1=l4;
si1=i32_load(i->m0,(U64)si1+152U);
l6=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
L4:;
{
si0=l7;
si1=l1;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=5ULL;
sj1|=sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si1=128U;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=l4;
si1=72U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=l5;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+144U);
i64_store(i->m0,(U64)si0+72U,sj1);
si0=l0;
si1=296U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=l1;
si2=8U;
si1+=si2;
l1=si1;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l4;
si1=l1;
si2=l7;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(i->m0,(U64)si0+148U,si1);
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=l4;
si2=144U;
si1+=si2;
si2=1049856U;
si3=5U;
si4=l4;
si5=88U;
si4+=si5;
f77(i,si0,si1,si2,si3,si4);
si0=l0;
si1=292U;
si0+=si1;
l1=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si1=l4;
si1=i32_load(i->m0,(U64)si1+60U);
si2=-1U;
si1^=si2;
si0+=si1;
l5=si0;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l6;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=8U;
si0+=si1;
l7=si0;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L6;
case 1:
goto L18;
case 2:
goto L17;
case 3:
goto L16;
case 4:
goto L15;
case 5:
goto L14;
case 6:
goto L8;
case 7:
goto L8;
case 8:
goto L13;
case 9:
goto L12;
case 10:
goto L11;
case 11:
goto L10;
case 12:
goto L9;
default:
goto L6;
}
L18:;
si0=l7;
si1=2U;
si0+=si1;
l5=si0;
goto L5;
L17:;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
goto L5;
L16:;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
goto L5;
L15:;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
goto L5;
L14:;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
goto L5;
L13:;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
goto L5;
L12:;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
goto L5;
L11:;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
goto L5;
L10:;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
goto L5;
L9:;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
goto L5;
L8:;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
goto L5;
L7:;
si0=l5;
si1=l7;
si2=1054556U;
f4(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
L5:;
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
f78(i,si0,si1);
si0=l7;
f79(i,si0);
si0=l7;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+144U);
i64_store(i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=0U;
si1=0U;
si2=1049840U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si1=144U;
si0+=si1;
si1=1049856U;
si2=5U;
f80(i,si0,si1,si2);
si0=l4;
si1=144U;
si0+=si1;
si0=f81(i,si0);
l7=si0;
si0=l4;
si1=144U;
si0+=si1;
si1=l4;
si2=72U;
si1+=si2;
f78(i,si0,si1);
si0=l1;
si1=l7;
si2=l4;
si3=144U;
si2+=si3;
si0=f82(i,si0,si1,si2);
L1:;
si0=l4;
si1=88U;
si0+=si1;
si1=l0;
si2=64U;
si1+=si2;
f83(i,si0,si1);
si0=l4;
si1=128U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=133U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=1180344U;
l7=si0;
si0=l4;
si1=1180344U;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l4;
si1=1180344U;
i32_store(i->m0,(U64)si0+108U,si1);
si0=l4;
si1=1180344U;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0+120U,sj1);
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0+96U,sj1);
si0=0U;
l5=si0;
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+288U,si1);
si0=l0;
si1=248U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L21;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+112U);
l7=si0;
si0=l1;
l5=si0;
L22:;
si0=l4;
si1=l5;
i32_store(i->m0,(U64)si0+116U,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=l0;
si1=244U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L21;
}
si0=l4;
si1=112U;
si0+=si1;
si1=l1;
f84(i,si0,si1);
si0=l0;
si1=252U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L21;
}
L23:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+132U);
l6=si0;
si0=l4;
si1=l1;
i32_store(i->m0,(U64)si0+132U,si1);
si0=l4;
si1=312U;
si0+=si1;
si1=l0;
si2=l4;
si3=88U;
si2+=si3;
si3=l4;
si4=144U;
si3+=si4;
si4=l0;
si5=292U;
si4+=si5;
si5=0U;
si6=l0;
si6=i32_load(i->m0,(U64)si6+240U);
l1=si6;
si7=8U;
si6+=si7;
si7=l1;
si7=i32_load(i->m0,(U64)si7);
si8=0U;
f85(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+312U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+316U);
l1=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+312U);
l7=si0;
goto L24;
L25:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+316U);
l1=si0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-32U;
si0+=si1;
switch(si0){
case 0:
goto L28;
case 1:
goto L26;
case 2:
goto L26;
default:
goto L27;
}
L28:;
f86(i);
UNREACHABLE;
L27:;
si0=13U;
l7=si0;
goto L24;
L26:;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l7=si0;
si0=l1;
f87(i,si0);
si0=l8;
l1=si0;
L24:;
si0=l4;
si1=132U;
si0+=si1;
f88(i,si0);
si0=l4;
si1=l6;
i32_store(i->m0,(U64)si0+132U,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+112U);
si1=l5;
f89(i,si0,si1);
si0=l4;
si1=116U;
si0+=si1;
f90(i,si0);
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+116U,si1);
si0=l7;
si1=255U;
si0&=si1;
si1=13U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l4;
si1=144U;
si0+=si1;
f91(i,si0);
si0=l4;
si1=88U;
si0+=si1;
f92(i,si0);
goto L20;
L29:;
si0=l4;
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
si2=l7;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+312U,sj1);
si0=l4;
si1=292U;
si0+=si1;
si1=l4;
si2=312U;
si1+=si2;
f93(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+292U);
l7=si0;
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+300U);
l5=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+296U);
l1=si0;
goto L30;
L31:;
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+296U);
i64_store(i->m0,(U64)si0+304U,sj1);
si0=1116968U;
l5=si0;
si0=46U;
l1=si0;
si0=1116968U;
si1=46U;
si2=1123416U;
si0=f94(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L32;
}
si0=l4;
si1=48U;
si0+=si1;
si1=l0;
si2=1116968U;
si3=46U;
f95(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(i->m0,(U64)si0+52U);
l1=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+48U);
l5=si0;
L32:;
si0=l4;
si1=40U;
si0+=si1;
si1=l1;
f66(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+40U);
l6=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+44U);
si1=l5;
si2=l1;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l4;
si1=32U;
si0+=si1;
si1=l4;
si2=304U;
si1+=si2;
f96(i,si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l0;
si2=l4;
si2=i32_load(i->m0,(U64)si2+32U);
si3=l4;
si3=i32_load(i->m0,(U64)si3+36U);
f95(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(i->m0,(U64)si0+24U);
l0=si0;
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si1=i32_load(i->m0,(U64)si1+28U);
l5=si1;
f66(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+16U);
l9=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l0;
si2=l5;
si0=f3069(i,si0,si1,si2);
l0=si0;
si0=l4;
si1=340U;
si0+=si1;
si1=l5;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=336U;
si0+=si1;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=328U;
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=324U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l9;
i32_store(i->m0,(U64)si0+332U,si1);
si0=l4;
si1=l6;
i32_store(i->m0,(U64)si0+320U,si1);
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+314U,si1);
si0=l4;
si1=13U;
i32_store8(i->m0,(U64)si0+312U,si1);
si0=l4;
si1=312U;
si0+=si1;
si0=f97(i,si0);
l1=si0;
si0=l4;
si1=304U;
si0+=si1;
f79(i,si0);
L30:;
si0=l4;
si1=144U;
si0+=si1;
f91(i,si0);
si0=l4;
si1=88U;
si0+=si1;
f92(i,si0);
si0=l7;
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l4;
si1=l5;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l4;
si1=l1;
i32_store(i->m0,(U64)si0+148U,si1);
si0=l4;
si1=l7;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L33;
}
si0=l5;
si1=128U;
si2=l5;
si3=128U;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
L34:;
{
si0=l7;
if(si0){
goto L35;
}
si0=l4;
si1=144U;
si0+=si1;
f98(i,si0);
goto L19;
L35:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
l5=si0;
si1=5U;
si0=si0 == si1;
if(si0){
goto L41;
}
si0=l5;
si1=12U;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
f96(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
goto L38;
L42:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L40;
}
si0=l5;
si1=l0;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l5;
si1=12U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L39;
}
si0=l5;
si1=16U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=5U;
si0=si0 != si1;
if(si0){
goto L39;
}
si0=l5;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
goto L37;
L41:;
si0=l1;
si1=4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
goto L37;
L40:;
f99(i);
UNREACHABLE;
L39:;
si0=l5;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
si0=74U;
l5=si0;
si0=1117491U;
l0=si0;
L38:;
si0=l0;
if(si0){
goto L36;
}
L37:;
si0=l2;
si1=l5;
i32_store(i->m0,(U64)si0,si1);
L36:;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
goto L34;
}
L33:;
si0=0U;
si1=0U;
si2=1049864U;
f4(i,si0,si1,si2);
UNREACHABLE;
L21:;
UNREACHABLE;
L20:;
si0=l4;
si1=l1;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l4;
si1=144U;
si0+=si1;
f100(i,si0);
L19:;
si0=l4;
si1=352U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2404(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1;
si0=l1;
si1=l2;
si0=f2403(i,si0,si1);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
f2401(i,si0,si1);
goto L0;
L1:;
si0=l0;
si1=14U;
i32_store8(i->m0,(U64)si0,si1);
L0:;
}

void f2207(glicolwasmInstance*i,U32 l0,U64 l1,U32 l2) {
U32 si0,si1;
U64 sj0;
si0=l0;
si1=l2;
f1406(i,si0,si1);
sj0=l1;
si1=l2;
f2185(i,sj0,si1);
L0:;
}

void f1026(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U64 l3,U32 l4,U32 l5) {
U32 si0,si1,si2;
U64 sj1;
si0=l1;
si1=-1U;
si0+=si1;
si1=l5;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load16_u(i->m0,(U64)si0+226U);
l1=si0;
si1=11U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=1U;
si1+=si2;
l5=si1;
i32_store16(i->m0,(U64)si0+226U,si1);
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l3;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
l1=si0;
si1=100U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=92U;
si0+=si1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=228U;
si0+=si1;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store16(i->m0,(U64)si0+224U,si1);
si0=l4;
si1=l0;
i32_store(i->m0,(U64)si0+88U,si1);
goto L0;
L2:;
si0=1119940U;
si1=48U;
si2=1119988U;
f16(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1119800U;
si1=32U;
si2=1120004U;
f16(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f506(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
U64 sj1;
si0=156U;
si1=4U;
si0=f1027(i,si0,si1);
l1=si0;
sj1=4294967297ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
si2=148U;
si0=f3069(i,si0,si1,si2);
si0=l1;
L0:;
return si0;
}

void f2805(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
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
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f2801(i,si0,si1);
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
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
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f2801(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+28U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l5;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
l4=si0;
si1=l5;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
f2806(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+48U);
i64_store(i->m0,(U64)si0+32U,sj1);
goto L3;
L5:;
si0=l5;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=20U;
si0+=si1;
f302(i,si0);
goto L3;
L4:;
si0=l5;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+20U);
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=8U;
si0+=si1;
f302(i,si0);
L3:;
si0=l5;
si1=48U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f2747(i,si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+48U);
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=1U;
si2=1173072U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1173072U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1710(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
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
f1611(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l5=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f1706(i,si0,si1);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l2=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=1167972U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=1U;
si1=l3;
si2=1167972U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l6=si0;
si1=l2;
si0=f1707(i,si0,si1);
l3=si0;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
si2=l5;
si1&=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=l2;
f1708(i,si0,si1);
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
si0=1178304U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119116U;
si4=1167972U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f2051(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
L2:;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
l1=si0;
L1:;
si0=l1;
L0:;
return si0;
}

void f1694(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=112U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
si0=l3;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
sj1=l6;
i64_store(i->m0,(U64)si0+88U,sj1);
sj0=l6;
si0=(U32)(sj0);
l7=si0;
si1=255U;
si0&=si1;
l3=si0;
si1=6U;
si0=si0 == si1;
l8=si0;
if(si0){
goto L7;
}
si0=l3;
si1=12U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si1=48U;
si0+=si1;
si1=l4;
si2=88U;
si1+=si2;
f96(i,si0,si1);
si0=-2147483648U;
l3=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+52U);
l1=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+48U);
l9=si0;
goto L3;
L8:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+92U);
l3=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l3;
si1=16U;
si0+=si1;
l9=si0;
si0=l3;
si1=8U;
si0+=si1;
l8=si0;
si0=l3;
si1=l1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l4;
si1=l8;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l9;
i32_store(i->m0,(U64)si0+100U,si1);
si0=l4;
si1=1U;
i32_store(i->m0,(U64)si0+96U,si1);
si0=l4;
si1=96U;
si0+=si1;
f989(i,si0);
goto L10;
L11:;
si0=l9;
si0=i32_load8_u(i->m0,(U64)si0);
si1=6U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l4;
si1=96U;
si0+=si1;
si1=l3;
si2=20U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f1209(i,si0,si1);
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=-2147483648U;
l3=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+96U);
l8=si0;
si1=-2147483648U;
si0=si0 != si1;
if(si0){
goto L9;
}
goto L4;
L12:;
si0=l8;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L10:;
si0=-2147483648U;
l3=si0;
goto L4;
L9:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+104U);
l1=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+100U);
l9=si0;
si0=l8;
l3=si0;
goto L3;
L7:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+92U);
l7=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+4U);
l9=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l7;
f87(i,si0);
si0=l8;
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l4;
si1=56U;
si0+=si1;
sj1=1ULL;
f991(i,si0,sj1);
f99(i);
UNREACHABLE;
L5:;
si0=1U;
si1=l3;
si2=1129544U;
f4(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1117491U;
l9=si0;
si0=74U;
l1=si0;
L3:;
si0=l7;
si1=255U;
si0&=si1;
si1=6U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si1=88U;
si0+=si1;
si1=4U;
si0|=si1;
f1039(i,si0);
goto L1;
L2:;
si0=l4;
si1=88U;
si0+=si1;
f1035(i,si0);
L1:;
si0=l3;
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l4;
si1=l1;
i32_store(i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l9;
i32_store(i->m0,(U64)si0+80U,si1);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l1;
si0=!(si0);
if(si0){
goto L23;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l3=si0;
si1=6U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l3;
si1=12U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l9=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L21;
}
si0=l3;
si1=16U;
si0+=si1;
l2=si0;
si0=l3;
si1=8U;
si0+=si1;
l7=si0;
si0=l3;
si1=l9;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L27;
}
si0=l4;
si1=l7;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l4;
si1=l2;
i32_store(i->m0,(U64)si0+100U,si1);
si0=l4;
si1=1U;
i32_store(i->m0,(U64)si0+96U,si1);
si0=l4;
si1=96U;
si0+=si1;
f989(i,si0);
goto L26;
L27:;
si0=l4;
si1=32U;
si0+=si1;
si1=l2;
f1175(i,si0,si1);
si0=l4;
sj0=i64_load(i->m0,(U64)si0+32U);
sj1=-4934329412750585044ULL;
sj0^=sj1;
si1=l4;
si2=40U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
sj2=-1131414303982419246ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L25;
}
si0=l7;
si1=l7;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L26:;
si0=1129576U;
f14(i,si0);
UNREACHABLE;
L25:;
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0);
si1=6U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1+8U);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L18;
}
goto L19;
L24:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si0=i32_load(i->m0,(U64)si0+8U);
if(si0){
goto L19;
}
goto L18;
L23:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
goto L17;
L22:;
si0=l4;
si1=l1;
i32_store(i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l9;
i32_store(i->m0,(U64)si0+96U,si1);
si0=1178304U;
si1=43U;
si2=l4;
si3=96U;
si2+=si3;
si3=1119116U;
si4=1129560U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L21:;
si0=l4;
si1=8U;
si0+=si1;
sj1=1ULL;
f991(i,si0,sj1);
f99(i);
UNREACHABLE;
L20:;
si0=1160552U;
f14(i,si0);
UNREACHABLE;
L19:;
si0=l5;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si1=96U;
si0+=si1;
si1=l1;
f1690(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l5;
si2=l4;
si2=i32_load(i->m0,(U64)si2+100U);
l3=si2;
si3=l4;
si4=104U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
l2=si3;
si4=l3;
si2=si4?si2:si3;
si3=0U;
si4=0U;
f1502(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(i->m0,(U64)si0+24U);
if(si0){
goto L28;
}
si0=l3;
si0=!(si0);
if(si0){
goto L18;
}
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
goto L18;
L28:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
goto L17;
L18:;
si0=l4;
si1=96U;
si0+=si1;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1);
si2=l1;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f1741(i,si0,si1,si2);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+100U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+96U);
l6=sj1;
i64_store(i->m0,(U64)si0+88U,sj1);
si0=l4;
si1=88U;
si0+=si1;
si0=f1742(i,si0);
si1=l4;
si2=76U;
si1+=si2;
f1743(i,si0,si1);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
sj0=l6;
si0=(U32)(sj0);
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
f1708(i,si0,si1);
goto L16;
L17:;
si0=l4;
si1=76U;
si0+=si1;
f1042(i,si0);
L16:;
si0=l4;
si1=112U;
si0+=si1;
i->g0=si0;
goto L0;
L15:;
si0=1129592U;
f14(i,si0);
UNREACHABLE;
L14:;
si0=1129608U;
f14(i,si0);
UNREACHABLE;
L13:;
si0=1129624U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f990(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L13;
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
goto L2;
case 7:
goto L2;
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
default:
goto L13;
}
L13:;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
goto L1;
L12:;
si0=l0;
si1=2U;
si0+=si1;
l0=si0;
goto L1;
L11:;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
goto L1;
L10:;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
goto L1;
L9:;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
goto L1;
L8:;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
goto L1;
L7:;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
goto L1;
L6:;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
goto L1;
L5:;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
goto L1;
L4:;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
goto L1;
L3:;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
goto L1;
L2:;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
L1:;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
L0:;
return si0;
}

U32 f1290(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
f1286(i,si0,si1);
si0=l1;
si1=l3;
si1=i32_load(i->m0,(U64)si1+8U);
si2=l3;
si2=i32_load(i->m0,(U64)si2+12U);
si3=l2;
si0=f1488(i,si0,si1,si2,si3);
l0=si0;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f533(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si0=1116224U;
si1=17U;
si2=1122912U;
f16(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

F64 f3082(glicolwasmInstance*i,F64 l0) {
F64 sd0;
sd0=l0;
sd0=f3081(i,sd0);
L0:;
return sd0;
}

void f1701(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
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
f1640(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f1724(i,si0,si1);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l2=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=1168100U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=1U;
si1=l3;
si2=1168100U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si1=l2;
si0=f1725(i,si0,si1);
si1=l3;
f1740(i,si0,si1);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=l2;
f1708(i,si0,si1);
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
si0=1178304U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119116U;
si4=1168100U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f1733(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f1650(i,si0,si1);
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
f1727(i,si0,si1);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l2=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=1168068U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=1U;
si1=l3;
si2=1168068U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l6=si0;
si1=l2;
si0=f1728(i,si0,si1);
l3=si0;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
sf1=l5;
si2=l3;
sf2=f32_load(i->m0,(U64)si2);
sf1+=sf2;
f32_store(i->m0,(U64)si0,sf1);
si0=l6;
si1=l2;
f1708(i,si0,si1);
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
si0=1178304U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119116U;
si4=1168068U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f918(glicolwasmInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=23U;
i32_store8(i->m0,(U64)si0+39U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
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
i32_store(i->m0,(U64)si0+68U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+60U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=60U;
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
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l1;
si2=120U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+44U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l4;
si1=l9;
si0+=si1;
l4=si0;
si0=l3;
si1=l7;
si0=si0 == si1;
l9=si0;
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
l10=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=0U;
i32_store8(i->m0,(U64)si0+141U,si1);
L5:;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l11=si0;
if(si0){
goto L7;
}
L8:;
{
si0=l2;
si1=l1;
f919(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L8;
}
}
si0=l10;
if(si0){
goto L6;
}
si0=0U;
l3=si0;
goto L4;
L7:;
si0=l10;
si0=!(si0);
if(si0){
goto L4;
}
L6:;
si0=l1;
si1=l10;
i32_store8(i->m0,(U64)si0+141U,si1);
si0=l11;
l3=si0;
L4:;
si0=l4;
si1=0U;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l2;
si1=l2;
si2=39U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l4=si0;
si0=l3;
if(si0){
goto L10;
}
si0=l4;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l1;
si1=23U;
si2=l7;
si3=l5;
si4=l6;
si5=l9;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l4=si0;
L11:;
si0=l4;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l7=si1;
si2=l8;
si0=f842(i,si0,si1,si2);
l4=si0;
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L12;
}
si0=l4;
si1=l7;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si0=l2;
si1=l8;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l2;
si1=l7;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+39U);
i32_store8(i->m0,(U64)si0+61U,si1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+60U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=60U;
si1+=si2;
f841(i,si0,si1);
goto L9;
L12:;
si0=1120504U;
si1=40U;
si2=1111940U;
f16(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l4;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=23U;
si2=l7;
si3=l5;
si4=l6;
si5=l9;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=48U;
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
L9:;
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
f843(i,si0,si1);
L1:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3032(glicolwasmInstance*i,U32 l0,U64 l1,U32 l2,U64 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
sj0=l3;
si1=l4;
sj2=l1;
si3=l2;
si0=f3019(i,sj0,si1,sj2,si3);
si1=1U;
si0+=si1;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l5;
sj1=l1;
si2=l2;
sj3=l3;
si4=l4;
f3010(i,si0,sj1,si2,sj3,si4);
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si1=1000000000U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1122219U;
si1=38U;
si2=1122348U;
f1457(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1121628U;
si1=35U;
si2=1121664U;
f40(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1142(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=4U;
si0+=si1;
si1=l0;
si2=l1;
f80(i,si0,si1,si2);
si0=l2;
si1=4U;
si0+=si1;
si0=f81(i,si0);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 f1436(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=1U;
l4=si0;
si0=l3;
si1=1U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1178720U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=153U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l0;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l2;
si2=l3;
si0=f683(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=6U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
si1=l0;
si1=i32_load16_u(i->m0,(U64)si1+4U);
si0|=si1;
if(si0){
goto L2;
}
si0=0U;
l4=si0;
goto L1;
L2:;
si0=l3;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1124436U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=149U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=24U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l2;
si2=l3;
si0=f683(i,si0,si1,si2);
l4=si0;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

void f2470(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
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
si1=16U;
si0+=si1;
si0=f2350(i,si0);
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
f1741(i,si0,si1,si2);
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
l6=sj1;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si1=f1742(i,si1);
l3=si1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l3;
si2=i32_load(i->m0,(U64)si2+8U);
si3=l4;
si4=2147483647U;
f2471(i,si0,si1,si2,si3,si4);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
f2412(i,si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0,sj1);
sj0=l6;
si0=(U32)(sj0);
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
f1708(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=l4;
si2=1168896U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1169368U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f952(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
l5=si0;
si0=l2;
si1=l3;
si0+=si1;
l3=si0;
si1=l2;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=1U;
si0<<=(si1&31);
l5=si0;
si1=l3;
si2=l5;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=4U;
si2=l3;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=12U;
si0*=si1;
l5=si0;
si0=l3;
si1=178956971U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l6=si0;
si0=l2;
if(si0){
goto L3;
}
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+24U,si1);
goto L2;
L3:;
si0=l4;
si1=4U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l2;
si2=12U;
si1*=si2;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l4;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+20U,si1);
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l6;
si2=l5;
si3=l4;
si4=20U;
si3+=si4;
f437(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
goto L1;
L4:;
si0=l1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l5;
i32_store(i->m0,(U64)si0+4U,si1);
si0=-2147483647U;
l5=si0;
L1:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1174(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+24U);
l0=si0;
si0=l2;
si1=64U;
si0+=si1;
si1=1U;
si0|=si1;
l4=si0;
si1=7U;
si0+=si1;
l5=si0;
L1:;
{
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
f46(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
si1=0U;
si2=l2;
si2=i32_load(i->m0,(U64)si2+4U);
si1-=si2;
si2=24U;
si1*=si2;
si0+=si1;
si1=-24U;
si0+=si1;
l1=si0;
si1=8U;
si0+=si1;
l6=si0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=4U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l2;
si1=32U;
si0+=si1;
si1=l6;
si2=l1;
si3=20U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f994(i,si0,si1,si2);
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+48U);
l6=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+64U,si1);
si0=l2;
si1=52U;
si0+=si1;
si1=l7;
si2=l2;
si3=64U;
si2+=si3;
si3=l6;
si3=i32_load(i->m0,(U64)si3);
si4=8U;
si3+=si4;
f995(i,si0,si1,si2,si3);
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
si2=52U;
si1+=si2;
f996(i,si0,si1);
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+64U);
f997(i,si0,sj1);
L3:;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
goto L1;
L2:;
si0=l0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+24U);
si2=-192U;
si1+=si2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+16U);
l1=si1;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(i->m0,(U64)si0+8U,sj1);
goto L1;
L4:;
}
si0=l2;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2091(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si0=f1888(i,si0);
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
f296(i,si0);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

U32 f2303(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=1U;
l2=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
l3=si0;
si1=1067760U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
l1=si3;
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l3;
si1=1068132U;
si2=7U;
si3=l1;
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l2=si0;
L1:;
si0=l2;
L0:;
return si0;
}

void f742(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si0=8U;
l3=si0;
goto L3;
L4:;
si0=l1;
si1=53687091U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=40U;
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
si1=8U;
si2=l3;
f720(i,si0,si1,si2);
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

void f1067(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si1=8U;
si0+=si1;
f1049(i,si0);
si0=l0;
f359(i,si0);
L0:;
}

void f2288(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si3=1121280U;
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

void f2759(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
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
sj1=1ULL;
sj2=257ULL;
si3=l5;
si4=8U;
si3+=si4;
si3=f2506(i,si3);
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
si2=1172908U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f576(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si1=i32_load(i->m0,(U64)si1);
si2=l1;
si3=4U;
si2<<=(si3&31);
si1-=si2;
si2=-16U;
si1+=si2;
l0=si1;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si0=f566(i,si0,si1,si2);
L0:;
return si0;
}

