#include "w2c2_base.h"

#include "glicol.h"

U32 f2276(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=4U;
si0+=si1;
si1=l0;
f1625(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
sj0=i64_load(i->m0,(U64)si0+8U);
l3=sj0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l2;
si2=12U;
si1+=si2;
l0=si1;
si1=i32_load(i->m0,(U64)si1);
si0=f1626(i,si0,si1);
l4=si0;
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
f1625(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
sj0=i64_load(i->m0,(U64)si0+8U);
l5=sj0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si0=f1626(i,si0,si1);
l0=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si0=f1919(i,si0,si1);
l0=si0;
sj0=l5;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L3;
}
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L3:;
sj0=l3;
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L4;
}
sj0=l3;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L4:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 == si1;
goto L0;
L2:;
si0=1168684U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1168700U;
f14(i,si0);
UNREACHABLE;
L0:;
return si0;
}

void f2432(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
f2433(i,si0,si1,si2,si3);
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
si0=1169736U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f485(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
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
l4=si1;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=2147483641U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l1;
si0=f590(i,si0);
l5=si0;
if(si0){
goto L1;
}
UNREACHABLE;
L2:;
f584(i);
UNREACHABLE;
L1:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l2;
si2=-1U;
si1+=si2;
l1=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
si2=l4;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=l2;
si3=3U;
si2>>=(si3&31);
si3=7U;
si2*=si3;
si3=l1;
si4=8U;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+8U,si1);
L0:;
}

void f2242(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
f1283(i,si0,si1);
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
f1285(i,si0,sj1,sj2);
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

void f309(glicolwasmInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L25;
case 1:
goto L24;
case 2:
goto L23;
case 3:
goto L22;
case 4:
goto L21;
case 5:
goto L20;
case 6:
goto L19;
case 7:
goto L18;
case 8:
goto L17;
case 9:
goto L10;
case 10:
goto L16;
case 11:
goto L10;
case 12:
goto L10;
case 13:
goto L10;
case 14:
goto L10;
case 15:
goto L10;
case 16:
goto L15;
case 17:
goto L14;
case 18:
goto L13;
case 19:
goto L12;
case 20:
goto L10;
case 21:
goto L10;
case 22:
goto L11;
case 23:
goto L10;
case 24:
goto L9;
case 25:
goto L8;
case 26:
goto L7;
case 27:
goto L10;
case 28:
goto L6;
case 29:
goto L5;
case 30:
goto L4;
case 31:
goto L3;
case 32:
goto L2;
case 33:
goto L10;
case 34:
goto L10;
case 35:
goto L1;
default:
goto L10;
}
L25:;
si0=l0;
si1=4U;
si0+=si1;
f310(i,si0);
goto L0;
L24:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L23:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+16U);
si1=l0;
si2=20U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L22:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L21:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L20:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L19:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L18:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L17:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L16:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L15:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L14:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L13:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+16U);
si1=l0;
si2=20U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L12:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L11:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
L10:;
goto L0;
L9:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L8:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+16U);
si1=l0;
si2=20U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L7:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L6:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L5:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L4:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L3:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L2:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
L0:;
}

void f1364(glicolwasmInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L25;
case 1:
goto L24;
case 2:
goto L23;
case 3:
goto L22;
case 4:
goto L21;
case 5:
goto L20;
case 6:
goto L19;
case 7:
goto L18;
case 8:
goto L17;
case 9:
goto L10;
case 10:
goto L16;
case 11:
goto L10;
case 12:
goto L10;
case 13:
goto L10;
case 14:
goto L10;
case 15:
goto L10;
case 16:
goto L15;
case 17:
goto L14;
case 18:
goto L13;
case 19:
goto L12;
case 20:
goto L10;
case 21:
goto L10;
case 22:
goto L11;
case 23:
goto L10;
case 24:
goto L9;
case 25:
goto L8;
case 26:
goto L7;
case 27:
goto L10;
case 28:
goto L6;
case 29:
goto L5;
case 30:
goto L4;
case 31:
goto L3;
case 32:
goto L2;
case 33:
goto L10;
case 34:
goto L10;
case 35:
goto L1;
default:
goto L10;
}
L25:;
si0=l0;
si1=4U;
si0+=si1;
f310(i,si0);
goto L0;
L24:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L23:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+16U);
si1=l0;
si2=20U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L22:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L21:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L20:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L19:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L18:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L17:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L16:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L15:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L14:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L13:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+16U);
si1=l0;
si2=20U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L12:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L11:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
L10:;
goto L0;
L9:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L8:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+16U);
si1=l0;
si2=20U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L7:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L6:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L5:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L4:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L3:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L2:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L0;
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
L0:;
}

U32 f214(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=f166(i,si0);
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
si1=1052068U;
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

U32 f1440(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=16U;
si0+=si1;
l3=si0;
si0=l0;
sj0=i64_load(i->m0,(U64)si0);
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l2;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1123848U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=154U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f682(i,si0,si1,si2);
l0=si0;
goto L1;
L2:;
si0=l0;
sj0=i64_load(i->m0,(U64)si0+8U);
l4=sj0;
si1=l0;
sj1=i64_load(i->m0,(U64)si1+16U);
si0=sj0 == sj1;
if(si0){
goto L3;
}
si0=l2;
sj1=l4;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=12U;
si0+=si1;
si1=154U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1123868U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
si1=154U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f682(i,si0,si1,si2);
l0=si0;
goto L1;
L3:;
si0=l3;
si1=l1;
si0=f1441(i,si0,si1);
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

void f1533(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f1607(i,si0,si1);
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
f1646(i,si0,si1);
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
si4=1167748U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1U;
si1=1U;
si2=1167748U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
sj1=257ULL;
sj2=1ULL;
si3=l3;
sf3=(F32)(I32)(si3);
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
si4=1167748U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1167748U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1563(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f1638(i,si0,si1,si2);
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
si0=f1639(i,si0);
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
f1638(i,si0,si1,si2);
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
si0=f1639(i,si0);
l3=si0;
si0=l0;
sj1=1ULL;
sj2=257ULL;
si3=l5;
si3=i32_load(i->m0,(U64)si3+4U);
si4=l5;
si4=i32_load(i->m0,(U64)si4+8U);
si5=l3;
si5=i32_load(i->m0,(U64)si5+4U);
si6=l3;
si6=i32_load(i->m0,(U64)si6+8U);
si3=f247(i,si3,si4,si5,si6);
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
si0=1167636U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1167636U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1167636U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1U;
si1=1U;
si2=1167636U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1944(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=96U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=32U;
si0+=si1;
si1=l6;
f1217(i,si0,si1);
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+32U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l7;
si1=l7;
sj1=i64_load(i->m0,(U64)si1+32U);
l8=sj1;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l7;
si1=24U;
si0+=si1;
si1=l6;
f1325(i,si0,si1);
si0=l7;
si0=i32_load16_u(i->m0,(U64)si0+26U);
l5=si0;
si0=l7;
si0=i32_load16_u(i->m0,(U64)si0+24U);
l4=si0;
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+8U);
sj2=1ULL;
sj1+=sj2;
l9=sj1;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l1;
sj0=i64_load(i->m0,(U64)si0+128U);
l10=sj0;
si0=!(sj0);
if(si0){
goto L6;
}
sj0=l9;
sj1=l10;
si0=sj0 > sj1;
if(si0){
goto L3;
}
L6:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+120U);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l7;
si1=48U;
si0+=si1;
si1=l2;
sj2=l9;
si3=l1;
si4=124U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+20U);
TF(i->t0,si3,void (*)(glicolwasmInstance*,U32,U32,U64))(i,si0,si1,sj2);
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+48U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l7;
sj0=i64_load(i->m0,(U64)si0+48U);
l9=sj0;
si0=l7;
si1=60U;
si0+=si1;
si1=l5;
i32_store16(i->m0,(U64)si0,si1);
si0=l7;
si1=l4;
i32_store16(i->m0,(U64)si0+58U,si1);
si0=l7;
sj1=l9;
i64_store(i->m0,(U64)si0+64U,sj1);
si0=l7;
si1=29U;
i32_store8(i->m0,(U64)si0+56U,si1);
si0=l7;
si1=56U;
si0+=si1;
si0=f97(i,si0);
l6=si0;
si0=l7;
si1=0U;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l7;
si1=56U;
si0+=si1;
f1488(i,si0);
goto L2;
L5:;
si0=l7;
si1=32U;
si0+=si1;
f1001(i,si0);
si0=l7;
si1=56U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
f1901(i,si0,si1,si2,si3,si4,si5,si6);
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+56U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l7;
sj0=i64_load(i->m0,(U64)si0+56U);
l9=sj0;
si0=l7;
si1=8U;
si0+=si1;
si1=l6;
f1325(i,si0,si1);
si0=l0;
si1=l7;
si1=i32_load(i->m0,(U64)si1+8U);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l9;
i64_store(i->m0,(U64)si0,sj1);
goto L1;
L7:;
si0=l0;
si1=l7;
si1=i32_load(i->m0,(U64)si1+60U);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=l7;
si1=16U;
si0+=si1;
si1=l6;
f1325(i,si0,si1);
si0=l0;
si1=l7;
si1=i32_load(i->m0,(U64)si1+16U);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=l8;
i64_store(i->m0,(U64)si0,sj1);
goto L1;
L3:;
si0=l7;
si1=60U;
si0+=si1;
si1=l5;
i32_store16(i->m0,(U64)si0,si1);
si0=l7;
si1=l4;
i32_store16(i->m0,(U64)si0+58U,si1);
si0=l7;
si1=24U;
i32_store8(i->m0,(U64)si0+56U,si1);
si0=l7;
si1=56U;
si0+=si1;
si0=f97(i,si0);
l6=si0;
L2:;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l7;
si1=40U;
si0+=si1;
f1032(i,si0);
L1:;
si0=l7;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1795(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+20U);
si2=1178584U;
si3=0U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(i->m0,(U64)si4);
si4=i32_load(i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+17U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l0;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
si2=1117540U;
si0=f678(i,si0,si1,si2);
si1=l2;
si2=24U;
si1+=si2;
si2=1117556U;
si0=f678(i,si0,si1,si2);
si1=l2;
si2=28U;
si1+=si2;
si2=1119520U;
si0=f678(i,si0,si1,si2);
si0=f679(i,si0);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f1962(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=l2;
si2=1116632U;
si0=f2057(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1116656U;
si1=55U;
si2=l2;
si3=15U;
si2+=si3;
si3=1116712U;
si4=1116804U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f2997(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
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
i64_store(i->m0,(U64)si0+24U,sj1);
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
goto L3;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+48U);
l7=si0;
si1=l4;
si0=f1721(i,si0,si1);
l8=si0;
si0=l5;
si1=1127312U;
si2=9U;
si3=l2;
si4=l5;
si5=24U;
si4+=si5;
si1=f1941(i,si1,si2,si3,si4);
l3=si1;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
l2=si0;
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
goto L6;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
goto L5;
L6:;
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+20U);
l9=si0;
L5:;
si0=l9;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=36U;
si0+=si1;
si1=l8;
si1=i32_load(i->m0,(U64)si1);
si2=8U;
si1+=si2;
f1368(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l8;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
goto L9;
L10:;
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l8=si0;
L9:;
si0=l5;
si1=36U;
si0+=si1;
si1=l8;
si2=l3;
f1375(i,si0,si1,si2);
si0=l5;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=36U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+36U);
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=48U;
si0+=si1;
si0=f81(i,si0);
l3=si0;
si0=l5;
si1=32U;
si0+=si1;
f1035(i,si0);
goto L7;
L8:;
si0=l8;
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
goto L1;
}
si0=l5;
si1=32U;
si0+=si1;
f1035(i,si0);
L7:;
si0=l5;
si1=24U;
si0+=si1;
f1032(i,si0);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l4;
f1704(i,si0,si1);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=1U;
si1=l4;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1174776U;
f14(i,si0);
UNREACHABLE;
L2:;
si0=1174576U;
f14(i,si0);
UNREACHABLE;
L1:;
UNREACHABLE;
L0:;
}

void f2901(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
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
si1=f1278(i,si1);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=0U;
si1=0U;
si2=1174076U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1216(glicolwasmInstance*i,U32 l0) {
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
si0=0U;
l2=si0;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
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
goto L4;
case 6:
goto L2;
case 7:
goto L2;
case 8:
goto L3;
case 9:
goto L4;
default:
goto L1;
}
L4:;
si0=1U;
l2=si0;
goto L1;
L3:;
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
f1256(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si1=20U;
si0*=si1;
l0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
L5:;
{
si0=l0;
si0=!(si0);
l2=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=-20U;
si0+=si1;
l0=si0;
si0=l3;
si1=8U;
si0+=si1;
l4=si0;
si0=l3;
si1=20U;
si0+=si1;
l3=si0;
si0=l4;
si0=f1216(i,si0);
if(si0){
goto L5;
}
goto L1;
}
L2:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=l0;
si2=8U;
si1+=si2;
l0=si1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
si2=l3;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=8U;
si0+=si1;
si0=f1329(i,si0);
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

U32 f741(glicolwasmInstance*i) {
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
si2=32U;
f719(i,si0,si1,si2);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L1;
}
UNREACHABLE;
L1:;
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f762(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f445(i,si0,si1);
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
si2=4U;
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
L0:;
}

void f1295(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
goto L1;
L2:;
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

F64 f3101(glicolwasmInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
F64 l3=0;
F64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7,sd8,sd9;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1072693247U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si1=1071644672U;
si0=si0 < si1;
if(si0){
goto L3;
}
sj0=l1;
sj1=-1ULL;
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L4;
}
sd0=1;
sd1=l0;
sd0-=sd1;
sd1=0.5;
sd0*=sd1;
l0=sd0;
sd1=l0;
sd1=sqrt(sd1);
l3=sd1;
sj1=i64_reinterpret_f64(sd1);
sj2=-4294967296ULL;
sj1&=sj2;
sd1=f64_reinterpret_i64(sj1);
l4=sd1;
sd2=l4;
sd1*=sd2;
sd0-=sd1;
sd1=l3;
sd2=l4;
sd1+=sd2;
sd0/=sd1;
sd1=l3;
sd2=l0;
sd3=l0;
sd4=l0;
sd5=l0;
sd6=l0;
sd7=l0;
sd8=3.4793310759602117e-05;
sd7*=sd8;
sd8=0.00079153499428981453;
sd7+=sd8;
sd6*=sd7;
sd7=-0.040055534500679411;
sd6+=sd7;
sd5*=sd6;
sd6=0.20121253213486293;
sd5+=sd6;
sd4*=sd5;
sd5=-0.32556581862240092;
sd4+=sd5;
sd3*=sd4;
sd4=0.16666666666666666;
sd3+=sd4;
sd2*=sd3;
sd3=l0;
sd4=l0;
sd5=l0;
sd6=l0;
sd7=0.077038150555901935;
sd6*=sd7;
sd7=-0.68828397160545329;
sd6+=sd7;
sd5*=sd6;
sd6=2.0209457602335057;
sd5+=sd6;
sd4*=sd5;
sd5=-2.4033949117344142;
sd4+=sd5;
sd3*=sd4;
sd4=1;
sd3+=sd4;
sd2/=sd3;
sd1*=sd2;
sd0+=sd1;
sd1=l4;
sd0+=sd1;
l0=sd0;
sd1=l0;
sd0+=sd1;
goto L0;
L4:;
sd0=1.5707963267948966;
sd1=l0;
sd2=1;
sd1+=sd2;
sd2=0.5;
sd1*=sd2;
l0=sd1;
sd1=sqrt(sd1);
l4=sd1;
sd2=l4;
sd3=l0;
sd4=l0;
sd5=l0;
sd6=l0;
sd7=l0;
sd8=l0;
sd9=3.4793310759602117e-05;
sd8*=sd9;
sd9=0.00079153499428981453;
sd8+=sd9;
sd7*=sd8;
sd8=-0.040055534500679411;
sd7+=sd8;
sd6*=sd7;
sd7=0.20121253213486293;
sd6+=sd7;
sd5*=sd6;
sd6=-0.32556581862240092;
sd5+=sd6;
sd4*=sd5;
sd5=0.16666666666666666;
sd4+=sd5;
sd3*=sd4;
sd4=l0;
sd5=l0;
sd6=l0;
sd7=l0;
sd8=0.077038150555901935;
sd7*=sd8;
sd8=-0.68828397160545329;
sd7+=sd8;
sd6*=sd7;
sd7=2.0209457602335057;
sd6+=sd7;
sd5*=sd6;
sd6=-2.4033949117344142;
sd5+=sd6;
sd4*=sd5;
sd5=1;
sd4+=sd5;
sd3/=sd4;
sd2*=sd3;
sd3=-6.123233995736766e-17;
sd2+=sd3;
sd1+=sd2;
sd0-=sd1;
l0=sd0;
sd1=l0;
sd0+=sd1;
l4=sd0;
goto L1;
L3:;
sd0=1.5707963267948966;
l4=sd0;
si0=l2;
si1=1012924417U;
si0=si0 < si1;
if(si0){
goto L1;
}
sd0=6.123233995736766e-17;
sd1=l0;
sd2=l0;
sd1*=sd2;
l4=sd1;
sd2=l4;
sd3=l4;
sd4=l4;
sd5=l4;
sd6=l4;
sd7=3.4793310759602117e-05;
sd6*=sd7;
sd7=0.00079153499428981453;
sd6+=sd7;
sd5*=sd6;
sd6=-0.040055534500679411;
sd5+=sd6;
sd4*=sd5;
sd5=0.20121253213486293;
sd4+=sd5;
sd3*=sd4;
sd4=-0.32556581862240092;
sd3+=sd4;
sd2*=sd3;
sd3=0.16666666666666666;
sd2+=sd3;
sd1*=sd2;
sd2=l4;
sd3=l4;
sd4=l4;
sd5=l4;
sd6=0.077038150555901935;
sd5*=sd6;
sd6=-0.68828397160545329;
sd5+=sd6;
sd4*=sd5;
sd5=2.0209457602335057;
sd4+=sd5;
sd3*=sd4;
sd4=-2.4033949117344142;
sd3+=sd4;
sd2*=sd3;
sd3=1;
sd2+=sd3;
sd1/=sd2;
sd2=l0;
sd1*=sd2;
sd0-=sd1;
sd1=l0;
sd0-=sd1;
sd1=1.5707963267948966;
sd0+=sd1;
goto L0;
L2:;
si0=l2;
si1=-1072693248U;
si0+=si1;
sj1=l1;
si1=(U32)(sj1);
si0|=si1;
si0=!(si0);
if(si0){
goto L5;
}
sd0=0;
sd1=l0;
sd2=l0;
sd1-=sd2;
sd0/=sd1;
goto L0;
L5:;
sd0=0;
sd1=3.1415926535897931;
sj2=l1;
sj3=-1ULL;
si2=(U64)((I64)sj2>(I64)sj3);
sd0=si2?sd0:sd1;
goto L0;
L1:;
sd0=l4;
L0:;
return sd0;
}

U32 f574(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si1=1U;
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
l5=si1;
si2=l5;
si3=1U;
si2+=si3;
l6=si2;
si3=3U;
si2>>=(si3&31);
l7=si2;
si3=7U;
si2*=si3;
si3=l5;
si4=8U;
si3=si3 < si4;
si1=si3?si1:si2;
l5=si1;
si2=1U;
si1>>=(si2&31);
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l4;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si2=l4;
si3=l5;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l4;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=-1U;
si1=l4;
si2=3U;
si1<<=(si2&31);
si2=7U;
si1=DIV_U(si1,si2);
si2=-1U;
si1+=si2;
si1=I32_CLZ(si1);
si0>>=(si1&31);
si1=1U;
si0+=si1;
l4=si0;
goto L4;
L7:;
si0=l7;
si1=l6;
si2=7U;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l5=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
l4=si0;
L8:;
{
si0=l5;
if(si0){
goto L9;
}
si0=l6;
si1=8U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l7;
si1=l6;
si0+=si1;
si1=l7;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
goto L10;
L11:;
si0=l7;
si1=8U;
si0+=si1;
si1=l7;
si2=l6;
si0=f3076(i,si0,si1,si2);
L10:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l5=si0;
si0=0U;
l8=si0;
L12:;
{
si0=l8;
l3=si0;
si1=l6;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l3;
si1=1U;
si0+=si1;
l8=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si1=l3;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l4;
si1=l3;
si2=-1U;
si1^=si2;
si2=28U;
si1*=si2;
si0+=si1;
l9=si0;
L15:;
{
si0=l3;
si1=l5;
si2=l4;
si3=l3;
sj2=f592(i,si2,si3);
l10=sj2;
si2=(U32)(sj2);
si1&=si2;
l11=si1;
si0-=si1;
si1=l4;
si2=l5;
sj3=l10;
si1=f588(i,si1,si2,sj3);
l7=si1;
si2=l11;
si1-=si2;
si0^=si1;
si1=l5;
si0&=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L13;
}
si0=l4;
si1=l7;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l11=si0;
si0=l4;
si1=l5;
si2=l7;
sj3=l10;
f585(i,si0,si1,si2,sj3);
si0=l4;
si1=l7;
si2=-1U;
si1^=si2;
si2=28U;
si1*=si2;
si0+=si1;
l7=si0;
si0=l11;
si1=255U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l9;
si1=l7;
si2=28U;
f280(i,si0,si1,si2);
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
goto L15;
L16:;
}
si0=l4;
si1=l3;
si0+=si1;
si1=255U;
i32_store8(i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
si2=-8U;
si1+=si2;
si0&=si1;
si1=l4;
si0+=si1;
si1=8U;
si0+=si1;
si1=255U;
i32_store8(i->m0,(U64)si0,si1);
si0=l7;
si1=24U;
si0+=si1;
si1=l9;
si2=24U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=16U;
si0+=si1;
si1=l9;
si2=16U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=l9;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
goto L12;
L14:;
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
l4=si1;
si2=l4;
si3=1U;
si2+=si3;
si3=3U;
si2>>=(si3&31);
si3=7U;
si2*=si3;
si3=l4;
si4=8U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=l0;
si2=i32_load(i->m0,(U64)si2+12U);
si1-=si2;
i32_store(i->m0,(U64)si0+8U,si1);
goto L3;
L13:;
si0=l4;
si1=l5;
si2=l3;
sj3=l10;
f585(i,si0,si1,si2,sj3);
goto L12;
}
L9:;
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1);
l10=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=7ULL;
sj1>>=(sj2&63);
sj2=72340172838076673ULL;
sj1&=sj2;
sj2=l10;
sj3=9187201950435737471ULL;
sj2|=sj3;
sj1+=sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
goto L8;
}
L6:;
si0=4U;
si1=8U;
si2=l4;
si3=4U;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
goto L4;
L5:;
f584(i);
UNREACHABLE;
L4:;
si0=l2;
si1=40U;
si0+=si1;
si1=28U;
si2=l4;
f485(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0+40U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+48U);
l8=si0;
si0=l4;
si1=255U;
si2=l2;
si2=i32_load(i->m0,(U64)si2+44U);
l11=si2;
si3=9U;
si2+=si3;
si0=f3112(i,si0,si1,si2);
l7=si0;
si0=l2;
si1=l11;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l7;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
l10=sj0;
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l2;
sj1=l10;
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
L17:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L19;
}
L20:;
{
si0=l2;
si1=l2;
si2=40U;
si1+=si2;
f43(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+56U);
l4=si1;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+48U);
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+8U);
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(i->m0,(U64)si0+40U,sj1);
goto L20;
}
L19:;
si0=l2;
si1=l0;
si1=i32_load(i->m0,(U64)si1+12U);
l4=si1;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l8;
si2=l4;
si1-=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=0U;
l4=si0;
L22:;
{
si0=l4;
si1=16U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l0;
si1=l4;
si0+=si1;
l5=si0;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si0=l5;
si1=l2;
si2=12U;
si1+=si2;
si2=l4;
si1+=si2;
si2=12U;
si1+=si2;
l3=si1;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
goto L22;
}
L21:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
si1=l4;
si2=28U;
f268(i,si0,si1,si2);
goto L3;
L18:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+52U);
si2=-1U;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l7;
si1=l11;
si2=l7;
si3=l11;
si4=l9;
si5=l4;
si6=l2;
si6=i32_load(i->m0,(U64)si6+48U);
si5+=si6;
l5=si5;
sj4=f592(i,si4,si5);
l10=sj4;
si2=f588(i,si2,si3,sj4);
l4=si2;
sj3=l10;
f585(i,si0,si1,si2,sj3);
si0=l7;
si1=l4;
si2=-1U;
si1^=si2;
si2=28U;
si1*=si2;
si0+=si1;
l4=si0;
si1=l9;
si2=l5;
si3=-1U;
si2^=si3;
si3=28U;
si2*=si3;
si1+=si2;
l5=si1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
goto L17;
}
L3:;
si0=-2147483647U;
l4=si0;
goto L1;
L2:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+44U);
l4=si0;
L1:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

void f1014(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
si0=0U;
l4=si0;
si0=l2;
si1=2U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l1;
si0+=si1;
l5=si0;
si1=-8U;
si0+=si1;
l6=si0;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si1=l6;
si1=i32_load(i->m0,(U64)si1+4U);
si0+=si1;
si1=l3;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=-16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l2;
si1=2U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l1;
si1=l2;
si2=-3U;
si1+=si2;
l3=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si1=l5;
si2=l7;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l2;
si1=3U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
si1=l1;
si0+=si1;
si1=-32U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l6;
si2=l5;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L4;
}
goto L1;
L5:;
si0=l2;
si1=3U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l1;
si1=l2;
si2=-3U;
si1+=si2;
l3=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
L4:;
si0=1U;
l4=si0;
si0=l6;
si1=l7;
si0=si0 < si1;
if(si0){
goto L1;
}
L3:;
si0=l2;
si1=-2U;
si0+=si1;
l3=si0;
si0=1U;
l4=si0;
goto L1;
L2:;
L1:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f191(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=2U;
f360(i,si0,si1,si2,si3,si4);
si0=l0;
si1=1U;
i32_store16(i->m0,(U64)si0+72U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+64U,si1);
L0:;
}

void f2854(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
F32 sf1,sf2;
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
sf2=57.2957802;
sf1*=sf2;
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
si2=1173676U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1812(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
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
i32_store8(i->m0,(U64)si0+25U,si1);
si0=l2;
si1=l3;
i32_store8(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
f1243(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
si1=2U;
si0<<=(si1&31);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
L2:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=20U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
si2=179U;
si0=f244(i,si0,si1,si2);
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
goto L2;
}
L1:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+24U);
si0=f245(i,si0,si1);
l1=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f2803(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
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
si1=4U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f2797(i,si0,si1);
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
f2792(i,si0,si1,si2);
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
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=16U;
si0+=si1;
si0=f2793(i,si0);
l3=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=l5;
si2=4U;
si1+=si2;
f2802(i,si0,si1);
goto L3;
L4:;
si0=l5;
si1=4U;
si0+=si1;
f297(i,si0);
L3:;
si0=l0;
sj1=0ULL;
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
si0=1U;
si1=l4;
si2=1172992U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1173152U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f2639(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
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
f2640(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l3=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
sj1=257ULL;
sj2=1ULL;
si3=l5;
si3=i32_load(i->m0,(U64)si3+8U);
l7=si3;
si4=l3;
si3=f2641(i,si3,si4);
l8=si3;
si3=i32_load(i->m0,(U64)si3+4U);
si4=l4;
si3=(U32)((I32)si3>(I32)si4);
sj1=si3?sj1:sj2;
sj2=1ULL;
si3=l8;
si3=i32_load(i->m0,(U64)si3);
si4=l4;
si3=(U32)((I32)si3<=(I32)si4);
sj1=si3?sj1:sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=l3;
f1704(i,si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=l4;
si2=1172096U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1172268U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f2022(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si1=i32_load(i->m0,(U64)si1+20U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+24U);
si0=f1792(i,si0,si1,si2);
L0:;
return si0;
}

void f539(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si4=1058900U;
si1=f2(i,si1,si2,si3,si4);
si1=i32_load(i->m0,(U64)si1);
si2=1058916U;
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
si3=1058964U;
f371(i,si0,si1,si2,si3);
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
si0=f3065(i,si0,si1,si2);
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
si2=1058948U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1058932U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1633(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=8U;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l4;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
goto L1;
L2:;
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
f1004(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l4=si0;
L1:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=8U;
si0+=si1;
l4=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l5;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
goto L7;
L8:;
si0=l2;
si1=16U;
si0+=si1;
si1=l4;
f1004(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l5=si0;
L7:;
si0=l5;
if(si0){
goto L4;
}
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
l0=si0;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L5;
}
goto L3;
L6:;
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l1=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
L5:;
UNREACHABLE;
L4:;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l1;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
goto L9;
L10:;
si0=l2;
si1=8U;
si0+=si1;
si1=l4;
f1004(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l0=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
L9:;
si0=l2;
si1=l3;
f392(i,si0,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=l1;
si2=l0;
si3=l2;
si3=i32_load(i->m0,(U64)si3);
si4=l2;
si4=i32_load(i->m0,(U64)si4+4U);
si5=1178584U;
si6=0U;
f1668(i,si0,si1,si2,si3,si4,si5,si6);
si0=l2;
si1=36U;
si0+=si1;
si0=f1479(i,si0);
l0=si0;
L3:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f1692(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=2U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l4;
si1=48U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
f1625(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
sj0=i64_load(i->m0,(U64)si0+52U);
l5=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+52U);
si1=l4;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si0=f1626(i,si0,si1);
l7=si0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l8=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l8;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
goto L9;
L10:;
si0=l4;
si1=16U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+20U);
l8=si0;
L9:;
sj0=l6;
si0=(U32)(sj0);
l1=si0;
sj0=l5;
si0=(U32)(sj0);
l9=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=40U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
l10=si1;
f1636(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+40U);
l2=si0;
if(si0){
goto L6;
}
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si1=i32_load(i->m0,(U64)si1+44U);
f1743(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+32U);
l2=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l11=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l11;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l8;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
goto L11;
L12:;
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
L11:;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l4;
si1=l8;
si2=l2;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l4;
si2=48U;
si1+=si2;
si0=f1634(i,si0,si1);
l2=si0;
if(si0){
goto L13;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
goto L14;
L15:;
si0=l4;
si1=l3;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
L14:;
si0=l4;
si1=24U;
si0+=si1;
si1=l2;
si2=l3;
f156(i,si0,si1,si2);
si0=l4;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+24U);
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l9;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L16:;
si0=l4;
si1=48U;
si0+=si1;
si0=f1479(i,si0);
l3=si0;
si0=l4;
si1=24U;
si0+=si1;
si1=l10;
f1710(i,si0,si1);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+28U);
l1=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+24U);
l8=si0;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+24U);
l5=sj0;
si0=(U32)(sj0);
l2=si0;
si1=l2;
si2=8U;
si1+=si2;
sj2=l5;
sj3=1095216660480ULL;
sj2&=sj3;
l5=sj2;
sj3=8589934592ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
l9=si0;
f1032(i,si0);
si0=l2;
sj1=l5;
sj2=8589934592ULL;
si1=sj1 != sj2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
si0=l9;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l1;
f1704(i,si0,si1);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
goto L1;
L13:;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+24U);
si1=l4;
si1=i32_load(i->m0,(U64)si1+28U);
f58(i,si0,si1);
goto L2;
L8:;
si0=1129704U;
f14(i,si0);
UNREACHABLE;
L7:;
si0=1U;
si1=l3;
si2=1129688U;
f4(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+44U);
i32_store(i->m0,(U64)si0+52U,si1);
si0=l4;
si1=l2;
i32_store(i->m0,(U64)si0+48U,si1);
si0=1178224U;
si1=43U;
si2=l4;
si3=48U;
si2+=si3;
si3=1119036U;
si4=1129720U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1129736U;
f14(i,si0);
UNREACHABLE;
L4:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=1129752U;
f14(i,si0);
UNREACHABLE;
L2:;
si0=l9;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1135(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
if(si0){
goto L3;
}
si0=l0;
si1=4U;
si0+=si1;
l1=si0;
goto L2;
L3:;
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
l1=si0;
L2:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
si2=4U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
f1136(i,si0,si1);
L1:;
L0:;
}

void f2895(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=8U;
si0+=si1;
f2894(i,si0);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l4;
si2=1178584U;
si3=0U;
si1=f1003(i,si1,si2,si3);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
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
si0=1174076U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f1867(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
si0=f1883(i,si0);
l2=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si0=f1884(i,si0);
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+24U);
si0=f1884(i,si0);
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+28U);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1);
l6=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L2:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+52U);
l7=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+40U);
l8=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+36U);
l9=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+32U);
l10=si0;
si0=l1;
sj0=i64_load(i->m0,(U64)si0+8U);
l11=sj0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+44U);
l6=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=l6;
si1=i32_load(i->m0,(U64)si1);
l12=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l12;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L3:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+48U);
l12=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l12;
si1=l12;
si1=i32_load(i->m0,(U64)si1);
l13=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l13;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
L4:;
si0=l0;
si1=l1;
f83(i,si0,si1);
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l7;
i32_store8(i->m0,(U64)si0+52U,si1);
si0=l0;
si1=l8;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l9;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l10;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l0;
sj1=l11;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l12;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0+44U,si1);
goto L0;
L1:;
UNREACHABLE;
L0:;
}

void f1040(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
f1035(i,si0);
si0=l0;
si1=4U;
si0+=si1;
f1041(i,si0);
si0=l0;
si1=8U;
si0+=si1;
f1042(i,si0);
si0=l0;
si1=12U;
si0+=si1;
f1043(i,si0);
L0:;
}

void f162(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l1;
if(si0){
goto L4;
}
si0=4U;
l2=si0;
goto L3;
L4:;
si0=l1;
si1=4194303U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=9U;
si0<<=(si1&31);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l3;
si0=f227(i,si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=l1;
si1=1U;
si2=l1;
si3=1U;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
si1=-1U;
si0+=si1;
l3=si0;
si0=l2;
l5=si0;
L7:;
{
si0=l3;
if(si0){
goto L8;
}
si0=l1;
if(si0){
goto L6;
}
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
goto L5;
L8:;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l5;
si1=0U;
si2=512U;
si0=f3112(i,si0,si1,si2);
si1=512U;
si0+=si1;
l5=si0;
goto L7;
}
L6:;
si0=l5;
si1=0U;
si2=512U;
si0=f3112(i,si0,si1,si2);
L5:;
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+8U,si1);
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

U32 f711(glicolwasmInstance*i,U32 l0,F64 l1,U32 l2,U32 l3) {
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
U32 l15=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1;
si0=i->g0;
si1=1152U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
l5=sj0;
sd0=l1;
sd1=l1;
si0=sd0 == sd1;
if(si0){
goto L8;
}
si0=2U;
l6=si0;
goto L7;
L8:;
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
goto L7;
case 1:
goto L11;
case 2:
goto L10;
case 3:
goto L9;
default:
goto L7;
}
L11:;
si0=4U;
l6=si0;
goto L7;
L10:;
si0=l8;
si1=-1075U;
si0+=si1;
l13=si0;
sj0=l10;
si0=!(sj0);
l6=si0;
sj0=1ULL;
l14=sj0;
goto L7;
L9:;
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
L7:;
si0=l4;
si1=l13;
i32_store16(i->m0,(U64)si0+1144U,si1);
si0=l4;
sj1=l14;
i64_store(i->m0,(U64)si0+1136U,sj1);
si0=l4;
sj1=1ULL;
i64_store(i->m0,(U64)si0+1128U,sj1);
si0=l4;
sj1=l9;
i64_store(i->m0,(U64)si0+1120U,sj1);
si0=l4;
si1=l6;
i32_store8(i->m0,(U64)si0+1146U,si1);
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
l8=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=1151321U;
si1=1151320U;
si2=1178584U;
si3=l2;
si1=si3?si1:si2;
sj2=l5;
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
si0=si2?si0:si1;
l12=si0;
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
si0=l8;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
case 2:
goto L16;
default:
goto L14;
}
L16:;
si0=-12U;
si1=5U;
si2=l13;
si2=(U32)(I32)(I16)(U16)(si2);
l6=si2;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
si1=l6;
si0*=si1;
l6=si0;
si0=l3;
si1=1025U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l6;
si1=16064U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=1067202U;
si1=61U;
si2=1067264U;
f16(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l4;
si1=3U;
i32_store(i->m0,(U64)si0+1040U,si1);
si0=l4;
si1=1067146U;
i32_store(i->m0,(U64)si0+1036U,si1);
si0=l4;
si1=2U;
i32_store16(i->m0,(U64)si0+1032U,si1);
si0=1U;
l6=si0;
si0=0U;
l2=si0;
si0=1178584U;
l12=si0;
goto L1;
L14:;
si0=l4;
si1=3U;
i32_store(i->m0,(U64)si0+1040U,si1);
si0=l4;
si1=1067149U;
i32_store(i->m0,(U64)si0+1036U,si1);
si0=l4;
si1=2U;
i32_store16(i->m0,(U64)si0+1032U,si1);
goto L1;
L13:;
si0=l4;
si1=2U;
i32_store16(i->m0,(U64)si0+1032U,si1);
si0=l3;
si1=1U;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l4;
si1=3U;
i32_store(i->m0,(U64)si0+1040U,si1);
si0=l4;
si1=1067152U;
i32_store(i->m0,(U64)si0+1036U,si1);
si0=1U;
l6=si0;
goto L1;
L17:;
si0=l4;
si1=1064U;
si0+=si1;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=1060U;
si0+=si1;
si1=1067200U;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=1048U;
si0+=si1;
si1=l3;
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store16(i->m0,(U64)si0+1056U,si1);
si0=l4;
si1=0U;
i32_store16(i->m0,(U64)si0+1044U,si1);
si0=l4;
si1=2U;
i32_store(i->m0,(U64)si0+1040U,si1);
si0=l4;
si1=1067108U;
i32_store(i->m0,(U64)si0+1036U,si1);
si0=3U;
l6=si0;
goto L1;
L12:;
si0=l6;
si1=4U;
si0>>=(si1&31);
si1=21U;
si0+=si1;
l6=si0;
si1=l3;
si2=l6;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
si1=1025U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si1=1032U;
si0+=si1;
sj1=l9;
si2=l13;
si3=l4;
si4=8U;
si3+=si4;
si4=l6;
si5=32768U;
f661(i,si0,sj1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(i->m0,(U64)si0+1032U);
if(si0){
goto L19;
}
si0=l4;
si1=1104U;
si0+=si1;
si1=l4;
si2=1120U;
si1+=si2;
si2=l4;
si3=8U;
si2+=si3;
si3=l6;
si4=32768U;
f659(i,si0,si1,si2,si3,si4);
goto L18;
L19:;
si0=l4;
si1=1104U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=1032U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+1032U);
i64_store(i->m0,(U64)si0+1104U,sj1);
L18:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+1108U);
l13=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+1104U);
l15=si0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=48U;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load16_s(i->m0,(U64)si0+1112U);
l8=si0;
si0=l4;
si1=1U;
i32_store(i->m0,(U64)si0+1040U,si1);
si0=l4;
si1=l15;
i32_store(i->m0,(U64)si0+1036U,si1);
si0=l4;
si1=2U;
i32_store16(i->m0,(U64)si0+1032U,si1);
si0=1U;
l6=si0;
si0=l13;
si1=l3;
si0|=si1;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l4;
si1=1064U;
si0+=si1;
si1=l13;
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=1060U;
si0+=si1;
si1=l15;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=1052U;
si0+=si1;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=1048U;
si0+=si1;
si1=1124684U;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store16(i->m0,(U64)si0+1056U,si1);
si0=l4;
si1=2U;
i32_store16(i->m0,(U64)si0+1044U,si1);
si0=3U;
l6=si0;
si0=l3;
si1=l13;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l4;
si1=1072U;
si0+=si1;
si1=l3;
si2=l13;
si1-=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=0U;
i32_store16(i->m0,(U64)si0+1068U,si1);
si0=4U;
l6=si0;
goto L2;
L6:;
si0=1067155U;
si1=29U;
si2=1067184U;
f16(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l6;
si1=1024U;
si2=1067280U;
f376(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1066768U;
si1=33U;
si2=1067112U;
f16(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1067060U;
si1=31U;
si2=1067128U;
f16(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l8;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L21;
}
si0=l4;
si1=1032U;
si0+=si1;
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l3=si0;
si1=1U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1159284U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=2U;
i32_store16(i->m0,(U64)si0,si1);
si0=l8;
si1=-1U;
si0+=si1;
l13=si0;
goto L20;
L21:;
si0=l4;
si1=1032U;
si0+=si1;
si1=l6;
si2=12U;
si1*=si2;
si0+=si1;
l3=si0;
si1=2U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=1067144U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=2U;
i32_store16(i->m0,(U64)si0,si1);
si0=1U;
si1=l8;
si0-=si1;
l13=si0;
L20:;
si0=l6;
si1=12U;
si0*=si1;
si1=l4;
si2=1032U;
si1+=si2;
si0+=si1;
l3=si0;
si1=14U;
si0+=si1;
si1=l13;
i32_store16(i->m0,(U64)si0,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=1U;
i32_store16(i->m0,(U64)si0,si1);
si0=l6;
si1=2U;
si0+=si1;
l6=si0;
L1:;
si0=l4;
si1=1116U;
si0+=si1;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
i32_store(i->m0,(U64)si0+1108U,si1);
si0=l4;
si1=l12;
i32_store(i->m0,(U64)si0+1104U,si1);
si0=l4;
si1=l4;
si2=1032U;
si1+=si2;
i32_store(i->m0,(U64)si0+1112U,si1);
si0=l0;
si1=l4;
si2=1104U;
si1+=si2;
si0=f699(i,si0,si1);
l6=si0;
si0=l4;
si1=1152U;
si0+=si1;
i->g0=si0;
si0=l6;
L0:;
return si0;
}

void f1190(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U64 l21=0;
U64 l22=0;
U32 l23=0;
U32 l24=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=384U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+96U);
l7=si1;
si2=l7;
si3=8U;
si2=si2 > si3;
si0=si2?si0:si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=24U;
si1=25U;
si2=l4;
si0=si2?si0:si1;
l8=si0;
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+225U);
si1=0U;
si0=si0 != si1;
l9=si0;
si0=l6;
si1=340U;
si0+=si1;
si1=4U;
si0+=si1;
l10=si0;
L4:;
{
si0=l6;
si1=112U;
si0+=si1;
si1=l1;
f1213(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+112U);
l11=si0;
si1=l6;
si1=i32_load(i->m0,(U64)si1+116U);
si2=12U;
si1*=si2;
si0+=si1;
l12=si0;
si0=0U;
l13=si0;
L5:;
{
si0=l11;
si1=l12;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=212U;
si0+=si1;
l14=si0;
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+226U);
l15=si0;
L9:;
{
si0=l9;
l16=si0;
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+225U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+96U);
l7=si1;
si2=l7;
si3=8U;
si2=si2 > si3;
si0=si2?si0:si1;
l11=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+220U);
l12=si0;
si0=0U;
l13=si0;
si0=0U;
l17=si0;
si0=0U;
l9=si0;
L11:;
{
si0=l17;
l7=si0;
si0=l9;
l4=si0;
L13:;
{
si0=l11;
si1=l7;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l6;
si1=80U;
si0+=si1;
si1=l1;
f1049(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+84U);
l17=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L7;
}
si0=l7;
si1=1U;
si0+=si1;
l17=si0;
si0=l13;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L14;
}
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+225U,si1);
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l17;
l7=si0;
goto L13;
L14:;
}
si0=l6;
si0=i32_load(i->m0,(U64)si0+80U);
si1=l7;
si2=12U;
si1*=si2;
l10=si1;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=30U;
si0&=si1;
si1=12U;
si0=si0 == si1;
l13=si0;
si0=0U;
l9=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=72U;
si0+=si1;
si1=l1;
f1049(i,si0,si1);
si0=l7;
si1=l4;
si0-=si1;
l18=si0;
si1=l6;
si1=i32_load(i->m0,(U64)si1+76U);
l9=si1;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l7;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l6;
si1=240U;
si0+=si1;
si1=8U;
si0+=si1;
l19=si0;
si1=l6;
si1=i32_load(i->m0,(U64)si1+72U);
l9=si1;
si2=l18;
si3=12U;
si2*=si3;
si1+=si2;
l7=si1;
si2=8U;
si1+=si2;
l18=si1;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=l7;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+240U,sj1);
si0=l9;
si1=l10;
si0+=si1;
l9=si0;
si1=8U;
si0+=si1;
l10=si0;
si0=i32_load(i->m0,(U64)si0);
l20=si0;
si0=l7;
si1=l9;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l18;
si1=l20;
i32_store(i->m0,(U64)si0,si1);
si0=l10;
si1=l19;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l9;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+240U);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
l9=si0;
goto L11;
L12:;
}
si0=l1;
si1=l11;
si2=l4;
si1-=si2;
f1214(i,si0,si1);
si0=l6;
si1=64U;
si0+=si1;
si1=l1;
f1049(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+64U);
l7=si0;
si1=l6;
si1=i32_load(i->m0,(U64)si1+68U);
si2=12U;
si1*=si2;
si0+=si1;
l17=si0;
L15:;
{
si0=l7;
si1=l17;
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l7;
si1=12U;
si0+=si1;
l4=si0;
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0);
si1=6U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+8U);
l11=si0;
si1=l2;
f1215(i,si0,si1);
sj0=14ULL;
l21=sj0;
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L20;
}
si0=l11;
si0=f1216(i,si0);
si0=!(si0);
if(si0){
goto L20;
}
si0=l6;
si1=240U;
si0+=si1;
si1=l11;
f1217(i,si0,si1);
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0+240U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l6;
sj0=i64_load(i->m0,(U64)si0+240U);
l21=sj0;
sj1=8ULL;
sj0>>=(sj1&63);
l22=sj0;
L20:;
si0=l11;
si0=i32_load(i->m0,(U64)si0+12U);
l11=si0;
si1=l11;
si1=i32_load(i->m0,(U64)si1);
l7=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L18;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+220U);
l7=si0;
si1=l2;
si1=i32_load(i->m0,(U64)si1+212U);
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l14;
si1=l7;
f742(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+220U);
l7=si0;
L21:;
si0=l2;
si1=l7;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+220U,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+216U);
si1=l7;
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
sj1=l22;
sj2=8ULL;
sj1<<=(sj2&63);
sj2=l21;
sj3=255ULL;
sj2&=sj3;
sj1|=sj2;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=l11;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
l7=si0;
goto L15;
L19:;
si0=l6;
si1=56U;
si0+=si1;
si1=l1;
f1213(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+60U);
si1=12U;
si0*=si1;
l7=si0;
si0=0U;
l13=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+56U);
l9=si0;
si0=0U;
l4=si0;
L22:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L24;
}
si0=l9;
si1=l7;
si0+=si1;
l11=si0;
si1=-12U;
si0+=si1;
l17=si0;
si1=l8;
si0=TF(i->t0,si1,U32 (*)(glicolwasmInstance*,U32))(i,si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l17;
si0=i32_load8_u(i->m0,(U64)si0);
l17=si0;
si1=-11U;
si0+=si1;
switch(si0){
case 0:
goto L26;
case 1:
goto L23;
case 2:
goto L23;
case 3:
goto L27;
default:
goto L28;
}
L28:;
si0=l17;
si1=6U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l11;
si1=-4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si0=f1216(i,si0);
si0=!(si0);
if(si0){
goto L23;
}
goto L25;
L27:;
si0=l11;
si1=-4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si0=f1216(i,si0);
si0=!(si0);
if(si0){
goto L25;
}
goto L23;
L26:;
si0=l11;
si1=-8U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si0=f1216(i,si0);
if(si0){
goto L23;
}
L25:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+96U);
l7=si1;
si2=l7;
si3=8U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l4;
si2=-1U;
si1^=si2;
si0+=si1;
l13=si0;
L24:;
si0=0U;
l7=si0;
L32:;
{
si0=l7;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+96U);
l4=si2;
si3=l4;
si4=8U;
si3=si3 > si4;
si1=si3?si1:si2;
l4=si1;
si0=si0 >= si1;
if(si0){
goto L36;
}
si0=l7;
si1=l4;
si2=-1U;
si1+=si2;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=l3;
si0=!(si0);
if(si0){
goto L35;
}
L36:;
si0=l3;
si0=!(si0);
if(si0){
goto L34;
}
goto L30;
L35:;
si0=l6;
si1=48U;
si0+=si1;
si1=l1;
f1213(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+52U);
l4=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L31;
}
si0=l6;
si0=i32_load(i->m0,(U64)si0+48U);
si1=l7;
si2=12U;
si1*=si2;
si0+=si1;
l4=si0;
si1=l8;
si0=TF(i->t0,si1,U32 (*)(glicolwasmInstance*,U32))(i,si0);
si0=!(si0);
if(si0){
goto L37;
}
si0=l7;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L33;
}
L37:;
si0=l4;
si0=f1212(i,si0);
if(si0){
goto L38;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
goto L32;
L38:;
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+225U,si1);
si0=l6;
si1=240U;
si0+=si1;
si1=l1;
si2=l7;
f1218(i,si0,si1,si2);
si0=l13;
si1=l7;
si2=l13;
si1=si1 < si2;
si0-=si1;
l13=si0;
si0=l6;
si1=240U;
si0+=si1;
f1054(i,si0);
goto L32;
L34:;
L39:;
{
si0=l6;
si1=40U;
si0+=si1;
si1=l1;
f1213(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+40U);
l7=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+44U);
l4=si0;
switch(si0){
case 0:
goto L29;
case 1:
goto L41;
default:
goto L40;
}
L41:;
si0=l7;
si1=l8;
si0=TF(i->t0,si1,U32 (*)(glicolwasmInstance*,U32))(i,si0);
si0=!(si0);
if(si0){
goto L40;
}
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+225U,si1);
si0=l1;
f1219(i,si0);
goto L39;
L40:;
si0=l4;
si1=12U;
si0*=si1;
si1=l7;
si0+=si1;
si1=-12U;
si0+=si1;
l7=si0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=13U;
si0=si0 != si1;
if(si0){
goto L42;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
if(si0){
goto L45;
}
si0=l5;
si0=!(si0);
if(si0){
goto L42;
}
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=8U;
si0&=si1;
if(si0){
goto L42;
}
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+225U,si1);
si0=l6;
si1=240U;
si0+=si1;
si1=l1;
f1220(i,si0,si1);
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0+240U);
si1=17U;
si0=si0 == si1;
if(si0){
goto L44;
}
si0=l6;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=240U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+240U);
i64_store(i->m0,(U64)si0+136U,sj1);
si0=l6;
si1=136U;
si0+=si1;
f1054(i,si0);
goto L39;
L45:;
si0=l5;
si0=!(si0);
if(si0){
goto L42;
}
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=8U;
si0&=si1;
if(si0){
goto L42;
}
si0=l4;
si0=f1221(i,si0);
si0=!(si0);
if(si0){
goto L42;
}
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+225U,si1);
si0=l6;
si1=240U;
si0+=si1;
si1=l1;
f1220(i,si0,si1);
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0+240U);
si1=17U;
si0=si0 == si1;
if(si0){
goto L43;
}
si0=l6;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=240U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+240U);
i64_store(i->m0,(U64)si0+136U,sj1);
si0=l6;
si1=136U;
si0+=si1;
f1054(i,si0);
goto L39;
L44:;
si0=1146224U;
f14(i,si0);
UNREACHABLE;
L43:;
si0=1146240U;
f14(i,si0);
UNREACHABLE;
L42:;
si0=l7;
si1=l8;
si0=TF(i->t0,si1,U32 (*)(glicolwasmInstance*,U32))(i,si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+225U,si1);
si0=l6;
si1=240U;
si0+=si1;
si1=l1;
f1220(i,si0,si1);
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0+240U);
si1=17U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l6;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=240U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+240U);
i64_store(i->m0,(U64)si0+136U,sj1);
si0=l6;
si1=136U;
si0+=si1;
f1054(i,si0);
goto L39;
L46:;
}
si0=1146256U;
f14(i,si0);
UNREACHABLE;
L33:;
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+225U,si1);
si0=l6;
si1=240U;
si0+=si1;
si1=l1;
si2=l7;
f1218(i,si0,si1,si2);
si0=l6;
si1=240U;
si0+=si1;
f1054(i,si0);
goto L32;
}
L31:;
si0=l7;
si1=l4;
si2=1146208U;
f4(i,si0,si1,si2);
UNREACHABLE;
L30:;
L51:;
{
si0=l6;
si1=32U;
si0+=si1;
si1=l1;
f1049(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+32U);
l7=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+36U);
l4=si0;
switch(si0){
case 0:
goto L29;
case 1:
goto L57;
default:
goto L56;
}
L57:;
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0);
l17=si0;
si1=13U;
si0=si0 != si1;
if(si0){
goto L55;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+4U);
if(si0){
goto L54;
}
si0=l5;
si0=!(si0);
if(si0){
goto L54;
}
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=8U;
si0&=si1;
if(si0){
goto L54;
}
goto L53;
L56:;
si0=l4;
si1=12U;
si0*=si1;
si1=l7;
si0+=si1;
l11=si0;
si1=-12U;
si0+=si1;
l17=si0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=13U;
si0=si0 != si1;
if(si0){
goto L52;
}
si0=l17;
si0=i32_load(i->m0,(U64)si0+4U);
if(si0){
goto L52;
}
si0=l5;
si0=!(si0);
if(si0){
goto L52;
}
si0=l17;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=8U;
si0&=si1;
if(si0){
goto L52;
}
si0=1U;
si1=l11;
si2=-24U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
si0<<=(si1&31);
si1=128249U;
si0&=si1;
si0=!(si0);
if(si0){
goto L52;
}
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+225U,si1);
si0=l6;
si1=240U;
si0+=si1;
si1=l1;
f1220(i,si0,si1);
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0+240U);
si1=17U;
si0=si0 == si1;
if(si0){
goto L50;
}
si0=l6;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=240U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+240U);
i64_store(i->m0,(U64)si0+136U,sj1);
si0=l6;
si1=136U;
si0+=si1;
f1054(i,si0);
goto L51;
L55:;
si0=1U;
si1=l17;
si0<<=(si1&31);
si1=128249U;
si0&=si1;
si0=!(si0);
if(si0){
goto L52;
}
L54:;
si0=l7;
si1=l8;
si0=TF(i->t0,si1,U32 (*)(glicolwasmInstance*,U32))(i,si0);
si0=!(si0);
if(si0){
goto L52;
}
L53:;
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+225U,si1);
si0=l1;
f1219(i,si0);
goto L51;
L52:;
si0=l4;
si1=12U;
si0*=si1;
si1=l7;
si0+=si1;
l17=si0;
si1=-12U;
si0+=si1;
l7=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l11=si0;
si1=13U;
si0=si0 != si1;
if(si0){
goto L61;
}
si0=l5;
if(si0){
goto L60;
}
L61:;
si0=l4;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L29;
}
si0=l17;
si1=-24U;
si0+=si1;
l4=si0;
si0=l11;
if(si0){
goto L59;
}
si0=1U;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1);
si0<<=(si1&31);
si1=128249U;
si0&=si1;
si0=!(si0);
if(si0){
goto L29;
}
goto L58;
L60:;
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L62;
}
si0=l4;
si1=2U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l17;
si1=-24U;
si0+=si1;
l4=si0;
goto L58;
L62:;
si0=l7;
si1=10U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l11=si0;
si0=l7;
si0=i32_load16_u(i->m0,(U64)si0+8U);
l4=si0;
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+225U,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+4U);
l17=si0;
if(si0){
goto L64;
}
si0=l23;
si1=-65536U;
si0&=si1;
si1=l11;
si0|=si1;
l17=si0;
si0=0U;
l11=si0;
goto L63;
L64:;
si0=12U;
si1=4U;
si0=f1024(i,si0,si1);
l4=si0;
si1=0U;
i32_store(i->m0,(U64)si0+2U,si1);
si0=l4;
si1=9U;
i32_store8(i->m0,(U64)si0,si1);
si0=l7;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=11U;
l11=si0;
si0=l24;
l4=si0;
L63:;
si0=l6;
si1=8U;
si0+=si1;
si1=l1;
f1049(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+12U);
l7=si0;
si0=!(si0);
if(si0){
goto L49;
}
si0=l6;
si0=i32_load(i->m0,(U64)si0+8U);
l13=si0;
si0=!(si0);
if(si0){
goto L49;
}
si0=l7;
si1=12U;
si0*=si1;
si1=l13;
si0+=si1;
si1=-12U;
si0+=si1;
l7=si0;
f1054(i,si0);
si0=l7;
si1=l17;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l4;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l7;
si1=l11;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
l24=si0;
si0=l17;
l23=si0;
goto L51;
L59:;
si0=1U;
si1=l11;
si0<<=(si1&31);
si1=128248U;
si0&=si1;
si0=!(si0);
if(si0){
goto L29;
}
L58:;
si0=l7;
si1=l8;
si0=TF(i->t0,si1,U32 (*)(glicolwasmInstance*,U32))(i,si0);
si0=!(si0);
if(si0){
goto L29;
}
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+225U,si1);
si0=1U;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1);
si0<<=(si1&31);
si1=128249U;
si0&=si1;
si0=!(si0);
if(si0){
goto L65;
}
si0=l6;
si1=240U;
si0+=si1;
si1=l1;
f1220(i,si0,si1);
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0+240U);
si1=17U;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=l6;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=240U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+240U);
i64_store(i->m0,(U64)si0+136U,sj1);
si0=l6;
si1=136U;
si0+=si1;
f1054(i,si0);
goto L51;
L65:;
si0=l6;
si1=24U;
si0+=si1;
si1=l7;
f1222(i,si0,si1);
si0=l6;
si0=i32_load16_u(i->m0,(U64)si0+26U);
l4=si0;
si0=l6;
si0=i32_load16_u(i->m0,(U64)si0+24U);
l17=si0;
si0=l6;
si1=16U;
si0+=si1;
si1=l1;
f1049(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+20U);
l7=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l6;
si0=i32_load(i->m0,(U64)si0+16U);
l11=si0;
si0=!(si0);
if(si0){
goto L47;
}
si0=l7;
si1=12U;
si0*=si1;
si1=l11;
si0+=si1;
si1=-12U;
si0+=si1;
l7=si0;
f1054(i,si0);
si0=l7;
si1=l4;
i32_store16(i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l17;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l7;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
si1=i32_load(i->m0,(U64)si1+240U);
i32_store(i->m0,(U64)si0+6U,si1);
si0=l7;
si1=10U;
si0+=si1;
si1=l6;
si2=240U;
si1+=si2;
si2=4U;
si1+=si2;
si1=i32_load16_u(i->m0,(U64)si1);
i32_store16(i->m0,(U64)si0,si1);
goto L51;
}
L50:;
si0=1146272U;
f14(i,si0);
UNREACHABLE;
L49:;
si0=1146288U;
f14(i,si0);
UNREACHABLE;
L48:;
si0=1146304U;
f14(i,si0);
UNREACHABLE;
L47:;
si0=1146320U;
f14(i,si0);
UNREACHABLE;
L29:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+220U);
l7=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L66;
}
si0=l2;
si1=l12;
i32_store(i->m0,(U64)si0+220U,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+216U);
si1=l12;
si2=12U;
si1*=si2;
si0+=si1;
si1=l7;
si2=l12;
si1-=si2;
f1191(i,si0,si1);
L66:;
si0=l2;
si1=l15;
i32_store8(i->m0,(U64)si0+226U,si1);
si0=1U;
l9=si0;
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+225U);
if(si0){
goto L9;
}
si0=l16;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L67;
}
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+225U,si1);
L67:;
si0=l1;
f1193(i,si0);
goto L1;
L23:;
si0=l7;
si1=-12U;
si0+=si1;
l7=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
goto L22;
}
L18:;
UNREACHABLE;
L17:;
si0=1146336U;
f14(i,si0);
UNREACHABLE;
L16:;
si0=l7;
si1=l2;
si2=l3;
f1223(i,si0,si1,si2);
si0=l4;
l7=si0;
goto L15;
}
L10:;
}
si0=l7;
si1=l9;
si2=1122964U;
f4(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l18;
si1=l9;
si2=1122964U;
f4(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l7;
si1=l17;
si2=1122948U;
f4(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l11;
si0=i32_load8_u(i->m0,(U64)si0);
si1=9U;
si0=si0 != si1;
if(si0){
goto L69;
}
si0=l6;
si1=104U;
si0+=si1;
si1=l11;
si1=i32_load(i->m0,(U64)si1+4U);
si2=8U;
si1+=si2;
f1213(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+108U);
si1=12U;
si0*=si1;
l7=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+104U);
l4=si0;
L70:;
{
si0=l7;
si0=!(si0);
if(si0){
goto L68;
}
si0=l7;
si1=-12U;
si0+=si1;
l7=si0;
si0=l4;
si0=f1224(i,si0);
l17=si0;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l17;
si0=!(si0);
if(si0){
goto L70;
}
}
L69:;
si0=l11;
si1=12U;
si0+=si1;
l11=si0;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
goto L5;
L68:;
}
si0=l6;
si1=96U;
si0+=si1;
si1=l1;
f1049(i,si0,si1);
si0=l13;
si1=l6;
si1=i32_load(i->m0,(U64)si1+100U);
l4=si1;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=l13;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l6;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si1=i32_load(i->m0,(U64)si1+96U);
l17=si1;
si2=l13;
si3=12U;
si2*=si3;
si1+=si2;
l7=si1;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=l7;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+120U,sj1);
si0=l7;
si1=0U;
i32_store(i->m0,(U64)si0+2U,si1);
si0=l7;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0+120U);
si1=9U;
si0=si0 != si1;
if(si0){
goto L71;
}
si0=l6;
si1=88U;
si0+=si1;
si1=l6;
si1=i32_load(i->m0,(U64)si1+124U);
si2=8U;
si1+=si2;
f1049(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+88U);
l11=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+92U);
l13=si0;
si0=l6;
si1=0U;
i32_store(i->m0,(U64)si0+336U,si1);
si0=l6;
si1=1U;
i32_store(i->m0,(U64)si0+368U,si1);
si0=l6;
si1=l7;
i32_store(i->m0,(U64)si0+360U,si1);
si0=l6;
si1=l11;
si2=l13;
si3=12U;
si2*=si3;
si1+=si2;
i32_store(i->m0,(U64)si0+356U,si1);
si0=l6;
si1=l11;
i32_store(i->m0,(U64)si0+352U,si1);
si0=l6;
si1=l7;
i32_store(i->m0,(U64)si0+348U,si1);
si0=l6;
si1=1U;
i32_store(i->m0,(U64)si0+340U,si1);
si0=l6;
si1=l17;
i32_store(i->m0,(U64)si0+344U,si1);
si0=l6;
si1=l17;
si2=l4;
si3=12U;
si2*=si3;
si1+=si2;
l4=si1;
i32_store(i->m0,(U64)si0+364U,si1);
si0=l6;
si1=136U;
si0+=si1;
si1=l10;
f1225(i,si0,si1);
si0=l6;
si1=240U;
si0+=si1;
si1=-1U;
si2=l6;
si2=i32_load(i->m0,(U64)si2+136U);
l17=si2;
si3=0U;
si4=l4;
si5=l7;
si4-=si5;
si5=12U;
si4=DIV_U(si4,si5);
l7=si4;
si5=-1U;
si4+=si5;
l4=si4;
si5=l4;
si6=l7;
si5=si5 > si6;
si3=si5?si3:si4;
si2+=si3;
l7=si2;
si3=l7;
si4=l17;
si3=si3 < si4;
si1=si3?si1:si2;
f1226(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+240U);
si1=l6;
si2=240U;
si1+=si2;
si2=l6;
si2=i32_load(i->m0,(U64)si2+336U);
l11=si2;
si3=8U;
si2=si2 > si3;
l17=si2;
si0=si2?si0:si1;
si1=l6;
si2=240U;
si1+=si2;
si2=4U;
si3=96U;
si4=l17;
si2=si4?si2:si3;
si1+=si2;
l13=si1;
si1=i32_load(i->m0,(U64)si1);
l4=si1;
si2=12U;
si1*=si2;
si0+=si1;
l7=si0;
si0=l11;
si1=8U;
si2=l17;
si0=si2?si0:si1;
l17=si0;
L73:;
{
si0=l4;
si1=l17;
si0=si0 < si1;
if(si0){
goto L74;
}
si0=l13;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=136U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l6;
si2=340U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
si1=136U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=340U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
si1=136U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l6;
si2=340U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+340U);
i64_store(i->m0,(U64)si0+136U,sj1);
L75:;
{
si0=l6;
si1=372U;
si0+=si1;
si1=l6;
si2=136U;
si1+=si2;
f1227(i,si0,si1);
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0+372U);
si1=17U;
si0=si0 == si1;
if(si0){
goto L72;
}
si0=l6;
si1=240U;
si0+=si1;
si1=l6;
si2=372U;
si1+=si2;
f1228(i,si0,si1);
goto L75;
}
L74:;
si0=l6;
si1=136U;
si0+=si1;
si1=l6;
si2=340U;
si1+=si2;
f1227(i,si0,si1);
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0+136U);
si1=17U;
si0=si0 == si1;
if(si0){
goto L76;
}
si0=l7;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+136U);
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
si1=l6;
si2=136U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=12U;
si0+=si1;
l7=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
goto L73;
L76:;
}
si0=l6;
si1=136U;
si0+=si1;
f1229(i,si0);
si0=l13;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
L72:;
si0=l6;
si1=136U;
si0+=si1;
si1=l6;
si2=240U;
si1+=si2;
si2=100U;
si0=f3065(i,si0,si1,si2);
si0=l1;
f1046(i,si0);
si0=l1;
si1=l6;
si2=136U;
si1+=si2;
si2=100U;
si0=f3065(i,si0,si1,si2);
si0=l6;
si1=120U;
si0+=si1;
f1054(i,si0);
si0=1U;
l9=si0;
goto L4;
L71:;
}
si0=l6;
si1=252U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store(i->m0,(U64)si0+244U,si1);
si0=l6;
si1=1146184U;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l6;
si1=26U;
i32_store(i->m0,(U64)si0+140U,si1);
si0=l6;
si1=l6;
si2=136U;
si1+=si2;
i32_store(i->m0,(U64)si0+248U,si1);
si0=l6;
si1=l6;
si2=120U;
si1+=si2;
i32_store(i->m0,(U64)si0+136U,si1);
si0=l6;
si1=240U;
si0+=si1;
si1=1146192U;
f372(i,si0,si1);
UNREACHABLE;
L3:;
si0=l6;
si1=252U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
si1=1U;
i32_store(i->m0,(U64)si0+244U,si1);
si0=l6;
si1=1118440U;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l6;
si1=1178584U;
i32_store(i->m0,(U64)si0+248U,si1);
si0=l6;
si1=240U;
si0+=si1;
si1=1146080U;
f372(i,si0,si1);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1146096U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
si2=100U;
si0=f3065(i,si0,si1,si2);
si0=l6;
si1=384U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2318(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12;
si0=i->g0;
si1=320U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l5=si0;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
if(si0){
goto L2;
}
si0=l4;
si1=316U;
si0+=si1;
l5=si0;
si0=0U;
l7=si0;
goto L1;
L2:;
si0=l4;
si1=36U;
si0+=si1;
si1=l6;
f1862(i,si0,si1);
si0=l4;
si1=36U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
l7=si1;
si2=l7;
si3=l5;
si3=i32_load(i->m0,(U64)si3);
si4=3U;
si3<<=(si4&31);
si2+=si3;
f1863(i,si0,si1,si2);
si0=l4;
si1=36U;
si0+=si1;
si1=l4;
si2=316U;
si1+=si2;
si2=l4;
si3=316U;
si2+=si3;
f1864(i,si0,si1,si2);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=36U;
si1+=si2;
f1292(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+28U);
l7=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+24U);
l5=si0;
L1:;
si0=l4;
si1=80U;
si0+=si1;
si1=l7;
si2=1U;
si1+=si2;
f1865(i,si0,si1);
si0=l4;
si1=80U;
si0+=si1;
si1=l5;
si2=l5;
si3=l7;
si4=3U;
si3<<=(si4&31);
si2+=si3;
f1866(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l5=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=132U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l5;
si2=124U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l7=si1;
si2=l7;
si3=5U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l4;
si2=80U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l4;
si2=i32_load(i->m0,(U64)si2+80U);
l7=si2;
si3=l7;
si4=3U;
si3=si3 > si4;
si1=si3?si1:si2;
si0=si0 == si1;
if(si0){
goto L6;
}
L7:;
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
si0=l4;
si1=80U;
si0+=si1;
si1=l3;
f1879(i,si0,si1);
L8:;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l1;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
goto L4;
L6:;
si0=l4;
si1=96U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+12U);
f1867(i,si0,si1);
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+132U);
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+132U,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+300U,si1);
si0=l4;
si1=1180264U;
i32_store(i->m0,(U64)si0+312U,si1);
si0=l4;
si1=1180264U;
i32_store(i->m0,(U64)si0+308U,si1);
si0=l4;
si1=1180264U;
i32_store(i->m0,(U64)si0+304U,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=l4;
si2=80U;
si1+=si2;
f1868(i,si0,si1);
si0=l0;
si1=l7;
si2=l4;
si3=96U;
si2+=si3;
si3=l4;
si4=156U;
si3+=si4;
si4=l4;
si5=304U;
si4+=si5;
si5=l3;
si6=l1;
si6=i32_load(i->m0,(U64)si6+8U);
l1=si6;
si7=8U;
si6+=si7;
si7=0U;
si8=l1;
si6=si8?si6:si7;
si7=l5;
si8=8U;
si7+=si8;
si8=l4;
si8=i32_load(i->m0,(U64)si8+16U);
si9=l4;
si9=i32_load(i->m0,(U64)si9+20U);
si10=l2;
si10=i32_load16_u(i->m0,(U64)si10+24U);
si11=l2;
si12=26U;
si11+=si12;
si11=i32_load16_u(i->m0,(U64)si11);
f1869(i,si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11);
si0=l4;
si1=304U;
si0+=si1;
f1870(i,si0);
si0=l4;
si1=156U;
si0+=si1;
f91(i,si0);
si0=l4;
si1=96U;
si0+=si1;
f1192(i,si0);
si0=l4;
si1=80U;
si0+=si1;
f1871(i,si0);
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=36U;
si0+=si1;
f1294(i,si0);
goto L3;
L5:;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l5=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
L4:;
si0=l4;
si1=l4;
si2=80U;
si1+=si2;
f1868(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l8=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=l5;
si0=f1348(i,si0,si1);
si0=!(si0);
if(si0){
goto L10;
}
si0=l1;
si1=l5;
si0=f1349(i,si0,si1);
si1=1U;
si0&=si1;
if(si0){
goto L10;
}
si0=l4;
si1=156U;
si0+=si1;
si1=l1;
si2=l5;
f1310(i,si0,si1,si2);
si0=l4;
si0=i32_load(i->m0,(U64)si0+156U);
l10=si0;
si0=l4;
si1=156U;
si0+=si1;
f1093(i,si0);
si0=0U;
l7=si0;
si0=l10;
si1=90U;
si0=si0 == si1;
if(si0){
goto L9;
}
L10:;
si0=l1;
si1=l5;
si2=1130245U;
si3=5U;
si0=f358(i,si0,si1,si2,si3);
si1=1U;
si0^=si1;
l7=si0;
L9:;
si0=l0;
si1=l2;
si2=l1;
si3=l5;
si4=l9;
si5=l8;
si6=l7;
si7=l3;
si8=0U;
si7=si7 != si8;
l3=si7;
si8=l3;
f1872(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l4;
si1=80U;
si0+=si1;
f1871(i,si0);
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=36U;
si0+=si1;
f1294(i,si0);
L3:;
si0=l4;
si1=320U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2541(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=48U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l2;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si1=24U;
si0+=si1;
si1=l7;
si2=l1;
si3=l2;
f2323(i,si0,si1,si2,si3);
si0=l6;
si0=i32_load(i->m0,(U64)si0+28U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si0=i32_load(i->m0,(U64)si0+24U);
l1=si0;
si0=l2;
si1=l4;
si2=l2;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si0=l5;
if(si0){
goto L2;
}
si0=l6;
si1=16U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l7;
si3=l1;
si4=1171596U;
f2519(i,si0,si1,si2,si3,si4);
si0=l6;
si1=8U;
si0+=si1;
si1=l6;
si1=i32_load(i->m0,(U64)si1+16U);
si2=l6;
si2=i32_load(i->m0,(U64)si2+20U);
si3=l2;
si4=1171612U;
f2520(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load(i->m0,(U64)si0+12U);
l0=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si0=l6;
si1=l3;
si2=l4;
si3=l2;
si4=1171628U;
f2522(i,si0,si1,si2,si3,si4);
si0=l1;
si1=l0;
si2=l6;
si2=i32_load(i->m0,(U64)si2);
si3=l6;
si3=i32_load(i->m0,(U64)si3+4U);
si4=1171644U;
f1379(i,si0,si1,si2,si3,si4);
goto L1;
L2:;
si0=l6;
si1=l2;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l6;
si1=l3;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l6;
si1=l3;
si2=l4;
si1+=si2;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
si0=0U;
l4=si0;
L3:;
{
si0=l6;
si1=36U;
si0+=si1;
si0=f520(i,si0);
l2=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=127U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l6;
si1=l6;
si1=i32_load(i->m0,(U64)si1+44U);
si2=-1U;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l0;
si1=l7;
si2=l1;
si3=l4;
si2+=si3;
si3=1171660U;
si0=f1184(i,si0,si1,si2,si3);
si1=l2;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l3;
if(si0){
goto L3;
}
}
L1:;
si0=l6;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1575(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
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
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l4;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si0=f1626(i,si0,si1);
l3=si0;
si0=l0;
sj1=257ULL;
sj2=1ULL;
si3=l6;
si3=i32_load(i->m0,(U64)si3);
si4=l3;
si4=i32_load(i->m0,(U64)si4);
si3=f1629(i,si3,si4);
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
si0=1167476U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1167476U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1167476U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1U;
si1=1U;
si2=1167476U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1682(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=0U;
l2=si0;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L1;
case 1:
goto L3;
case 2:
goto L36;
case 3:
goto L35;
case 4:
goto L34;
case 5:
goto L33;
case 6:
goto L32;
case 7:
goto L31;
case 8:
goto L30;
case 9:
goto L29;
case 10:
goto L28;
case 11:
goto L27;
case 12:
goto L26;
case 13:
goto L25;
case 14:
goto L24;
case 15:
goto L23;
case 16:
goto L22;
case 17:
goto L21;
case 18:
goto L20;
case 19:
goto L19;
case 20:
goto L18;
case 21:
goto L17;
case 22:
goto L16;
case 23:
goto L15;
case 24:
goto L14;
case 25:
goto L13;
case 26:
goto L12;
case 27:
goto L11;
case 28:
goto L10;
case 29:
goto L9;
case 30:
goto L8;
case 31:
goto L7;
case 32:
goto L6;
case 33:
goto L5;
case 34:
goto L4;
default:
goto L1;
}
L36:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L35:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L34:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L33:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L32:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L31:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L30:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L29:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L28:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L27:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L26:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L25:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L24:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L23:;
si0=l1;
si1=12U;
si0+=si1;
l3=si0;
goto L2;
L22:;
si0=l1;
si1=12U;
si0+=si1;
l3=si0;
goto L2;
L21:;
si0=l1;
si1=12U;
si0+=si1;
l3=si0;
goto L2;
L20:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L19:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L18:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L17:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L16:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L15:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L14:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L13:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L12:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L11:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L10:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L9:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L8:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L7:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L6:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L5:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L4:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L3:;
si0=l1;
si1=2U;
si0+=si1;
l3=si0;
L2:;
si0=l3;
si0=i32_load16_u(i->m0,(U64)si0+2U);
l2=si0;
si0=l3;
si0=i32_load16_u(i->m0,(U64)si0);
l3=si0;
L1:;
si0=l0;
si1=l2;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=l3;
i32_store16(i->m0,(U64)si0,si1);
L0:;
}

void f2559(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
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
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=4U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f2428(i,si0,si1);
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
l6=sj1;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l0;
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
si1=f2557(i,si1,si2,si3,si4);
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=4ULL;
sj1|=sj2;
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
si0=1U;
si1=l4;
si2=1170896U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1170988U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f279(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f277(i,si0);
si0=l0;
si1=28U;
si0+=si1;
l0=si0;
goto L2;
}
L1:;
L0:;
}

void f2185(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l2=si1;
f1205(i,si0,si1);
si0=l2;
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
default:
goto L12;
}
L12:;
si0=l2;
si1=-85U;
si0+=si1;
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
L11:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
f1403(i,si0,si1);
goto L0;
L10:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
f1404(i,si0,si1);
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
f1467(i,si0,si1);
goto L0;
L9:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
f2205(i,si0,si1);
goto L0;
L8:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
f1403(i,si0,si1);
goto L0;
L7:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
f2205(i,si0,si1);
goto L0;
L6:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
f2205(i,si0,si1);
goto L0;
L5:;
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
l0=si1;
si1=i32_load(i->m0,(U64)si1+12U);
si2=-2147483648U;
si1^=si2;
l2=si1;
si2=7U;
si3=l2;
si4=9U;
si3=si3 < si4;
si1=si3?si1:si2;
l2=si1;
f1205(i,si0,si1);
si0=l2;
switch(si0){
case 0:
goto L20;
case 1:
goto L1;
case 2:
goto L19;
case 3:
goto L18;
case 4:
goto L17;
case 5:
goto L16;
case 6:
goto L15;
case 7:
goto L14;
case 8:
goto L13;
default:
goto L1;
}
L20:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
f2186(i,si0,si1,si2);
goto L0;
L19:;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
f2181(i,si0,si1);
goto L0;
L18:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
f2186(i,si0,si1,si2);
goto L0;
L17:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
f2186(i,si0,si1,si2);
goto L0;
L16:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
f2186(i,si0,si1,si2);
goto L0;
L15:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
f2186(i,si0,si1,si2);
goto L0;
L14:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
f2186(i,si0,si1,si2);
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=20U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
f2186(i,si0,si1,si2);
goto L0;
L13:;
si0=l0;
si1=4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
f2186(i,si0,si1,si2);
goto L0;
L4:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
si1=4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
f2186(i,si0,si1,si2);
goto L0;
L3:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
f2205(i,si0,si1);
goto L0;
L2:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
f2205(i,si0,si1);
L1:;
L0:;
}

U32 f703(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
F32 l3=0;
U32 si0,si1,si2,si3,si4;
F32 sf0,sf1;
si0=l1;
si0=i32_load(i->m0,(U64)si0+28U);
si1=1U;
si0&=si1;
l2=si0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0);
l3=sf0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
sf1=l3;
si2=l2;
si3=l1;
si4=12U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si0=f698(i,si0,sf1,si2,si3);
goto L0;
L1:;
si0=l1;
sf1=l3;
si2=l2;
si3=0U;
si0=f700(i,si0,sf1,si2,si3);
L0:;
return si0;
}

void f3017(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
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
si1=24U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f3008(i,si0,si1);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=1U;
si1=1U;
si2=1175560U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1175560U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+32U);
l4=si0;
si0=l5;
sj0=i64_load(i->m0,(U64)si0+24U);
l7=sj0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
sj0=i64_load(i->m0,(U64)si0);
l8=sj0;
si0=l3;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l8;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f3008(i,si0,si1);
si0=l0;
sj1=257ULL;
sj2=257ULL;
sj3=1ULL;
si4=l4;
si5=l5;
si5=i32_load(i->m0,(U64)si5+16U);
si4=si4 < si5;
sj2=si4?sj2:sj3;
sj3=1ULL;
sj4=l7;
si5=l5;
sj5=i64_load(i->m0,(U64)si5+8U);
l8=sj5;
si4=sj4 == sj5;
sj2=si4?sj2:sj3;
sj3=l7;
sj4=l8;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2186(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l2;
si1=l0;
si2=l1;
f1128(i,si0,si1,si2);
L0:;
}

void f2026(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6,si8,si9,si10,si11,si12,si13;
U64 sj0,sj1,sj7;
si0=i->g0;
si1=48U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+36U);
l9=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l8;
si1=8U;
si0+=si1;
f2038(i,si0);
si0=l8;
sj0=i64_load(i->m0,(U64)si0+8U);
l10=sj0;
si0=l8;
si1=l5;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l8;
si1=l4;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l8;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=1125492U;
si5=10U;
si6=0U;
sj7=l10;
si8=l8;
si9=24U;
si8+=si9;
si9=2U;
si10=1U;
si11=0U;
si12=l6;
si13=l7;
f1301(i,si0,si1,si2,si3,si4,si5,si6,sj7,si8,si9,si10,si11,si12,si13);
si0=l8;
si0=i32_load8_u(i->m0,(U64)si0+40U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l8;
sj1=i64_load(i->m0,(U64)si1+32U);
i64_store(i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=l8;
si1=i32_load(i->m0,(U64)si1+32U);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=l9;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l8;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1497(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
f1682(i,si0,si1);
si0=l3;
si0=i32_load16_u(i->m0,(U64)si0+10U);
si1=l3;
si1=i32_load16_u(i->m0,(U64)si1+8U);
si0|=si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=l2;
si0=f1683(i,si0,si1,si2);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f2267(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=f2268(i,si0,si1);
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
si0=f2268(i,si0,si1);
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

U32 f1194(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
U64 sj1;
si0=152U;
si1=4U;
si0=f1024(i,si0,si1);
l1=si0;
sj1=4294967297ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
si2=144U;
si0=f3065(i,si0,si1,si2);
si0=l1;
L0:;
return si0;
}

F32 f2376(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
F32 sf0;
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
sj1=5ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l1;
si1=13U;
i32_store8(i->m0,(U64)si0+72U,si1);
si0=l1;
sj1=l4;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l0=si1;
i32_store(i->m0,(U64)si0+76U,si1);
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
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l0=si0;
L4:;
si0=l1;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l0;
sf0=f32_reinterpret_i32(si0);
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
si1=3U;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l1;
si1=1117130U;
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
return sf0;
}

U32 f1942(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si0=f1330(i,si0,si1);
L0:;
return si0;
}

void f169(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si0=f170(i,si0);
l1=si0;
si0=l0;
si1=2U;
f162(i,si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=1052008U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
L0:;
}

void f271(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=l0;
si1=l2;
sj1=(U64)(si1);
si2=l1;
si3=1U;
si2+=si3;
sj2=(U64)(si2);
sj1*=sj2;
si1=(U32)(sj1);
si2=7U;
si1+=si2;
si2=-8U;
si1&=si2;
l2=si1;
si0-=si1;
si1=l1;
si2=l2;
si1+=si2;
si2=9U;
si1+=si2;
f264(i,si0,si1);
L0:;
}

void f518(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f687(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f1731(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
F32 sf1,sf2;
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
f1607(i,si0,si1);
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
f1723(i,si0,si1);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l2=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=1168004U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=1U;
si1=l3;
si2=1168004U;
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
si2=l5;
sf2=(F32)(I32)(si2);
sf1=f3104(i,sf1,sf2);
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
si4=1168004U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f2476(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
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
f1737(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+12U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
l6=sj1;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si0=f1738(i,si0);
l3=si0;
si0=l4;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l7=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=0U;
si3=l7;
si4=l4;
si3-=si4;
f2287(i,si0,si1,si2,si3);
si0=l5;
si1=8U;
si0+=si1;
f2223(i,si0);
goto L1;
L4:;
si0=1U;
si1=l4;
si2=1168816U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1169160U;
f14(i,si0);
UNREACHABLE;
L2:;
si0=l3;
f2477(i,si0);
L1:;
si0=l0;
sj1=0ULL;
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
L0:;
}

void f2073(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
f266(i,si0);
L1:;
L0:;
}

U32 f1463(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si1=i32_load(i->m0,(U64)si1+20U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+24U);
si0=f1395(i,si0,si1,si2);
L0:;
return si0;
}

U32 f1883(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=1180264U;
l1=si0;
si0=l0;
si1=1180264U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si0=f2145(i,si0);
l1=si0;
L1:;
si0=l1;
L0:;
return si0;
}

void f2748(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=96U;
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
si0=f2346(i,si0);
l4=si0;
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
f1710(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l3=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
sj0=i64_load(i->m0,(U64)si0+8U);
l6=sj0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l7=si0;
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l4;
si1=-32768U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
si0=l4;
si1=32767U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L8;
}
sj0=l6;
si0=(U32)(sj0);
l8=si0;
si1=l8;
si2=8U;
si1+=si2;
sj2=l6;
sj3=1095216660480ULL;
sj2&=sj3;
l6=sj2;
sj3=8589934592ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
l9=si0;
si0=l8;
sj1=l6;
sj2=8589934592ULL;
si1=sj1 != sj2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L7;
case 1:
goto L19;
case 2:
goto L18;
case 3:
goto L17;
case 4:
goto L16;
case 5:
goto L15;
case 6:
goto L9;
case 7:
goto L9;
case 8:
goto L14;
case 9:
goto L13;
case 10:
goto L12;
case 11:
goto L11;
case 12:
goto L10;
default:
goto L7;
}
L19:;
si0=l9;
si1=4U;
si0+=si1;
l8=si0;
goto L6;
L18:;
si0=l9;
si1=2U;
si0+=si1;
l8=si0;
goto L6;
L17:;
si0=l9;
si1=2U;
si0+=si1;
l8=si0;
goto L6;
L16:;
si0=l9;
si1=2U;
si0+=si1;
l8=si0;
goto L6;
L15:;
si0=l9;
si1=2U;
si0+=si1;
l8=si0;
goto L6;
L14:;
si0=l9;
si1=2U;
si0+=si1;
l8=si0;
goto L6;
L13:;
si0=l9;
si1=2U;
si0+=si1;
l8=si0;
goto L6;
L12:;
si0=l9;
si1=2U;
si0+=si1;
l8=si0;
goto L6;
L11:;
si0=l9;
si1=2U;
si0+=si1;
l8=si0;
goto L6;
L10:;
si0=l9;
si1=2U;
si0+=si1;
l8=si0;
goto L6;
L9:;
si0=l9;
si1=2U;
si0+=si1;
l8=si0;
goto L6;
L8:;
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=92U;
si0+=si1;
si1=216U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=216U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l5;
si1=1172440U;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l5;
si1=1172474U;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l5;
si1=1172472U;
i32_store(i->m0,(U64)si0+80U,si1);
si0=l5;
si1=133U;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l5;
si2=72U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f1492(i,si0,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+10U,si1);
si0=l5;
si1=23U;
i32_store8(i->m0,(U64)si0+8U,si1);
si0=l5;
si1=8U;
si0+=si1;
si0=f97(i,si0);
l4=si0;
goto L4;
L7:;
si0=l9;
si1=2U;
si0+=si1;
l8=si0;
L6:;
si0=l8;
si1=l4;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
goto L3;
L5:;
si0=l5;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=3ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=92U;
si0+=si1;
si1=216U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=72U;
si0+=si1;
si1=12U;
si0+=si1;
si1=216U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=4U;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l5;
si1=1172528U;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l5;
si1=1172474U;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l5;
si1=1172472U;
i32_store(i->m0,(U64)si0+80U,si1);
si0=l5;
si1=133U;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l5;
si2=72U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l5;
si1=l5;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f1492(i,si0,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+10U,si1);
si0=l5;
si1=23U;
i32_store8(i->m0,(U64)si0+8U,si1);
si0=l5;
si1=8U;
si0+=si1;
si0=f97(i,si0);
l4=si0;
L4:;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
L3:;
si0=l7;
si1=l3;
f1704(i,si0,si1);
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=l4;
si2=1172560U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1172644U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f2324(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
l3=si0;
goto L1;
L4:;
si0=l1;
si1=l3;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
goto L2;
L3:;
si0=0U;
l3=si0;
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l2;
si0=f2050(i,si0,si1);
l5=si0;
if(si0){
goto L5;
}
goto L1;
L5:;
si0=l1;
si1=8U;
si0+=si1;
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l2;
si0+=si1;
l1=si0;
si0=l5;
l3=si0;
L2:;
si0=l4;
si1=l1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L1:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f1396(glicolwasmInstance*i,U32 l0) {
U32 si0;
si0=l0;
f1032(i,si0);
L0:;
}

void f2662(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=1166100U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f2663(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=1166100U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f2664(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=1166100U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f583(glicolwasmInstance*i) {
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
si1=1115956U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=1178584U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=1116008U;
f372(i,si0,si1);
UNREACHABLE;
L0:;
}

void f1511(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
if(si0){
goto L1;
}
si0=0U;
si1=0U;
si2=1129160U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f83(i,si0,si1);
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

void f1813(glicolwasmInstance*i,U32 l0) {
U32 si0;
si0=l0;
f1071(i,si0);
L0:;
}

U32 f1130(glicolwasmInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l0;
sj1=l1;
si1=(U32)(sj1);
l2=si1;
si2=3U;
si1>>=(si2&31);
si2=28U;
si1&=si2;
si0+=si1;
l0=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l0=si1;
si2=1U;
si3=l2;
si2<<=(si3&31);
l2=si2;
si1|=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
si0&=si1;
si0=!(si0);
L0:;
return si0;
}

void f914(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=240U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=176U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+180U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+176U);
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
si1=75U;
i32_store8(i->m0,(U64)si0+191U,si1);
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
l8=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+136U);
l3=si1;
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
si1=l8;
i32_store(i->m0,(U64)si0+208U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+204U,si1);
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+200U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=200U;
si1+=si2;
f841(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+136U);
l3=si0;
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
i32_store(i->m0,(U64)si0+192U,si1);
si0=l2;
si1=l1;
si2=120U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+196U,si1);
si0=l2;
si1=160U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=l5;
si1=l10;
si0+=si1;
l10=si0;
si0=l3;
si1=l8;
si0=si0 == si1;
l11=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+164U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+160U);
if(si0){
goto L8;
}
si0=l2;
si1=232U;
si0+=si1;
l12=si0;
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
si1=152U;
si0+=si1;
si1=l1;
si2=1130244U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+156U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+152U);
if(si0){
goto L9;
}
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
goto L9;
}
si0=l2;
si1=208U;
si0+=si1;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+124U);
i64_store(i->m0,(U64)si0+200U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=136U;
si0+=si1;
si1=l1;
f934(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+140U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+136U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=128U;
si0+=si1;
si1=l1;
si2=1154184U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+132U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+128U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=120U;
si0+=si1;
si1=l1;
si2=1151321U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+124U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+120U);
if(si0){
goto L10;
}
L11:;
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
goto L10;
}
L12:;
{
si0=l2;
si1=104U;
si0+=si1;
si1=l1;
f934(i,si0,si1);
si0=0U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+108U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=96U;
si0+=si1;
si1=l1;
si2=1154184U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+100U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l2;
si1=88U;
si0+=si1;
si1=l1;
si2=1151321U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+92U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+88U);
l3=si0;
L13:;
si0=l3;
si0=!(si0);
if(si0){
goto L12;
}
}
si0=l2;
si1=80U;
si0+=si1;
si1=l1;
si2=1130244U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+84U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+80U);
if(si0){
goto L9;
}
si0=0U;
l3=si0;
goto L7;
L10:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+200U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l2;
si2=208U;
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
goto L9;
}
si0=l1;
si1=l3;
i32_store(i->m0,(U64)si0+20U,si1);
L9:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+224U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l12;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l5;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l5;
i32_store(i->m0,(U64)si0+20U,si1);
L8:;
si0=l2;
si1=72U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+76U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+72U);
if(si0){
goto L7;
}
si0=l2;
si1=208U;
si0+=si1;
l12=si0;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+124U);
i64_store(i->m0,(U64)si0+200U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=1U;
l3=si0;
si0=l2;
si1=64U;
si0+=si1;
si1=l1;
si2=1159070U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+68U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+64U);
if(si0){
goto L14;
}
si0=l2;
si1=56U;
si0+=si1;
si1=l1;
f934(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+60U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
si2=1154184U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+52U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+48U);
si0=!(si0);
if(si0){
goto L15;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
si2=1151321U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+44U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+40U);
if(si0){
goto L14;
}
L15:;
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
goto L14;
}
L16:;
{
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f934(i,si0,si1);
si0=0U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=1154184U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L18;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=1151321U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
goto L17;
L18:;
si0=0U;
l5=si0;
L17:;
si0=l5;
si0=!(si0);
if(si0){
goto L16;
}
goto L7;
}
L14:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+200U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l12;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l5;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si1=l5;
i32_store(i->m0,(U64)si0+20U,si1);
L7:;
si0=l10;
si1=0U;
si2=l11;
si0=si2?si0:si1;
l10=si0;
si0=l2;
si1=l2;
si2=191U;
si1+=si2;
i32_store(i->m0,(U64)si0+232U,si1);
si0=l2;
si1=l2;
si2=192U;
si1+=si2;
i32_store(i->m0,(U64)si0+228U,si1);
si0=l2;
si1=l2;
si2=196U;
si1+=si2;
i32_store(i->m0,(U64)si0+224U,si1);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l5=si0;
si0=l3;
if(si0){
goto L19;
}
si0=l5;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l1;
si1=75U;
si2=l8;
si3=l6;
si4=l7;
si5=l10;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l5=si0;
L20:;
si0=l5;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L22;
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
goto L21;
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
i32_store(i->m0,(U64)si0+204U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+216U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+208U,si1);
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+191U);
i32_store8(i->m0,(U64)si0+201U,si1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+200U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=200U;
si1+=si2;
f841(i,si0,si1);
L22:;
si0=l2;
si1=224U;
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
L21:;
si0=1120424U;
si1=40U;
si2=1111860U;
f16(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l5;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=75U;
si2=l8;
si3=l6;
si4=l7;
si5=l10;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=224U;
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
si1=240U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1115(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i32_load(i->m0,(U64)si0+264U);
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
si0=i32_load16_u(i->m0,(U64)si0+268U);
l4=si0;
L1:;
si0=l1;
si1=320U;
si2=272U;
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

U32 f1903(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
U64 sj0,sj1,sj2;
sj0=2164260860ULL;
si1=l0;
sj1=(U64)(si1);
sj2=255ULL;
sj1&=sj2;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=1U;
si0&=si1;
L0:;
return si0;
}

void f1890(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si2=3U;
si1<<=(si2&31);
si0+=si1;
f1032(i,si0);
goto L1;
}
L0:;
}

void f1509(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
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
si1=24U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
f1607(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+24U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+28U);
i32_store(i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+12U,si1);
si0=1178224U;
si1=43U;
si2=l4;
si3=12U;
si2+=si3;
si3=1119036U;
si4=1128776U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1U;
si1=l3;
si2=1128760U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=0U;
i32_store8(i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+28U);
i32_store(i->m0,(U64)si0+16U,si1);
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
f1334(i,si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+24U);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2851(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
sf1=f3058(i,sf1);
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
si2=1173676U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1457(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si0=f400(i,si0,si1);
L0:;
return si0;
}

U32 f1241(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
L2:;
{
si0=l1;
si1=l2;
si0=si0 == si1;
l3=si0;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=12U;
si1+=si2;
l4=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si0=f1212(i,si0);
l5=si0;
si0=l4;
l1=si0;
si0=l5;
if(si0){
goto L2;
}
}
L1:;
si0=l3;
L0:;
return si0;
}

void f2076(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=32U;
si0+=si1;
si1=l1;
si2=24U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
L0:;
}

U32 f1683(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L1;
case 1:
goto L36;
case 2:
goto L35;
case 3:
goto L34;
case 4:
goto L33;
case 5:
goto L32;
case 6:
goto L31;
case 7:
goto L30;
case 8:
goto L29;
case 9:
goto L28;
case 10:
goto L27;
case 11:
goto L26;
case 12:
goto L25;
case 13:
goto L24;
case 14:
goto L23;
case 15:
goto L22;
case 16:
goto L21;
case 17:
goto L20;
case 18:
goto L19;
case 19:
goto L18;
case 20:
goto L17;
case 21:
goto L16;
case 22:
goto L15;
case 23:
goto L14;
case 24:
goto L13;
case 25:
goto L12;
case 26:
goto L11;
case 27:
goto L10;
case 28:
goto L9;
case 29:
goto L8;
case 30:
goto L7;
case 31:
goto L6;
case 32:
goto L5;
case 33:
goto L4;
case 34:
goto L3;
default:
goto L1;
}
L36:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L35:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L34:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L33:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L32:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L31:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L30:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L29:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L28:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L27:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L26:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L25:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L24:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L23:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L22:;
si0=l0;
si1=12U;
si0+=si1;
l3=si0;
goto L2;
L21:;
si0=l0;
si1=12U;
si0+=si1;
l3=si0;
goto L2;
L20:;
si0=l0;
si1=12U;
si0+=si1;
l3=si0;
goto L2;
L19:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L18:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L17:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L16:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L15:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L14:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L13:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L12:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L11:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L10:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L9:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L8:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L7:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L6:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L5:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L4:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L2;
L3:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
L2:;
si0=l3;
si1=l2;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l3;
si1=l1;
i32_store16(i->m0,(U64)si0,si1);
L1:;
si0=l0;
L0:;
return si0;
}

void f1713(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
l5=si1;
f1607(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
if(si0){
goto L5;
}
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
f1607(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
if(si0){
goto L3;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
si2=l4;
si2=i32_load(i->m0,(U64)si2+4U);
f1613(i,si0,si1,si2);
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
if(si0){
goto L7;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
f1702(i,si0,si1);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l3=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si1=l3;
si0=f1703(i,si0,si1);
l6=si0;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
f1704(i,si0,si1);
goto L6;
L7:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
L6:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l6;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178224U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119036U;
si4=1167796U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=0U;
si1=0U;
si2=1167796U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
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
si4=1167796U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1U;
si1=1U;
si2=1167796U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1167796U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f1755(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si2=5U;
si1=si1 > si2;
l4=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si1=l3;
si2=5U;
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
f1756(i,si0);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
L1:;
si0=l0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

U32 f1321(glicolwasmInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si1=-24U;
si0+=si1;
l5=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l6=si0;
sj1=l1;
si1=(U32)(sj1);
si0&=si1;
l3=si0;
sj0=l1;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l7=sj0;
si0=0U;
l8=si0;
L2:;
{
si0=l2;
si1=l4;
si2=l3;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
l9=sj1;
sj2=l7;
sj1^=sj2;
l10=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=l10;
sj3=-72340172838076673ULL;
sj2+=sj3;
sj1&=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(i->m0,(U64)si0+8U,sj1);
L4:;
{
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
f43(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
if(si0){
goto L5;
}
sj0=l9;
sj1=l9;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l8;
si2=8U;
si1+=si2;
l8=si1;
si0+=si1;
si1=l6;
si0&=si1;
l3=si0;
goto L2;
L5:;
si0=l5;
si1=0U;
si2=l2;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l3;
si2+=si3;
si3=l6;
si2&=si3;
l11=si2;
si1-=si2;
si2=24U;
si1*=si2;
si0+=si1;
sj0=i64_load(i->m0,(U64)si0);
sj1=l1;
si0=sj0 != sj1;
if(si0){
goto L4;
}
}
L3:;
}
si0=l4;
si1=0U;
si2=l11;
si1-=si2;
si2=24U;
si1*=si2;
si0+=si1;
si1=0U;
si2=l0;
si0=si2?si0:si1;
si1=-24U;
si0+=si1;
si1=0U;
si2=l0;
si0=si2?si0:si1;
l3=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
si2=l3;
si0=si2?si0:si1;
L0:;
return si0;
}

void f272(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
TF(i->t0,si1,void (*)(glicolwasmInstance*,U32))(i,si0);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
f264(i,si0,si1);
L1:;
L0:;
}

void f1486(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=24U;
si0+=si1;
si1=l1;
si2=l2;
f380(i,si0,si1,si2);
si0=1116960U;
l2=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+24U);
l4=si0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+28U);
l5=si1;
si2=1123580U;
si3=3U;
si0=f247(i,si0,si1,si2,si3);
if(si0){
goto L2;
}
si0=1117130U;
l2=si0;
si0=l4;
si1=l5;
si2=1123583U;
si3=5U;
si0=f247(i,si0,si1,si2,si3);
if(si0){
goto L2;
}
si0=1123695U;
l2=si0;
si0=l4;
si1=l5;
si2=1117281U;
si3=21U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
si0=l4;
si1=l5;
si2=1116820U;
si3=46U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
si0=l4;
si1=l5;
si2=1123588U;
si3=15U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
si0=l4;
si1=l5;
si2=1116963U;
si3=4U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
si0=1123693U;
l2=si0;
si0=2U;
l1=si0;
si0=l4;
si1=l5;
si2=1116934U;
si3=26U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=l4;
si1=l5;
si2=1123603U;
si3=5U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=1123688U;
l2=si0;
si0=l4;
si1=l5;
si2=1116888U;
si3=46U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L5;
}
si0=l4;
si1=l5;
si2=1123608U;
si3=5U;
si0=f44(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L4;
}
L5:;
si0=5U;
l1=si0;
goto L1;
L4:;
si0=1123684U;
l2=si0;
si0=4U;
l1=si0;
si0=l4;
si1=l5;
si2=1117262U;
si3=19U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=4U;
l1=si0;
si0=l4;
si1=l5;
si2=1123613U;
si3=4U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=1123681U;
l2=si0;
si0=l4;
si1=l5;
si2=1116999U;
si3=131U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L2;
}
si0=3U;
l1=si0;
si0=l4;
si1=l5;
si2=1123617U;
si3=3U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=1123672U;
l2=si0;
si0=9U;
l1=si0;
si0=l4;
si1=l5;
si2=1116866U;
si3=22U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=l4;
si1=l5;
si2=1123620U;
si3=7U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=l4;
si1=l5;
si2=1116971U;
si3=28U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L6;
}
si0=l4;
si1=l5;
si2=1123627U;
si3=14U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L6;
}
si0=1123666U;
l2=si0;
si0=l4;
si1=l5;
si2=1117225U;
si3=37U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
si0=6U;
l1=si0;
si0=l4;
si1=l5;
si2=1123641U;
si3=14U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=l4;
si1=l5;
si2=1117485U;
si3=36U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L6;
}
si0=l4;
si1=l5;
si2=1117372U;
si3=39U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L6;
}
si0=l4;
si1=l5;
si2=1117179U;
si3=38U;
si0=f358(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=l5;
si0=f381(i,si0,si1);
if(si0){
goto L6;
}
L7:;
si0=5U;
l1=si0;
si0=1123661U;
l2=si0;
si0=l4;
si1=l5;
si2=1117133U;
si3=42U;
si0=f44(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
si2=l5;
si3=1123655U;
f382(i,si0,si1,si2,si3);
si0=l5;
l1=si0;
si0=l4;
l2=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=l3;
si2=i32_load(i->m0,(U64)si2+20U);
f1486(i,si0,si1,si2);
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
goto L1;
L6:;
si0=5U;
l1=si0;
si0=1123661U;
l2=si0;
goto L1;
L3:;
si0=6U;
l1=si0;
goto L1;
L2:;
si0=3U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2203(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
f2179(i,si0,si1);
L0:;
}

void f1217(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
F32 sf1;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L16;
case 1:
goto L22;
case 2:
goto L21;
case 3:
goto L20;
case 4:
goto L19;
case 5:
goto L18;
case 6:
goto L15;
case 7:
goto L14;
case 8:
goto L13;
case 9:
goto L17;
case 10:
goto L3;
case 11:
goto L3;
case 12:
goto L3;
case 13:
goto L3;
case 14:
goto L3;
case 15:
goto L12;
default:
goto L3;
}
L22:;
si0=l2;
si1=0U;
i32_store16(i->m0,(U64)si0+52U,si1);
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+50U,si1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1+1U);
i32_store8(i->m0,(U64)si0+49U,si1);
goto L2;
L21:;
si0=l2;
si1=4U;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+52U,si1);
goto L2;
L20:;
si0=l2;
si1=5U;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l1;
sf1=f32_load(i->m0,(U64)si1+4U);
f32_store(i->m0,(U64)si0+52U,sf1);
goto L2;
L19:;
si0=l2;
si1=3U;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+8U);
i32_store(i->m0,(U64)si0+52U,si1);
goto L2;
L18:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
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
goto L11;
}
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+48U,si1);
goto L2;
L17:;
si0=l2;
sj1=0ULL;
i64_store(i->m0,(U64)si0+48U,sj1);
goto L2;
L16:;
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+8U);
f83(i,si0,si1);
goto L2;
L15:;
si0=l1;
si0=f1216(i,si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(i->m0,(U64)si0+57U,sj1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+56U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si1=8U;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=12U;
si0*=si1;
l1=si0;
L23:;
{
si0=l1;
if(si0){
goto L24;
}
si0=l2;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+56U);
i64_store(i->m0,(U64)si0+80U,sj1);
si0=l2;
si1=l2;
si2=80U;
si1+=si2;
si1=f81(i,si1);
i32_store(i->m0,(U64)si0+52U,si1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+48U,si1);
goto L2;
L24:;
si0=l2;
si1=80U;
si0+=si1;
si1=l3;
f1217(i,si0,si1);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+80U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+80U);
i64_store(i->m0,(U64)si0+72U,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+84U,si1);
si0=l2;
si1=1178640U;
i32_store(i->m0,(U64)si0+80U,si1);
si0=l2;
sj1=1ULL;
i64_store(i->m0,(U64)si0+92U,sj1);
si0=l2;
si1=28U;
i32_store(i->m0,(U64)si0+108U,si1);
si0=l2;
si1=l2;
si2=104U;
si1+=si2;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=72U;
si1+=si2;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=l2;
si2=80U;
si1+=si2;
si0=f1331(i,si0,si1);
if(si0){
goto L9;
}
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
si0=l1;
si1=-12U;
si0+=si1;
l1=si0;
si0=l2;
si1=72U;
si0+=si1;
f1032(i,si0);
goto L23;
}
L14:;
si0=l1;
si0=f1216(i,si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+8U);
l1=si1;
si1=i32_load(i->m0,(U64)si1);
f75(i,si0,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+80U,sj1);
si0=l2;
si1=80U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l4=si1;
f76(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+88U);
l5=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L25;
}
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+84U);
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
L26:;
{
si0=l2;
si1=56U;
si0+=si1;
si1=l1;
f1217(i,si0,si1);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+56U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+56U);
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L26;
}
}
L25:;
si0=l2;
si1=l5;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=80U;
si1+=si2;
si1=f1309(i,si1);
i32_store(i->m0,(U64)si0+52U,si1);
si0=l2;
si1=6U;
i32_store(i->m0,(U64)si0+48U,si1);
goto L2;
L13:;
si0=l1;
si0=f1216(i,si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=80U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+8U);
l1=si1;
si2=64U;
si1+=si2;
f1208(i,si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f1332(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+84U);
l6=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+80U);
l7=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l4=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
l1=si0;
L27:;
{
si0=l1;
si1=l4;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l2;
si1=l2;
si2=80U;
si1+=si2;
si1=f1309(i,si1);
i32_store(i->m0,(U64)si0+52U,si1);
si0=l2;
si1=8U;
i32_store(i->m0,(U64)si0+48U,si1);
goto L2;
L28:;
si0=l2;
si1=56U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
l1=si1;
f1217(i,si0,si1);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+56U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l2;
sj0=i64_load(i->m0,(U64)si0+56U);
l8=sj0;
si0=l1;
si1=-8U;
si0+=si1;
l5=si0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l1;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
goto L29;
L30:;
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
l1=si0;
L29:;
si0=l7;
si1=l6;
si2=l1;
si3=l3;
si0=f1333(i,si0,si1,si2,si3);
l1=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
f1032(i,si0);
si0=l1;
sj1=l8;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
l1=si0;
goto L27;
}
L12:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si1=36U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=56U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si2=l3;
si3=3U;
si2=si2 > si3;
si0=si2?si0:si1;
if(si0){
goto L3;
}
si0=l1;
si1=64U;
si0+=si1;
l4=si0;
si0=l1;
si1=72U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+64U);
l3=si1;
si2=l3;
si3=5U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+128U);
si2=8U;
si1+=si2;
f392(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+40U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+44U);
si2=1123693U;
si3=2U;
si0=f247(i,si0,si1,si2,si3);
if(si0){
goto L34;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+72U);
l5=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+64U);
l3=si0;
L35:;
si0=l5;
si1=l3;
si2=l3;
si3=5U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+128U);
si2=8U;
si1+=si2;
f392(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+32U);
l1=si0;
si1=l2;
si1=i32_load(i->m0,(U64)si1+36U);
l3=si1;
si2=1124444U;
si3=2U;
si0=f247(i,si0,si1,si2,si3);
if(si0){
goto L33;
}
si0=l1;
si1=l3;
si2=1124446U;
si3=3U;
si0=f247(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=0U;
si2=1124452U;
si0=f1247(i,si0,si1,si2);
l1=si0;
si0=l4;
si1=1U;
si2=1124468U;
si0=f1247(i,si0,si1,si2);
l3=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
l5=si0;
si1=9U;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l5;
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l5;
si1=9U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=2147483647U;
i32_store(i->m0,(U64)si0+84U,si1);
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+80U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=l2;
si2=80U;
si1+=si2;
f1334(i,si0,si1);
goto L2;
L34:;
si0=l4;
si1=0U;
si2=1124428U;
si0=f1247(i,si0,si1,si2);
l1=si0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=5U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
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
goto L11;
}
si0=l2;
si1=80U;
si0+=si1;
si1=l1;
f1335(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+80U);
l1=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l2;
si1=112U;
si0+=si1;
si1=12U;
si0+=si1;
si1=l2;
si2=80U;
si1+=si2;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+84U);
i64_store(i->m0,(U64)si0+116U,sj1);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l2;
si1=l2;
si2=112U;
si1+=si2;
si1=f1267(i,si1);
i32_store(i->m0,(U64)si0+52U,si1);
si0=l2;
si1=9U;
i32_store(i->m0,(U64)si0+48U,si1);
goto L2;
L36:;
si0=l2;
si1=80U;
si0+=si1;
f1272(i,si0);
goto L3;
L33:;
si0=l4;
si1=0U;
si2=1124484U;
si0=f1247(i,si0,si1,si2);
l1=si0;
si0=l4;
si1=1U;
si2=1124500U;
si0=f1247(i,si0,si1,si2);
l3=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l5;
si1=9U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0);
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si1=48U;
si0+=si1;
si1=0U;
si2=l3;
si2=i32_load(i->m0,(U64)si2+4U);
f1336(i,si0,si1,si2);
goto L2;
L32:;
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0);
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l3;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+84U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=l2;
si2=80U;
si1+=si2;
f1334(i,si0,si1);
goto L2;
L31:;
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si1=9U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=2147483647U;
f1336(i,si0,si1,si2);
goto L2;
L11:;
UNREACHABLE;
L10:;
si0=1124364U;
f14(i,si0);
UNREACHABLE;
L9:;
si0=1178224U;
si1=43U;
si2=l2;
si3=80U;
si2+=si3;
si3=1116712U;
si4=1124380U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=1124516U;
f14(i,si0);
UNREACHABLE;
L7:;
si0=1124396U;
f14(i,si0);
UNREACHABLE;
L6:;
si0=1124412U;
f14(i,si0);
UNREACHABLE;
L5:;
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l3;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+84U,si1);
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+80U,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=l2;
si2=80U;
si1+=si2;
f1334(i,si0,si1);
goto L2;
L4:;
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l3;
si2=i32_load(i->m0,(U64)si2+4U);
f1336(i,si0,si1,si2);
goto L2;
L3:;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+48U);
i64_store(i->m0,(U64)si0,sj1);
L1:;
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1552(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si3=sf3 < sf4;
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

void f26(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,F32 l3) {
F32 l4=0;
U32 si0,si3;
F32 sf1,sf2,sf3,sf4;
si0=l2;
sf1=1;
sf2=-1;
si3=l0;
sf3=f32_load(i->m0,(U64)si3);
l4=sf3;
sf4=0.5;
si3=sf3 <= sf4;
sf1=si3?sf1:sf2;
f32_store(i->m0,(U64)si0,sf1);
si0=l0;
sf1=l4;
sf2=l3;
si3=l1;
si3=i32_load(i->m0,(U64)si3);
sf3=(F32)(si3);
sf2/=sf3;
sf1+=sf2;
l3=sf1;
sf2=-1;
sf1+=sf2;
sf2=l3;
sf3=l3;
sf4=1;
si3=sf3 > sf4;
sf1=si3?sf1:sf2;
f32_store(i->m0,(U64)si0,sf1);
L0:;
}

void f802(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
F32 l3=0;
U32 si0,si1,si2,si3,si4;
F32 sf0,sf1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
f784(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
l1=si0;
if(si0){
goto L3;
}
si0=0U;
l1=si0;
goto L2;
L3:;
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
f785(i,si0,si1);
si0=l2;
si1=36U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+8U);
si2=l2;
si2=i32_load(i->m0,(U64)si2+12U);
f57(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+36U);
if(si0){
goto L1;
}
si0=l2;
sf0=f32_load(i->m0,(U64)si0+40U);
l3=sf0;
si0=l1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+28U);
f787(i,si0,si1);
si0=1U;
l1=si0;
L2:;
si0=l0;
sf1=l3;
f32_store(i->m0,(U64)si0+4U,sf1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+37U);
i32_store8(i->m0,(U64)si0+47U,si1);
si0=1178224U;
si1=43U;
si2=l2;
si3=47U;
si2+=si3;
si3=1111716U;
si4=1114436U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f775(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l5;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=2U;
f360(i,si0,si1,si2,si3,si4);
si0=l4;
si1=1U;
si0+=si1;
l6=si0;
si0=l5;
sj0=i64_load(i->m0,(U64)si0+24U);
l7=sj0;
sj1=71776119061217280ULL;
sj0&=sj1;
l8=sj0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+76U);
l9=si0;
si1=l5;
si1=i32_load(i->m0,(U64)si1+40U);
l10=si1;
si0-=si1;
l11=si0;
sj0=l7;
sj1=-1095216660481ULL;
sj0&=sj1;
l12=sj0;
si0=l9;
si1=-1U;
si0+=si1;
l13=si0;
sj0=l7;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l14=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+72U);
l15=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+68U);
l16=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+64U);
l17=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+52U);
l18=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+44U);
l19=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+32U);
l20=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+20U);
l21=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
l22=si0;
si0=0U;
l23=si0;
L1:;
{
si0=l22;
if(si0){
goto L4;
}
sj0=l8;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L3;
}
L6:;
{
si0=l16;
l3=si0;
si0=l21;
si0=!(si0);
if(si0){
goto L7;
}
si0=l16;
si1=l21;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l16;
si1=l21;
si0=si0 != si1;
if(si0){
goto L9;
}
goto L8;
L10:;
si0=l17;
si1=l21;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L8;
}
L9:;
si0=l17;
si1=l16;
si2=l21;
si3=l16;
si4=1122284U;
f518(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l16;
si1=l21;
si0-=si1;
l3=si0;
L7:;
si0=l3;
si0=!(si0);
if(si0){
goto L11;
}
si0=l17;
si1=l21;
si0+=si1;
l24=si0;
si0=i32_load8_s(i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L13;
}
si0=l3;
si1=255U;
si0&=si1;
l3=si0;
goto L12;
L13:;
si0=l24;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l25=si0;
si0=l3;
si1=31U;
si0&=si1;
l26=si0;
si0=l3;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l26;
si1=6U;
si0<<=(si1&31);
si1=l25;
si0|=si1;
l3=si0;
goto L12;
L14:;
si0=l25;
si1=6U;
si0<<=(si1&31);
si1=l24;
si1=i32_load8_u(i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l25=si0;
si0=l3;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l25;
si1=l26;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l3=si0;
goto L12;
L15:;
si0=l25;
si1=6U;
si0<<=(si1&31);
si1=l24;
si1=i32_load8_u(i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l26;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l3=si0;
L12:;
si0=l14;
si1=255U;
si0&=si1;
if(si0){
goto L5;
}
si0=l3;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=1U;
l14=si0;
si0=1U;
l24=si0;
si0=l3;
si1=128U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=2U;
l24=si0;
si0=l3;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=3U;
si1=4U;
si2=l3;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l24=si0;
L16:;
si0=l24;
si1=l21;
si0+=si1;
l21=si0;
goto L6;
L11:;
}
si0=l14;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
L5:;
si0=l14;
si1=1U;
si0^=si1;
l14=si0;
si0=l21;
l3=si0;
si0=l21;
l24=si0;
goto L2;
L4:;
si0=l14;
sj0=(U64)(si0);
sj1=255ULL;
sj0&=sj1;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l12;
sj0|=sj1;
l7=sj0;
si0=l18;
l27=si0;
L17:;
{
si0=l20;
si1=l20;
si2=l27;
si3=l20;
si4=l27;
si3=si3 > si4;
si1=si3?si1:si2;
si2=l18;
si3=-1U;
si2=si2 == si3;
l28=si2;
si0=si2?si0:si1;
l29=si0;
si1=l9;
si2=l29;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
l26=si0;
si0=0U;
si1=l27;
si2=l28;
si0=si2?si0:si1;
l30=si0;
L18:;
{
si0=l13;
si1=l19;
si0+=si1;
l3=si0;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L3;
}
sj0=l7;
si1=l17;
si2=l3;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=1ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L20;
}
si0=l17;
si1=l19;
si0+=si1;
l25=si0;
si0=l29;
l24=si0;
L24:;
{
si0=l26;
si1=l24;
l3=si1;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l20;
l3=si0;
L26:;
{
si0=l30;
si1=l3;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l27;
si1=0U;
si2=l28;
si0=si2?si0:si1;
l18=si0;
si0=l19;
l24=si0;
si0=l19;
si1=l9;
si0+=si1;
l3=si0;
l19=si0;
goto L2;
L27:;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l3;
si1=l19;
si0+=si1;
l24=si0;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l15;
si1=l3;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=l17;
si2=l24;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L26;
}
}
si0=l19;
si1=l10;
si0+=si1;
l19=si0;
si0=l28;
if(si0){
goto L18;
}
si0=l11;
l27=si0;
goto L17;
L25:;
si0=l19;
si1=l3;
si0+=si1;
si1=l16;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l3;
si1=1U;
si0+=si1;
l24=si0;
si0=l15;
si1=l3;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=l25;
si2=l3;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L24;
}
}
si0=l19;
si1=l20;
si0-=si1;
si1=l3;
si0+=si1;
si1=1U;
si0+=si1;
l19=si0;
si0=l28;
if(si0){
goto L18;
}
goto L19;
L23:;
si0=l3;
si1=l9;
si2=1117716U;
f4(i,si0,si1,si2);
UNREACHABLE;
L22:;
si0=l24;
si1=l16;
si2=1117732U;
f4(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=l16;
si1=l29;
si2=l19;
si1+=si2;
l3=si1;
si2=l16;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l16;
si2=1117748U;
f4(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=l19;
si1=l9;
si0+=si1;
l19=si0;
si0=l28;
if(si0){
goto L18;
}
L19:;
}
si0=0U;
l27=si0;
goto L17;
}
L3:;
si0=l5;
si1=4U;
si0+=si1;
si1=l1;
si2=l23;
si1+=si2;
si2=l2;
si3=l23;
si2-=si3;
f724(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
si2=4U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+4U);
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l5;
si1=4U;
si0+=si1;
si1=l1;
si2=l23;
si1+=si2;
si2=l24;
si3=l23;
si2-=si3;
f724(i,si0,si1,si2);
si0=l5;
si1=4U;
si0+=si1;
si1=l4;
si2=l6;
f717(i,si0,si1,si2);
si0=l3;
l23=si0;
goto L1;
}
L0:;
}

void f2575(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
f1740(i,si0,si1,si2);
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
si1=f1741(i,si1);
l3=si1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l3;
si2=i32_load(i->m0,(U64)si2+8U);
si3=l4;
si4=2147483647U;
f2576(i,si0,si1,si2,si3,si4);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
f2567(i,si0,si1);
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
f1704(i,si0,si1);
si0=l5;
si1=32U;
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
si0=1170692U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f3112(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l2;
si0=f3062(i,si0,si1,si2);
L0:;
return si0;
}

U32 f1649(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1;
si0=0U;
l2=si0;
L2:;
{
si0=l2;
si1=8U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=l2;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L1;
L4:;
si0=l3;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l3;
si0=si0 != si1;
if(si0){
goto L1;
}
L3:;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
goto L2;
}
L1:;
si0=l2;
si1=8U;
si0=si0 == si1;
L0:;
return si0;
}

void f2281(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U64 l18=0;
U64 l19=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=i32_load16_u(i->m0,(U64)si0+226U);
l4=si0;
si1=l1;
si0+=si1;
l5=si0;
si1=12U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+20U);
l6=si0;
si0=i32_load16_u(i->m0,(U64)si0+226U);
l7=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si1=l5;
i32_store16(i->m0,(U64)si0+226U,si1);
si0=l6;
si1=l7;
si2=l1;
si1-=si2;
l7=si1;
i32_store16(i->m0,(U64)si0+226U,si1);
si0=l6;
si1=l1;
si2=-1U;
si1+=si2;
l8=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load(i->m0,(U64)si0);
l9=sj0;
si0=l6;
si1=92U;
si0+=si1;
l10=si0;
si1=l1;
si2=12U;
si1*=si2;
si0+=si1;
l11=si0;
si1=-12U;
si0+=si1;
l12=si0;
si1=8U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l13=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l14=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
l15=si1;
si2=12U;
si1*=si2;
si0+=si1;
l16=si0;
si1=92U;
si0+=si1;
l17=si0;
sj0=i64_load(i->m0,(U64)si0);
l18=sj0;
si0=l17;
si1=l12;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l16;
si1=100U;
si0+=si1;
l12=si0;
si0=i32_load(i->m0,(U64)si0);
l16=si0;
si0=l12;
si1=l13;
i32_store(i->m0,(U64)si0,si1);
si0=l14;
si1=l15;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
sj0=i64_load(i->m0,(U64)si0);
l19=sj0;
si0=l12;
sj1=l9;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si2=12U;
si1*=si2;
si0+=si1;
l12=si0;
si1=100U;
si0+=si1;
si1=l16;
i32_store(i->m0,(U64)si0,si1);
si0=l12;
si1=92U;
si0+=si1;
sj1=l18;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l19;
i64_store(i->m0,(U64)si0,sj1);
si0=l10;
si1=l8;
si2=l12;
si3=104U;
si2+=si3;
si3=l5;
si4=l4;
si5=1U;
si4+=si5;
l4=si4;
si3-=si4;
l12=si3;
f1028(i,si0,si1,si2,si3);
si0=l6;
si1=l8;
si2=l3;
si3=l4;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l12;
f1029(i,si0,si1,si2,si3);
si0=l10;
si1=l11;
si2=l7;
si3=12U;
si2*=si3;
si0=f3076(i,si0,si1,si2);
si0=l6;
si1=l6;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f3076(i,si0,si1,si2);
l6=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l8;
if(si0){
goto L2;
}
goto L1;
L6:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=228U;
si0+=si1;
l0=si0;
si1=l1;
si2=l3;
si3=l4;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si3=228U;
si2+=si3;
si3=l1;
f1030(i,si0,si1,si2,si3);
si0=l0;
si1=l0;
si2=l1;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l7;
si3=2U;
si2<<=(si3&31);
si3=4U;
si2+=si3;
si0=f3076(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l5;
si3=1U;
si2+=si3;
f1031(i,si0,si1,si2);
si0=l6;
si1=0U;
si2=l7;
si3=1U;
si2+=si3;
f1031(i,si0,si1,si2);
goto L1;
L5:;
si0=1120256U;
si1=27U;
si2=1120480U;
f16(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1120496U;
si1=50U;
si2=1120548U;
f16(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1120564U;
si1=40U;
si2=1120604U;
f16(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1120424U;
si1=40U;
si2=1120620U;
f16(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1125(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=4U;
si0+=si1;
si1=l1;
f1123(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
if(si0){
goto L2;
}
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0+12U,si1);
goto L1;
L2:;
si0=l0;
si1=l1;
si2=l2;
si2=i32_load(i->m0,(U64)si2+12U);
l3=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+12U,sj1);
si0=l0;
si1=l1;
si2=l3;
si3=12U;
si2*=si3;
si1+=si2;
l1=si1;
si2=92U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si2=100U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1083(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
f1088(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si0=f1089(i,si0);
si0=l0;
f87(i,si0);
L0:;
}

U32 f475(glicolwasmInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
sj1=l1;
si1=(U32)(sj1);
si0&=si1;
l5=si0;
sj0=l1;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l6=sj0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si0=0U;
l8=si0;
L1:;
{
si0=l3;
si1=l7;
si2=l5;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
l1=sj1;
sj2=l6;
sj1^=sj2;
l9=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=l9;
sj3=-72340172838076673ULL;
sj2+=sj3;
sj1&=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(i->m0,(U64)si0+8U,sj1);
L3:;
{
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
f43(i,si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
if(si0){
goto L4;
}
sj0=l1;
sj1=l1;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=l8;
si2=8U;
si1+=si2;
l8=si1;
si0+=si1;
si1=l4;
si0&=si1;
l5=si0;
goto L1;
L4:;
si0=l2;
si1=l7;
si2=0U;
si3=l3;
si3=i32_load(i->m0,(U64)si3+4U);
si4=l5;
si3+=si4;
si4=l4;
si3&=si4;
l11=si3;
si2-=si3;
si3=24U;
si2*=si3;
si1+=si2;
si2=-24U;
si1+=si2;
l0=si1;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si3=8U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si0=f565(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L3;
}
}
L2:;
}
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l7;
si1=0U;
si2=l11;
si1-=si2;
si2=24U;
si1*=si2;
si0+=si1;
si1=0U;
si2=l10;
si0=si2?si0:si1;
L0:;
return si0;
}

