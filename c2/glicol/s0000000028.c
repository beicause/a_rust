#include "w2c2_base.h"

#include "glicol.h"

void f2435(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
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
goto L3;
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
f1268(i,si0,si1);
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
f1741(i,si0,si1,si2);
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
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=32U;
si0+=si1;
si1=l2;
si2=l5;
si3=24U;
si2+=si3;
si2=f1742(i,si2);
si3=l5;
si4=8U;
si3+=si4;
f2339(i,si0,si1,si2,si3);
si0=l0;
si1=l5;
si2=32U;
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
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1U;
si1=l4;
si2=1168896U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1169832U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1168896U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f1103(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si1=3U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
f12(i,si0,si1);
L1:;
L0:;
}

void f2140(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si0=1148168U;
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
f989(i,si0);
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
si0=1148176U;
l3=si0;
si0=23U;
l4=si0;
goto L2;
L9:;
si0=1148199U;
l3=si0;
si0=11U;
l4=si0;
goto L2;
L8:;
si0=1148210U;
l3=si0;
si0=8U;
l4=si0;
goto L2;
L7:;
si0=1148218U;
l3=si0;
si0=8U;
l4=si0;
goto L2;
L6:;
si0=1148226U;
l3=si0;
si0=13U;
l4=si0;
goto L2;
L5:;
si0=1180340U;
l3=si0;
si0=2U;
l4=si0;
goto L2;
L4:;
si0=l2;
si1=40U;
si0+=si1;
sj1=1ULL;
f991(i,si0,sj1);
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
f999(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
l6=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l5=si0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1148239U);
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1148255U);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1148247U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
si1=l4;
f999(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
l7=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l3;
si2=l4;
si0=f3069(i,si0,si1,si2);
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
f1329(i,si0,si1);
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
f2074(i,si0,si1,si2,si3);
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+56U);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
si0=l1;
f1073(i,si0);
L1:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1535(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si3=sf3 <= sf4;
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

void f2821(glicolwasmInstance*i,U32 l0) {
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
si1=1132628U;
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

void f1976(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
if(si0){
goto L2;
}
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f83(i,si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0,sj1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2910(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj4,sj6,sj7;
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
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
f1714(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l4=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si1=1127392U;
si2=9U;
si3=l2;
si4=l5;
sj4=i64_load(i->m0,(U64)si4+8U);
l6=sj4;
si4=(U32)(sj4);
l7=si4;
si5=l7;
si6=8U;
si5+=si6;
sj6=l6;
sj7=1095216660480ULL;
sj6&=sj7;
sj7=8589934592ULL;
si6=sj6 == sj7;
si4=si6?si4:si5;
si1=f1946(i,si1,si2,si3,si4);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
f1708(i,si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=0U;
si1=0U;
si2=1174172U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1174172U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1174156U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f1594(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f1611(i,si0,si1);
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
si4=1167220U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1U;
si1=1U;
si2=1167220U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
sj1=1ULL;
sj2=257ULL;
si3=l3;
si4=l4;
si4=i32_load(i->m0,(U64)si4+4U);
si3=(U32)((I32)si3<(I32)si4);
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
si4=1167220U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1167220U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f2881(glicolwasmInstance*i,U32 l0) {
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
si1=1132180U;
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

void f1126(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2;
U64 sj1,sj2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+32U);
l3=si0;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
if(si0){
goto L8;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l5=si0;
L9:;
{
si0=l5;
if(si0){
goto L10;
}
si0=0U;
l5=si0;
goto L7;
L10:;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+228U);
l3=si0;
goto L9;
}
L8:;
si0=l3;
l5=si0;
si0=l4;
l3=si0;
L7:;
L11:;
{
si0=l2;
si1=4U;
si0+=si1;
si1=l3;
si2=l5;
f1127(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
goto L11;
}
L6:;
si0=l1;
si1=l3;
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l3;
si0=!(si0);
if(si0){
goto L12;
}
L13:;
si0=l5;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
goto L2;
L12:;
si0=l1;
si1=8U;
si0+=si1;
l3=si0;
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
L14:;
{
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=l3;
si1=228U;
si0+=si1;
l3=si0;
goto L14;
}
L5:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=1119656U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=l1;
sj1=0ULL;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
si0=0U;
l4=si0;
L2:;
L15:;
{
si0=l5;
si1=l3;
si1=i32_load16_u(i->m0,(U64)si1+226U);
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l5;
si1=1U;
si0+=si1;
l6=si0;
si0=l4;
if(si0){
goto L18;
}
si0=l3;
l7=si0;
goto L17;
L18:;
si0=l3;
si1=l6;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=228U;
si0+=si1;
l6=si0;
si0=l4;
l8=si0;
L19:;
{
si0=l6;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si1=228U;
si0+=si1;
l6=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L19;
}
}
si0=0U;
l6=si0;
L17:;
si0=l1;
si1=l7;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l6;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(i->m0,(U64)si0+8U,sj1);
goto L1;
L16:;
si0=l2;
si1=4U;
si0+=si1;
si1=l3;
si2=l4;
f1127(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l5=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
goto L15;
L20:;
}
si0=1120980U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3028(glicolwasmInstance*i,U32 l0,U64 l1,U32 l2,U32 l3) {
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
f991(i,si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
sj1=l1;
si2=l2;
si3=l4;
sj3=i64_load(i->m0,(U64)si3+48U);
si4=l4;
si4=i32_load(i->m0,(U64)si4+56U);
f3009(i,si0,sj1,si2,sj3,si4);
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
f991(i,si0,sj1);
si0=l4;
sj1=l1;
si2=l2;
si3=l4;
sj3=i64_load(i->m0,(U64)si3+16U);
si4=l4;
si4=i32_load(i->m0,(U64)si4+24U);
f3007(i,si0,sj1,si2,sj3,si4);
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
si1=1175476U;
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
f1496(i,si0,si1);
si0=l4;
si1=68U;
si0+=si1;
si0=f1662(i,si0);
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

void f2086(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
U64 l10=0;
U64 l11=0;
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=400U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=288U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f2071(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+288U);
si1=90U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l4;
si1=176U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+288U);
l5=sj1;
i64_store(i->m0,(U64)si0+176U,sj1);
sj0=l5;
si0=(U32)(sj0);
l6=si0;
si1=6U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l6;
si1=85U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l4;
si1=186U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+184U);
l6=si0;
si0=l4;
si1=6U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l4;
si1=292U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
f2073(i,si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=26U;
f999(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l7=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1152964U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load16_u(i->m0,(U64)si1+1152988U);
i32_store16(i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1152980U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1152972U);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=288U;
si0+=si1;
si1=24U;
si0+=si1;
si1=26U;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=308U;
si0+=si1;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(i->m0,(U64)si0+304U,si1);
si0=l4;
si1=3U;
i32_store(i->m0,(U64)si0+288U,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=l6;
si3=l3;
f2074(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+40U);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=176U;
si0+=si1;
f1078(i,si0);
goto L1;
L15:;
si0=l4;
si1=186U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l6=si0;
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+184U);
l7=si0;
si0=l4;
si1=176U;
si0+=si1;
f1078(i,si0);
si0=l4;
si1=288U;
si0+=si1;
si1=l3;
si2=l7;
si3=l6;
f2098(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(i->m0,(U64)si0+288U);
if(si0){
goto L3;
}
si0=l4;
si1=300U;
si0+=si1;
l8=si0;
sj0=i64_load(i->m0,(U64)si0);
l5=sj0;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+292U);
l9=sj0;
si0=l4;
si1=144U;
si0+=si1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
sj1=l9;
sj2=32ULL;
sj1>>=(sj2&63);
l10=sj1;
sj2=65535ULL;
sj1&=sj2;
l11=sj1;
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l9;
sj3=-281474976710656ULL;
sj2&=sj3;
sj1|=sj2;
sj2=l9;
sj3=48ULL;
sj2>>=(sj3&63);
l12=sj2;
sj3=16ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj2=l11;
sj1|=sj2;
i64_store(i->m0,(U64)si0+40U,sj1);
sj0=l12;
si0=(U32)(sj0);
l13=si0;
sj0=l10;
si0=(U32)(sj0);
l14=si0;
sj0=l5;
sj1=56ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l15=si0;
sj0=l9;
si0=(U32)(sj0);
l16=si0;
sj0=l5;
sj1=48ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
si1=16U;
si0&=si1;
if(si0){
goto L16;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+48U);
l17=si0;
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+16U);
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+48U,si1);
si0=l3;
si1=254U;
si0&=si1;
l18=si0;
si0=l4;
si1=48U;
si0+=si1;
l19=si0;
si0=l4;
si1=160U;
si0+=si1;
si1=1U;
si0|=si1;
l7=si0;
si0=l4;
si1=176U;
si0+=si1;
si1=1U;
si0|=si1;
l20=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+32U);
si0=i32_load(i->m0,(U64)si0);
l21=si0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
l11=sj0;
L18:;
{
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=f2066(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si1=7U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l6;
si1=89U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
sj1=l5;
i64_store32(i->m0,(U64)si0+296U,sj1);
si0=l8;
sj1=l11;
i64_store16(i->m0,(U64)si0,sj1);
si0=l4;
si1=l15;
i32_store8(i->m0,(U64)si0+303U,si1);
si0=l4;
si1=l18;
i32_store8(i->m0,(U64)si0+302U,si1);
si0=l4;
si1=l13;
i32_store16(i->m0,(U64)si0+294U,si1);
si0=l4;
si1=l14;
i32_store16(i->m0,(U64)si0+292U,si1);
si0=l4;
si1=l16;
i32_store(i->m0,(U64)si0+288U,si1);
si0=l4;
si1=176U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
si4=288U;
si3+=si4;
f2068(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+176U);
l3=si0;
si1=17U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l7;
si1=l20;
si1=i32_load16_u(i->m0,(U64)si1);
i32_store16(i->m0,(U64)si0,si1);
si0=l7;
si1=2U;
si0+=si1;
si1=l20;
si2=2U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+180U);
l9=sj1;
i64_store(i->m0,(U64)si0+164U,sj1);
si0=l4;
si1=l3;
i32_store8(i->m0,(U64)si0+160U,si1);
si0=l3;
if(si0){
goto L19;
}
si0=l4;
si1=160U;
si0+=si1;
f1057(i,si0);
goto L18;
L21:;
si0=l4;
si1=288U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f2071(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+288U);
si1=90U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+298U);
l6=si0;
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+296U);
l7=si0;
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+288U);
i64_store(i->m0,(U64)si0+288U,sj1);
si0=l4;
si1=288U;
si0+=si1;
f1078(i,si0);
goto L2;
L20:;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+180U);
l5=sj0;
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l5;
i64_store(i->m0,(U64)si0+4U,sj1);
goto L4;
L19:;
si0=l3;
sj1=l9;
si1=(U32)(sj1);
si0=f2069(i,si0,si1);
l6=si0;
si0=l19;
si1=l4;
si2=160U;
si1+=si2;
f1231(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=f2066(i,si0);
l3=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l22=si0;
si1=23U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l22;
si1=7U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l6;
if(si0){
goto L18;
}
si0=l22;
si1=85U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l4;
si1=288U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1+4U);
si1=f1374(i,si1);
l2=si1;
si2=16U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=288U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+288U,sj1);
si0=l4;
si1=176U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=l3;
si2=i32_load16_u(i->m0,(U64)si2+8U);
si3=l3;
si4=10U;
si3+=si4;
si3=i32_load16_u(i->m0,(U64)si3);
f2070(i,si0,si1,si2,si3);
si0=l4;
sj0=i64_load(i->m0,(U64)si0+176U);
l5=sj0;
si0=l2;
f87(i,si0);
goto L17;
L24:;
si0=l4;
si1=288U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f2071(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+288U);
si1=90U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+298U);
l6=si0;
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+296U);
l7=si0;
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+288U);
i64_store(i->m0,(U64)si0+288U,sj1);
si0=l4;
si1=288U;
si0+=si1;
f1078(i,si0);
goto L2;
L23:;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l6;
if(si0){
goto L25;
}
si0=l4;
si1=288U;
si0+=si1;
si1=l3;
f2071(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+288U);
si1=90U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+288U);
i64_store(i->m0,(U64)si0+288U,sj1);
si0=l4;
si1=288U;
si0+=si1;
f1078(i,si0);
goto L18;
L25:;
si0=l4;
si1=288U;
si0+=si1;
si1=l3;
f2071(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+288U);
si1=90U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+288U);
i64_store(i->m0,(U64)si0+288U,sj1);
si0=l4;
si1=288U;
si0+=si1;
f1078(i,si0);
goto L18;
L22:;
}
si0=l4;
si1=23U;
i32_store(i->m0,(U64)si0+176U,si1);
si0=l4;
si1=292U;
si0+=si1;
si1=l4;
si2=176U;
si1+=si2;
f2073(i,si0,si1);
si0=l4;
si1=16U;
si0+=si1;
si1=27U;
f999(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+16U);
l6=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+20U);
l2=si0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1152920U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=23U;
si0+=si1;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1152943U);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1152936U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1152928U);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=312U;
si0+=si1;
si1=27U;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=308U;
si0+=si1;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l6;
i32_store(i->m0,(U64)si0+304U,si1);
si0=l4;
si1=3U;
i32_store(i->m0,(U64)si0+288U,si1);
si0=l4;
si1=176U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=l3;
si2=i32_load16_u(i->m0,(U64)si2+8U);
si3=l3;
si4=10U;
si3+=si4;
si3=i32_load16_u(i->m0,(U64)si3);
f2074(i,si0,si1,si2,si3);
si0=l4;
sj0=i64_load(i->m0,(U64)si0+176U);
l5=sj0;
L17:;
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l5;
i64_store(i->m0,(U64)si0+4U,sj1);
goto L4;
L16:;
si0=l4;
sj1=l5;
i64_store32(i->m0,(U64)si0+296U,sj1);
si0=l8;
sj1=l5;
sj2=32ULL;
sj1>>=(sj2&63);
i64_store16(i->m0,(U64)si0,sj1);
si0=l4;
si1=l15;
i32_store8(i->m0,(U64)si0+303U,si1);
si0=l4;
si1=l3;
i32_store8(i->m0,(U64)si0+302U,si1);
si0=l4;
si1=l13;
i32_store16(i->m0,(U64)si0+294U,si1);
si0=l4;
si1=l14;
i32_store16(i->m0,(U64)si0+292U,si1);
si0=l4;
si1=l16;
i32_store(i->m0,(U64)si0+288U,si1);
si0=l4;
si1=176U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
si4=288U;
si3+=si4;
f2109(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+176U);
l3=si0;
si1=17U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l4;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+179U);
i32_store8(i->m0,(U64)si0+151U,si1);
si0=l4;
si1=l4;
si1=i32_load16_u(i->m0,(U64)si1+177U);
i32_store16(i->m0,(U64)si0+149U,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+180U);
i64_store(i->m0,(U64)si0+152U,sj1);
si0=l4;
si1=l3;
i32_store8(i->m0,(U64)si0+148U,si1);
si0=l4;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=148U;
si1+=si2;
f1231(i,si0,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f2071(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+288U);
si1=90U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=160U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+288U);
l5=sj1;
i64_store(i->m0,(U64)si0+160U,sj1);
sj0=l5;
si0=(U32)(sj0);
l2=si0;
si1=7U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l2;
si1=85U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l4;
si1=170U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+168U);
l6=si0;
si0=l4;
si1=6U;
i32_store(i->m0,(U64)si0+176U,si1);
si0=l4;
si1=292U;
si0+=si1;
si1=l4;
si2=176U;
si1+=si2;
f2073(i,si0,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=26U;
f999(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+32U);
l7=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+36U);
l2=si0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1152964U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=0U;
si1=i32_load16_u(i->m0,(U64)si1+1152988U);
i32_store16(i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1152980U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1152972U);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=288U;
si0+=si1;
si1=24U;
si0+=si1;
si1=26U;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=308U;
si0+=si1;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(i->m0,(U64)si0+304U,si1);
si0=l4;
si1=3U;
i32_store(i->m0,(U64)si0+288U,si1);
si0=l4;
si1=176U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=l6;
si3=l3;
f2074(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+176U);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=160U;
si0+=si1;
f1078(i,si0);
goto L4;
L28:;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+180U);
l5=sj0;
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l5;
i64_store(i->m0,(U64)si0+4U,sj1);
goto L4;
L27:;
si0=l4;
si1=170U;
si0+=si1;
sj0=i64_load16_u(i->m0,(U64)si0);
l5=sj0;
si0=l4;
sj0=i64_load16_u(i->m0,(U64)si0+168U);
l9=sj0;
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
si2=108U;
si0=f3069(i,si0,si1,si2);
si0=l4;
si1=176U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
sj2=l5;
sj3=48ULL;
sj2<<=(sj3&63);
sj3=l9;
sj4=32ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l12;
sj4=16ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l10;
sj4=65535ULL;
sj3&=sj4;
sj2|=sj3;
f2138(i,si0,si1,sj2);
si0=l0;
si1=l4;
si2=176U;
si1+=si2;
si1=f1312(i,si1);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=9U;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=160U;
si0+=si1;
f1078(i,si0);
goto L1;
L26:;
si0=l4;
si1=170U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+168U);
l6=si0;
si0=l4;
si1=288U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si1=i32_load(i->m0,(U64)si1+164U);
l2=si1;
si2=16U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=288U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+288U,sj1);
si0=l4;
si1=176U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=l6;
si3=l3;
f2070(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+176U);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l2;
f87(i,si0);
goto L4;
L14:;
si0=l4;
si1=186U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l3=si0;
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+184U);
l6=si0;
si0=l4;
si1=288U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l4;
si1=i32_load(i->m0,(U64)si1+180U);
l2=si1;
si2=16U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=288U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=l2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+288U,sj1);
si0=l4;
si1=40U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=l6;
si3=l3;
f2070(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+40U);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l2;
f87(i,si0);
goto L1;
L13:;
si0=1152848U;
f14(i,si0);
UNREACHABLE;
L12:;
si0=1152864U;
f14(i,si0);
UNREACHABLE;
L11:;
si0=1148344U;
f14(i,si0);
UNREACHABLE;
L10:;
si0=l4;
si1=7U;
i32_store(i->m0,(U64)si0+176U,si1);
si0=l4;
si1=292U;
si0+=si1;
si1=l4;
si2=176U;
si1+=si2;
f2073(i,si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=23U;
f999(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+24U);
l6=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+28U);
l2=si0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1152880U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=15U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1152895U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1152888U);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=312U;
si0+=si1;
si1=23U;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=308U;
si0+=si1;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l6;
i32_store(i->m0,(U64)si0+304U,si1);
si0=l4;
si1=3U;
i32_store(i->m0,(U64)si0+288U,si1);
si0=l4;
si1=176U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=l3;
si2=i32_load16_u(i->m0,(U64)si2+8U);
si3=l3;
si4=10U;
si3+=si4;
si3=i32_load16_u(i->m0,(U64)si3);
f2074(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+176U);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
goto L4;
L9:;
si0=1152904U;
f14(i,si0);
UNREACHABLE;
L8:;
si0=1148344U;
f14(i,si0);
UNREACHABLE;
L7:;
si0=1148344U;
f14(i,si0);
UNREACHABLE;
L6:;
si0=1148344U;
f14(i,si0);
UNREACHABLE;
L5:;
si0=1152948U;
f14(i,si0);
UNREACHABLE;
L4:;
si0=l4;
si1=48U;
si0+=si1;
f1049(i,si0);
goto L1;
L3:;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+292U);
l5=sj0;
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l5;
i64_store(i->m0,(U64)si0+4U,sj1);
goto L1;
L2:;
si0=l2;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l2;
si1=i32_load(i->m0,(U64)si1+48U);
l3=si1;
f1894(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
si1=l3;
f1895(i,si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l3;
f1896(i,si0,si1);
si0=l2;
si1=l17;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+32U);
si1=l21;
f1894(i,si0,si1);
si0=l4;
si1=288U;
si0+=si1;
si1=l4;
si2=40U;
si1+=si2;
si2=108U;
si0=f3069(i,si0,si1,si2);
si0=l4;
si1=176U;
si0+=si1;
si1=l4;
si2=288U;
si1+=si2;
si2=l6;
sj2=(U64)(si2);
sj3=48ULL;
sj2<<=(sj3&63);
si3=l7;
sj3=(U64)(si3);
sj4=65535ULL;
sj3&=sj4;
sj4=32ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l12;
sj4=16ULL;
sj3<<=(sj4&63);
sj2|=sj3;
sj3=l10;
sj4=65535ULL;
sj3&=sj4;
sj2|=sj3;
f2138(i,si0,si1,sj2);
si0=l0;
si1=l4;
si2=176U;
si1+=si2;
si1=f1312(i,si1);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=9U;
i32_store8(i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=400U;
si0+=si1;
i->g0=si0;
L0:;
}

void f272(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
f337(i,si0);
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
f259(i,si0,si1);
L0:;
}

void f259(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si2=4U;
si1<<=(si2&31);
f264(i,si0,si1);
L1:;
L0:;
}

void f1722(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
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
goto L2;
}
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
l5=si1;
f1620(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
if(si0){
goto L3;
}
si0=l3;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+4U);
l6=si0;
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
f1620(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+4U);
l2=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
f1720(i,si0,si1);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l3=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=1168036U;
f14(i,si0);
UNREACHABLE;
L5:;
si0=1U;
si1=1U;
si2=1168036U;
f4(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si1=l3;
si0=f1721(i,si0,si1);
l7=si0;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=l2;
si2=l6;
si1|=si2;
i32_store8(i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
f1708(i,si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l6;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178304U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119116U;
si4=1168036U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1168036U;
f4(i,si0,si1,si2);
UNREACHABLE;
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
si4=1168036U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f169(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si0=f168(i,si0);
l1=si0;
si0=l0;
si1=2U;
f162(i,si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=1052424U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
L0:;
}

void f1514(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=1U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=1U;
si1=l3;
si2=1129224U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
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

void f470(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f485(i,si0);
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=36U;
f270(i,si0,si1,si2);
L1:;
L0:;
}

void f104(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1;
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
f531(i,si0);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
L1:;
si0=l0;
si1=l5;
si2=12U;
si1*=si2;
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
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f2827(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
if(si0){
goto L1;
}
si0=1168244U;
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
sf1=f2380(i,si1);
f32_store(i->m0,(U64)si0+4U,sf1);
si0=l0;
si1=5U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2116(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
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
U32 l21=0;
U64 l22=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=80U;
si0-=si1;
l8=si0;
i->g0=si0;
si0=0U;
l9=si0;
si0=l8;
si1=8U;
si0+=si1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l8;
sj1=0ULL;
i64_store(i->m0,(U64)si0+1U,sj1);
si0=l8;
si1=1U;
i32_store8(i->m0,(U64)si0,si1);
si0=l8;
si1=12U;
si0+=si1;
si1=8U;
si0+=si1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l8;
sj1=0ULL;
i64_store(i->m0,(U64)si0+13U,sj1);
si0=l8;
si1=1U;
i32_store8(i->m0,(U64)si0+12U,si1);
si0=l3;
si0=i32_load16_u(i->m0,(U64)si0+2U);
l10=si0;
si0=l3;
si0=i32_load16_u(i->m0,(U64)si0);
l11=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=4U;
si0+=si1;
l12=si0;
f2114(i,si0);
si0=l12;
si1=l4;
f1641(i,si0,si1);
L1:;
si0=l10;
si1=1U;
si0+=si1;
l13=si0;
si0=l2;
si1=4U;
si0+=si1;
l14=si0;
si0=l10;
si0=!(si0);
si1=l10;
si2=l11;
si1|=si2;
si2=65535U;
si1&=si2;
si1=!(si1);
si0|=si1;
l15=si0;
si0=0U;
l16=si0;
si0=0U;
l17=si0;
L7:;
{
si0=l1;
si0=f2118(i,si0);
l12=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
if(si0){
goto L9;
}
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=l8;
si1=12U;
si0+=si1;
si0=f1001(i,si0);
if(si0){
goto L4;
}
L9:;
si0=l3;
f2119(i,si0);
goto L6;
L8:;
si0=l3;
f2119(i,si0);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L10;
}
si0=l14;
si1=l12;
f1641(i,si0,si1);
L10:;
si0=l12;
si1=36U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l7;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
si1=12U;
si0+=si1;
si0=f1001(i,si0);
si0=!(si0);
if(si0){
goto L11;
}
si0=l1;
si0=f2120(i,si0);
si1=123U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si1=1114112U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=1U;
l3=si0;
goto L5;
L11:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
l18=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=l8;
si0=f1129(i,si0);
si1=l18;
si0=si0 > si1;
if(si0){
goto L14;
}
L15:;
si0=l12;
si1=l4;
si0=si0 == si1;
l19=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l8;
si1=12U;
si0+=si1;
si0=f1001(i,si0);
if(si0){
goto L13;
}
goto L12;
L14:;
si0=l0;
si1=l18;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=30U;
si0+=si1;
si1=l10;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l11;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=-2147483646U;
i32_store(i->m0,(U64)si0,si1);
goto L3;
L13:;
si0=l1;
si0=f2120(i,si0);
l18=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l18;
si1=l4;
si0=si0 == si1;
if(si0){
goto L16;
}
L17:;
si0=l2;
si1=1114112U;
i32_store(i->m0,(U64)si0+16U,si1);
goto L6;
L16:;
si0=l3;
f2119(i,si0);
si0=l1;
si0=f2118(i,si0);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L12;
}
si0=l14;
si1=l4;
f1641(i,si0,si1);
L12:;
si0=l17;
si1=l3;
si1=i32_load16_u(i->m0,(U64)si1);
l20=si1;
si2=l17;
si3=l16;
si2|=si3;
si3=65535U;
si2&=si3;
l18=si2;
si0=si2?si0:si1;
l17=si0;
si0=l16;
si1=l3;
si1=i32_load16_u(i->m0,(U64)si1+2U);
l21=si1;
si2=l18;
si0=si2?si0:si1;
l16=si0;
si0=l12;
si1=-110U;
si0+=si1;
switch(si0){
case 0:
goto L29;
case 1:
goto L18;
case 2:
goto L18;
case 3:
goto L18;
case 4:
goto L30;
case 5:
goto L18;
case 6:
goto L27;
case 7:
goto L32;
case 8:
goto L18;
case 9:
goto L18;
case 10:
goto L26;
default:
goto L33;
}
L33:;
si0=l12;
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L24;
case 1:
goto L18;
case 2:
goto L18;
case 3:
goto L34;
default:
goto L35;
}
L35:;
si0=l12;
si1=85U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l12;
si1=92U;
si0=si0 == si1;
if(si0){
goto L28;
}
goto L18;
L34:;
si0=l1;
si0=f2120(i,si0);
si1=10U;
si0=si0 == si1;
if(si0){
goto L7;
}
goto L18;
L32:;
si0=l8;
si1=12U;
si0+=si1;
si0=f1001(i,si0);
if(si0){
goto L18;
}
goto L25;
L31:;
si0=l8;
si1=12U;
si0+=si1;
si0=f1001(i,si0);
if(si0){
goto L18;
}
goto L25;
L30:;
si0=l8;
si1=12U;
si0+=si1;
si0=f1001(i,si0);
if(si0){
goto L18;
}
si0=l8;
si1=12U;
si0+=si1;
f2114(i,si0);
si0=l8;
si1=1159148U;
si2=1U;
f1379(i,si0,si1,si2);
goto L7;
L29:;
si0=l8;
si1=12U;
si0+=si1;
si0=f1001(i,si0);
if(si0){
goto L18;
}
si0=l8;
si1=12U;
si0+=si1;
f2114(i,si0);
si0=l8;
si1=1159149U;
si2=1U;
f1379(i,si0,si1,si2);
goto L7;
L28:;
si0=l5;
if(si0){
goto L36;
}
si0=l8;
si1=12U;
si0+=si1;
si0=f1001(i,si0);
if(si0){
goto L23;
}
L36:;
si0=l8;
si1=12U;
si0+=si1;
si0=f1001(i,si0);
if(si0){
goto L18;
}
si0=l8;
si1=12U;
si0+=si1;
f2114(i,si0);
si0=l8;
si1=1159150U;
si2=1U;
f1379(i,si0,si1,si2);
goto L7;
L27:;
si0=l8;
si1=12U;
si0+=si1;
si0=f1001(i,si0);
if(si0){
goto L18;
}
si0=l8;
si1=12U;
si0+=si1;
f2114(i,si0);
si0=l8;
si1=1159151U;
si2=1U;
f1379(i,si0,si1,si2);
goto L7;
L26:;
si0=l8;
si1=12U;
si0+=si1;
si0=f1001(i,si0);
if(si0){
goto L18;
}
L25:;
si0=l8;
si1=24U;
si0+=si1;
si1=l8;
si2=12U;
si1+=si2;
f1372(i,si0,si1);
si0=l8;
si1=12U;
si0+=si1;
f2114(i,si0);
si0=l8;
si1=24U;
si0+=si1;
si1=l12;
f1641(i,si0,si1);
si0=2U;
l18=si0;
si0=l12;
si1=-117U;
si0+=si1;
switch(si0){
case 0:
goto L39;
case 1:
goto L40;
case 2:
goto L40;
case 3:
goto L37;
default:
goto L41;
}
L41:;
si0=l12;
si1=85U;
si0=si0 == si1;
if(si0){
goto L38;
}
L40:;
si0=l8;
si1=l12;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l8;
si1=60U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l8;
si1=2U;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l8;
si1=1159228U;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l8;
si1=198U;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l8;
si1=l8;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l8;
si1=l8;
si2=36U;
si1+=si2;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l8;
si1=48U;
si0+=si1;
si1=1159244U;
f377(i,si0,si1);
UNREACHABLE;
L39:;
si0=4U;
l18=si0;
goto L37;
L38:;
si0=8U;
l18=si0;
L37:;
si0=0U;
l19=si0;
L42:;
{
si0=l18;
if(si0){
goto L43;
}
si0=l19;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112064U;
si0=si0 < si1;
if(si0){
goto L44;
}
si0=l19;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L44;
}
si0=l8;
si1=l19;
f1641(i,si0,si1);
si0=l8;
si1=24U;
si0+=si1;
f266(i,si0);
goto L7;
L44:;
si0=l8;
si1=48U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
f2123(i,si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l8;
sj1=i64_load(i->m0,(U64)si1+64U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
goto L19;
L43:;
si0=l1;
si0=f2118(i,si0);
l12=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l3;
f2119(i,si0);
si0=l8;
si1=24U;
si0+=si1;
si1=l12;
f1641(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L45;
}
si0=l14;
si1=l12;
f1641(i,si0,si1);
L45:;
si0=l12;
si1=-48U;
si0+=si1;
l21=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L47;
}
si0=-1U;
si1=l12;
si2=32U;
si1|=si2;
l12=si1;
si2=-87U;
si1+=si2;
l21=si1;
si2=l21;
si3=l12;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l21=si0;
si1=15U;
si0=si0 > si1;
if(si0){
goto L46;
}
L47:;
si0=l18;
si1=-1U;
si0+=si1;
l18=si0;
si0=l21;
si1=l19;
si2=4U;
si1<<=(si2&31);
si0|=si1;
l19=si0;
goto L42;
L46:;
}
si0=l8;
si1=48U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
f2123(i,si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l8;
sj1=i64_load(i->m0,(U64)si1+64U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
goto L19;
L24:;
si0=l5;
if(si0){
goto L21;
}
si0=l6;
si0=!(si0);
if(si0){
goto L20;
}
si0=l8;
si1=12U;
si0+=si1;
si0=f1001(i,si0);
if(si0){
goto L20;
}
si0=l8;
si1=12U;
si0+=si1;
f2114(i,si0);
si0=l3;
f2122(i,si0);
si0=l13;
l9=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L7;
}
si0=1159260U;
f14(i,si0);
UNREACHABLE;
L23:;
si0=l8;
si1=12U;
si0+=si1;
si1=1159150U;
si2=1U;
f1379(i,si0,si1,si2);
goto L7;
L22:;
si0=l8;
si1=48U;
si0+=si1;
si1=l8;
si2=24U;
si1+=si2;
f2123(i,si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l8;
sj1=i64_load(i->m0,(U64)si1+64U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=28U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
goto L19;
L21:;
si0=l3;
f2122(i,si0);
si0=l8;
si1=1159149U;
si2=1U;
f1379(i,si0,si1,si2);
goto L7;
L20:;
si0=l21;
si1=l20;
si0|=si1;
si1=65535U;
si0&=si1;
si0=!(si0);
if(si0){
goto L49;
}
si0=l21;
si0=!(si0);
if(si0){
goto L48;
}
si0=l2;
si1=1114112U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=l21;
si2=-1U;
si1+=si2;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=30U;
si0+=si1;
si1=l10;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l11;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=-2147483647U;
i32_store(i->m0,(U64)si0,si1);
goto L3;
L49:;
si0=1165688U;
si1=28U;
si2=1165716U;
f1457(i,si0,si1,si2);
UNREACHABLE;
L48:;
si0=1165644U;
si1=27U;
si2=1165672U;
f1457(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l8;
sj0=i64_load(i->m0,(U64)si0+52U);
l22=sj0;
si0=l0;
si1=l8;
si1=i32_load(i->m0,(U64)si1+48U);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=-2147483645U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
sj1=l22;
i64_store(i->m0,(U64)si0,sj1);
si0=l8;
si1=24U;
si0+=si1;
f266(i,si0);
goto L3;
L18:;
si0=l19;
si0=!(si0);
if(si0){
goto L52;
}
si0=l8;
si1=12U;
si0+=si1;
si0=f1001(i,si0);
si0=!(si0);
if(si0){
goto L51;
}
L52:;
si0=l8;
si1=12U;
si0+=si1;
si0=f1001(i,si0);
if(si0){
goto L50;
}
si0=l8;
si1=12U;
si0+=si1;
si1=l12;
f1641(i,si0,si1);
si0=l8;
si1=48U;
si0+=si1;
si1=l8;
si2=12U;
si1+=si2;
f2123(i,si0,si1);
si0=l0;
si1=30U;
si0+=si1;
si1=l21;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l20;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=-2147483645U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=56U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
sj1=i64_load(i->m0,(U64)si1+48U);
i64_store(i->m0,(U64)si0+4U,sj1);
goto L3;
L51:;
si0=l8;
si1=12U;
si0+=si1;
f2114(i,si0);
si0=l8;
si1=l4;
f1641(i,si0,si1);
goto L7;
L50:;
si0=l12;
si1=-9U;
si0+=si1;
l18=si0;
si1=23U;
si0=si0 > si1;
if(si0){
goto L56;
}
si0=1U;
si1=l18;
si0<<=(si1&31);
si1=8388639U;
si0&=si1;
if(si0){
goto L55;
}
L56:;
si0=l12;
si1=128U;
si0=si0 < si1;
if(si0){
goto L54;
}
si0=l12;
si0=f1767(i,si0);
si0=!(si0);
if(si0){
goto L54;
}
L55:;
si0=l21;
si0=!(si0);
if(si0){
goto L53;
}
si0=l21;
si1=l20;
si0|=si1;
si1=65535U;
si0&=si1;
si0=!(si0);
if(si0){
goto L53;
}
si0=l9;
si1=l21;
si0=si0 > si1;
if(si0){
goto L7;
}
L54:;
si0=l8;
si1=12U;
si0+=si1;
f2114(i,si0);
si0=l8;
si1=l12;
f1641(i,si0,si1);
si0=0U;
l9=si0;
goto L7;
L53:;
}
si0=1159276U;
f14(i,si0);
UNREACHABLE;
L6:;
si0=0U;
l3=si0;
L5:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
l12=si0;
si0=!(si0);
if(si0){
goto L58;
}
si0=l8;
si0=f1129(i,si0);
si1=l12;
si0=si0 > si1;
if(si0){
goto L57;
}
L58:;
si0=l0;
si1=l8;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=20U;
si0+=si1;
si1=l16;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=18U;
si0+=si1;
si1=l17;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l8;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=12U;
si0+=si1;
f266(i,si0);
goto L2;
L57:;
si0=l0;
si1=l12;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=30U;
si0+=si1;
si1=l10;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l11;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=-2147483646U;
i32_store(i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l3;
f2119(i,si0);
si0=l0;
si1=30U;
si0+=si1;
si1=l10;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=28U;
si0+=si1;
si1=l11;
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=-2147483647U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=1114112U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
L3:;
si0=l8;
si1=12U;
si0+=si1;
f266(i,si0);
si0=l8;
f266(i,si0);
L2:;
si0=l8;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2407(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si2=3U;
si1>>=(si2&31);
l1=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f58(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
f87(i,si0);
L1:;
L0:;
}

void f1040(glicolwasmInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
si0=l0;
f359(i,si0);
L0:;
}

void f13(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
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
si2=3U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si1=l2;
si2=8U;
si1+=si2;
si2=l3;
si3=l1;
si4=-1U;
si3^=si4;
si2+=si3;
si3=3U;
si2<<=(si3&31);
si0=f3080(i,si0,si1,si2);
si0=l0;
si1=l3;
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
goto L0;
L1:;
si0=l1;
si1=l3;
si2=l2;
f115(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f3068(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=0U;
l1=si0;
goto L1;
L2:;
si0=l0;
si1=1U;
si0+=si1;
l2=si0;
si0=0U;
l0=si0;
L3:;
{
si0=l2;
si1=l0;
si0+=si1;
l3=si0;
si0=l0;
si1=1U;
si0+=si1;
l1=si0;
l0=si0;
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L3;
}
}
L1:;
si0=l1;
L0:;
return si0;
}

void f200(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1;
si0=l0;
si1=2U;
f162(i,si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
L0:;
}

void f2564(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
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
si1=8U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f2434(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l4=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l7=si0;
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
f1744(i,si0,si1,si2);
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
si1=f1745(i,si1);
l3=si1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l3;
si2=i32_load(i->m0,(U64)si2+8U);
si3=l7;
si4=0U;
si5=l7;
si6=0U;
si5=(U32)((I32)si5>(I32)si6);
si3=si5?si3:si4;
l3=si3;
si4=l4;
si5=l3;
si6=l4;
si7=l3;
si6=(U32)((I32)si6>(I32)si7);
si4=si6?si4:si5;
si5=l3;
si4-=si5;
si1=f2561(i,si1,si2,si3,si4);
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
f1708(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1U;
si1=l4;
si2=1170976U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1171052U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f2476(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f2327(i,si0,si1,si2,si3);
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
f2291(i,si0,si1,si2,si3);
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
f1035(i,si0);
goto L5;
}
L4:;
si0=l0;
si1=l3;
f1754(i,si0,si1);
goto L1;
L3:;
si0=l0;
f1042(i,si0);
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
f1004(i,si0);
si0=l4;
si1=1178664U;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l4;
si1=1178664U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+44U);
if(si0){
goto L8;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+36U);
si1=l5;
f2216(i,si0,si1);
goto L7;
L8:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+36U);
si1=l4;
si1=i32_load(i->m0,(U64)si1+40U);
si2=l5;
si0=f2298(i,si0,si1,si2);
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
f2299(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+36U);
si1=l4;
si1=i32_load(i->m0,(U64)si1+40U);
si2=l5;
si0=f2298(i,si0,si1,si2);
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
f2216(i,si0,si1);
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
f2299(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+36U);
si1=l4;
si1=i32_load(i->m0,(U64)si1+40U);
si2=l4;
si3=64U;
si2+=si3;
si0=f2298(i,si0,si1,si2);
L11:;
si0=l4;
si1=64U;
si0+=si1;
f1144(i,si0);
L7:;
si0=l4;
si1=28U;
si0+=si1;
f2227(i,si0);
si0=l5;
f1144(i,si0);
L1:;
si0=l4;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1127(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i32_load(i->m0,(U64)si0+88U);
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
si0=i32_load16_u(i->m0,(U64)si0+224U);
l4=si0;
L1:;
si0=l1;
si1=276U;
si2=228U;
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

U32 f1341(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f1342(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
if(si0){
goto L1;
}
si0=0U;
si1=0U;
si2=l1;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f2194(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
f2183(i,si0,si1);
L0:;
}

void f269(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
sj0=i64_load(i->m0,(U64)si0);
l4=sj0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
si0=l1;
si1=l2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l3;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l0;
si2=l3;
si1+=si2;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l3;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
sj1=l4;
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(i->m0,(U64)si0,sj1);
L2:;
{
si0=l1;
si0=f559(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=-28U;
si0+=si1;
l0=si0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
goto L2;
}
L1:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1485(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=4U;
si1=l0;
si1=f1125(i,si1);
si0=f1238(i,si0,si1);
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

void f2848(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
F32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
F32 sf0,sf1,sf2;
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
sf0=f2380(i,si0);
l7=sf0;
si0=l0;
si1=5U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
sf1=l7;
sf2=l7;
sf2=truncf(sf2);
sf1-=sf2;
f32_store(i->m0,(U64)si0+4U,sf1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=0U;
si1=0U;
si2=1173756U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f696(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si4=1064008U;
si3+=si4;
sj3=i64_load(i->m0,(U64)si3);
sj4=0ULL;
f3113(i,si0,sj1,sj2,sj3,sj4);
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
si1=1063928U;
si0+=si1;
sd0=f64_load(i->m0,(U64)si0);
sd1=l9;
sd0*=sd1;
l9=sd0;
goto L16;
L18:;
sd0=l9;
si1=1063928U;
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
f697(i,si0,sj1,sj2);
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
f697(i,si0,sj1,sj2);
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
si1=1063844U;
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
si1=1063844U;
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

void f2985(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
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
f1724(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l4=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si1=l4;
si0=f1725(i,si0,si1);
f2984(i,si0);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
f1708(i,si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=0U;
si1=0U;
si2=1174984U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1174984U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f409(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l2;
f156(i,si0,si1,si2);
si0=0U;
L0:;
return si0;
}

void f2846(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
sf3=f2380(i,si3);
sf3=fabsf(sf3);
sf4=INFINITY;
si3=sf3 < sf4;
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
si2=1173756U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1247(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+8U);
l2=si2;
si3=l2;
si4=2U;
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

void f1309(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+8U);
l2=si2;
si3=l2;
si4=2U;
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

void f431(glicolwasmInstance*i,U32 l0) {
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
f336(i,si0,si1);
L0:;
}

U64 f593(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj0;
si0=l0;
si1=l1;
si2=4U;
si1<<=(si2&31);
si0-=si1;
si1=-16U;
si0+=si1;
l1=si0;
si1=4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
sj0=f475(i,si0,si1);
L0:;
return sj0;
}

void f2238(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2);
si1-=si2;
f155(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
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
si1=l1;
sj1=i64_load(i->m0,(U64)si1);
l5=sj1;
i64_store(i->m0,(U64)si0+8U,sj1);
sj0=l5;
si0=(U32)(sj0);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l6=si0;
L2:;
{
si0=l1;
si1=l6;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l3;
si0+=si1;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
goto L2;
}
L1:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l6;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
f2239(i,si0);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2941(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4,si5,si6;
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
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=36U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f1272(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+36U);
l6=si0;
if(si0){
goto L3;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+40U);
l6=si1;
i32_store(i->m0,(U64)si0+32U,si1);
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
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=48U;
si0+=si1;
si0=f2598(i,si0);
l8=si0;
si0=l5;
si1=48U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
f1724(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+52U);
l9=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+48U);
l10=si0;
si1=l9;
si0=f1725(i,si0,si1);
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
goto L6;
}
si0=l6;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l11=si0;
goto L5;
L6:;
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
f1007(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+28U);
l11=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+24U);
l4=si0;
L5:;
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si1=8U;
si0+=si1;
l12=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+8U);
l13=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l13;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l13=si0;
goto L7;
L8:;
si0=l5;
si1=16U;
si0+=si1;
si1=l12;
f1007(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+20U);
l13=si0;
L7:;
si0=l13;
si0=!(si0);
if(si0){
goto L9;
}
si0=l12;
si0=i32_load(i->m0,(U64)si0);
l13=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l13;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l6;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
goto L10;
L11:;
si0=l5;
si1=8U;
si0+=si1;
si1=l12;
f1007(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l6=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l13=si0;
L10:;
si0=l5;
si1=48U;
si0+=si1;
si1=l8;
f1747(i,si0,si1);
si0=l5;
si1=36U;
si0+=si1;
si1=l13;
si2=l6;
si3=l4;
si4=l11;
si5=l5;
si5=i32_load(i->m0,(U64)si5+52U);
l12=si5;
si6=l5;
si6=i32_load(i->m0,(U64)si6+56U);
f1672(i,si0,si1,si2,si3,si4,si5,si6);
si0=l5;
si1=36U;
si0+=si1;
si0=f1483(i,si0);
l4=si0;
si0=l3;
f1038(i,si0);
si0=l3;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+48U);
si1=l12;
f58(i,si0,si1);
L9:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l10;
si1=l9;
f1708(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
f1038(i,si0);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=2U;
si1=2U;
si2=1174656U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+40U);
i32_store(i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0+48U,si1);
si0=1178304U;
si1=43U;
si2=l5;
si3=48U;
si2+=si3;
si3=1119116U;
si4=1174656U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1U;
si1=l4;
si2=1174656U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1175224U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f1019(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
L1:;
{
si0=l1;
si0=i32_load16_u(i->m0,(U64)si0+226U);
l3=si0;
si0=l2;
if(si0){
goto L2;
}
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=228U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
goto L1;
}
L0:;
}

void f33(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=-2147483648U;
si0^=si1;
l1=si0;
si1=7U;
si2=l1;
si3=14U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2U;
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
case 6:
goto L4;
case 7:
goto L2;
case 8:
goto L1;
default:
goto L3;
}
L10:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f12(i,si0,si1);
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
si1=4U;
si0+=si1;
f290(i,si0);
goto L0;
L5:;
si0=l0;
f292(i,si0);
goto L0;
L4:;
si0=l0;
si1=4U;
si0+=si1;
f292(i,si0);
L3:;
goto L0;
L2:;
si0=l0;
si1=4U;
si0+=si1;
f293(i,si0);
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f294(i,si0,si1);
goto L0;
L1:;
si0=l0;
si1=4U;
si0+=si1;
f272(i,si0);
L0:;
}

void f116(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=l1;
si2=l4;
si3=l1;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=4U;
si2=l1;
si3=4U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=20U;
si0*=si1;
l4=si0;
si0=l1;
si1=107374183U;
si0=si0 < si1;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l3;
if(si0){
goto L3;
}
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+24U,si1);
goto L2;
L3:;
si0=l2;
si1=4U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
si2=20U;
si1*=si2;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+20U,si1);
L2:;
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=l2;
si4=20U;
si3+=si4;
f437(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
goto L1;
L4:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=-2147483647U;
l3=si0;
L1:;
si0=l3;
si1=l1;
f435(i,si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1450(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0+24U);
l1=si0;
si1=4U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
f19(i,si0,si1);
L1:;
L0:;
}

void f2620(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4,si5,si6;
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
f2621(i,si0,si1,si2);
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
si0=f2622(i,si0);
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l4;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
goto L3;
L4:;
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f1007(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
L3:;
si0=l0;
sj1=257ULL;
sj2=1ULL;
si3=l4;
si4=l3;
si5=1130325U;
si6=5U;
si3=f363(i,si3,si4,si5,si6);
sj1=si3?sj1:sj2;
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
si0=0U;
si1=0U;
si2=1172032U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1172032U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f2173(glicolwasmInstance*i,U32 l0) {
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
si0=f3069(i,si0,si1,si2);
si0=l4;
si1=l2;
f1236(i,si0,si1);
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
f1773(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
f533(i,si0,si1);
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f785(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
l2=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+20U);
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
si2=1U;
si1+=si2;
l4=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l4=si0;
si1=l4;
si1=i32_load(i->m0,(U64)si1);
si2=1U;
si1+=si2;
l5=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l6=si0;
si0=l3;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l3;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l2;
si3=1112524U;
si0=f794(i,si0,si1,si2,si3);
l7=si0;
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l7;
si1=i32_load(i->m0,(U64)si1+4U);
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0+24U,si1);
goto L0;
L3:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L2:;
UNREACHABLE;
L1:;
si0=1120504U;
si1=40U;
si2=1112540U;
f16(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f2176(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=272U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=240U;
si0+=si1;
si1=l3;
f2085(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+240U);
if(si0){
goto L5;
}
si0=l7;
si1=l7;
sj1=i64_load(i->m0,(U64)si1+244U);
i64_store(i->m0,(U64)si0+184U,sj1);
si0=l7;
si1=l7;
si2=252U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+192U,sj1);
si0=l7;
si1=224U;
si0+=si1;
si1=l1;
si2=l2;
si3=l7;
si4=184U;
si3+=si4;
f2090(i,si0,si1,si2,si3);
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+224U);
l8=si0;
si1=22U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l7;
si1=l7;
si1=i32_load8_u(i->m0,(U64)si1+227U);
i32_store8(i->m0,(U64)si0+175U,si1);
si0=l7;
si1=l7;
si1=i32_load16_u(i->m0,(U64)si1+225U);
i32_store16(i->m0,(U64)si0+173U,si1);
si0=l7;
si1=l7;
sj1=i64_load(i->m0,(U64)si1+228U);
i64_store(i->m0,(U64)si0+176U,sj1);
si0=l7;
si1=l8;
i32_store8(i->m0,(U64)si0+172U,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L19;
case 1:
goto L3;
case 2:
goto L3;
case 3:
goto L19;
case 4:
goto L19;
case 5:
goto L19;
case 6:
goto L18;
default:
goto L3;
}
L19:;
si0=l8;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L17;
case 1:
goto L3;
case 2:
goto L16;
case 3:
goto L15;
case 4:
goto L14;
case 5:
goto L14;
case 6:
goto L3;
case 7:
goto L3;
case 8:
goto L13;
case 9:
goto L3;
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
goto L3;
case 16:
goto L3;
case 17:
goto L17;
case 18:
goto L17;
default:
goto L3;
}
L18:;
si0=l8;
si1=-1U;
si0+=si1;
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
goto L3;
case 5:
goto L3;
case 6:
goto L3;
case 7:
goto L3;
case 8:
goto L7;
default:
goto L12;
}
L17:;
si0=l7;
si1=16U;
si0+=si1;
si1=63U;
f999(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+16U);
l6=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1149085U;
si2=63U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l7;
si1=252U;
si0+=si1;
si1=63U;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=248U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
i32_store(i->m0,(U64)si0+244U,si1);
si0=l7;
si1=6U;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l7;
si1=8U;
si0+=si1;
si1=l7;
si2=172U;
si1+=si2;
f1329(i,si0,si1);
si0=l7;
si1=224U;
si0+=si1;
si1=l7;
si2=240U;
si1+=si2;
si2=l7;
si2=i32_load16_u(i->m0,(U64)si2+8U);
si3=l7;
si3=i32_load16_u(i->m0,(U64)si3+10U);
f2074(i,si0,si1,si2,si3);
goto L6;
L16:;
si0=l7;
si1=32U;
si0+=si1;
si1=61U;
f999(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+32U);
l6=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+36U);
si1=1148841U;
si2=61U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l7;
si1=252U;
si0+=si1;
si1=61U;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=248U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
i32_store(i->m0,(U64)si0+244U,si1);
si0=l7;
si1=6U;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l7;
si1=24U;
si0+=si1;
si1=l7;
si2=172U;
si1+=si2;
f1329(i,si0,si1);
si0=l7;
si1=224U;
si0+=si1;
si1=l7;
si2=240U;
si1+=si2;
si2=l7;
si2=i32_load16_u(i->m0,(U64)si2+24U);
si3=l7;
si3=i32_load16_u(i->m0,(U64)si3+26U);
f2074(i,si0,si1,si2,si3);
goto L6;
L15:;
si0=l7;
si1=48U;
si0+=si1;
si1=65U;
f999(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+48U);
l6=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+52U);
si1=1148902U;
si2=65U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l7;
si1=252U;
si0+=si1;
si1=65U;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=248U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
i32_store(i->m0,(U64)si0+244U,si1);
si0=l7;
si1=6U;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l7;
si1=40U;
si0+=si1;
si1=l7;
si2=172U;
si1+=si2;
f1329(i,si0,si1);
si0=l7;
si1=224U;
si0+=si1;
si1=l7;
si2=240U;
si1+=si2;
si2=l7;
si2=i32_load16_u(i->m0,(U64)si2+40U);
si3=l7;
si3=i32_load16_u(i->m0,(U64)si3+42U);
f2074(i,si0,si1,si2,si3);
goto L6;
L14:;
si0=l7;
si1=64U;
si0+=si1;
si1=62U;
f999(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+64U);
l6=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+68U);
si1=1148967U;
si2=62U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l7;
si1=252U;
si0+=si1;
si1=62U;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=248U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
i32_store(i->m0,(U64)si0+244U,si1);
si0=l7;
si1=6U;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l7;
si1=56U;
si0+=si1;
si1=l7;
si2=172U;
si1+=si2;
f1329(i,si0,si1);
si0=l7;
si1=224U;
si0+=si1;
si1=l7;
si2=240U;
si1+=si2;
si2=l7;
si2=i32_load16_u(i->m0,(U64)si2+56U);
si3=l7;
si3=i32_load16_u(i->m0,(U64)si3+58U);
f2074(i,si0,si1,si2,si3);
goto L6;
L13:;
si0=l7;
si1=80U;
si0+=si1;
si1=56U;
f999(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+80U);
l6=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+84U);
si1=1149029U;
si2=56U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l7;
si1=252U;
si0+=si1;
si1=56U;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=248U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
i32_store(i->m0,(U64)si0+244U,si1);
si0=l7;
si1=6U;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l7;
si1=72U;
si0+=si1;
si1=l7;
si2=172U;
si1+=si2;
f1329(i,si0,si1);
si0=l7;
si1=224U;
si0+=si1;
si1=l7;
si2=240U;
si1+=si2;
si2=l7;
si2=i32_load16_u(i->m0,(U64)si2+72U);
si3=l7;
si3=i32_load16_u(i->m0,(U64)si3+74U);
f2074(i,si0,si1,si2,si3);
goto L6;
L12:;
si0=l8;
si1=-18U;
si0+=si1;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L3;
}
L11:;
si0=l7;
si1=96U;
si0+=si1;
si1=46U;
f999(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+96U);
l6=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+100U);
si1=1149324U;
si2=46U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l7;
si1=252U;
si0+=si1;
si1=46U;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=248U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
i32_store(i->m0,(U64)si0+244U,si1);
si0=l7;
si1=6U;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l7;
si1=88U;
si0+=si1;
si1=l7;
si2=172U;
si1+=si2;
f1329(i,si0,si1);
si0=l7;
si1=224U;
si0+=si1;
si1=l7;
si2=240U;
si1+=si2;
si2=l7;
si2=i32_load16_u(i->m0,(U64)si2+88U);
si3=l7;
si3=i32_load16_u(i->m0,(U64)si3+90U);
f2074(i,si0,si1,si2,si3);
goto L6;
L10:;
si0=l7;
si1=112U;
si0+=si1;
si1=45U;
f999(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+112U);
l6=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+116U);
si1=1149148U;
si2=45U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l7;
si1=252U;
si0+=si1;
si1=45U;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=248U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
i32_store(i->m0,(U64)si0+244U,si1);
si0=l7;
si1=6U;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l7;
si1=104U;
si0+=si1;
si1=l7;
si2=172U;
si1+=si2;
f1329(i,si0,si1);
si0=l7;
si1=224U;
si0+=si1;
si1=l7;
si2=240U;
si1+=si2;
si2=l7;
si2=i32_load16_u(i->m0,(U64)si2+104U);
si3=l7;
si3=i32_load16_u(i->m0,(U64)si3+106U);
f2074(i,si0,si1,si2,si3);
goto L6;
L9:;
si0=l7;
si1=128U;
si0+=si1;
si1=44U;
f999(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+128U);
l6=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+132U);
si1=1149193U;
si2=44U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l7;
si1=252U;
si0+=si1;
si1=44U;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=248U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
i32_store(i->m0,(U64)si0+244U,si1);
si0=l7;
si1=6U;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l7;
si1=120U;
si0+=si1;
si1=l7;
si2=172U;
si1+=si2;
f1329(i,si0,si1);
si0=l7;
si1=224U;
si0+=si1;
si1=l7;
si2=240U;
si1+=si2;
si2=l7;
si2=i32_load16_u(i->m0,(U64)si2+120U);
si3=l7;
si3=i32_load16_u(i->m0,(U64)si3+122U);
f2074(i,si0,si1,si2,si3);
goto L6;
L8:;
si0=l7;
si1=144U;
si0+=si1;
si1=48U;
f999(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+144U);
l6=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+148U);
si1=1149237U;
si2=48U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l7;
si1=252U;
si0+=si1;
si1=48U;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=248U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
i32_store(i->m0,(U64)si0+244U,si1);
si0=l7;
si1=6U;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l7;
si1=136U;
si0+=si1;
si1=l7;
si2=172U;
si1+=si2;
f1329(i,si0,si1);
si0=l7;
si1=224U;
si0+=si1;
si1=l7;
si2=240U;
si1+=si2;
si2=l7;
si2=i32_load16_u(i->m0,(U64)si2+136U);
si3=l7;
si3=i32_load16_u(i->m0,(U64)si3+138U);
f2074(i,si0,si1,si2,si3);
goto L6;
L7:;
si0=l7;
si1=160U;
si0+=si1;
si1=39U;
f999(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+160U);
l6=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+164U);
si1=1149285U;
si2=39U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l7;
si1=252U;
si0+=si1;
si1=39U;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=248U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l6;
i32_store(i->m0,(U64)si0+244U,si1);
si0=l7;
si1=6U;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l7;
si1=152U;
si0+=si1;
si1=l7;
si2=172U;
si1+=si2;
f1329(i,si0,si1);
si0=l7;
si1=224U;
si0+=si1;
si1=l7;
si2=240U;
si1+=si2;
si2=l7;
si2=i32_load16_u(i->m0,(U64)si2+152U);
si3=l7;
si3=i32_load16_u(i->m0,(U64)si3+154U);
f2074(i,si0,si1,si2,si3);
L6:;
si0=l7;
si0=i32_load(i->m0,(U64)si0+228U);
l6=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+224U);
l8=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
si2=l8;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=172U;
si0+=si1;
f1073(i,si0);
goto L2;
L5:;
si0=l7;
sj0=i64_load(i->m0,(U64)si0+244U);
l9=sj0;
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l9;
i64_store(i->m0,(U64)si0+4U,sj1);
goto L2;
L4:;
si0=l7;
sj0=i64_load(i->m0,(U64)si0+228U);
l9=sj0;
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l9;
i64_store(i->m0,(U64)si0+4U,sj1);
goto L2;
L3:;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=f2066(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l6;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si1=11U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l8;
si1=85U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l7;
si1=11U;
i32_store(i->m0,(U64)si0+224U,si1);
si0=l7;
si1=244U;
si0+=si1;
si1=l7;
si2=224U;
si1+=si2;
f2073(i,si0,si1);
si0=l7;
si1=41U;
f999(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+4U);
si1=1148800U;
si2=41U;
si0=f3069(i,si0,si1,si2);
l2=si0;
si0=l7;
si1=264U;
si0+=si1;
si1=41U;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=260U;
si0+=si1;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l3;
i32_store(i->m0,(U64)si0+256U,si1);
si0=l7;
si1=3U;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l7;
si1=224U;
si0+=si1;
si1=l7;
si2=240U;
si1+=si2;
si2=l6;
si2=i32_load16_u(i->m0,(U64)si2+8U);
si3=l6;
si4=10U;
si3+=si4;
si3=i32_load16_u(i->m0,(U64)si3);
f2074(i,si0,si1,si2,si3);
si0=l0;
si1=l7;
sj1=i64_load(i->m0,(U64)si1+224U);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
goto L25;
L27:;
si0=l7;
si1=240U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f2071(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+240U);
si1=90U;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l7;
si1=l7;
sj1=i64_load(i->m0,(U64)si1+240U);
i64_store(i->m0,(U64)si0+240U,sj1);
si0=l7;
si1=240U;
si0+=si1;
f1078(i,si0);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=f2066(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l6;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l6;
si1=32U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l7;
si1=240U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=260U;
si0+=si1;
si1=l7;
si2=172U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
sj1=i64_load(i->m0,(U64)si1+172U);
i64_store(i->m0,(U64)si0+252U,sj1);
si0=l7;
si1=l4;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+240U,sj1);
si0=l0;
si1=l7;
si2=240U;
si1+=si2;
si1=f2117(i,si1);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
si2=8U;
si1|=si2;
i32_store8(i->m0,(U64)si0+1U,si1);
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+2U,si1);
goto L1;
L28:;
si0=l7;
si1=240U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
f2071(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+240U);
si1=90U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l7;
sj0=i64_load(i->m0,(U64)si0+240U);
l9=sj0;
si0=l3;
si1=6U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l6=si0;
si0=l3;
si0=i32_load16_u(i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=l7;
si1=i32_load(i->m0,(U64)si1+248U);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l7;
sj1=l9;
i64_store(i->m0,(U64)si0+200U,sj1);
si0=l7;
si1=240U;
si0+=si1;
si1=l3;
f2085(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+240U);
if(si0){
goto L20;
}
si0=l7;
si1=l7;
sj1=i64_load(i->m0,(U64)si1+244U);
i64_store(i->m0,(U64)si0+208U,sj1);
si0=l7;
si1=l7;
si2=252U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+216U,sj1);
sj0=l9;
si0=(U32)(sj0);
l8=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=4U;
l3=si0;
si0=l8;
si1=32U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=1148776U;
si1=1148784U;
f1278(i,si0,si1);
UNREACHABLE;
L30:;
si0=0U;
l3=si0;
L29:;
si0=l7;
si1=224U;
si0+=si1;
si1=l1;
si2=l2;
si3=l7;
si4=208U;
si3+=si4;
si4=l7;
si5=172U;
si4+=si5;
si5=l3;
si6=0U;
f2176(i,si0,si1,si2,si3,si4,si5,si6);
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+224U);
l2=si0;
si1=22U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l7;
si1=255U;
si0+=si1;
si1=l7;
si1=i32_load8_u(i->m0,(U64)si1+227U);
i32_store8(i->m0,(U64)si0,si1);
si0=l7;
si1=253U;
si0+=si1;
si1=l7;
si1=i32_load16_u(i->m0,(U64)si1+225U);
i32_store16(i->m0,(U64)si0,si1);
si0=l7;
si1=256U;
si0+=si1;
si1=l7;
sj1=i64_load(i->m0,(U64)si1+228U);
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=240U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l2;
i32_store8(i->m0,(U64)si0+252U,si1);
si0=l7;
si1=l4;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+240U,sj1);
si0=l0;
si1=l7;
si2=240U;
si1+=si2;
si1=f2117(i,si1);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store16(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=l3;
i32_store8(i->m0,(U64)si0+1U,si1);
si0=l0;
si1=17U;
i32_store8(i->m0,(U64)si0,si1);
si0=l7;
si1=200U;
si0+=si1;
f1078(i,si0);
goto L1;
L31:;
si0=l7;
sj0=i64_load(i->m0,(U64)si0+228U);
l9=sj0;
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l9;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=200U;
si0+=si1;
f1078(i,si0);
goto L2;
L26:;
si0=l7;
si1=240U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si1=i32_load(i->m0,(U64)si1+4U);
si1=f1374(i,si1);
l3=si1;
si2=16U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=240U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=l3;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+240U,sj1);
si0=l7;
si1=224U;
si0+=si1;
si1=l7;
si2=240U;
si1+=si2;
si2=l6;
si2=i32_load16_u(i->m0,(U64)si2+8U);
si3=l6;
si4=10U;
si3+=si4;
si3=i32_load16_u(i->m0,(U64)si3);
f2070(i,si0,si1,si2,si3);
si0=l0;
si1=l7;
sj1=i64_load(i->m0,(U64)si1+224U);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
f87(i,si0);
L25:;
si0=l7;
si1=172U;
si0+=si1;
f1073(i,si0);
goto L2;
L24:;
si0=1148716U;
f14(i,si0);
UNREACHABLE;
L23:;
si0=1148344U;
f14(i,si0);
UNREACHABLE;
L22:;
si0=1148732U;
f14(i,si0);
UNREACHABLE;
L21:;
si0=1148748U;
f14(i,si0);
UNREACHABLE;
L20:;
si0=l7;
sj0=i64_load(i->m0,(U64)si0+244U);
l9=sj0;
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l9;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l7;
si1=200U;
si0+=si1;
f1078(i,si0);
si0=l7;
si1=172U;
si0+=si1;
f1073(i,si0);
L2:;
si0=l4;
f1073(i,si0);
L1:;
si0=l7;
si1=272U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1678(glicolwasmInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj2,sj3;
si0=l0;
si0=i32_load(i->m0,(U64)si0+48U);
l2=si0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=0U;
l3=si0;
si0=l0;
si1=60U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l0;
si2=52U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
sj2=l1;
sj3=l1;
si0=f1504(i,si0,si1,sj2,sj3);
l3=si0;
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=0U;
si2=l3;
si0=si2?si0:si1;
L0:;
return si0;
}

void f206(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=-1U;
l5=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l2;
si2=28U;
si1*=si2;
si0+=si1;
l1=si0;
si0=i32_load(i->m0,(U64)si0);
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=24U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
L1:;
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=-1ULL;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f2269(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l5=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l5;
si2=1U;
si1+=si2;
l5=si1;
si2=l1;
si2=i32_load(i->m0,(U64)si2);
si3=l1;
si3=i32_load8_u(i->m0,(U64)si3+8U);
si1=si3?si1:si2;
si2=l5;
si3=l2;
si4=l3;
si5=1119052U;
f2266(i,si0,si1,si2,si3,si4,si5);
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si1=l4;
si1=i32_load(i->m0,(U64)si1+8U);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
f692(i);
UNREACHABLE;
L0:;
}

U32 f1344(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=160U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
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
goto L4;
case 8:
goto L3;
case 9:
goto L8;
case 10:
goto L7;
case 11:
goto L6;
case 12:
goto L5;
default:
goto L15;
}
L15:;
si0=l1;
si1=1180340U;
si2=2U;
si0=f449(i,si0,si1,si2);
l3=si0;
goto L1;
L14:;
si0=l0;
si1=1U;
si0+=si1;
si1=l1;
si0=f685(i,si0,si1);
l3=si0;
goto L1;
L13:;
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
si0=f1384(i,si0,si1);
l3=si0;
goto L1;
L12:;
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
si0=f690(i,si0,si1);
l3=si0;
goto L1;
L11:;
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
si0=f1385(i,si0,si1);
l3=si0;
goto L1;
L10:;
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
si0=f1386(i,si0,si1);
l3=si0;
goto L1;
L9:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1123577U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+125U,si1);
si0=l2;
si1=l4;
i32_store8(i->m0,(U64)si0+124U,si1);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l0;
si1=3U;
si0<<=(si1&31);
l0=si0;
L17:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=120U;
si0+=si1;
si1=l2;
si2=88U;
si1+=si2;
si2=136U;
si0=f244(i,si0,si1,si2);
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l3;
si1=8U;
si0+=si1;
l3=si0;
goto L17;
}
L16:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+120U);
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+124U);
si0=f245(i,si0,si1);
l3=si0;
goto L1;
L8:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
si0=f1388(i,si0,si1);
l3=si0;
goto L1;
L7:;
si0=l2;
si1=132U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+124U,si1);
si0=l2;
si1=1160952U;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l2;
si1=1178664U;
i32_store(i->m0,(U64)si0+128U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=120U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l3=si0;
goto L1;
L6:;
si0=l2;
si1=80U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
l4=si1;
si1=i32_load(i->m0,(U64)si1);
si2=l4;
si2=i32_load(i->m0,(U64)si2+4U);
si2=i32_load(i->m0,(U64)si2+28U);
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l2;
si1=64U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+80U);
l0=si1;
si2=l2;
si2=i32_load(i->m0,(U64)si2+84U);
si2=i32_load(i->m0,(U64)si2+12U);
l3=si2;
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=l0;
si2=l3;
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
sj0=i64_load(i->m0,(U64)si0+48U);
sj1=-8671986846239669186ULL;
sj0^=sj1;
si1=l2;
si2=48U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
sj2=472265404662890772ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si0=f707(i,si0,si1);
l3=si0;
goto L1;
L5:;
si0=l2;
si1=120U;
si0+=si1;
f1346(i,si0);
si0=l1;
si1=l0;
si2=l2;
si3=120U;
si2+=si3;
si0=f1389(i,si0,si1,si2);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+120U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+124U);
f1348(i,si0,si1);
goto L1;
L4:;
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
l4=si0;
si1=1123577U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
l1=si3;
si3=i32_load(i->m0,(U64)si3+12U);
l5=si3;
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l6=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l7=si0;
si0=0U;
l0=si0;
L19:;
{
si0=l6;
si1=l0;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l2;
si1=l7;
si2=l0;
si1+=si2;
i32_store(i->m0,(U64)si0+156U,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l0;
si1=7U;
si0&=si1;
if(si0){
goto L20;
}
si0=l4;
si1=1160456U;
si2=1U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L20;
}
si0=1U;
l3=si0;
goto L1;
L20:;
si0=l2;
si1=137U;
i32_store(i->m0,(U64)si0+116U,si1);
si0=1U;
l3=si0;
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+108U,si1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l2;
si1=1178720U;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+100U,si1);
si0=l2;
si1=l2;
si2=156U;
si1+=si2;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l2;
si1=3U;
i32_store8(i->m0,(U64)si0+148U,si1);
si0=l2;
si1=8U;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l2;
sj1=32ULL;
i64_store(i->m0,(U64)si0+136U,sj1);
si0=l2;
sj1=8589934592ULL;
i64_store(i->m0,(U64)si0+128U,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l2;
si1=l2;
si2=120U;
si1+=si2;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l2;
si1=l2;
si2=112U;
si1+=si2;
i32_store(i->m0,(U64)si0+96U,si1);
si0=l4;
si1=l1;
si2=l2;
si3=88U;
si2+=si3;
si0=f683(i,si0,si1,si2);
if(si0){
goto L1;
}
goto L19;
}
L18:;
si0=l4;
si1=1123578U;
si2=1U;
si3=l5;
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
goto L1;
L3:;
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
l4=si0;
si1=1157021U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
l6=si3;
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=1U;
l0=si0;
si0=l4;
si1=1154203U;
si2=1U;
si3=l6;
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+95U,si1);
si0=l2;
si1=0U;
i32_store16(i->m0,(U64)si0+93U,si1);
si0=l2;
si1=l4;
i32_store8(i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
if(si0){
goto L22;
}
si0=0U;
l0=si0;
si0=0U;
l4=si0;
goto L21;
L22:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
L21:;
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+148U,si1);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+140U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+136U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+132U,si1);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+128U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+124U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+120U,si1);
L24:;
{
si0=l2;
si1=l2;
si2=120U;
si1+=si2;
f1171(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L23;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+156U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l2;
si1=88U;
si0+=si1;
si1=l2;
si2=156U;
si1+=si2;
si2=138U;
si3=l2;
si4=112U;
si3+=si4;
si4=136U;
si0=f681(i,si0,si1,si2,si3,si4);
goto L24;
}
L23:;
si0=l2;
si1=88U;
si0+=si1;
si0=f682(i,si0);
l3=si0;
goto L1;
L2:;
si0=l2;
si1=32U;
si0+=si1;
si1=l0;
si2=l3;
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l2;
sj0=i64_load(i->m0,(U64)si0+32U);
sj1=-8202046714581771301ULL;
sj0^=sj1;
si1=l2;
si2=32U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
sj2=6337701729009040854ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L27;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l2;
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
si1=133U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=120U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+124U,si1);
si0=l2;
si1=1160900U;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+96U,si1);
si0=l2;
si1=133U;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(i->m0,(U64)si0+128U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=120U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l3=si0;
goto L1;
L27:;
si0=l2;
si1=16U;
si0+=si1;
si1=l0;
si2=l3;
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l2;
sj0=i64_load(i->m0,(U64)si0+16U);
sj1=-7729146682714798459ULL;
sj0^=sj1;
si1=l2;
si2=24U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
sj2=-4489258845294998855ULL;
sj1^=sj2;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L25;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l2;
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
si1=134U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=120U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+156U,si1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+124U,si1);
si0=l2;
si1=1160916U;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l2;
si1=134U;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(i->m0,(U64)si0+128U,si1);
si0=l2;
si1=l2;
si2=112U;
si1+=si2;
i32_store(i->m0,(U64)si0+96U,si1);
si0=l2;
si1=l2;
si2=156U;
si1+=si2;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=120U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l3=si0;
goto L1;
L28:;
si0=l2;
si1=132U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+124U,si1);
si0=l2;
si1=1160916U;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l2;
si1=134U;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(i->m0,(U64)si0+128U,si1);
si0=l2;
si1=l2;
si2=112U;
si1+=si2;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=120U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l3=si0;
goto L1;
L26:;
si0=l2;
si1=132U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+124U,si1);
si0=l2;
si1=1160900U;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l2;
si1=133U;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(i->m0,(U64)si0+128U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=120U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l3=si0;
goto L1;
L25:;
si0=l2;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(i->m0,(U64)si1);
si2=l4;
si2=i32_load(i->m0,(U64)si2+4U);
si2=i32_load(i->m0,(U64)si2+40U);
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+8U);
si2=l2;
si2=i32_load(i->m0,(U64)si2+12U);
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
L1:;
si0=l2;
si1=160U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f2673(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f1272(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+24U);
l4=si0;
if(si0){
goto L1;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+28U);
l3=si1;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l4;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
goto L3;
L4:;
si0=l5;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f1007(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
L3:;
si0=l5;
si1=32U;
si0+=si1;
si1=l4;
si2=l3;
si3=0U;
si4=2147483647U;
f2671(i,si0,si1,si2,si3,si4);
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f2665(i,si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+24U);
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=20U;
si0+=si1;
f1038(i,si0);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=0U;
si1=0U;
si2=1172132U;
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
si0=1178304U;
si1=43U;
si2=l5;
si3=32U;
si2+=si3;
si3=1119116U;
si4=1172132U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f1140(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
if(si0){
goto L2;
}
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l3;
si1=l4;
si2=l1;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l2;
f1162(i,si0,si1,si2,si3);
si0=l3;
si1=4U;
si0+=si1;
l4=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=12U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=16U;
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=12U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
f266(i,si0);
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2010(glicolwasmInstance*i,U32 l0,U32 l1,U64 l2,U64 l3,U32 l4,U32 l5,U32 l6,U32 l7) {
U32 l8=0;
U32 si0,si1,si2;
U64 sj1;
si0=l1;
si1=-1U;
si0+=si1;
si1=l7;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load16_u(i->m0,(U64)si0+270U);
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
l7=si1;
i32_store16(i->m0,(U64)si0+270U,si1);
si0=l0;
si1=l1;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
sj1=l2;
i64_store(i->m0,(U64)si0,sj1);
si0=l8;
sj1=l3;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si1=180U;
si0+=si1;
si1=l5;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=176U;
si0+=si1;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=272U;
si0+=si1;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=l7;
i32_store16(i->m0,(U64)si0+268U,si1);
si0=l6;
si1=l0;
i32_store(i->m0,(U64)si0+264U,si1);
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

U32 f2375(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
f999(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=l1;
si0=f3069(i,si0,si1,si2);
l0=si0;
si0=l2;
si1=28U;
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+14U,si1);
si0=l2;
si1=23U;
i32_store8(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si0=f97(i,si0);
l1=si0;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

void f231(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3;
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
si3=1053988U;
si0=f122(i,si0,si1,si2,si3);
l0=si0;
si0=l3;
si1=-2147483636U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
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

void f1121(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
case 2:
goto L2;
case 3:
goto L1;
default:
goto L5;
}
L5:;
si0=l0;
si1=8U;
si0+=si1;
f1047(i,si0);
si0=l0;
si1=4U;
si0+=si1;
f1045(i,si0);
goto L0;
L4:;
si0=l0;
si1=4U;
si0+=si1;
f1117(i,si0);
goto L0;
L3:;
si0=l0;
si1=4U;
si0+=si1;
f1117(i,si0);
goto L0;
L2:;
si0=l0;
si1=4U;
si0+=si1;
f1117(i,si0);
goto L0;
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
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
goto L6;
}
si0=l0;
si1=4U;
si0+=si1;
f1119(i,si0);
L6:;
L0:;
}

void f1933(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U64 l3,U64 l4) {
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si1=l2;
sj2=l3;
sj3=l4;
si0=f1932(i,si0,si1,sj2,sj3);
l2=si0;
if(si0){
goto L2;
}
si0=0U;
l2=si0;
goto L1;
L2:;
si0=l5;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
si2=l2;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f1494(i,si0,si1,si2);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
L1:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2852(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
sf1=f2380(i,si1);
sf1=floorf(sf1);
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
si2=1173756U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1204(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si0=i32_load(i->m0,(U64)si0);
sj0=i64_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si1=i32_load(i->m0,(U64)si1);
si2=0U;
si3=l1;
si2-=si3;
si3=24U;
si2*=si3;
si1+=si2;
si2=-24U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
si0=sj0 == sj1;
L0:;
return si0;
}

U32 f2013(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si0=i32_load(i->m0,(U64)si0);
sj0=i64_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si1=i32_load(i->m0,(U64)si1);
si2=0U;
si3=l1;
si2-=si3;
si3=24U;
si2*=si3;
si1+=si2;
si2=-24U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
si0=sj0 == sj1;
L0:;
return si0;
}

U32 f2064(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si0=i32_load(i->m0,(U64)si0);
sj0=i64_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si1=i32_load(i->m0,(U64)si1);
si2=0U;
si3=l1;
si2-=si3;
si3=24U;
si2*=si3;
si1+=si2;
si2=-24U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
si0=sj0 == sj1;
L0:;
return si0;
}

void f1124(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f1035(i,si0);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
goto L2;
}
L1:;
L0:;
}

void f571(glicolwasmInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f525(i,si0);
si0=l0;
f205(i,si0);
L1:;
L0:;
}

void f2251(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=-2057287027906098596ULL;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=-5325721214438581654ULL;
i64_store(i->m0,(U64)si0,sj1);
L0:;
}

void f446(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f445(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+12U);
f435(i,si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2427(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si2=1124765U;
si3=2U;
si4=l5;
si5=68U;
si4+=si5;
si5=2U;
si6=1U;
si7=1U;
si8=0U;
f1877(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
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
si2=1124765U;
si3=2U;
si0=f363(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L9;
}
si0=l5;
si1=24U;
si0+=si1;
si1=l2;
f1175(i,si0,si1);
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
f1175(i,si0,si1);
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
f1354(i,si0);
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
f1620(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+44U);
l8=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+40U);
l10=si0;
si0=l5;
si1=48U;
si0+=si1;
f1035(i,si0);
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
f1042(i,si0);
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
L0:;
}

void f606(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
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
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U64 l19=0;
U32 l20=0;
F32 l21=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
F32 sf0,sf1;
si0=i->g0;
si1=176U;
si0-=si1;
l1=si0;
i->g0=si0;
f600(i);
si0=l1;
si1=96U;
si0+=si1;
f238(i,si0);
si0=l1;
si0=i32_load(i->m0,(U64)si0+96U);
if(si0){
goto L1;
}
si0=l1;
si1=104U;
si0+=si1;
l2=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+100U);
l4=si0;
si0=l1;
si1=48U;
si0+=si1;
si1=l0;
f252(i,si0,si1);
si0=l1;
si1=96U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+48U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+52U);
f603(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+96U);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+100U);
l0=si0;
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l1;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+96U,sj1);
si0=l1;
si1=96U;
si0+=si1;
si1=0U;
f155(i,si0,si1);
si0=l1;
si1=l0;
si2=l2;
si1+=si2;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l1;
si1=l0;
i32_store(i->m0,(U64)si0+56U,si1);
L4:;
{
si0=l1;
si1=56U;
si0+=si1;
si0=f520(i,si0);
l0=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si0=f372(i,si0);
if(si0){
goto L4;
}
si0=l1;
si1=96U;
si0+=si1;
si1=l0;
f408(i,si0,si1);
goto L4;
}
L3:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+96U);
l5=si0;
si0=l1;
si1=56U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+100U);
l6=si1;
si2=l1;
si2=i32_load(i->m0,(U64)si2+104U);
si3=59U;
f62(i,si0,si1,si2,si3);
si0=l4;
si1=260U;
si0+=si1;
l7=si0;
si0=l4;
si1=12U;
si0+=si1;
l8=si0;
si0=l4;
si1=8U;
si0+=si1;
l9=si0;
L5:;
{
si0=l1;
si1=40U;
si0+=si1;
si1=l1;
si2=56U;
si1+=si2;
f55(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+40U);
l0=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+44U);
l2=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=96U;
si0+=si1;
si1=l0;
si2=l2;
si3=44U;
f62(i,si0,si1,si2,si3);
si0=l1;
si1=32U;
si0+=si1;
si1=l1;
si2=96U;
si1+=si2;
f55(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+36U);
l10=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+32U);
l11=si0;
si0=l1;
si1=24U;
si0+=si1;
si1=l1;
si2=96U;
si1+=si2;
f55(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+28U);
l12=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+24U);
l2=si0;
si0=l1;
si1=16U;
si0+=si1;
si1=l1;
si2=96U;
si1+=si2;
f55(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
l13=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
l0=si0;
si0=l1;
si1=8U;
si0+=si1;
si1=l1;
si2=96U;
si1+=si2;
f55(i,si0,si1);
si0=l11;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l14=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
l15=si0;
si0=0U;
l16=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L7;
case 2:
goto L8;
default:
goto L7;
}
L10:;
si0=0U;
l16=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
goto L7;
L9:;
si0=l5;
si1=l6;
f58(i,si0,si1);
si0=l4;
si1=l3;
f279(i,si0,si1);
si0=l1;
si1=176U;
si0+=si1;
i->g0=si0;
goto L0;
L8:;
si0=0U;
l16=si0;
si0=l12;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L7:;
si0=l12;
si1=9U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=0U;
l17=si0;
L12:;
{
si0=l12;
if(si0){
goto L13;
}
si0=l17;
l16=si0;
goto L6;
L13:;
si0=0U;
l16=si0;
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l18=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l17;
sj0=(U64)(si0);
sj1=10ULL;
sj0*=sj1;
l19=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
sj0=l19;
si0=(U32)(sj0);
l20=si0;
si1=l18;
si0+=si1;
l17=si0;
si1=l20;
si0=si0 >= si1;
if(si0){
goto L12;
}
goto L6;
}
L11:;
si0=0U;
l16=si0;
L14:;
{
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l17=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=0U;
l16=si0;
goto L6;
L15:;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l17;
si1=l16;
si2=10U;
si1*=si2;
si0+=si1;
l16=si0;
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
if(si0){
goto L14;
}
}
L6:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l17=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L19;
case 1:
goto L17;
case 2:
goto L18;
default:
goto L17;
}
L19:;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
goto L17;
L18:;
si0=l13;
si1=1U;
si0=si0 == si1;
if(si0){
goto L16;
}
L17:;
si0=l13;
si1=3U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=0U;
l2=si0;
L21:;
{
si0=l13;
if(si0){
goto L22;
}
si0=l2;
l15=si0;
goto L16;
L22:;
si0=0U;
l15=si0;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l12=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l2;
si1=255U;
si0&=si1;
si1=10U;
si0*=si1;
l2=si0;
si1=8U;
si0>>=(si1&31);
si1=0U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l2;
si1=255U;
si0&=si1;
si1=l12;
si2=255U;
si1&=si2;
si0+=si1;
l2=si0;
si1=255U;
si0&=si1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L21;
}
goto L16;
}
L20:;
si0=0U;
l15=si0;
L23:;
{
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l2=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L24;
}
si0=0U;
l15=si0;
goto L16;
L24:;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l15;
si1=10U;
si0*=si1;
si1=l2;
si0+=si1;
l15=si0;
si0=l13;
si1=-1U;
si0+=si1;
l13=si0;
if(si0){
goto L23;
}
}
L16:;
si0=l7;
si1=l11;
si2=l10;
si0=f36(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=136U;
si0+=si1;
si1=l14;
si2=l17;
f57(i,si0,si1,si2);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+136U);
if(si0){
goto L25;
}
si0=l1;
sf0=f32_load(i->m0,(U64)si0+140U);
l21=sf0;
si0=l7;
si1=l11;
si2=l10;
si3=1055924U;
si0=f35(i,si0,si1,si2,si3);
l0=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
si2=l16;
si3=1055940U;
si0=f2(i,si0,si1,si2,si3);
l0=si0;
si0=l9;
si0=i32_load(i->m0,(U64)si0);
si1=l8;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si2=i32_load(i->m0,(U64)si2);
si3=1055956U;
si0=f122(i,si0,si1,si2,si3);
l0=si0;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si0=l1;
sf1=l21;
f32_store(i->m0,(U64)si0+148U,sf1);
si0=l1;
si1=l15;
i32_store8(i->m0,(U64)si0+152U,si1);
si0=l1;
si1=-2147483648U;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l2;
si1=l1;
si2=144U;
si1+=si2;
si2=l0;
si2=i32_load(i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
goto L5;
L25:;
si0=l7;
si1=l11;
si2=l10;
si3=1055972U;
si0=f35(i,si0,si1,si2,si3);
l0=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
si2=l16;
si3=1055988U;
si0=f2(i,si0,si1,si2,si3);
l0=si0;
si0=l9;
si0=i32_load(i->m0,(U64)si0);
si1=l8;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si2=i32_load(i->m0,(U64)si2);
si3=1056004U;
si0=f122(i,si0,si1,si2,si3);
l0=si0;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si0=l1;
si1=l17;
f66(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l13=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l14;
si2=l17;
si0=f3069(i,si0,si1,si2);
l12=si0;
si0=l1;
si1=l17;
i32_store(i->m0,(U64)si0+156U,si1);
si0=l1;
si1=l12;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l1;
si1=l13;
i32_store(i->m0,(U64)si0+148U,si1);
si0=l1;
si1=l15;
i32_store8(i->m0,(U64)si0+160U,si1);
si0=l1;
si1=-2147483646U;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l2;
si1=l1;
si2=144U;
si1+=si2;
si2=l0;
si2=i32_load(i->m0,(U64)si2+16U);
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
goto L5;
}
L2:;
si0=l1;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+100U);
i64_store(i->m0,(U64)si0+56U,sj1);
si0=1178304U;
si1=43U;
si2=l1;
si3=56U;
si2+=si3;
si3=1054396U;
si4=1061024U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+100U);
i32_store(i->m0,(U64)si0+56U,si1);
si0=l1;
si1=l1;
si2=104U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+60U,si1);
si0=1178304U;
si1=43U;
si2=l1;
si3=56U;
si2+=si3;
si3=1054332U;
si4=1061008U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f1153(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=1122652U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=1119436U;
si2=l2;
si3=12U;
si2+=si3;
si3=1119436U;
si4=l1;
si5=1122764U;
f382(i,si0,si1,si2,si3,si4,si5);
UNREACHABLE;
L0:;
}

void f357(glicolwasmInstance*i,U32 l0) {
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
si0=l0;
si0=i32_load(i->m0,(U64)si0+32U);
si1=l0;
si2=36U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f12(i,si0,si1);
L0:;
}

void f2187(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
f1406(i,si0,si1);
si0=l0;
si0=i32_load16_u(i->m0,(U64)si0+4U);
si1=l0;
si2=6U;
si1+=si2;
si1=i32_load16_u(i->m0,(U64)si1);
si2=l1;
f2182(i,si0,si1,si2);
L0:;
}

void f18(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
F32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
F32 sf0,sf1;
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
si1=-5U;
si0+=si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L10;
case 2:
goto L10;
case 3:
goto L9;
case 4:
goto L10;
case 5:
goto L10;
case 6:
goto L10;
case 7:
goto L8;
case 8:
goto L7;
default:
goto L11;
}
L11:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
L10:;
si0=l2;
si1=-2147483643U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L9:;
si0=l0;
si1=l1;
sf1=f32_load(i->m0,(U64)si1+4U);
f32_store(i->m0,(U64)si0+44U,sf1);
goto L4;
L8:;
si0=l0;
si1=24U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
f6(i,si0,si1);
goto L4;
L7:;
si0=l0;
si1=24U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+8U);
f7(i,si0,si1,si2);
goto L4;
L6:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+8U);
if(si0){
goto L4;
}
si0=l0;
si1=l1;
sf1=f32_load(i->m0,(U64)si1+4U);
f32_store(i->m0,(U64)si0+36U,sf1);
goto L4;
L5:;
si0=l1;
sf0=f32_load(i->m0,(U64)si0+16U);
l4=sf0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f19(i,si0,si1);
si0=l0;
sf1=l4;
f32_store(i->m0,(U64)si0+40U,sf1);
si0=l0;
si1=20U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+4U);
i64_store(i->m0,(U64)si0+12U,sj1);
si0=l2;
si1=-2147483643U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l2;
si1=-2147483643U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f19(i,si0,si1);
goto L0;
L2:;
si0=l1;
f8(i,si0);
L1:;
L0:;
}

U32 f667(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3,si4;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1067779U;
si2=14U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f187(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
U64 sj1;
si0=12U;
si1=4U;
si0=f171(i,si0,si1);
l1=si0;
si1=8U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l0;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
L0:;
return si0;
}

void f968(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l3;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+12U,sj1);
si0=l3;
si1=24U;
si0+=si1;
si1=96U;
si2=l1;
si3=l2;
f798(i,si0,si1,si2,si3);
L1:;
{
si0=l3;
si1=52U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f417(i,si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+52U);
if(si0){
goto L2;
}
si0=l3;
si1=12U;
si0+=si1;
si1=l1;
si2=l4;
si1+=si2;
si2=l2;
si3=l4;
si2-=si3;
f156(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+12U);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+56U);
si1=l4;
si0-=si1;
l5=si0;
si0=l1;
si1=l4;
si0+=si1;
l6=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+60U);
l4=si0;
si0=l3;
si1=12U;
si0+=si1;
si1=l6;
si2=l5;
f156(i,si0,si1,si2);
si0=l3;
si1=12U;
si0+=si1;
si1=1178664U;
si2=1178664U;
f157(i,si0,si1,si2);
goto L1;
}
L0:;
}

void f286(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1;
L2:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
l3=si0;
si0=l0;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
i32_store8(i->m0,(U64)si0,si1);
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
goto L2;
}
L1:;
L0:;
}

void f822(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
F32 l4=0;
U32 si0,si1,si2,si3,si4;
F32 sf0,sf1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f785(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
l1=si0;
if(si0){
goto L6;
}
si0=l0;
si1=-2147483634U;
i32_store(i->m0,(U64)si0,si1);
goto L5;
L6:;
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=24U;
si1+=si2;
f786(i,si0,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+16U);
si2=l2;
si2=i32_load(i->m0,(U64)si2+20U);
si3=64U;
f787(i,si0,si1,si2,si3);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=44U;
si1+=si2;
f55(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=84U;
si0+=si1;
si1=l3;
si2=l2;
si2=i32_load(i->m0,(U64)si2+12U);
f57(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+84U);
if(si0){
goto L3;
}
si0=l2;
sf0=f32_load(i->m0,(U64)si0+88U);
l4=sf0;
si0=l2;
si1=l2;
si2=44U;
si1+=si2;
f55(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=84U;
si0+=si1;
si1=l3;
si2=l2;
si2=i32_load(i->m0,(U64)si2+4U);
f57(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+84U);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
sf1=f32_load(i->m0,(U64)si1+88U);
f32_store(i->m0,(U64)si0+16U,sf1);
si0=l0;
sf1=l4;
f32_store(i->m0,(U64)si0+4U,sf1);
si0=l0;
si1=-2147483648U;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+36U);
f788(i,si0,si1);
L5:;
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=1114596U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+85U);
i32_store8(i->m0,(U64)si0+95U,si1);
si0=1178304U;
si1=43U;
si2=l2;
si3=95U;
si2+=si3;
si3=1111796U;
si4=1114612U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=1114628U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+85U);
i32_store8(i->m0,(U64)si0+95U,si1);
si0=1178304U;
si1=43U;
si2=l2;
si3=95U;
si2+=si3;
si3=1111796U;
si4=1114644U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f1657(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f1669(i,si0,si1);
si1=255U;
si0&=si1;
si1=255U;
si0=si0 == si1;
L0:;
return si0;
}

void f2254(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0;
U64 sj1;
si0=l0;
sj1=472265404662890772ULL;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=-8671986846239669186ULL;
i64_store(i->m0,(U64)si0,sj1);
L0:;
}

void f2148(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
F32 l12=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
F32 sf0,sf1;
si0=i->g0;
si1=288U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=f2066(i,si0);
l6=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=l2;
si1=i32_load(i->m0,(U64)si1+12U);
si0=TF(i->t0,si1,U32 (*)(glicolwasmInstance*,U32))(i,si0);
if(si0){
goto L7;
}
si0=l4;
si1=56U;
si0+=si1;
si1=l6;
f2112(i,si0,si1);
si0=l4;
si1=-2147483648U;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l4;
si1=192U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=l6;
si2=i32_load16_u(i->m0,(U64)si2+8U);
si3=l6;
si4=10U;
si3+=si4;
si3=i32_load16_u(i->m0,(U64)si3);
f2070(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+192U);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L7:;
si0=l3;
si1=l6;
si1=i32_load16_u(i->m0,(U64)si1+8U);
l7=si1;
i32_store16(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=6U;
si0+=si1;
si1=l6;
si2=10U;
si1+=si2;
si1=i32_load16_u(i->m0,(U64)si1);
l8=si1;
i32_store16(i->m0,(U64)si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si1=-13U;
si0+=si1;
switch(si0){
case 0:
goto L23;
case 1:
goto L23;
case 2:
goto L22;
case 3:
goto L22;
default:
goto L24;
}
L24:;
si0=l9;
si1=57U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l9;
si1=89U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l4;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=l3;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l0;
si1=l1;
si2=l2;
si3=l4;
si4=56U;
si3+=si4;
si4=0U;
f2156(i,si0,si1,si2,si3,si4);
goto L1;
L23:;
si0=l4;
si1=264U;
si0+=si1;
si1=l6;
f1371(i,si0,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=l5;
f2071(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+56U);
si1=90U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+66U);
l6=si0;
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+64U);
l5=si0;
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+56U);
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=56U;
si0+=si1;
f1078(i,si0);
si0=l4;
si1=56U;
si0+=si1;
si1=l3;
f2085(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+56U);
if(si0){
goto L19;
}
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+60U);
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l4;
si2=68U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=192U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
si4=24U;
si3+=si4;
f2148(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+192U);
l3=si0;
si1=22U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l4;
si1=44U;
si0+=si1;
si1=2U;
si0+=si1;
l2=si0;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+195U);
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
si1=i32_load16_u(i->m0,(U64)si1+193U);
i32_store16(i->m0,(U64)si0+44U,si1);
si0=l4;
sj0=i64_load(i->m0,(U64)si0+196U);
l10=sj0;
si0=l3;
si1=30U;
si0&=si1;
si1=2U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l1;
si1=1151400U;
si2=1U;
si0=f1006(i,si0,si1,si2);
l1=si0;
si0=1151400U;
si1=1U;
si2=1U;
sj0=f1199(i,si0,si1,si2);
l11=sj0;
si0=l4;
si1=203U;
si0+=si1;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=204U;
si0+=si1;
sj1=l10;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(i->m0,(U64)si1+44U);
i32_store16(i->m0,(U64)si0+201U,si1);
si0=l4;
si1=l3;
i32_store8(i->m0,(U64)si0+200U,si1);
si0=l4;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+192U,sj1);
si0=l4;
si1=120U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
f2157(i,si0,si1);
si0=l4;
si1=96U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=104U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=112U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0+88U,sj1);
si0=l4;
si1=l1;
i32_store(i->m0,(U64)si0+184U,si1);
si0=l4;
si1=0U;
i32_store8(i->m0,(U64)si0+188U,si1);
si0=l4;
sj1=l11;
i64_store(i->m0,(U64)si0+72U,sj1);
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+264U);
i64_store(i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=l4;
si2=56U;
si1+=si2;
si1=f1482(i,si1);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store16(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=15U;
l3=si0;
goto L2;
L22:;
si0=l4;
si1=232U;
si0+=si1;
si1=l6;
f1371(i,si0,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=l5;
f2071(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+56U);
si1=90U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+66U);
l6=si0;
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+64U);
l5=si0;
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+56U);
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=56U;
si0+=si1;
f1078(i,si0);
si0=l4;
si1=56U;
si0+=si1;
si1=l3;
f2085(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+56U);
if(si0){
goto L16;
}
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+60U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l4;
si2=68U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=192U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
si4=8U;
si3+=si4;
f2148(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+192U);
l3=si0;
si1=22U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l4;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+195U);
i32_store8(i->m0,(U64)si0+267U,si1);
si0=l4;
si1=l4;
si1=i32_load16_u(i->m0,(U64)si1+193U);
i32_store16(i->m0,(U64)si0+265U,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+196U);
l10=sj1;
i64_store(i->m0,(U64)si0+268U,sj1);
si0=l4;
si1=l3;
i32_store8(i->m0,(U64)si0+264U,si1);
sj0=l10;
si0=(U32)(sj0);
l2=si0;
si0=l3;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L13;
case 1:
goto L12;
default:
goto L14;
}
L21:;
si0=l4;
si1=48U;
si0+=si1;
si1=l6;
f1371(i,si0,si1);
si0=l4;
si1=56U;
si0+=si1;
si1=l5;
f2071(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+56U);
si1=90U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+66U);
l6=si0;
si0=l4;
si0=i32_load16_u(i->m0,(U64)si0+64U);
l5=si0;
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+56U);
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=56U;
si0+=si1;
f1078(i,si0);
si0=l4;
si1=216U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=208U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=200U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0+192U,sj1);
si0=l4;
si1=l1;
si2=1147112U;
si3=1U;
si1=f1006(i,si1,si2,si3);
l9=si1;
i32_store(i->m0,(U64)si0+228U,si1);
si0=1147112U;
si1=1U;
si2=1U;
sj0=f1199(i,si0,si1,si2);
l10=sj0;
si0=l4;
si1=264U;
si0+=si1;
si1=l3;
f2085(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+264U);
if(si0){
goto L10;
}
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+268U);
i64_store(i->m0,(U64)si0+248U,sj1);
si0=l4;
si1=l4;
si2=276U;
si1+=si2;
l3=si1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+256U,sj1);
si0=l4;
si1=232U;
si0+=si1;
si1=l1;
si2=l2;
si3=l4;
si4=248U;
si3+=si4;
f2148(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+232U);
l2=si0;
si1=22U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l4;
si1=275U;
si0+=si1;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+235U);
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+236U);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
si1=i32_load16_u(i->m0,(U64)si1+233U);
i32_store16(i->m0,(U64)si0+273U,si1);
si0=l4;
si1=l2;
i32_store8(i->m0,(U64)si0+272U,si1);
si0=l4;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+264U,sj1);
si0=l4;
si1=120U;
si0+=si1;
si1=l4;
si2=264U;
si1+=si2;
f2157(i,si0,si1);
si0=l4;
si1=96U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=104U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=112U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0+88U,sj1);
si0=l4;
si1=l9;
i32_store(i->m0,(U64)si0+184U,si1);
si0=l4;
si1=0U;
i32_store8(i->m0,(U64)si0+188U,si1);
si0=l4;
sj1=l10;
i64_store(i->m0,(U64)si0+72U,sj1);
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+48U);
i64_store(i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=l4;
si2=56U;
si1+=si2;
si1=f1482(i,si1);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store16(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=15U;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L20:;
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l4;
si1=192U;
si0+=si1;
si1=l4;
si2=56U;
si1+=si2;
si2=l7;
si3=l8;
f2074(i,si0,si1,si2,si3);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+192U);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L19:;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+60U);
l10=sj0;
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l10;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=264U;
si0+=si1;
f1078(i,si0);
goto L1;
L18:;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+196U);
l10=sj0;
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l10;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=264U;
si0+=si1;
f1078(i,si0);
goto L1;
L17:;
si0=l0;
si1=l4;
si1=i32_load16_u(i->m0,(U64)si1+44U);
i32_store16(i->m0,(U64)si0+1U,si1);
si0=l0;
sj1=l10;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=3U;
si0+=si1;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=264U;
si0+=si1;
f1078(i,si0);
goto L2;
L16:;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+60U);
l10=sj0;
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l10;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=232U;
si0+=si1;
f1078(i,si0);
goto L1;
L15:;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+196U);
l10=sj0;
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l10;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=232U;
si0+=si1;
f1078(i,si0);
goto L1;
L14:;
si0=l4;
si1=208U;
si0+=si1;
si1=l4;
si2=272U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+264U);
i64_store(i->m0,(U64)si0+200U,sj1);
si0=l1;
si1=1151401U;
si2=1U;
si0=f1006(i,si0,si1,si2);
l3=si0;
si0=1151401U;
si1=1U;
si2=1U;
sj0=f1199(i,si0,si1,si2);
l10=sj0;
si0=l4;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+192U,sj1);
si0=l4;
si1=120U;
si0+=si1;
si1=l4;
si2=192U;
si1+=si2;
f2157(i,si0,si1);
si0=l4;
si1=96U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=104U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=112U;
si0+=si1;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0+88U,sj1);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0+184U,si1);
si0=l4;
si1=0U;
i32_store8(i->m0,(U64)si0+188U,si1);
si0=l4;
sj1=l10;
i64_store(i->m0,(U64)si0+72U,sj1);
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+232U);
i64_store(i->m0,(U64)si0+80U,sj1);
si0=l0;
si1=l4;
si2=56U;
si1+=si2;
si1=f1482(i,si1);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l6;
i32_store16(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store16(i->m0,(U64)si0+2U,si1);
si0=l0;
si1=15U;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L13:;
si0=l2;
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=0U;
si1=l2;
si0-=si1;
sf0=f32_reinterpret_i32(si0);
l12=sf0;
si0=2U;
l3=si0;
goto L11;
L25:;
si0=l4;
si1=22U;
i32_store8(i->m0,(U64)si0+56U,si1);
si0=l4;
si1=56U;
si0+=si1;
f1480(i,si0);
si0=3U;
l3=si0;
sf0=2.14748365e+09;
l12=sf0;
goto L11;
L12:;
si0=l2;
si1=-2147483648U;
si0^=si1;
sf0=f32_reinterpret_i32(si0);
l12=sf0;
si0=3U;
l3=si0;
L11:;
si0=l0;
si1=l6;
i32_store16(i->m0,(U64)si0+10U,si1);
si0=l0;
si1=l5;
i32_store16(i->m0,(U64)si0+8U,si1);
si0=l0;
sf1=l12;
f32_store(i->m0,(U64)si0+4U,sf1);
si0=l0;
si1=l3;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=232U;
si0+=si1;
f1078(i,si0);
si0=l4;
si1=264U;
si0+=si1;
f1073(i,si0);
goto L1;
L10:;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+268U);
l10=sj0;
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l10;
i64_store(i->m0,(U64)si0+4U,sj1);
goto L8;
L9:;
si0=l4;
sj0=i64_load(i->m0,(U64)si0+236U);
l10=sj0;
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sj1=l10;
i64_store(i->m0,(U64)si0+4U,sj1);
L8:;
si0=l4;
si1=228U;
si0+=si1;
f1038(i,si0);
si0=l4;
si1=192U;
si0+=si1;
f1089(i,si0);
si0=l4;
si1=48U;
si0+=si1;
f1078(i,si0);
goto L1;
L6:;
si0=1151384U;
f14(i,si0);
UNREACHABLE;
L5:;
si0=1148344U;
f14(i,si0);
UNREACHABLE;
L4:;
si0=1148344U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=1148344U;
f14(i,si0);
UNREACHABLE;
L2:;
si0=l0;
si1=l3;
i32_store8(i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=288U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2275(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
f2269(i,si0,si1,si2,si3);
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
si0=f2276(i,si0,si1);
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
si0=f2276(i,si0,si1);
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
si0=1118988U;
si1=46U;
si2=1119036U;
f16(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1891(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si0=i32_load(i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l0;
si1=4U;
si0+=si1;
si1=8U;
f390(i,si0,si1);
si0=l0;
si1=8U;
f391(i,si0,si1);
L1:;
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
f392(i,si0,si1);
si0=l0;
si1=l3;
si2=l2;
si1=f393(i,si1,si2);
sj1=i64_load(i->m0,(U64)si1);
f394(i,si0,sj1);
si0=l0;
L0:;
return si0;
}

void f929(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=160U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=76U;
i32_store8(i->m0,(U64)si0+95U,si1);
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
i32_store(i->m0,(U64)si0+96U,si1);
si0=l2;
si1=l1;
si2=120U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+100U,si1);
si0=l2;
si1=72U;
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
si0=i32_load(i->m0,(U64)si0+76U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+72U);
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
goto L7;
}
si0=l2;
si1=136U;
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
i64_store(i->m0,(U64)si0+128U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=56U;
si0+=si1;
si1=l1;
f935(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+60U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+56U);
if(si0){
goto L8;
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
goto L8;
}
si0=l2;
si1=144U;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
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
si0=l11;
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
goto L10;
}
si0=l2;
si1=104U;
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
i64_store(i->m0,(U64)si0+104U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l12=si0;
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
if(si0){
goto L12;
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
goto L12;
}
L13:;
{
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f845(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L13;
}
}
si0=l2;
si1=l1;
f935(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L11;
}
goto L10;
L12:;
}
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+104U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l2;
si2=112U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l12;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l1;
si1=l12;
i32_store(i->m0,(U64)si0+20U,si1);
L10:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+144U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l2;
si2=152U;
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
si0=0U;
l3=si0;
si0=l10;
if(si0){
goto L6;
}
goto L4;
L8:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+128U);
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
si1=l3;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si1=l3;
i32_store(i->m0,(U64)si0+20U,si1);
L7:;
si0=1U;
l3=si0;
si0=l10;
si0=!(si0);
if(si0){
goto L4;
}
L6:;
si0=l1;
si1=l10;
i32_store8(i->m0,(U64)si0+141U,si1);
L4:;
si0=l4;
si1=0U;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l2;
si1=l2;
si2=95U;
si1+=si2;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l2;
si1=l2;
si2=96U;
si1+=si2;
i32_store(i->m0,(U64)si0+148U,si1);
si0=l2;
si1=l2;
si2=100U;
si1+=si2;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l4=si0;
si0=l3;
if(si0){
goto L15;
}
si0=l4;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l1;
si1=76U;
si2=l7;
si3=l5;
si4=l6;
si5=l9;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l4=si0;
L16:;
si0=l4;
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
l7=si1;
si2=l8;
si0=f842(i,si0,si1,si2);
l4=si0;
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L17;
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
i32_store(i->m0,(U64)si0+108U,si1);
si0=l2;
si1=l7;
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
goto L14;
L17:;
si0=1120504U;
si1=40U;
si2=1111940U;
f16(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l4;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=76U;
si2=l7;
si3=l5;
si4=l6;
si5=l9;
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
L14:;
si0=l2;
si1=144U;
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
si1=160U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1013(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f1022(i,si0);
si0=l0;
si1=20U;
si0+=si1;
l0=si0;
goto L2;
}
L1:;
L0:;
}

void f2224(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
L2:;
{
si0=l3;
si1=8U;
si0+=si1;
si0=f520(i,si0);
l1=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+12U);
si2=l3;
si2=i32_load(i->m0,(U64)si2+8U);
si1-=si2;
si2=3U;
si1+=si2;
si2=2U;
si1>>=(si2&31);
si2=1U;
si1+=si2;
f2222(i,si0,si1);
L3:;
si0=l0;
si1=l2;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
goto L2;
}
L1:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f645(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si0=l1;
si1=l0;
si2=l0;
si3=3U;
si2+=si3;
si3=-4U;
si2&=si3;
l2=si2;
si1-=si2;
l3=si1;
si0+=si1;
l4=si0;
si1=3U;
si0&=si1;
l5=si0;
si0=0U;
l6=si0;
si0=0U;
l1=si0;
si0=l0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=0U;
l1=si0;
si0=l2;
si1=l0;
si2=-1U;
si1^=si2;
si0+=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=0U;
l1=si0;
si0=0U;
l7=si0;
L3:;
{
si0=l1;
si1=l0;
si2=l7;
si1+=si2;
l8=si1;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si2=1U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si2=2U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si2=3U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l1=si0;
si0=l7;
si1=4U;
si0+=si1;
l7=si0;
if(si0){
goto L3;
}
}
L2:;
L4:;
{
si0=l1;
si1=l0;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l1=si0;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
if(si0){
goto L4;
}
}
L1:;
si0=l5;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=l4;
si2=-4U;
si1&=si2;
si0+=si1;
l0=si0;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
l6=si0;
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l6;
si1=l0;
si1=i32_load8_s(i->m0,(U64)si1+1U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l6=si0;
si0=l5;
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l6;
si1=l0;
si1=i32_load8_s(i->m0,(U64)si1+2U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l6=si0;
L5:;
si0=l4;
si1=2U;
si0>>=(si1&31);
l8=si0;
si0=l6;
si1=l1;
si0+=si1;
l5=si0;
L7:;
{
si0=l2;
l6=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L6;
}
si0=l8;
si1=192U;
si2=l8;
si3=192U;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=3U;
si0&=si1;
l4=si0;
si0=l7;
si1=2U;
si0<<=(si1&31);
l9=si0;
si0=l7;
si1=252U;
si0&=si1;
l10=si0;
if(si0){
goto L9;
}
si0=0U;
l1=si0;
goto L8;
L9:;
si0=l6;
si1=l10;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l3=si0;
si0=0U;
l1=si0;
si0=l6;
l0=si0;
L10:;
{
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=-1U;
si0^=si1;
si1=7U;
si0>>=(si1&31);
si1=l2;
si2=6U;
si1>>=(si2&31);
si0|=si1;
si1=16843009U;
si0&=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l2=si1;
si2=-1U;
si1^=si2;
si2=7U;
si1>>=(si2&31);
si2=l2;
si3=6U;
si2>>=(si3&31);
si1|=si2;
si2=16843009U;
si1&=si2;
si2=l0;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
l2=si2;
si3=-1U;
si2^=si3;
si3=7U;
si2>>=(si3&31);
si3=l2;
si4=6U;
si3>>=(si4&31);
si2|=si3;
si3=16843009U;
si2&=si3;
si3=l0;
si3=i32_load(i->m0,(U64)si3);
l2=si3;
si4=-1U;
si3^=si4;
si4=7U;
si3>>=(si4&31);
si4=l2;
si5=6U;
si4>>=(si5&31);
si3|=si4;
si4=16843009U;
si3&=si4;
si4=l1;
si3+=si4;
si2+=si3;
si1+=si2;
si0+=si1;
l1=si0;
si0=l0;
si1=16U;
si0+=si1;
l0=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L8:;
si0=l8;
si1=l7;
si0-=si1;
l8=si0;
si0=l6;
si1=l9;
si0+=si1;
l2=si0;
si0=l1;
si1=8U;
si0>>=(si1&31);
si1=16711935U;
si0&=si1;
si1=l1;
si2=16711935U;
si1&=si2;
si0+=si1;
si1=65537U;
si0*=si1;
si1=16U;
si0>>=(si1&31);
si1=l5;
si0+=si1;
l5=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L7;
}
}
si0=l6;
si1=l10;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si1=-1U;
si0^=si1;
si1=7U;
si0>>=(si1&31);
si1=l0;
si2=6U;
si1>>=(si2&31);
si0|=si1;
si1=16843009U;
si0&=si1;
l0=si0;
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
si1=-1U;
si0^=si1;
si1=7U;
si0>>=(si1&31);
si1=l2;
si2=6U;
si1>>=(si2&31);
si0|=si1;
si1=16843009U;
si0&=si1;
si1=l0;
si0+=si1;
l0=si0;
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si1=-1U;
si0^=si1;
si1=7U;
si0>>=(si1&31);
si1=l1;
si2=6U;
si1>>=(si2&31);
si0|=si1;
si1=16843009U;
si0&=si1;
si1=l0;
si0+=si1;
l0=si0;
L11:;
si0=l0;
si1=8U;
si0>>=(si1&31);
si1=459007U;
si0&=si1;
si1=l0;
si2=16711935U;
si1&=si2;
si0+=si1;
si1=65537U;
si0*=si1;
si1=16U;
si0>>=(si1&31);
si1=l5;
si0+=si1;
l5=si0;
L6:;
si0=l5;
L0:;
return si0;
}

void f1752(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l0;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
L0:;
}

void f1749(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=l2;
f156(i,si0,si1,si2);
L1:;
L0:;
}

U32 f1378(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l2;
f1379(i,si0,si1,si2);
si0=0U;
L0:;
return si0;
}

void f1307(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=6U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
f12(i,si0,si1);
L1:;
L0:;
}

U32 f2797(glicolwasmInstance*i,U32 l0) {
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
si1=8U;
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
si0=1160584U;
f14(i,si0);
UNREACHABLE;
L0:;
return si0;
}

U32 f2276(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
F32 l3=0;
F32 l4=0;
U32 si0,si1,si2,si3,si4;
F32 sf0,sf1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
f1650(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
if(si0){
goto L2;
}
si0=l2;
sf0=f32_load(i->m0,(U64)si0+4U);
l3=sf0;
si0=l2;
si1=l1;
f1650(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
if(si0){
goto L1;
}
si0=l2;
sf0=f32_load(i->m0,(U64)si0+4U);
l4=sf0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
sf0=l3;
sf1=l4;
si0=sf0 < sf1;
goto L0;
L2:;
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178304U;
si1=43U;
si2=l2;
si3=8U;
si2+=si3;
si3=1119116U;
si4=1168732U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178304U;
si1=43U;
si2=l2;
si3=8U;
si2+=si3;
si3=1119116U;
si4=1168748U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U64 f48(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
sj1=3980015128758738638ULL;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l2;
sj1=-6320312175959058963ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
sj1=2653416731841273960ULL;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l2;
sj1=-479820337970614379ULL;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l0;
si2=l1;
f374(i,si0,si1,si2);
si0=l2;
sj0=i64_load(i->m0,(U64)si0+16U);
si1=l2;
sj1=i64_load(i->m0,(U64)si1+24U);
sj0=f461(i,sj0,sj1);
l3=sj0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
sj0=l3;
L0:;
return sj0;
}

U64 f475(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
sj1=3980015128758738638ULL;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l2;
sj1=-6320312175959058963ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
sj1=2653416731841273960ULL;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l2;
sj1=-479820337970614379ULL;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=l0;
si2=l1;
f374(i,si0,si1,si2);
si0=l2;
sj0=i64_load(i->m0,(U64)si0+16U);
si1=l2;
sj1=i64_load(i->m0,(U64)si1+24U);
sj0=f461(i,sj0,sj1);
l3=sj0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
sj0=l3;
L0:;
return sj0;
}

