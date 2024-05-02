#include "w2c2_base.h"

#include "glicol.h"

U32 f1387(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si1=i32_load(i->m0,(U64)si1+20U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+24U);
si0=f1395(i,si0,si1,si2);
L0:;
return si0;
}

void f1729(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
sf1+=sf2;
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

void f2139(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l1;
si0=i32_load(i->m0,(U64)si0+40U);
l2=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+44U);
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+40U,si1);
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
si3=12U;
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
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l0;
si1=22U;
i32_store8(i->m0,(U64)si0,si1);
L0:;
}

void f2795(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=128U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L2;
}
si0=l5;
si1=80U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
l4=si1;
si1=i32_load8_u(i->m0,(U64)si1);
si2=l4;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f2792(i,si0,si1,si2);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+84U);
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+80U);
l6=sj1;
i64_store(i->m0,(U64)si0+8U,sj1);
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
sj0=l6;
si0=(U32)(sj0);
l7=si0;
si0=l5;
si1=8U;
si0+=si1;
si0=f2793(i,si0);
l4=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l9=si0;
si0=l5;
si1=l8;
si2=0U;
si3=l4;
si3=i32_load(i->m0,(U64)si3);
l4=si3;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l9;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l5;
si1=l4;
si2=0U;
si1=si1 != si2;
l8=si1;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l5;
si1=l9;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l8;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f2230(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+80U);
si1=13U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l5;
sj1=17179869184ULL;
i64_store(i->m0,(U64)si0+16U,sj1);
goto L3;
L5:;
si0=l5;
sj0=i64_load(i->m0,(U64)si0+80U);
l6=sj0;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+64U);
si2=1U;
si1+=si2;
l4=si1;
si2=-1U;
si3=l4;
si1=si3?si1:si2;
l4=si1;
si2=4U;
si3=l4;
si4=4U;
si3=si3 > si4;
si1=si3?si1:si2;
f75(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+4U);
l7=si0;
sj1=l6;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l7;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l5;
si1=80U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
si2=36U;
si0=f3065(i,si0,si1,si2);
si0=8U;
l4=si0;
si0=1U;
l3=si0;
L7:;
{
si0=l5;
si1=120U;
si0+=si1;
si1=l5;
si2=80U;
si1+=si2;
f2230(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+120U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l5;
sj0=i64_load(i->m0,(U64)si0+120U);
l6=sj0;
si0=l3;
si1=l5;
si1=i32_load(i->m0,(U64)si1+68U);
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
si1=68U;
si0+=si1;
si1=l5;
si1=i32_load(i->m0,(U64)si1+112U);
si2=1U;
si1+=si2;
l7=si1;
si2=-1U;
si3=l7;
si1=si3?si1:si2;
f76(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+72U);
l7=si0;
L8:;
si0=l7;
si1=l4;
si0+=si1;
sj1=l6;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L7;
}
L6:;
si0=l5;
si1=120U;
si0+=si1;
f1001(i,si0);
si0=l5;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=68U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+68U);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l3=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l7=si0;
goto L3;
L4:;
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l5;
sj1=17179869184ULL;
i64_store(i->m0,(U64)si0+16U,sj1);
L3:;
si0=l5;
si1=80U;
si0+=si1;
si1=l5;
si2=16U;
si1+=si2;
f2408(i,si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+80U);
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=l3;
f1704(i,si0,si1);
si0=l5;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=0U;
si1=0U;
si2=1173216U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1173216U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f2750(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L4;
}
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
goto L3;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l6=si0;
si0=l5;
sj0=i64_load(i->m0,(U64)si0+8U);
l7=sj0;
si0=(U32)(sj0);
l4=si0;
si1=l4;
si2=8U;
si1+=si2;
sj2=l7;
sj3=1095216660480ULL;
sj2&=sj3;
l7=sj2;
sj3=8589934592ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
l8=si0;
si0=f985(i,si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si1=4U;
f996(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+4U);
l8=si0;
si1=1701536116U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=24U;
si0+=si1;
si1=4U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=20U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+10U,si1);
si0=l5;
si1=20U;
i32_store8(i->m0,(U64)si0+8U,si1);
si0=l5;
si1=8U;
si0+=si1;
si0=f97(i,si0);
l4=si0;
goto L2;
L5:;
si0=l4;
sj1=l7;
sj2=8589934592ULL;
si1=sj1 != sj2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
si0=l8;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=l9;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l10;
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
si1=l10;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L4:;
si0=0U;
si1=0U;
si2=1172612U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1172612U;
f14(i,si0);
UNREACHABLE;
L2:;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
L1:;
si0=l6;
si1=l3;
f1704(i,si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2928(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si0=f2594(i,si0);
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
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l6;
si2=l5;
si3=8U;
si2+=si3;
si2=f2594(i,si2);
l4=si2;
si3=l6;
si4=l4;
si3=si3 < si4;
si1=si3?si1:si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=3ULL;
sj1|=sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2767(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si3=sd3 < sd4;
sj1=si3?sj1:sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1317(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=4U;
si0+=si1;
si1=l0;
si2=48U;
si1+=si2;
si2=l0;
si2=i32_load(i->m0,(U64)si2+48U);
si3=3U;
si2=si2 > si3;
l2=si2;
si0=si2?si0:si1;
l3=si0;
si0=l0;
si1=4U;
si2=48U;
si3=l2;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
L1:;
{
si0=l0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L2;
}
goto L0;
L2:;
si0=l3;
si1=l0;
si2=-1U;
si1+=si2;
l0=si1;
i32_store(i->m0,(U64)si0,si1);
goto L1;
}
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
si2=1124444U;
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
si0=1120424U;
si1=40U;
si2=1111860U;
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

void f480(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=160U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=156U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
L1:;
{
si0=l4;
if(si0){
goto L2;
}
si0=l1;
si1=256U;
si0+=si1;
si1=l1;
si2=272U;
si1+=si2;
f487(i,si0,si1);
si0=l0;
si1=l2;
si2=132U;
si0=f3065(i,si0,si1,si2);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l3;
si1=12U;
si0+=si1;
si1=l1;
si2=l5;
si2=i32_load(i->m0,(U64)si2);
f482(i,si0,si1,si2);
si0=l4;
si1=-4U;
si0+=si1;
l4=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l3;
si1=12U;
si0+=si1;
f277(i,si0);
goto L1;
}
L0:;
}

void f1142(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si2=l1;
si3=l2;
f436(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(i->m0,(U64)si1+12U);
f432(i,si0,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f2110(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1;
L2:;
{
si0=l0;
si0=f2113(i,si0);
l4=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
f2114(i,si0);
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=l4;
f1179(i,si0,si1);
L3:;
si0=l4;
si1=10U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l4;
si1=42U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l4;
si1=47U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l0;
si0=f2115(i,si0);
si1=42U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
f2114(i,si0);
si0=l0;
si0=f2113(i,si0);
si0=l3;
si0=!(si0);
if(si0){
goto L7;
}
si0=l3;
si1=42U;
f1179(i,si0,si1);
L7:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
goto L4;
L6:;
si0=l0;
si0=f2115(i,si0);
si1=47U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l2;
f2114(i,si0);
si0=l0;
si0=f2113(i,si0);
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=47U;
f1179(i,si0,si1);
L8:;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
goto L4;
L5:;
si0=l2;
f2117(i,si0);
L4:;
si0=l1;
if(si0){
goto L2;
}
}
si0=0U;
l1=si0;
L1:;
si0=l1;
L0:;
return si0;
}

U32 f3000(glicolwasmInstance*i,U32 l0) {
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
si1=10U;
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

void f852(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si2=1159069U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=0U;
l3=si0;
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
si2=1114993U;
si3=2U;
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
si2=1159068U;
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
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2238(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si1=16U;
si0+=si1;
l3=si0;
L3:;
{
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+29U);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
l5=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l6=si0;
L6:;
{
si0=l5;
l7=si0;
si0=l4;
l8=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
f971(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l9=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l10=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
l5=si0;
si0=l9;
si1=-9U;
si0+=si1;
l11=si0;
si1=23U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=1U;
si1=l11;
si0<<=(si1&31);
si1=8388639U;
si0&=si1;
if(si0){
goto L7;
}
L8:;
si0=l9;
si1=128U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l9;
si0=f1763(i,si0);
si0=!(si0);
if(si0){
goto L6;
}
L7:;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=l10;
si2=l7;
si1+=si2;
si2=l8;
si3=l5;
si2+=si3;
si1-=si2;
si2=l4;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l10;
si1=l9;
si0-=si1;
l4=si0;
si0=l6;
si1=l9;
si0+=si1;
l9=si0;
goto L4;
L5:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+29U);
if(si0){
goto L2;
}
si0=l1;
si1=1U;
i32_store8(i->m0,(U64)si0+29U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+28U);
if(si0){
goto L9;
}
si0=l4;
si1=l9;
si0=si0 == si1;
if(si0){
goto L2;
}
L9:;
si0=l4;
si1=l9;
si0-=si1;
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l9;
si0+=si1;
l9=si0;
L4:;
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
}
si0=l0;
si1=l9;
si2=l4;
si1=f1139(i,si1,si2);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1318(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
f984(i,si0,si1);
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
si2=24U;
si1*=si2;
si0+=si1;
L0:;
return si0;
}

void f1405(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1;
si0=l1;
si1=3U;
si0<<=(si1&31);
l1=si0;
L1:;
{
si0=l1;
if(si0){
goto L2;
}
goto L0;
L2:;
si0=l0;
si1=l2;
f1320(i,si0,si1);
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
}
L0:;
}

void f1132(glicolwasmInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si1=-16U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l6=si0;
sj1=l2;
si1=(U32)(sj1);
si0&=si1;
l7=si0;
sj0=l2;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l8=sj0;
si0=0U;
l9=si0;
L3:;
{
si0=l3;
si1=l4;
si2=l7;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
l10=sj1;
sj2=l8;
sj1^=sj2;
l11=sj1;
sj2=-1ULL;
sj1^=sj2;
sj2=l11;
sj3=-72340172838076673ULL;
sj2+=sj3;
sj1&=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(i->m0,(U64)si0+8U,sj1);
L4:;
{
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
f43(i,si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0);
if(si0){
goto L5;
}
sj0=l10;
sj1=l10;
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
si0=l7;
si1=l9;
si2=8U;
si1+=si2;
l9=si1;
si0+=si1;
si1=l6;
si0&=si1;
l7=si0;
goto L3;
L5:;
si0=l5;
si1=l3;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l7;
si1+=si2;
si2=l6;
si1&=si2;
l12=si1;
si2=4U;
si1<<=(si2&31);
si0-=si1;
sj0=i64_load(i->m0,(U64)si0);
sj1=l2;
si0=sj0 != sj1;
if(si0){
goto L4;
}
}
}
si0=l0;
sj1=1ULL;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l2;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=24U;
si0+=si1;
si1=l4;
si2=0U;
si3=l12;
si2-=si3;
si3=4U;
si2<<=(si3&31);
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
sj0=0ULL;
l2=sj0;
goto L1;
L2:;
si0=l1;
si1=1U;
f1144(i,si0,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
sj1=l2;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
sj1=l2;
i64_store(i->m0,(U64)si0+8U,sj1);
sj0=1ULL;
l2=sj0;
L1:;
si0=l0;
sj1=l2;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f778(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si0=1U;
l3=si0;
goto L3;
L4:;
si0=l1;
si1=1073741823U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si0<<=(si1&31);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=l2;
si1=8U;
si0+=si1;
si1=1U;
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

U32 f1425(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=12U;
si0+=si1;
si1=l1;
si0=f254(i,si0,si1);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f649(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=l1;
si1=1064288U;
si2=36U;
si0=f449(i,si0,si1,si2);
goto L0;
L1:;
si0=l1;
si1=1064324U;
si2=21U;
si0=f449(i,si0,si1,si2);
L0:;
return si0;
}

void f743(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l1;
si1=536870912U;
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
si2=2U;
si1<<=(si2&31);
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
f434(i,si0,si1,si2,si3);
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
f432(i,si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f2120(glicolwasmInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
si1=l0;
si2=2097119U;
si1&=si2;
si2=-65U;
si1+=si2;
si2=6U;
si1=si1 < si2;
si0|=si1;
L0:;
return si0;
}

void f611(glicolwasmInstance*i,F32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
F32 sf0,sf1,sf2,sf3,sf4;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
f599(i);
si0=l1;
si1=12U;
si0+=si1;
f238(i,si0);
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
if(si0){
goto L1;
}
sf0=l0;
sf1=4.2949673e+09;
si0=sf0 < sf1;
sf1=l0;
sf2=0;
si1=sf1 >= sf2;
l2=si1;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
sf0=l0;
si0=I32_TRUNC_U_F32(sf0);
l3=si0;
goto L2;
L3:;
si0=0U;
l3=si0;
L2:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
l5=si0;
si1=320U;
si0+=si1;
si1=-1U;
si2=l3;
si3=0U;
si4=l2;
si2=si4?si2:si3;
sf3=l0;
sf4=4.29496704e+09;
si3=sf3 > sf4;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l4;
f274(i,si0,si1);
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+16U);
i32_store(i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l1;
si2=20U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+28U,si1);
si0=1178224U;
si1=43U;
si2=l1;
si3=24U;
si2+=si3;
si3=1054304U;
si4=1061024U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f388(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L5;
case 1:
goto L12;
case 2:
goto L11;
case 3:
goto L10;
case 4:
goto L9;
case 5:
goto L6;
case 6:
goto L3;
case 7:
goto L6;
case 8:
goto L2;
case 9:
goto L8;
case 10:
goto L6;
case 11:
goto L7;
case 12:
goto L6;
default:
goto L5;
}
L12:;
si0=l0;
si1=2U;
si0+=si1;
l3=si0;
goto L4;
L11:;
si0=l0;
si1=1U;
si0+=si1;
l3=si0;
goto L4;
L10:;
si0=l0;
si1=1U;
si0+=si1;
l3=si0;
goto L4;
L9:;
si0=l0;
si1=1U;
si0+=si1;
l3=si0;
goto L4;
L8:;
si0=l0;
si1=1U;
si0+=si1;
l3=si0;
goto L4;
L7:;
si0=l0;
si1=1U;
si0+=si1;
l3=si0;
goto L4;
L6:;
si0=l0;
si1=l1;
i32_store8(i->m0,(U64)si0+1U,si1);
goto L1;
L5:;
si0=l0;
si1=1U;
si0+=si1;
l3=si0;
L4:;
si0=l3;
si1=l1;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=l1;
i32_store8(i->m0,(U64)si0+1U,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=i32_load(i->m0,(U64)si0+8U);
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
L13:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si0=f388(i,si0,si1);
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L13;
}
L2:;
si0=l0;
si1=l1;
i32_store8(i->m0,(U64)si0+1U,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si1=l3;
si1=i32_load(i->m0,(U64)si1+8U);
si2=0U;
si3=l3;
si3=i32_load(i->m0,(U64)si3);
l3=si3;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l3;
si2=0U;
si1=si1 != si2;
l5=si1;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l5;
i32_store(i->m0,(U64)si0+12U,si1);
L14:;
{
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
f1969(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si0=f388(i,si0,si1);
goto L14;
}
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1184(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0+=si1;
L0:;
return si0;
}

U32 f123(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l1;
if(si0){
goto L1;
}
si0=0U;
si1=0U;
si2=l2;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
L0:;
return si0;
}

void f2809(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
f2792(i,si0,si1,si2);
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
si0=l0;
sj1=1ULL;
sj2=257ULL;
si3=l5;
si3=f2793(i,si3);
si3=i32_load(i->m0,(U64)si3+8U);
sj1=si3?sj1:sj2;
i64_store(i->m0,(U64)si0,sj1);
sj0=l6;
si0=(U32)(sj0);
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
f1704(i,si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=0U;
si1=0U;
si2=1173056U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1173056U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f3048(glicolwasmInstance*i) {
UNREACHABLE;
L0:;
}

void f981(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=l1;
si3=l2;
si2+=si3;
f982(i,si0,si1,si2);
L0:;
}

void f1622(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si4=1167348U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1U;
si1=1U;
si2=1167348U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
sj1=257ULL;
sj2=1ULL;
si3=l4;
si3=i32_load8_u(i->m0,(U64)si3+4U);
sj1=si3?sj1:sj2;
sj2=257ULL;
si3=l3;
si4=255U;
si3&=si4;
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
si4=1167348U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1167348U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f87(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=-8U;
si0+=si1;
l1=si0;
si1=l0;
si2=-4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l2=si1;
si2=-8U;
si1&=si2;
l0=si1;
si0+=si1;
l3=si0;
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
si0=l2;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=l0;
si0+=si1;
l0=si0;
si0=l1;
si1=l2;
si0-=si1;
l1=si0;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1183564U);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
si1=3U;
si0&=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
si1=l0;
i32_store(i->m0,(U64)si0+1183556U,si1);
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1+4U);
si2=-2U;
si1&=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L5:;
si0=l1;
si1=l2;
f616(i,si0,si1);
L4:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
si1=2U;
si0&=si1;
if(si0){
goto L8;
}
si0=l3;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1183568U);
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l3;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1183564U);
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=l2;
si2=-8U;
si1&=si2;
l2=si1;
f616(i,si0,si1);
si0=l1;
si1=l2;
si2=l0;
si1+=si2;
l0=si1;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si0+=si1;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1183564U);
si0=si0 != si1;
if(si0){
goto L7;
}
si0=0U;
si1=l0;
i32_store(i->m0,(U64)si0+1183556U,si1);
goto L0;
L8:;
si0=l3;
si1=l2;
si2=-2U;
si1&=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si0+=si1;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
L7:;
si0=l0;
si1=256U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l0;
f3049(i,si0,si1);
si0=0U;
l1=si0;
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1183588U);
si2=-1U;
si1+=si2;
l0=si1;
i32_store(i->m0,(U64)si0+1183588U,si1);
si0=l0;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(i->m0,(U64)si0+1183276U);
l0=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
l1=si0;
L10:;
{
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
if(si0){
goto L10;
}
}
L9:;
si0=0U;
si1=l1;
si2=4095U;
si3=l1;
si4=4095U;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+1183588U,si1);
goto L0;
L6:;
si0=0U;
si1=l1;
i32_store(i->m0,(U64)si0+1183568U,si1);
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1183560U);
si2=l0;
si1+=si2;
l0=si1;
i32_store(i->m0,(U64)si0+1183560U,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1183564U);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=0U;
si1=0U;
i32_store(i->m0,(U64)si0+1183556U,si1);
si0=0U;
si1=0U;
i32_store(i->m0,(U64)si0+1183564U,si1);
L11:;
si0=l0;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1183580U);
l4=si1;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=0U;
si0=i32_load(i->m0,(U64)si0+1183568U);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l1=si0;
si0=0U;
si0=i32_load(i->m0,(U64)si0+1183560U);
l5=si0;
si1=41U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=1183268U;
l0=si0;
L13:;
{
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l2;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si0+=si1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L12;
}
L14:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
if(si0){
goto L13;
}
}
L12:;
si0=0U;
si0=i32_load(i->m0,(U64)si0+1183276U);
l0=si0;
si0=!(si0);
if(si0){
goto L15;
}
si0=0U;
l1=si0;
L16:;
{
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
if(si0){
goto L16;
}
}
L15:;
si0=0U;
si1=l1;
si2=4095U;
si3=l1;
si4=4095U;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+1183588U,si1);
si0=l5;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=0U;
si1=-1U;
i32_store(i->m0,(U64)si0+1183580U,si1);
L3:;
goto L0;
L2:;
si0=l0;
si1=-8U;
si0&=si1;
si1=1183284U;
si0+=si1;
l3=si0;
si0=0U;
si0=i32_load(i->m0,(U64)si0+1183548U);
l2=si0;
si1=1U;
si2=l0;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l0=si1;
si0&=si1;
if(si0){
goto L18;
}
si0=0U;
si1=l2;
si2=l0;
si1|=si2;
i32_store(i->m0,(U64)si0+1183548U,si1);
si0=l3;
l0=si0;
goto L17;
L18:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
L17:;
si0=l3;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l3;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
goto L0;
L1:;
si0=0U;
si1=l1;
i32_store(i->m0,(U64)si0+1183564U,si1);
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1183556U);
si2=l0;
si1+=si2;
l0=si1;
i32_store(i->m0,(U64)si0+1183556U,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si0+=si1;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f1103(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=12U;
si0+=si1;
l0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
L2:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=-4U;
si0+=si1;
f1035(i,si0);
si0=l0;
f1102(i,si0);
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
goto L2;
}
L1:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
si1=31U;
si0>>=(si1&31);
f1090(i,si0);
si0=l0;
si1=-268435456U;
si0+=si1;
si1=-536870913U;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l0;
si1=268435455U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
f87(i,si0);
goto L0;
L4:;
si0=1116144U;
si1=17U;
si2=1123044U;
f37(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1116144U;
si1=17U;
si2=1123060U;
f37(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f786(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=l3;
si2=l1;
si3=l2;
f798(i,si0,si1,si2,si3);
si0=l0;
si1=1U;
i32_store16(i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l0;
si1=24U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1671(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
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
si2=8U;
si1+=si2;
f392(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l0;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
goto L1;
L2:;
si0=l2;
si1=l1;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
L1:;
si0=l4;
si1=l3;
si2=l0;
si3=l1;
si0=f159(i,si0,si1,si2,si3);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f758(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=12U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=1U;
si1=l1;
si0<<=(si1&31);
si1=7832U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f323(i,si0,si1);
L1:;
L0:;
}

void f2049(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l1;
si0=f520(i,si0);
l2=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+8U);
l3=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
L1:;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f798(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l1;
si2=l4;
si3=12U;
si2+=si3;
f801(i,si0,si1,si2);
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l5=si0;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
si1=i32_load(i->m0,(U64)si1+12U);
i32_store(i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f329(glicolwasmInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
f19(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f19(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+24U);
si1=l0;
si2=28U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f12(i,si0,si1);
L0:;
}

U32 f2017(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L37;
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
goto L37;
}
L37:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176387U;
si2=11U;
si3=l0;
si4=12U;
si3+=si4;
si4=1125208U;
si5=l2;
si6=4U;
si5+=si6;
si6=1176400U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L36:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176416U;
si2=12U;
si3=l0;
si4=8U;
si3+=si4;
si4=1176428U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L35:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176444U;
si2=19U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125208U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L34:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176463U;
si2=22U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125208U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L33:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176485U;
si2=21U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125208U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L32:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176506U;
si2=21U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125208U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L31:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176527U;
si2=18U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125224U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L30:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176545U;
si2=21U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125208U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L29:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176566U;
si2=19U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125208U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L28:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+20U);
si2=1176585U;
si3=19U;
si4=l1;
si5=24U;
si4+=si5;
si4=i32_load(i->m0,(U64)si4);
si4=i32_load(i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si1,si2,si3);
i32_store8(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+13U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l0;
si2=12U;
si1+=si2;
si2=1125208U;
si0=f678(i,si0,si1,si2);
si1=l0;
si2=24U;
si1+=si2;
si2=1125208U;
si0=f678(i,si0,si1,si2);
si1=l0;
si2=8U;
si1+=si2;
si2=1176604U;
si0=f678(i,si0,si1,si2);
si1=l2;
si2=1119472U;
si0=f678(i,si0,si1,si2);
l0=si0;
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
if(si0){
goto L38;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
l0=si0;
goto L1;
L38:;
si0=1U;
l0=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+13U);
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L2;
}
si0=1U;
l0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1123478U;
si2=1U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L27:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176620U;
si2=13U;
si3=l0;
si4=12U;
si3+=si4;
si4=1125208U;
si5=l0;
si6=8U;
si5+=si6;
si6=1176604U;
si7=l2;
si8=4U;
si7+=si8;
si0=f683(i,si0,si1,si2,si3,si4,si5,si6,si7);
l0=si0;
goto L1;
L26:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176633U;
si2=16U;
si3=l2;
si4=4U;
si3+=si4;
si4=1119472U;
si0=f408(i,si0,si1,si2,si3,si4);
l0=si0;
goto L1;
L25:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176649U;
si2=21U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125208U;
si5=l0;
si6=20U;
si5+=si6;
si6=1125208U;
si7=l2;
si8=4U;
si7+=si8;
si0=f683(i,si0,si1,si2,si3,si4,si5,si6,si7);
l0=si0;
goto L1;
L24:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176670U;
si2=23U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125208U;
si5=l0;
si6=20U;
si5+=si6;
si6=1125208U;
si7=l2;
si8=4U;
si7+=si8;
si0=f683(i,si0,si1,si2,si3,si4,si5,si6,si7);
l0=si0;
goto L1;
L23:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176693U;
si2=17U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125208U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L22:;
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176710U;
si2=16U;
si3=l0;
si4=4U;
si3+=si4;
si4=1121712U;
si5=l0;
si6=8U;
si5+=si6;
si6=1176728U;
si7=l2;
si8=4U;
si7+=si8;
si0=f683(i,si0,si1,si2,si3,si4,si5,si6,si7);
l0=si0;
goto L1;
L21:;
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176744U;
si2=17U;
si3=l0;
si4=4U;
si3+=si4;
si4=1121712U;
si5=l0;
si6=8U;
si5+=si6;
si6=1176728U;
si7=l2;
si8=4U;
si7+=si8;
si0=f683(i,si0,si1,si2,si3,si4,si5,si6,si7);
l0=si0;
goto L1;
L20:;
si0=l2;
si1=l0;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176761U;
si2=19U;
si3=l0;
si4=4U;
si3+=si4;
si4=1121712U;
si5=l0;
si6=8U;
si5+=si6;
si6=1176728U;
si7=l2;
si8=4U;
si7+=si8;
si0=f683(i,si0,si1,si2,si3,si4,si5,si6,si7);
l0=si0;
goto L1;
L19:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176780U;
si2=8U;
si3=l2;
si4=4U;
si3+=si4;
si4=1119472U;
si0=f408(i,si0,si1,si2,si3,si4);
l0=si0;
goto L1;
L18:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176788U;
si2=13U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125208U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L17:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176801U;
si2=32U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125208U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L16:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176833U;
si2=25U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125208U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L15:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176858U;
si2=12U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125208U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L14:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176870U;
si2=15U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125208U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L13:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176885U;
si2=22U;
si3=l2;
si4=4U;
si3+=si4;
si4=1119472U;
si0=f408(i,si0,si1,si2,si3,si4);
l0=si0;
goto L1;
L12:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176907U;
si2=21U;
si3=l2;
si4=4U;
si3+=si4;
si4=1119472U;
si0=f408(i,si0,si1,si2,si3,si4);
l0=si0;
goto L1;
L11:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176928U;
si2=19U;
si3=l2;
si4=4U;
si3+=si4;
si4=1119472U;
si0=f408(i,si0,si1,si2,si3,si4);
l0=si0;
goto L1;
L10:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176947U;
si2=18U;
si3=l2;
si4=4U;
si3+=si4;
si4=1119472U;
si0=f408(i,si0,si1,si2,si3,si4);
l0=si0;
goto L1;
L9:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176965U;
si2=17U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125208U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L8:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176982U;
si2=15U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125224U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L7:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1176997U;
si2=17U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125208U;
si5=l0;
si6=20U;
si5+=si6;
si6=1145432U;
si7=l2;
si8=4U;
si7+=si8;
si0=f683(i,si0,si1,si2,si3,si4,si5,si6,si7);
l0=si0;
goto L1;
L6:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1177014U;
si2=12U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125224U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L5:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1177026U;
si2=9U;
si3=l0;
si4=1U;
si3+=si4;
si4=1122064U;
si5=l0;
si6=8U;
si5+=si6;
si6=1125224U;
si7=l2;
si8=4U;
si7+=si8;
si0=f683(i,si0,si1,si2,si3,si4,si5,si6,si7);
l0=si0;
goto L1;
L4:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1166872U;
si2=6U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125224U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L3:;
si0=l2;
si1=l0;
si2=2U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1177035U;
si2=4U;
si3=l0;
si4=8U;
si3+=si4;
si4=1125224U;
si5=l2;
si6=4U;
si5+=si6;
si6=1119472U;
si0=f458(i,si0,si1,si2,si3,si4,si5,si6);
l0=si0;
goto L1;
L2:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1179408U;
si2=1U;
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

void f183(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=156U;
si1=4U;
si0=f164(i,si0,si1);
si1=l1;
si2=156U;
si0=f3065(i,si0,si1,si2);
l1=si0;
si0=l0;
si1=2U;
f162(i,si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=1052588U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
L0:;
}

U32 f1319(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
L2:;
{
si0=l2;
l4=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l4;
si2=4U;
si1+=si2;
l2=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l4;
si1=l3;
si0=si0 != si1;
L0:;
return si0;
}

U32 f3042(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L4;
case 3:
goto L3;
default:
goto L6;
}
L6:;
si0=l2;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+8U,si1);
si0=0U;
si0=i32_load8_u(i->m0,(U64)si0+1183624U);
si0=20U;
si0=f614(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1179720U);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1179712U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1179704U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=20U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
si1=20U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=40U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
si1=133U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1179412U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=232U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=40U;
si2+=si3;
si0=f682(i,si0,si1,si2);
l0=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
f87(i,si0);
goto L2;
L5:;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+1U);
l0=si0;
si0=l2;
si1=52U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l2;
si1=1178640U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l0;
si2=2U;
si1<<=(si2&31);
l0=si1;
si2=1179932U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
si2=1180096U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=40U;
si2+=si3;
si0=f682(i,si0,si1,si2);
l0=si0;
goto L2;
L4:;
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
l0=si1;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si0=f449(i,si0,si1,si2);
l0=si0;
goto L2;
L3:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si2=i32_load(i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
l0=si0;
L2:;
si0=l2;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L1:;
UNREACHABLE;
L0:;
return si0;
}

U32 f1920(glicolwasmInstance*i) {
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
si2=140U;
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

U32 f2021(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si2=i32_load(i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
L0:;
return si0;
}

U32 f1423(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
L1:;
{
si0=l1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
goto L0;
L2:;
si0=l3;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si2=30U;
si0=f244(i,si0,si1,si2);
si0=l1;
si1=12U;
si0+=si1;
l1=si0;
goto L1;
}
L0:;
return si0;
}

void f1299(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l1;
si2=l2;
f1487(i,si0,si1,si2);
si0=l0;
si1=16U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f65(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
F64 l14=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
F32 sf1,sf2;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si1=60U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l6=si0;
si0=0U;
l7=si0;
L2:;
{
si0=l7;
si1=128U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si1=8U;
si0+=si1;
si1=2U;
f66(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l8=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l9=si0;
si1=28265U;
i32_store16(i->m0,(U64)si0,si1);
si0=l4;
si1=2U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l9;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l8;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+40U);
si2=l0;
si2=i32_load(i->m0,(U64)si2+44U);
si3=0U;
si4=1049588U;
si1=f2(i,si1,si2,si3,si4);
si1=i32_load(i->m0,(U64)si1);
si2=1049604U;
si0=f3(i,si0,si1,si2);
l8=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=l4;
si2=32U;
si1+=si2;
si2=l8;
si2=i32_load(i->m0,(U64)si2);
si3=l7;
si4=2U;
si3<<=(si4&31);
si2+=si3;
sf2=f32_load(i->m0,(U64)si2);
sd2=(F64)(sf2);
f67(i,si0,si1,sd2);
L4:;
si0=l7;
si1=1U;
si0+=si1;
l10=si0;
si0=l4;
si1=5U;
f66(i,si0,si1);
si0=0U;
l8=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l11=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l9=si0;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1049636U);
i32_store(i->m0,(U64)si0,si1);
si0=l9;
si1=4U;
si0+=si1;
si1=0U;
si1=i32_load8_u(i->m0,(U64)si1+1049640U);
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=5U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l9;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l4;
si1=l11;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l4;
si2=32U;
si1+=si2;
si2=l0;
si2=i32_load(i->m0,(U64)si2+56U);
sd2=(F64)(si2);
f67(i,si0,si1,sd2);
si0=l2;
si1=l7;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l12=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+20U);
si1=40U;
si0*=si1;
l7=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+16U);
l9=si0;
si0=8U;
l11=si0;
L5:;
{
si0=l7;
if(si0){
goto L6;
}
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+56U);
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l10;
l7=si0;
goto L2;
L6:;
si0=l8;
si1=l0;
si1=i32_load(i->m0,(U64)si1+20U);
si2=-1U;
si1+=si2;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l4;
si1=16U;
si0+=si1;
si1=l9;
si2=l0;
si2=i32_load(i->m0,(U64)si2+28U);
si3=l0;
si3=i32_load(i->m0,(U64)si3+32U);
si4=l8;
si5=1049644U;
si2=f68(i,si2,si3,si4,si5);
si3=l5;
f69(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(i->m0,(U64)si0+16U);
si1=14U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l3;
if(si0){
goto L11;
}
si0=0U;
si1=0U;
si2=1049676U;
f4(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l4;
si1=16U;
si0+=si1;
si1=l9;
si2=l0;
si2=i32_load(i->m0,(U64)si2+28U);
si3=l0;
si3=i32_load(i->m0,(U64)si3+32U);
si4=l8;
si5=1049692U;
si2=f68(i,si2,si3,si4,si5);
si3=l5;
f69(i,si0,si1,si2,si3);
si0=l4;
si0=i32_load(i->m0,(U64)si0+16U);
si1=14U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l13=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l4;
sd0=f64_load(i->m0,(U64)si0+24U);
l14=sd0;
si0=l4;
si1=32U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l11;
si1+=si2;
l13=si1;
si2=-4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l13;
si2=i32_load(i->m0,(U64)si2);
f52(i,si0,si1,si2);
si0=l5;
si1=l4;
si2=32U;
si1+=si2;
sd2=l14;
f67(i,si0,si1,sd2);
goto L7;
L11:;
si0=l12;
si1=l4;
sd1=f64_load(i->m0,(U64)si1+24U);
sf1=(F32)(sd1);
f32_store(i->m0,(U64)si0,sf1);
goto L7;
L10:;
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+16U);
i64_store(i->m0,(U64)si0+32U,sj1);
si0=1178224U;
si1=43U;
si2=l4;
si3=32U;
si2+=si3;
si3=1054240U;
si4=1049660U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L9:;
si0=l4;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l4;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+16U);
i64_store(i->m0,(U64)si0+32U,sj1);
si0=1178224U;
si1=43U;
si2=l4;
si3=32U;
si2+=si3;
si3=1054240U;
si4=1049708U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l8;
si1=l13;
si2=1049724U;
f4(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l9;
si1=40U;
si0+=si1;
l9=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l11;
si1=12U;
si0+=si1;
l11=si0;
si0=l7;
si1=-40U;
si0+=si1;
l7=si0;
goto L5;
}
L3:;
}
si0=0U;
si1=0U;
si2=1049620U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1606(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f1018(i,si0,si1);
L0:;
return si0;
}

void f2782(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si2=1172860U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1172860U;
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
si2=f2346(i,si2);
sd2=(F64)(I32)(si2);
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

void f2543(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
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
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f2430(i,si0,si1);
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+20U);
l6=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
l8=si0;
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
goto L2;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+36U);
l9=si1;
i32_store(i->m0,(U64)si0+28U,si1);
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
l10=si0;
si0=l9;
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
si0=l9;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
goto L5;
L6:;
si0=l5;
si1=8U;
si0+=si1;
si1=l9;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l9=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
L5:;
si0=l10;
si1=l8;
si2=0U;
si3=l8;
si4=0U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l3=si1;
si2=l6;
si3=l3;
si4=l6;
si5=l3;
si4=(U32)((I32)si4>(I32)si5);
si2=si4?si2:si3;
si3=l3;
si2-=si3;
si3=l4;
si4=l9;
si5=1U;
f2541(i,si0,si1,si2,si3,si4,si5);
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
si1=28U;
si0+=si1;
f1035(i,si0);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=2U;
si1=2U;
si2=1171688U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1U;
si1=l4;
si2=1171688U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
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
si4=1171688U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=1171764U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f2441(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj5;
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
l8=sj0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
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
sj5=l8;
f2331(i,si0,si1,si2,si3,si4,sj5);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+24U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+24U);
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
si0=1169624U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1168816U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f1097(glicolwasmInstance*i,U32 l0) {
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
si0=f1099(i,si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=-16U;
si0+=si1;
f1100(i,si0);
goto L2;
}
L1:;
si0=l1;
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
U32 si0,si1,si2,si3;
U64 sj0,sj1;
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
l6=si0;
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
f1720(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l3=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l5;
si1=i32_load(i->m0,(U64)si1+8U);
l8=si1;
si2=l3;
si1=f1721(i,si1,si2);
si2=l6;
si3=l4;
f2940(i,si0,si1,si2,si3);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l8;
si1=l3;
f1704(i,si0,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=2U;
si1=2U;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1U;
si1=l4;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1175096U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1174576U;
f14(i,si0);
UNREACHABLE;
L0:;
}

F64 f3105(glicolwasmInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
F64 l5=0;
F64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7,sd8,sd9,sd10;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L5;
}
sj0=l1;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l2=si0;
si1=1048576U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l2;
si1=2146435071U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=1072693248U;
l3=si0;
si0=-1023U;
l4=si0;
si0=l2;
si1=1072693248U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l2;
l3=si0;
goto L4;
L6:;
sj0=l1;
si0=(U32)(sj0);
if(si0){
goto L4;
}
sd0=0;
goto L0;
L5:;
sj0=l1;
sj1=9223372036854775807ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l1;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L3;
}
sd0=l0;
sd1=18014398509481984;
sd0*=sd1;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
si0=-1077U;
l4=si0;
L4:;
si0=l3;
si1=614242U;
si0+=si1;
l2=si0;
si1=20U;
si0>>=(si1&31);
si1=l4;
si0+=si1;
sd0=(F64)(I32)(si0);
l5=sd0;
sd1=0.69314718036912382;
sd0*=sd1;
si1=l2;
si2=1048575U;
si1&=si2;
si2=1072079006U;
si1+=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=l1;
sj3=4294967295ULL;
sj2&=sj3;
sj1|=sj2;
sd1=f64_reinterpret_i64(sj1);
sd2=-1;
sd1+=sd2;
l0=sd1;
sd2=l5;
sd3=1.9082149292705877e-10;
sd2*=sd3;
sd3=l0;
sd4=l0;
sd5=2;
sd4+=sd5;
sd3/=sd4;
l5=sd3;
sd4=l0;
sd5=l0;
sd6=0.5;
sd5*=sd6;
sd4*=sd5;
l6=sd4;
sd5=l5;
sd6=l5;
sd5*=sd6;
l5=sd5;
sd6=l5;
sd5*=sd6;
l0=sd5;
sd6=l0;
sd7=l0;
sd8=0.15313837699209373;
sd7*=sd8;
sd8=0.22222198432149784;
sd7+=sd8;
sd6*=sd7;
sd7=0.39999999999409419;
sd6+=sd7;
sd5*=sd6;
sd6=l5;
sd7=l0;
sd8=l0;
sd9=l0;
sd10=0.14798198605116586;
sd9*=sd10;
sd10=0.1818357216161805;
sd9+=sd10;
sd8*=sd9;
sd9=0.28571428743662391;
sd8+=sd9;
sd7*=sd8;
sd8=0.66666666666667351;
sd7+=sd8;
sd6*=sd7;
sd5+=sd6;
sd4+=sd5;
sd3*=sd4;
sd2+=sd3;
sd3=l6;
sd2-=sd3;
sd1+=sd2;
sd0+=sd1;
goto L0;
L3:;
sd0=l0;
sd1=l0;
sd0-=sd1;
sd1=0;
sd0/=sd1;
l0=sd0;
L2:;
sd0=l0;
goto L0;
L1:;
sd0=-1;
sd1=l0;
sd2=l0;
sd1*=sd2;
sd0/=sd1;
L0:;
return sd0;
}

void f843(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=120U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si1=i32_load(i->m0,(U64)si1);
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=0U;
i32_store(i->m0,(U64)si0,si1);
L1:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=84U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
si1=i32_load8_u(i->m0,(U64)si1);
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si2=i32_load(i->m0,(U64)si2);
f834(i,si0,si1,si2);
L2:;
L0:;
}

U32 f1330(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=144U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L1;
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
goto L7;
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
goto L1;
}
L12:;
si0=l0;
si1=1U;
si0+=si1;
si1=l1;
si0=f684(i,si0,si1);
l3=si0;
goto L1;
L11:;
si0=l2;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si2=8U;
si1+=si2;
f392(i,si0,si1);
si0=l1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
si2=l2;
si2=i32_load(i->m0,(U64)si2+4U);
si0=f449(i,si0,si1,si2);
l3=si0;
goto L1;
L10:;
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
si0=f690(i,si0,si1);
l3=si0;
goto L1;
L9:;
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
si0=f716(i,si0,si1);
l3=si0;
goto L1;
L8:;
si0=l0;
si1=4U;
si0+=si1;
si1=l1;
si0=f1339(i,si0,si1);
l3=si0;
goto L1;
L7:;
si0=l0;
si1=l1;
si0=f1340(i,si0,si1);
l3=si0;
goto L1;
L6:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si1=i32_load(i->m0,(U64)si1+20U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+24U);
si0=f1341(i,si0,si1,si2);
l3=si0;
goto L1;
L5:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1160808U;
si2=11U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l3=si0;
goto L1;
L4:;
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
l3=si1;
si2=l2;
si2=i32_load(i->m0,(U64)si2+84U);
si2=i32_load(i->m0,(U64)si2+12U);
l0=si2;
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l2;
si1=48U;
si0+=si1;
si1=l3;
si2=l0;
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l3;
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
si0=l3;
si1=l1;
si0=f246(i,si0,si1);
l3=si0;
goto L1;
L3:;
si0=l2;
si1=112U;
si0+=si1;
f1342(i,si0);
si0=l1;
si1=l0;
si2=l2;
si3=112U;
si2+=si3;
si0=f1343(i,si0,si1,si2);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+112U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+116U);
f1344(i,si0,si1);
goto L1;
L2:;
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
si2=l0;
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L15;
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
goto L15;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l2;
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
si1=133U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=112U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+116U,si1);
si0=l2;
si1=1160820U;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l2;
si1=l3;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+96U,si1);
si0=l2;
si1=133U;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=112U;
si2+=si3;
si0=f682(i,si0,si1,si2);
l3=si0;
goto L1;
L15:;
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=l0;
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L13;
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
goto L13;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
si1=2147483647U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l2;
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
si1=134U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=112U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+116U,si1);
si0=l2;
si1=1160836U;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l2;
si1=134U;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l3;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+108U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l2;
si1=l2;
si2=108U;
si1+=si2;
i32_store(i->m0,(U64)si0+96U,si1);
si0=l2;
si1=l2;
si2=104U;
si1+=si2;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=112U;
si2+=si3;
si0=f682(i,si0,si1,si2);
l3=si0;
goto L1;
L16:;
si0=l2;
si1=124U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+116U,si1);
si0=l2;
si1=1160836U;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l2;
si1=134U;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+108U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l2;
si1=l2;
si2=108U;
si1+=si2;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=112U;
si2+=si3;
si0=f682(i,si0,si1,si2);
l3=si0;
goto L1;
L14:;
si0=l2;
si1=124U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+116U,si1);
si0=l2;
si1=1160820U;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l2;
si1=133U;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=112U;
si2+=si3;
si0=f682(i,si0,si1,si2);
l3=si0;
goto L1;
L13:;
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
si1=144U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 f676(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj0;
si0=l0;
sj0=i64_load16_u(i->m0,(U64)si0);
si1=1U;
si2=l1;
si0=f642(i,sj0,si1,si2);
L0:;
return si0;
}

void f2888(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
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
f1737(i,si0,si1,si2);
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
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si0=f1738(i,si0);
l4=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l7=si0;
si0=0U;
l3=si0;
si0=l5;
si1=20U;
si0+=si1;
si1=8U;
si0+=si1;
l8=si0;
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
si1=1123497U;
si2=1U;
f1375(i,si0,si1,si2);
si0=l7;
si0=!(si0);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l9=si0;
si0=l7;
si1=-1U;
si0+=si1;
l10=si0;
L5:;
{
si0=l5;
si1=1147924U;
si2=8U;
si3=l2;
si4=l9;
si1=f1941(i,si1,si2,si3,si4);
l11=si1;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l11;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l4;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l11;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l11=si0;
goto L6;
L7:;
si0=l5;
si1=l11;
si2=8U;
si1+=si2;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+4U);
l11=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
L6:;
si0=l5;
si1=20U;
si0+=si1;
si1=l4;
si2=l11;
f1375(i,si0,si1,si2);
si0=l5;
si1=32U;
si0+=si1;
f1035(i,si0);
si0=l10;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l5;
si1=20U;
si0+=si1;
si1=1123865U;
si2=2U;
f1375(i,si0,si1,si2);
L8:;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l7;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=l5;
si1=20U;
si0+=si1;
si1=1123498U;
si2=1U;
f1375(i,si0,si1,si2);
si0=l5;
si1=32U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l8;
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
f1704(i,si0,si1);
si0=l5;
si1=48U;
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
si0=1174076U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f1546(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
F32 l6=0;
U32 si0,si1,si2,si3,si4;
F32 sf0,sf1,sf2;
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
sf1=l6;
si2=l4;
sf2=f32_load(i->m0,(U64)si2+4U);
sf1+=sf2;
f32_store(i->m0,(U64)si0+4U,sf1);
si0=l0;
si1=5U;
i32_store(i->m0,(U64)si0,si1);
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

void f1857(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U64 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
sj0=(U64)(si0);
sj1=20ULL;
sj0*=sj1;
l3=sj0;
si0=(U32)(sj0);
l1=si0;
sj0=l3;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L2;
}
si0=l1;
si1=2147483645U;
si0=si0 < si1;
if(si0){
goto L1;
}
L2:;
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178224U;
si1=43U;
si2=l2;
si3=8U;
si2+=si3;
si3=1119084U;
si4=1122816U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l0;
f87(i,si0);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f682(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l2;
si0=f623(i,si0,si1,si2);
L0:;
return si0;
}

void f1488(glicolwasmInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
f1350(i,si0);
L1:;
L0:;
}

void f91(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+144U);
l2=si0;
si1=3U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
f1231(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
f1232(i,si0,si1);
goto L1;
L2:;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
f1232(i,si0,si1);
si0=l3;
si1=l2;
si2=48U;
si1*=si2;
f264(i,si0,si1);
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f876(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=51U;
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
si2=1114802U;
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
si1=51U;
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
si1=51U;
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

void f1641(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=48U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
si1=255U;
si0&=si1;
si1=12U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l2;
si1=16U;
si0+=si1;
l1=si0;
si0=l2;
si1=8U;
si0+=si1;
l5=si0;
si0=l2;
si1=l4;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l5;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l1;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l3;
si1=1U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l3;
si1=36U;
si0+=si1;
f986(i,si0);
si0=0U;
l2=si0;
goto L4;
L6:;
si0=l1;
si1=l2;
si0=f1667(i,si0,si1);
l2=si0;
if(si0){
goto L8;
}
si0=0U;
l2=si0;
goto L7;
L8:;
si0=l0;
si1=l2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=1U;
l2=si0;
L7:;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
goto L2;
L5:;
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
f1172(i,si0,si1);
si0=l3;
sj0=i64_load(i->m0,(U64)si0+16U);
sj1=-8202046714581771301ULL;
sj0^=sj1;
si1=l3;
si2=16U;
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
goto L3;
}
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l5;
i32_store(i->m0,(U64)si0,si1);
si0=1U;
l2=si0;
L4:;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L2:;
si0=l3;
si1=48U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l3;
sj1=1ULL;
f988(i,si0,sj1);
f99(i);
UNREACHABLE;
L0:;
}

void f793(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si2=-1U;
si1+=si2;
l1=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L1;
}
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f12(i,si0,si1);
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si2=-1U;
si1+=si2;
l1=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
if(si0){
goto L1;
}
si0=l0;
f87(i,si0);
L1:;
L0:;
}

U32 f1721(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=2U;
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

U32 f1329(glicolwasmInstance*i,U32 l0) {
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
si0=f1216(i,si0);
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

void f1876(glicolwasmInstance*i,U32 l0,U64 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l2;
sj1=l1;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=1U;
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
l6=si1;
si2=3U;
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
si0=l2;
si1=16U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
l8=sj1;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1);
l1=sj1;
i64_store(i->m0,(U64)si0+16U,sj1);
sj0=l1;
sj1=255ULL;
sj0&=sj1;
l9=sj0;
sj0=l8;
si0=(U32)(sj0);
l6=si0;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
L4:;
{
si0=l7;
si1=l6;
si0=si0 == si1;
if(si0){
goto L6;
}
sj0=l9;
sj1=13ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=1U;
l7=si0;
L6:;
si0=l2;
si1=l7;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=16U;
si0+=si1;
f1877(i,si0);
goto L1;
L5:;
si0=l0;
sj1=l1;
f1281(i,si0,sj1);
si0=1U;
l6=si0;
goto L4;
}
L3:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+8U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l2;
si1=13U;
i32_store8(i->m0,(U64)si0+16U,si1);
goto L8;
L9:;
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1);
l1=sj1;
i64_store(i->m0,(U64)si0+16U,sj1);
sj0=l1;
sj1=255ULL;
sj0&=sj1;
sj1=13ULL;
si0=sj0 != sj1;
if(si0){
goto L7;
}
L8:;
si0=l2;
si1=16U;
si0+=si1;
f1001(i,si0);
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
f1877(i,si0);
goto L1;
L7:;
si0=l7;
sj1=l1;
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
goto L2;
}
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1784(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si0=f1785(i,si0,si1);
L0:;
return si0;
}

U32 f674(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=1068016U;
si2=l1;
si0=f623(i,si0,si1,si2);
L0:;
return si0;
}

void f332(glicolwasmInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=l0;
f288(i,si0);
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f12(i,si0,si1);
L0:;
}

U32 f613(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
si0=0U;
l2=si0;
si0=-65587U;
si1=l0;
si2=16U;
si3=l0;
si4=16U;
si3=si3 > si4;
si1=si3?si1:si2;
l0=si1;
si0-=si1;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si2=l1;
si3=11U;
si2+=si3;
si3=-8U;
si2&=si3;
si3=l1;
si4=11U;
si3=si3 < si4;
si1=si3?si1:si2;
l3=si1;
si0+=si1;
si1=12U;
si0+=si1;
si0=f614(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=-8U;
si0+=si1;
l2=si0;
si0=l0;
si1=-1U;
si0+=si1;
l4=si0;
si1=l1;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
l0=si0;
goto L2;
L3:;
si0=l1;
si1=-4U;
si0+=si1;
l5=si0;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si1=-8U;
si0&=si1;
si1=l4;
si2=l1;
si1+=si2;
si2=0U;
si3=l0;
si2-=si3;
si1&=si2;
si2=-8U;
si1+=si2;
l1=si1;
si2=0U;
si3=l0;
si4=l1;
si5=l2;
si4-=si5;
si5=16U;
si4=si4 > si5;
si2=si4?si2:si3;
si1+=si2;
l0=si1;
si2=l2;
si1-=si2;
l1=si1;
si0-=si1;
l4=si0;
si0=l6;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=l4;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l1;
si2=l5;
si2=i32_load(i->m0,(U64)si2);
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
f617(i,si0,si1);
goto L2;
L4:;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
si2=l1;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L2:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=-8U;
si0&=si1;
l2=si0;
si1=l3;
si2=16U;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l0;
si1=l3;
si2=l1;
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
si0+=si1;
l1=si0;
si1=l2;
si2=l3;
si1-=si2;
l3=si1;
si2=3U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
f617(i,si0,si1);
L5:;
si0=l0;
si1=8U;
si0+=si1;
l2=si0;
L1:;
si0=l2;
L0:;
return si0;
}

void f1075(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L4;
case 3:
goto L7;
case 4:
goto L6;
default:
goto L10;
}
L10:;
si0=l1;
si1=-85U;
si0+=si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L3;
case 2:
goto L2;
case 3:
goto L1;
default:
goto L4;
}
L9:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
si1=4U;
si0+=si1;
f266(i,si0);
si0=l0;
f352(i,si0);
goto L0;
L8:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
f1094(i,si0);
goto L0;
L7:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
f1094(i,si0);
goto L0;
L6:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
f1094(i,si0);
goto L0;
L5:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
f1095(i,si0);
L4:;
goto L0;
L3:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
si0=l0;
f87(i,si0);
goto L0;
L2:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
f1094(i,si0);
goto L0;
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
f1094(i,si0);
L0:;
}

void f295(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si1=16U;
si0+=si1;
f1032(i,si0);
si0=l0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
l1=si1;
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
f87(i,si0);
L1:;
L0:;
}

void f1660(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
l3=si1;
si2=l0;
si2=i32_load(i->m0,(U64)si2);
si3=l0;
si3=i32_load(i->m0,(U64)si3+4U);
si4=1116300U;
f1661(i,si0,si1,si2,si3,si4);
si0=l2;
si1=l1;
si2=l2;
si2=i32_load(i->m0,(U64)si2+8U);
si3=l2;
si3=i32_load(i->m0,(U64)si3+12U);
f1181(i,si0,si1,si2,si3);
si0=l0;
si1=l3;
si2=l2;
si2=i32_load(i->m0,(U64)si2+4U);
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2949(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2;
U64 sj0,sj1;
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
l6=si0;
sj0=i64_load(i->m0,(U64)si0);
l7=sj0;
si0=l6;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
sj1=l7;
i64_store(i->m0,(U64)si0+72U,sj1);
si0=l5;
si1=72U;
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
i64_store(i->m0,(U64)si0+72U,sj1);
si0=l5;
si1=72U;
si0+=si1;
si0=f2594(i,si0);
l8=si0;
si0=l5;
si1=72U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
f1720(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+76U);
l9=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+72U);
l10=si0;
si1=l9;
si0=f1721(i,si0,si1);
l4=si0;
si0=l5;
si1=l8;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l6;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=0U;
si1=l6;
si0-=si1;
l11=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si1=8U;
si0+=si1;
l12=si0;
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
goto L7;
}
si0=l8;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l13=si0;
goto L6;
L7:;
si0=l5;
si1=32U;
si0+=si1;
si1=l12;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+36U);
l13=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+32U);
l3=si0;
L6:;
si0=l3;
si1=l3;
si2=l13;
si1+=si2;
si0=f1252(i,si0,si1);
l3=si0;
si1=l11;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l5;
si1=l3;
si2=l6;
si1+=si2;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l12;
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
l6=si0;
goto L8;
L9:;
si0=l5;
si1=24U;
si0+=si1;
si1=l12;
f1004(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+28U);
l6=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+24U);
l3=si0;
L8:;
si0=l5;
si1=68U;
si0+=si1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(i->m0,(U64)si0+61U,sj1);
si0=l5;
si1=1U;
i32_store8(i->m0,(U64)si0+60U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+80U,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l3;
si2=l6;
si1+=si2;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=44U;
si1+=si2;
i32_store(i->m0,(U64)si0+84U,si1);
L11:;
{
si0=l5;
si1=16U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
f2049(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+20U);
l3=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+84U);
si0=i32_load(i->m0,(U64)si0);
si1=l5;
si1=i32_load(i->m0,(U64)si1+16U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+88U);
si0=i32_load(i->m0,(U64)si0);
l3=si0;
L12:;
si0=l5;
si1=60U;
si0+=si1;
si1=l3;
f1637(i,si0,si1);
goto L11;
}
L10:;
si0=l5;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=60U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+60U);
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=48U;
si0+=si1;
si0=f81(i,si0);
l3=si0;
si0=l4;
f1035(i,si0);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l4;
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
goto L14;
}
si0=l6;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
goto L13;
L14:;
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
l3=si0;
L13:;
si0=l5;
si1=68U;
si0+=si1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
sj1=0ULL;
i64_store(i->m0,(U64)si0+61U,sj1);
si0=l5;
si1=1U;
i32_store8(i->m0,(U64)si0+60U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+80U,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l3;
si2=l6;
si1+=si2;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l5;
si1=l5;
si2=44U;
si1+=si2;
i32_store(i->m0,(U64)si0+84U,si1);
L16:;
{
si0=l5;
si1=l5;
si2=72U;
si1+=si2;
f2049(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+84U);
si0=i32_load(i->m0,(U64)si0);
si1=l5;
si1=i32_load(i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+88U);
si0=i32_load(i->m0,(U64)si0);
l3=si0;
L17:;
si0=l5;
si1=60U;
si0+=si1;
si1=l3;
f1637(i,si0,si1);
goto L16;
}
L15:;
si0=l5;
si1=48U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=60U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+60U);
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=48U;
si0+=si1;
si0=f81(i,si0);
l3=si0;
si0=l4;
f1035(i,si0);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
L4:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l10;
si1=l9;
f1704(i,si0,si1);
si0=l5;
si1=96U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=2U;
si1=2U;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1U;
si1=l4;
si2=1174576U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1175048U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f1401(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si1=l0;
f1466(i,si0,si1);
L0:;
}

void f2626(glicolwasmInstance*i,U32 l0) {
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
si1=1134660U;
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

U32 f723(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l2;
f724(i,si0,si1,si2);
si0=0U;
L0:;
return si0;
}

U32 f1252(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l1;
si1=l0;
si0-=si1;
l2=si0;
si1=16U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si0=f645(i,si0,si1);
goto L0;
L1:;
si0=l1;
si1=l0;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
goto L0;
L2:;
si0=l2;
si1=3U;
si0&=si1;
l3=si0;
si0=l2;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=0U;
l4=si0;
si0=0U;
l5=si0;
goto L3;
L4:;
si0=0U;
l4=si0;
si0=l0;
l1=si0;
si0=l2;
si1=-4U;
si0&=si1;
l5=si0;
l2=si0;
L5:;
{
si0=l4;
si1=l1;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l1;
si2=2U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l1;
si2=3U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l4=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
if(si0){
goto L5;
}
}
L3:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=l5;
si0+=si1;
l1=si0;
L7:;
{
si0=l4;
si1=l1;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l4=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l4;
L0:;
return si0;
}

U32 f2145(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
if(si0){
goto L2;
}
si0=1180264U;
l3=si0;
si0=0U;
l4=si0;
goto L1;
L2:;
si0=l2;
si0=f1818(i,si0);
l3=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
L1:;
si0=l4;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l0;
si1=8U;
si0+=si1;
l6=si0;
L3:;
{
si0=l5;
si1=l1;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=1180264U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
L5:;
si0=l3;
goto L0;
L4:;
si0=l6;
si1=l1;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L6;
}
UNREACHABLE;
L6:;
si0=l3;
si1=l1;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L3;
}
L0:;
return si0;
}

U32 f2208(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
if(si0){
goto L2;
}
si0=1180264U;
l3=si0;
si0=0U;
l4=si0;
goto L1;
L2:;
si0=l2;
si0=f1818(i,si0);
l3=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
L1:;
si0=l4;
si1=2U;
si0<<=(si1&31);
l5=si0;
si0=l0;
si1=8U;
si0+=si1;
l6=si0;
L3:;
{
si0=l5;
si1=l1;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=1180264U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
L5:;
si0=l3;
goto L0;
L4:;
si0=l6;
si1=l1;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l4=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L6;
}
UNREACHABLE;
L6:;
si0=l3;
si1=l1;
si0+=si1;
si1=8U;
si0+=si1;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L3;
}
L0:;
return si0;
}

U32 f2316(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
F64 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2,sj3;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
sd0=f64_load(i->m0,(U64)si0);
l3=sd0;
sd0=-(sd0);
sd1=l3;
sd2=l3;
sj2=i64_reinterpret_f64(sd2);
sj3=0ULL;
si2=(U64)((I64)sj2<(I64)sj3);
sd0=si2?sd0:sd1;
l3=sd0;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L4;
}
sd0=l3;
sd1=9999999827968;
si0=sd0 > sd1;
if(si0){
goto L3;
}
sd0=l3;
sd1=9.9999998245167004e-14;
si0=sd0 < sd1;
if(si0){
goto L3;
}
si0=1U;
l4=si0;
si0=l0;
si1=l1;
si0=f246(i,si0,si1);
if(si0){
goto L1;
}
si0=0U;
l0=si0;
sd0=l3;
sd1=1;
sd0=f3111(i,sd0,sd1);
sd1=0;
si0=sd0 != sd1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1163493U;
si2=2U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L4:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1163495U;
si2=3U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l0=si0;
goto L2;
L3:;
si0=l2;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1178640U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=213U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
si2=24U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si0=f682(i,si0,si1,si2);
l0=si0;
L2:;
si0=l0;
l4=si0;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

void f2826(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
F32 l7=0;
F32 l8=0;
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
sf0=f32_reinterpret_i32(0x7FC00000);
l7=sf0;
si0=l5;
si1=8U;
si0+=si1;
sf0=f2376(i,si0);
l8=sf0;
sf1=1;
si0=sf0 < sf1;
if(si0){
goto L2;
}
sf0=l8;
sf1=-1;
sf0+=sf1;
sf0=sqrtf(sf0);
sf1=l8;
sf2=1;
sf1+=sf2;
sf1=sqrtf(sf1);
sf0*=sf1;
sf1=l8;
sf0+=sf1;
sf0=f3058(i,sf0);
l7=sf0;
L2:;
si0=l0;
sf1=l7;
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

void f790(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=0U;
l5=si0;
si0=l4;
si1=l1;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
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
goto L4;
}
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+24U,si1);
goto L3;
L4:;
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
L3:;
si0=l2;
si1=8U;
si0+=si1;
si1=l5;
si2=l4;
si3=l2;
si4=20U;
si3+=si4;
f434(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l5=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
goto L2;
L5:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+4U,si1);
si0=-2147483647U;
l5=si0;
L2:;
si0=l5;
si1=l1;
f432(i,si0,si1);
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2286(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
l1=si1;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1866(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
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
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si1=3U;
si2=l4;
si3=3U;
si2=si2 > si3;
l5=si2;
si0=si2?si0:si1;
l6=si0;
si1=l0;
si2=8U;
si1+=si2;
l7=si1;
si1=i32_load(i->m0,(U64)si1);
si2=l4;
si3=l5;
si1=si3?si1:si2;
l5=si1;
si0-=si1;
si1=l2;
si2=l1;
si1-=si2;
si2=3U;
si1>>=(si2&31);
l8=si1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=-2147483647U;
l8=si0;
goto L1;
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=l5;
si2=l8;
si1+=si2;
l8=si1;
si2=l5;
si1=si1 >= si2;
si2=l8;
f1447(i,si0,si1,si2);
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
l5=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
if(si0){
goto L3;
}
si0=0U;
l8=si0;
goto L1;
L3:;
si0=l3;
si1=l0;
si2=l5;
f1880(i,si0,si1,si2);
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si1=3U;
si2=l4;
si3=3U;
si2=si2 > si3;
si0=si2?si0:si1;
l6=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
L1:;
si0=l8;
si1=l5;
f532(i,si0,si1);
si0=l6;
si1=l0;
si2=l4;
si3=3U;
si2=si2 > si3;
l9=si2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l4=si1;
si2=l6;
si3=l4;
si2=si2 > si3;
si0=si2?si0:si1;
l5=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=4U;
si1+=si2;
l8=si1;
si2=l9;
si0=si2?si0:si1;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l7;
si1=l0;
si2=l9;
si0=si2?si0:si1;
l9=si0;
L5:;
{
si0=l5;
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l9;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
L7:;
{
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l6=si1;
si2=3U;
si1=si1 > si2;
l4=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si1=l6;
si2=3U;
si3=l4;
si1=si3?si1:si2;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l7;
si1=l0;
si2=l4;
si0=si2?si0:si1;
l6=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l8;
si2=l4;
si0=si2?si0:si1;
l4=si0;
goto L8;
L9:;
si0=l0;
f1881(i,si0);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=l7;
l6=si0;
L8:;
si0=l4;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=l6;
si1=i32_load(i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
goto L7;
}
L6:;
si0=l1;
si1=l2;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l6;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
goto L5;
L10:;
}
si0=l9;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
L4:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2645(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3;
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
l4=si1;
si1=i32_load8_u(i->m0,(U64)si1);
si2=l4;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
f2640(i,si0,si1,si2);
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
si0=f2641(i,si0,si1);
si0=l0;
sj1=1ULL;
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
si2=1172220U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1172220U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f1478(glicolwasmInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=136U;
si1=8U;
si0=f1024(i,si0,si1);
si1=l0;
si2=136U;
si0=f3065(i,si0,si1,si2);
L0:;
return si0;
}

void f1889(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f1035(i,si0);
goto L1;
}
L0:;
}

void f31(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f806(i,si0,si1,si2,si3);
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

U32 f2270(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l0;
f1616(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
if(si0){
goto L2;
}
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+4U);
l0=si0;
si0=l2;
si1=l1;
f1616(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
si1=l1;
si0-=si1;
si1=255U;
si0&=si1;
si1=255U;
si0=si0 == si1;
goto L0;
L2:;
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178224U;
si1=43U;
si2=l2;
si3=8U;
si2+=si3;
si3=1119036U;
si4=1168716U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1178224U;
si1=43U;
si2=l2;
si3=8U;
si2+=si3;
si3=1119036U;
si4=1168732U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
return si0;
}

U32 f142(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L1;
}
si0=1049104U;
si1=57U;
si2=1053888U;
f16(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(i->m0,(U64)si1+12U);
si2=l1;
si1+=si2;
si2=l2;
si1=REM_U(si1,si2);
si2=2U;
si1<<=(si2&31);
si0+=si1;
L0:;
return si0;
}

U32 f102(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
U64 sj1;
si0=28U;
si1=4U;
si0=f1024(i,si0,si1);
l1=si0;
sj1=4294967297ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=l0;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=16U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=24U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
L0:;
return si0;
}

void f1251(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=1116420U;
si1=19U;
si2=1123076U;
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
si0=f3076(i,si0,si1,si2);
L0:;
}

void f1045(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=12U;
si0+=si1;
f1046(i,si0);
si0=l0;
f1035(i,si0);
si0=l0;
si1=112U;
si0+=si1;
f1047(i,si0);
si0=l0;
si1=116U;
si0+=si1;
f1048(i,si0);
L0:;
}

void f1952(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0+20U);
f109(i,si0);
si0=l0;
f2073(i,si0);
si0=l0;
si1=48U;
si0+=si1;
f356(i,si0);
si0=l0;
si1=104U;
si0+=si1;
f2074(i,si0);
L0:;
}

void f1085(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f1087(i,si0);
si0=l0;
si1=20U;
si0+=si1;
l0=si0;
goto L2;
}
L1:;
L0:;
}

