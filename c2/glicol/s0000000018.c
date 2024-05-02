#include "w2c2_base.h"

#include "glicol.h"

U32 f1403(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
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
f1171(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l2;
si1=0U;
si2=l0;
si0=si2?si0:si1;
L0:;
return si0;
}

U32 f514(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=0U;
l2=si0;
si0=l0;
si1=255U;
si0&=si1;
l3=si0;
L2:;
{
si0=l2;
l0=si0;
si1=6U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=1U;
si0+=si1;
l2=si0;
si0=l1;
si1=l0;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si1=6U;
si0=si0 != si1;
L0:;
return si0;
}

void f1375(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=20U;
si0+=si1;
si1=l1;
f3041(i,si0,si1);
si0=l4;
si1=20U;
si0+=si1;
si1=8U;
si0+=si1;
l1=si0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si1=i32_load(i->m0,(U64)si1+20U);
si2=l4;
si2=i32_load(i->m0,(U64)si2+24U);
si3=l3;
si4=1178632U;
f3038(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l4;
si1=i32_load(i->m0,(U64)si1+12U);
si2=l2;
si3=l3;
si4=1178648U;
f1383(i,si0,si1,si2,si3,si4);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+20U);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2614(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
sj1=0ULL;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=l2;
si2=0U;
si3=l2;
si4=0U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l5=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l4;
si2=4U;
si1+=si2;
si0=f1638(i,si0,si1);
l2=si0;
if(si0){
goto L2;
}
si0=l4;
si1=4U;
si0+=si1;
si1=8U;
si0+=si1;
l2=si0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l4;
si1=4U;
si0+=si1;
si1=l5;
si2=l3;
f2294(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+4U);
i64_store(i->m0,(U64)si0,sj1);
goto L1;
L2:;
si0=l0;
si1=-2147483648U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1544(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f1650(i,si0,si1);
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
f1611(i,si0,si1);
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
si0=1178304U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119116U;
si4=1167812U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1U;
si1=1U;
si2=1167812U;
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
si0=1178304U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119116U;
si4=1167812U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1167812U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1421(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si0=f1386(i,si0,si1);
L0:;
return si0;
}

void f1097(glicolwasmInstance*i,U32 l0) {
U32 si0;
si0=l0;
f266(i,si0);
si0=l0;
f359(i,si0);
L0:;
}

void f2466(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
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
l3=si2;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l3;
si3=i32_load(i->m0,(U64)si3+8U);
si4=l5;
si5=8U;
si4+=si5;
f2324(i,si0,si1,si2,si3,si4);
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
si0=1169432U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1168896U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f8(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=-2147483648U;
si0^=si1;
l1=si0;
si1=4U;
si2=l1;
si3=17U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
case 2:
goto L3;
case 3:
goto L6;
case 4:
goto L5;
case 5:
goto L4;
case 6:
goto L2;
case 7:
goto L3;
case 8:
goto L3;
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
goto L1;
default:
goto L3;
}
L8:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f12(i,si0,si1);
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
f119(i,si0);
si0=l0;
si1=12U;
si0+=si1;
f120(i,si0);
goto L0;
L5:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f19(i,si0,si1);
goto L0;
L4:;
si0=l0;
si1=4U;
si0+=si1;
f290(i,si0);
L3:;
goto L0;
L2:;
si0=l0;
si1=4U;
si0+=si1;
f134(i,si0);
goto L0;
L1:;
si0=l0;
si1=4U;
si0+=si1;
f33(i,si0);
L0:;
}

U32 f1652(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f1653(i,si0,si1);
si1=1U;
si0^=si1;
L0:;
return si0;
}

void f2837(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
sf1=f3103(i,sf1);
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
si2=1173588U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f678(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+5U);
if(si0){
goto L1;
}
si0=l1;
si1=255U;
si0&=si1;
si1=0U;
si0=si0 != si1;
goto L0;
L1:;
si0=1U;
l2=si0;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=i32_load8_u(i->m0,(U64)si0+28U);
si1=4U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+20U);
si2=1068148U;
si3=2U;
si4=l1;
si4=i32_load(i->m0,(U64)si4+24U);
si4=i32_load(i->m0,(U64)si4+12U);
si1=TF(i->t0,si4,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si1,si2,si3);
l1=si1;
i32_store8(i->m0,(U64)si0+4U,si1);
si0=l1;
goto L0;
L3:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1123557U;
si2=1U;
si3=l1;
si3=i32_load(i->m0,(U64)si3+24U);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l2=si0;
L2:;
si0=l0;
si1=l2;
i32_store8(i->m0,(U64)si0+4U,si1);
si0=l2;
L0:;
return si0;
}

void f2384(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si2=1168360U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1486(glicolwasmInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=f1125(i,si0);
L0:;
return si0;
}

void f2554(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6;
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
si1=4U;
si0+=si1;
si1=l5;
si2=24U;
si1+=si2;
f2432(i,si0,si1);
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
si0=f2350(i,si0);
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
l7=sj1;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l5;
si1=16U;
si0+=si1;
si0=f1745(i,si0);
l3=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l3;
si1=i32_load(i->m0,(U64)si1+8U);
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
l6=si3;
si4=l3;
si5=l6;
si6=l3;
si5=(U32)((I32)si5>(I32)si6);
si3=si5?si3:si4;
si4=l3;
si3-=si4;
si4=1U;
si3+=si4;
si4=l4;
f2552(i,si0,si1,si2,si3,si4);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
sj0=l7;
si0=(U32)(sj0);
sj1=l7;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
f1708(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=2U;
si1=2U;
si2=1171380U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1U;
si1=l4;
si2=1171380U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1171468U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f2180(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si0=f396(i,si0,si1,si2,si3);
si1=0U;
si0=si0 != si1;
L0:;
return si0;
}

void f911(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
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
si1=70U;
i32_store8(i->m0,(U64)si0+83U,si1);
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
i32_store(i->m0,(U64)si0+84U,si1);
si0=l2;
si1=l1;
si2=120U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=56U;
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
si0=i32_load(i->m0,(U64)si0+60U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+56U);
if(si0){
goto L8;
}
si0=l2;
si1=112U;
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
i64_store(i->m0,(U64)si0+104U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=48U;
si0+=si1;
si1=l1;
si2=1153848U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+52U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+48U);
if(si0){
goto L9;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
f930(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+44U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+40U);
if(si0){
goto L9;
}
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si2=1153848U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+36U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+32U);
if(si0){
goto L9;
}
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
si2=1123944U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
if(si0){
goto L9;
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
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f904(i,si0,si1);
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+12U);
si2=1179488U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L4;
}
L9:;
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+104U);
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
si2=83U;
si1+=si2;
i32_store(i->m0,(U64)si0+100U,si1);
si0=l2;
si1=l2;
si2=84U;
si1+=si2;
i32_store(i->m0,(U64)si0+96U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=70U;
si2=l3;
si3=l6;
si4=l7;
si5=l5;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=92U;
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
si2=83U;
si1+=si2;
i32_store(i->m0,(U64)si0+100U,si1);
si0=l2;
si1=l2;
si2=84U;
si1+=si2;
i32_store(i->m0,(U64)si0+96U,si1);
si0=l2;
si1=l2;
si2=88U;
si1+=si2;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=70U;
si2=l3;
si3=l6;
si4=l7;
si5=l5;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
L10:;
si0=l8;
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
i32_store(i->m0,(U64)si0+108U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+83U);
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
L12:;
si0=l2;
si1=92U;
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
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2335(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U64 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj4;
si0=i->g0;
si1=208U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=-1U;
si0+=si1;
l7=si0;
si0=l3;
si1=3U;
si0<<=(si1&31);
l3=si0;
si0=l2;
si1=-8U;
si0+=si1;
l8=si0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
si0=l6;
si1=120U;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
si0=l6;
si1=88U;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
sj0=l5;
si0=(U32)(sj0);
l2=si0;
L3:;
{
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=l7;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=4ULL;
sj1|=sj2;
l12=sj1;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l6;
si1=l9;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
si2=l2;
sj2=(U64)(si2);
sj1|=sj2;
l5=sj1;
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l6;
si1=1U;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l6;
si1=l1;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l8;
si1=l3;
si0+=si1;
l9=si0;
si0=l6;
si1=l4;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l13=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l13;
si1=132U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l13;
si2=124U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l13=si1;
si2=l13;
si3=5U;
si2=si2 > si3;
si0=si2?si0:si1;
l13=si0;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
si1=i32_load(i->m0,(U64)si1);
l14=si1;
si2=1U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
si1=120U;
si0+=si1;
si1=l4;
si2=l1;
si3=l9;
sj4=l5;
f2310(i,si0,si1,si2,si3,sj4);
goto L7;
L8:;
si0=l13;
si1=l14;
si2=2U;
si1+=si2;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l13;
si1=l14;
si2=3U;
si1+=si2;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l6;
si1=160U;
si0+=si1;
si1=3U;
f1867(i,si0,si1);
si0=l6;
si1=160U;
si0+=si1;
sj1=l5;
f1881(i,si0,sj1);
si0=l6;
si1=120U;
si0+=si1;
si1=l9;
f83(i,si0,si1);
si0=l6;
si1=160U;
si0+=si1;
si1=1U;
si2=l6;
sj2=i64_load(i->m0,(U64)si2+120U);
f1963(i,si0,si1,sj2);
si0=l6;
si1=160U;
si0+=si1;
sj1=l12;
f1881(i,si0,sj1);
si0=l6;
si1=120U;
si0+=si1;
si1=l4;
si2=l1;
si3=0U;
si4=l6;
si5=160U;
si4+=si5;
f1883(i,si0,si1,si2,si3,si4);
goto L4;
L9:;
si0=l6;
si1=160U;
si0+=si1;
si1=2U;
f1867(i,si0,si1);
si0=l6;
si1=160U;
si0+=si1;
sj1=l5;
f1881(i,si0,sj1);
si0=l6;
si1=120U;
si0+=si1;
si1=l9;
f83(i,si0,si1);
si0=l6;
si1=160U;
si0+=si1;
si1=1U;
si2=l6;
sj2=i64_load(i->m0,(U64)si2+120U);
f1963(i,si0,si1,sj2);
si0=l6;
si1=120U;
si0+=si1;
si1=l4;
si2=l1;
si3=0U;
si4=l6;
si5=160U;
si4+=si5;
f1883(i,si0,si1,si2,si3,si4);
L7:;
si0=l6;
si1=40U;
si0+=si1;
f1035(i,si0);
goto L4;
L6:;
si0=l0;
si1=l9;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
si2=l2;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0,sj1);
goto L1;
L5:;
si0=l6;
si1=160U;
si0+=si1;
si1=l6;
si2=48U;
si1+=si2;
f2309(i,si0,si1);
si0=l6;
si1=88U;
si0+=si1;
si1=l4;
si2=l1;
si3=l9;
si4=l6;
sj4=i64_load(i->m0,(U64)si4+160U);
f2310(i,si0,si1,si2,si3,sj4);
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0+88U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l6;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+88U);
l15=sj1;
i64_store(i->m0,(U64)si0+80U,sj1);
sj0=l15;
si0=(U32)(sj0);
l13=si0;
goto L10;
L11:;
si0=l6;
si0=i32_load(i->m0,(U64)si0+92U);
l14=si0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=l14;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l16=si0;
si0=l14;
si1=12U;
si0+=si1;
l17=si0;
si0=i32_load(i->m0,(U64)si0);
l18=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l19=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l13=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l13;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l19;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l19=si0;
goto L14;
L15:;
si0=l6;
si1=32U;
si0+=si1;
si1=l19;
si2=8U;
si1+=si2;
f1007(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+36U);
l19=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+32U);
l13=si0;
L14:;
si0=l18;
si1=l16;
si2=l13;
si3=l19;
si0=f363(i,si0,si1,si2,si3);
if(si0){
goto L12;
}
L13:;
si0=13U;
l13=si0;
si0=l6;
si1=13U;
i32_store8(i->m0,(U64)si0+80U,si1);
si0=l6;
si1=l14;
i32_store(i->m0,(U64)si0+84U,si1);
goto L10;
L12:;
si0=l17;
si0=i32_load(i->m0,(U64)si0);
l13=si0;
si0=l14;
si0=i32_load(i->m0,(U64)si0+8U);
l16=si0;
si0=l6;
si1=160U;
si0+=si1;
si1=2U;
f1867(i,si0,si1);
si0=l6;
si1=120U;
si0+=si1;
si1=l6;
si2=48U;
si1+=si2;
f2309(i,si0,si1);
si0=l6;
si1=160U;
si0+=si1;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+120U);
f1881(i,si0,sj1);
si0=l6;
si1=120U;
si0+=si1;
si1=l9;
f83(i,si0,si1);
si0=l6;
si1=160U;
si0+=si1;
si1=1U;
si2=l6;
sj2=i64_load(i->m0,(U64)si2+120U);
f1963(i,si0,si1,sj2);
si0=l6;
si1=80U;
si0+=si1;
si1=l4;
si2=l1;
si3=0U;
si4=l6;
si5=160U;
si4+=si5;
f1883(i,si0,si1,si2,si3,si4);
si0=l16;
si1=l13;
f58(i,si0,si1);
si0=l14;
si0=i32_load8_u(i->m0,(U64)si0);
si1=7U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l14;
f1367(i,si0);
L16:;
si0=l14;
f87(i,si0);
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0+80U);
l13=si0;
L10:;
si0=l6;
si1=l9;
i32_store(i->m0,(U64)si0+116U,si1);
si0=l6;
sj1=l12;
i64_store(i->m0,(U64)si0+96U,sj1);
si0=l6;
sj1=l5;
i64_store(i->m0,(U64)si0+88U,sj1);
si0=l6;
si1=l6;
si2=60U;
si1+=si2;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l6;
si1=l6;
si2=64U;
si1+=si2;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l6;
si1=l6;
si2=68U;
si1+=si2;
i32_store(i->m0,(U64)si0+108U,si1);
si0=l13;
si1=255U;
si0&=si1;
si1=13U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=l6;
si0=i32_load(i->m0,(U64)si0+84U);
l9=si0;
si0=l6;
si1=120U;
si0+=si1;
si1=24U;
si0+=si1;
si1=l6;
si2=88U;
si1+=si2;
si2=24U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
si1=120U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l6;
si2=88U;
si1+=si2;
si2=16U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l10;
si1=l11;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+88U);
i64_store(i->m0,(U64)si0+120U,sj1);
si0=l9;
si0=i32_load8_u(i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l9;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l14=si0;
si0=l9;
si1=12U;
si0+=si1;
l19=si0;
si0=i32_load(i->m0,(U64)si0);
l16=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+136U);
l17=si0;
si0=i32_load(i->m0,(U64)si0);
si0=i32_load(i->m0,(U64)si0);
l18=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l13=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l13;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l18;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l18=si0;
goto L22;
L23:;
si0=l6;
si1=24U;
si0+=si1;
si1=l18;
si2=8U;
si1+=si2;
f1007(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+28U);
l18=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+24U);
l13=si0;
L22:;
si0=l16;
si1=l14;
si2=l13;
si3=l18;
si0=f363(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L21;
}
si0=l19;
si0=i32_load(i->m0,(U64)si0);
l13=si0;
si0=l9;
si0=i32_load(i->m0,(U64)si0+8U);
l14=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+148U);
l16=si0;
si0=!(si0);
if(si0){
goto L25;
}
si0=l6;
si1=160U;
si0+=si1;
si1=3U;
f1867(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+140U);
l18=si0;
si0=i32_load(i->m0,(U64)si0);
if(si0){
goto L27;
}
si0=l6;
si1=152U;
si0+=si1;
si1=l16;
f83(i,si0,si1);
si0=l6;
si1=160U;
si0+=si1;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+152U);
f1285(i,si0,sj1);
si0=l6;
si1=160U;
si0+=si1;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+120U);
f1881(i,si0,sj1);
si0=l6;
si1=160U;
si0+=si1;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+128U);
f1881(i,si0,sj1);
goto L26;
L27:;
si0=l6;
si1=160U;
si0+=si1;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+120U);
f1881(i,si0,sj1);
si0=l6;
si1=160U;
si0+=si1;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+128U);
f1881(i,si0,sj1);
si0=l18;
si0=i32_load(i->m0,(U64)si0);
l18=si0;
si0=l6;
si1=152U;
si0+=si1;
si1=l16;
f83(i,si0,si1);
si0=l6;
si1=160U;
si0+=si1;
si1=l18;
si2=l6;
sj2=i64_load(i->m0,(U64)si2+152U);
f1963(i,si0,si1,sj2);
L26:;
si0=l6;
si1=72U;
si0+=si1;
si1=l17;
si1=i32_load(i->m0,(U64)si1);
si2=l6;
si2=i32_load(i->m0,(U64)si2+144U);
si2=i32_load(i->m0,(U64)si2);
si3=0U;
si4=l6;
si5=160U;
si4+=si5;
f1883(i,si0,si1,si2,si3,si4);
si0=l14;
si1=l13;
f58(i,si0,si1);
si0=l9;
si0=i32_load8_u(i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L24;
}
goto L19;
L25:;
si0=l6;
si1=160U;
si0+=si1;
si1=2U;
f1867(i,si0,si1);
si0=l6;
si1=160U;
si0+=si1;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+120U);
f1881(i,si0,sj1);
si0=l6;
si1=160U;
si0+=si1;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+128U);
f1881(i,si0,sj1);
si0=l6;
si1=72U;
si0+=si1;
si1=l17;
si1=i32_load(i->m0,(U64)si1);
si2=l6;
si2=i32_load(i->m0,(U64)si2+144U);
si2=i32_load(i->m0,(U64)si2);
si3=0U;
si4=l6;
si5=160U;
si4+=si5;
f1883(i,si0,si1,si2,si3,si4);
si0=l14;
si1=l13;
f58(i,si0,si1);
si0=l9;
si0=i32_load8_u(i->m0,(U64)si0);
si1=7U;
si0=si0 == si1;
if(si0){
goto L19;
}
L24:;
si0=l9;
f1367(i,si0);
goto L19;
L21:;
si0=l6;
si1=13U;
i32_store8(i->m0,(U64)si0+72U,si1);
si0=l6;
si1=l9;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l6;
si1=120U;
si0+=si1;
f1035(i,si0);
si0=l10;
f1035(i,si0);
goto L18;
L20:;
si0=l6;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+80U);
l5=sj1;
i64_store(i->m0,(U64)si0+72U,sj1);
si0=l6;
si1=88U;
si0+=si1;
f1035(i,si0);
si0=l11;
f1035(i,si0);
sj0=l5;
si0=(U32)(sj0);
l9=si0;
goto L17;
L19:;
si0=l9;
f87(i,si0);
L18:;
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0+72U);
l9=si0;
L17:;
si0=l9;
si1=255U;
si0&=si1;
si1=13U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l6;
si1=l6;
sj1=i64_load(i->m0,(U64)si1+72U);
i64_store(i->m0,(U64)si0+120U,sj1);
goto L4;
L28:;
si0=l6;
si0=i32_load(i->m0,(U64)si0+76U);
l16=si0;
si0=l6;
si1=16U;
si0+=si1;
si1=10U;
f999(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+16U);
l18=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+20U);
l13=si0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1166244U);
i64_store(i->m0,(U64)si0,sj1);
si0=l13;
si1=8U;
si0+=si1;
si1=0U;
si1=i32_load16_u(i->m0,(U64)si1+1166252U);
i32_store16(i->m0,(U64)si0,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l6;
si1=i32_load(i->m0,(U64)si1+64U);
l9=si1;
si2=20U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=0U;
si3=l9;
si3=i32_load(i->m0,(U64)si3+16U);
l9=si3;
si1=si3?si1:si2;
l14=si1;
f999(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+8U);
l19=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l9;
si2=1178664U;
si3=l9;
si1=si3?si1:si2;
si2=l14;
si0=f3069(i,si0,si1,si2);
l17=si0;
si0=36U;
si1=4U;
si0=f1027(i,si0,si1);
l9=si0;
si1=l14;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l9;
si1=l17;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l9;
si1=l19;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l9;
si1=10U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l9;
si1=l13;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l9;
si1=l18;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l9;
si1=l16;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l9;
si1=0U;
i32_store(i->m0,(U64)si0+2U,si1);
si0=l9;
si1=9U;
i32_store8(i->m0,(U64)si0,si1);
si0=l6;
si1=l9;
i32_store(i->m0,(U64)si0+124U,si1);
si0=l6;
si1=13U;
i32_store8(i->m0,(U64)si0+120U,si1);
L4:;
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0+120U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L30;
}
si0=l6;
si0=i32_load(i->m0,(U64)si0+124U);
l9=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+120U);
l2=si0;
goto L29;
L30:;
si0=l2;
si1=-256U;
si0&=si1;
si1=13U;
si0|=si1;
l2=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+124U);
l9=si0;
L29:;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l3;
si1=-8U;
si0+=si1;
l3=si0;
si0=l2;
si1=255U;
si0&=si1;
si1=13U;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
sj1=l5;
i64_store(i->m0,(U64)si0,sj1);
L1:;
si0=l4;
f1043(i,si0);
si0=l6;
si1=208U;
si0+=si1;
i->g0=si0;
L0:;
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
si2=1054004U;
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

void f430(glicolwasmInstance*i,U32 l0) {
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
f284(i,si0,si1);
L0:;
}

void f63(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
F32 l3=0;
U32 si0,si1,si2,si3,si4;
F32 sf0,sf1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f64(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
if(si0){
goto L3;
}
si0=0U;
l1=si0;
goto L2;
L3:;
si0=l2;
si1=20U;
si0+=si1;
si1=l1;
si2=l2;
si2=i32_load(i->m0,(U64)si2+12U);
f57(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+20U);
if(si0){
goto L1;
}
si0=l2;
sf0=f32_load(i->m0,(U64)si0+24U);
l3=sf0;
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
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+21U);
i32_store8(i->m0,(U64)si0+31U,si1);
si0=1178304U;
si1=43U;
si2=l2;
si3=31U;
si2+=si3;
si3=1054380U;
si4=1060836U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f3000(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=48U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
f1724(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+52U);
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
si0=i32_load(i->m0,(U64)si0+48U);
l7=si0;
si1=l4;
si0=f1725(i,si0,si1);
l8=si0;
si0=l5;
si1=1127392U;
si2=9U;
si3=l2;
si4=l5;
si5=24U;
si4+=si5;
si1=f1946(i,si1,si2,si3,si4);
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
goto L5;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
goto L4;
L5:;
si0=l5;
si1=16U;
si0+=si1;
si1=l2;
f1007(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+20U);
l9=si0;
L4:;
si0=l9;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si1=36U;
si0+=si1;
si1=l8;
si1=i32_load(i->m0,(U64)si1);
si2=8U;
si1+=si2;
f1372(i,si0,si1);
si0=l2;
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
si1=l2;
f1007(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l9=si0;
L8:;
si0=l5;
si1=36U;
si0+=si1;
si1=l9;
si2=l3;
f1379(i,si0,si1,si2);
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
si0=l8;
f1038(i,si0);
si0=l8;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
f1038(i,si0);
goto L6;
L7:;
si0=l5;
si1=32U;
si0+=si1;
f1038(i,si0);
L6:;
si0=l5;
si1=24U;
si0+=si1;
f1035(i,si0);
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=l4;
f1708(i,si0,si1);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=1U;
si1=l4;
si2=1174656U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1174872U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1174656U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f725(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l2;
f726(i,si0,si1,si2);
si0=0U;
L0:;
return si0;
}

void f2241(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+80U);
l3=si0;
switch(si0){
case 0:
goto L3;
case 1:
goto L5;
default:
goto L6;
}
L6:;
si0=l1;
si1=l3;
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0+80U,si1);
si0=l2;
si1=l1;
f1765(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
goto L4;
L5:;
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0+80U,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f1766(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
L4:;
si0=l1;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l0;
si1=l1;
si2=l3;
si1=f1142(i,si1,si2);
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

U32 f372(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
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
si1=8U;
si0>>=(si1&31);
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=48U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=32U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=22U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=5760U;
si0=si0 == si1;
goto L0;
L5:;
si0=l0;
si1=12288U;
si0=si0 == si1;
goto L0;
L4:;
si0=l0;
si1=255U;
si0&=si1;
si1=1119180U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=1U;
si0&=si1;
goto L0;
L3:;
si0=l0;
si1=255U;
si0&=si1;
si1=1119180U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=2U;
si0&=si1;
si1=1U;
si0>>=(si1&31);
goto L0;
L2:;
si0=8388639U;
si1=l1;
si0>>=(si1&31);
si1=1U;
si0&=si1;
l1=si0;
L1:;
si0=l1;
L0:;
return si0;
}

void f2144(glicolwasmInstance*i,U32 l0,U32 l1) {
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

void f2374(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
F64 l7=0;
U32 si0,si1,si2,si3,si4;
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
sj0=4ULL;
l6=sj0;
si0=l5;
si1=8U;
si0+=si1;
sd0=f2349(i,si0);
l7=sd0;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L4;
}
sd0=l7;
sd1=l7;
si0=sd0 != sd1;
if(si0){
goto L3;
}
sd0=1;
sd1=l7;
sd0=copysign(sd0,sd1);
l7=sd0;
sd1=-2147483648;
si0=sd0 >= sd1;
l4=si0;
sd0=l7;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L6;
}
sd0=l7;
si0=I32_TRUNC_S_F64(sd0);
l3=si0;
goto L5;
L6:;
si0=-2147483648U;
l3=si0;
L5:;
si0=0U;
si1=2147483647U;
si2=l3;
si3=-2147483648U;
si4=l4;
si2=si4?si2:si3;
sd3=l7;
sd4=2147483647;
si3=sd3 > sd4;
si1=si3?si1:si2;
sd2=l7;
sd3=l7;
si2=sd2 != sd3;
si0=si2?si0:si1;
sj0=(U64)(si0);
sj1=32ULL;
sj0<<=(sj1&63);
sj1=4ULL;
sj0|=sj1;
l6=sj0;
L4:;
si0=l0;
sj1=l6;
i64_store(i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=1168329U;
si1=24U;
si0=f2375(i,si0,si1);
l4=si0;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
L2:;
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

void f1242(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=5U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
f1121(i,si0);
si0=l0;
si1=12U;
si0+=si1;
f1050(i,si0);
L1:;
L0:;
}

void f2951(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
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
si1=20U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f1272(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+20U);
l6=si0;
if(si0){
goto L3;
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
si1=28U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f2432(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
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
l8=si0;
goto L5;
L6:;
si0=l5;
si1=8U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
f1007(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l8=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
L5:;
si0=l0;
si1=l2;
si2=l3;
si3=l8;
si4=l5;
si4=i32_load(i->m0,(U64)si4+28U);
l4=si4;
si5=0U;
si6=l4;
si7=0U;
si6=(U32)((I32)si6>(I32)si7);
si4=si6?si4:si5;
l4=si4;
si5=l5;
si5=i32_load(i->m0,(U64)si5+32U);
l6=si5;
si6=l4;
si7=l6;
si8=l4;
si7=(U32)((I32)si7>(I32)si8);
si5=si7?si5:si6;
si6=l4;
si5-=si6;
si6=1U;
si5+=si6;
si1=f2949(i,si1,si2,si3,si4,si5);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=16U;
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
si1=i32_load(i->m0,(U64)si1+24U);
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
si0=1174656U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f1937(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
U32 l17=0;
U32 l18=0;
U64 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8,si9,si10,si11,si12,si13;
U64 sj0,sj1,sj2,sj3,sj7;
F32 sf1,sf2;
si0=i->g0;
si1=144U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l5;
si0=f1962(i,si0);
si0=f988(i,si0);
if(si0){
goto L17;
}
si0=l3;
si1=50U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l8=si0;
si0=l3;
si0=i32_load16_u(i->m0,(U64)si0+48U);
l9=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l10=si0;
si1=36U;
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l3;
si1=28U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l11=si0;
si0=l3;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l12=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+24U);
l13=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+16U);
l14=si0;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+40U);
l15=sj0;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+32U);
l16=sj0;
si0=l7;
si1=56U;
si0+=si1;
si1=l5;
si1=f1962(i,si1);
f1714(i,si0,si1);
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+60U);
l17=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+56U);
l18=si0;
si0=l7;
sj0=i64_load(i->m0,(U64)si0+56U);
l19=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l20=si0;
sj0=l19;
si0=(U32)(sj0);
l21=si0;
si0=l0;
si1=237U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l21;
si1=l21;
si2=8U;
si1+=si2;
si2=l20;
si3=255U;
si2&=si3;
l22=si2;
si3=2U;
si2=si2 == si3;
si0=si2?si0:si1;
l23=si0;
si0=l21;
si1=l22;
si2=2U;
si1=si1 != si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L18;
case 1:
goto L8;
case 2:
goto L8;
case 3:
goto L31;
case 4:
goto L32;
default:
goto L8;
}
L32:;
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-4U;
si0+=si1;
switch(si0){
case 0:
goto L30;
case 1:
goto L29;
default:
goto L8;
}
L31:;
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0);
si1=4U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0);
si1=-70U;
si0+=si1;
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
goto L8;
case 5:
goto L8;
case 6:
goto L8;
case 7:
goto L8;
case 8:
goto L8;
case 9:
goto L33;
default:
goto L8;
}
L37:;
si0=l7;
si1=56U;
si0+=si1;
si1=l23;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l6;
si2=i32_load(i->m0,(U64)si2+4U);
f1660(i,si0,si1,si2);
si0=l7;
si0=i32_load(i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+60U);
si1=l9;
si2=l8;
si0=f1501(i,si0,si1,si2);
l21=si0;
goto L3;
L36:;
si0=l7;
si1=56U;
si0+=si1;
si1=l23;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l6;
si2=i32_load(i->m0,(U64)si2+4U);
f1618(i,si0,si1,si2);
si0=l7;
si0=i32_load(i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L11;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+60U);
si1=l9;
si2=l8;
si0=f1501(i,si0,si1,si2);
l21=si0;
goto L3;
L35:;
si0=l7;
si1=56U;
si0+=si1;
si1=l23;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l6;
si2=i32_load(i->m0,(U64)si2+4U);
f1617(i,si0,si1,si2);
si0=l7;
si0=i32_load(i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L12;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+60U);
si1=l9;
si2=l8;
si0=f1501(i,si0,si1,si2);
l21=si0;
goto L3;
L34:;
si0=l7;
si1=56U;
si0+=si1;
si1=l23;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l6;
si2=i32_load(i->m0,(U64)si2+4U);
f1616(i,si0,si1,si2);
si0=l7;
si0=i32_load(i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L13;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+60U);
si1=l9;
si2=l8;
si0=f1501(i,si0,si1,si2);
l21=si0;
goto L3;
L33:;
si0=l7;
si1=56U;
si0+=si1;
si1=l23;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l6;
si2=i32_load(i->m0,(U64)si2+4U);
f1615(i,si0,si1,si2);
si0=l7;
si0=i32_load(i->m0,(U64)si0+56U);
si0=!(si0);
if(si0){
goto L14;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+60U);
si1=l9;
si2=l8;
si0=f1501(i,si0,si1,si2);
l21=si0;
goto L3;
L30:;
si0=l3;
si0=i32_load(i->m0,(U64)si0);
si1=-70U;
si0+=si1;
switch(si0){
case 0:
goto L28;
case 1:
goto L27;
case 2:
goto L26;
case 3:
goto L25;
case 4:
goto L8;
case 5:
goto L8;
case 6:
goto L8;
case 7:
goto L8;
case 8:
goto L8;
case 9:
goto L24;
default:
goto L8;
}
L29:;
si0=l3;
si0=i32_load(i->m0,(U64)si0);
si1=-70U;
si0+=si1;
switch(si0){
case 0:
goto L23;
case 1:
goto L22;
case 2:
goto L21;
case 3:
goto L20;
case 4:
goto L8;
case 5:
goto L8;
case 6:
goto L8;
case 7:
goto L8;
case 8:
goto L8;
case 9:
goto L19;
default:
goto L8;
}
L28:;
si0=l23;
si1=l23;
sf1=f32_load(i->m0,(U64)si1+4U);
si2=l6;
si2=i32_load(i->m0,(U64)si2+4U);
sf2=(F32)(I32)(si2);
sf1+=sf2;
f32_store(i->m0,(U64)si0+4U,sf1);
goto L5;
L27:;
si0=l23;
si1=l23;
sf1=f32_load(i->m0,(U64)si1+4U);
si2=l6;
si2=i32_load(i->m0,(U64)si2+4U);
sf2=(F32)(I32)(si2);
sf1-=sf2;
f32_store(i->m0,(U64)si0+4U,sf1);
goto L5;
L26:;
si0=l23;
si1=l23;
sf1=f32_load(i->m0,(U64)si1+4U);
si2=l6;
si2=i32_load(i->m0,(U64)si2+4U);
sf2=(F32)(I32)(si2);
sf1*=sf2;
f32_store(i->m0,(U64)si0+4U,sf1);
goto L5;
L25:;
si0=l23;
si1=l23;
sf1=f32_load(i->m0,(U64)si1+4U);
si2=l6;
si2=i32_load(i->m0,(U64)si2+4U);
sf2=(F32)(I32)(si2);
sf1/=sf2;
f32_store(i->m0,(U64)si0+4U,sf1);
goto L5;
L24:;
si0=l23;
si1=l23;
sf1=f32_load(i->m0,(U64)si1+4U);
si2=l6;
si2=i32_load(i->m0,(U64)si2+4U);
sf2=(F32)(I32)(si2);
sf1=f3108(i,sf1,sf2);
f32_store(i->m0,(U64)si0+4U,sf1);
goto L5;
L23:;
si0=l23;
si1=l6;
sf1=f32_load(i->m0,(U64)si1+4U);
si2=l23;
sf2=f32_load(i->m0,(U64)si2+4U);
sf1+=sf2;
f32_store(i->m0,(U64)si0+4U,sf1);
goto L5;
L22:;
si0=l23;
si1=l23;
sf1=f32_load(i->m0,(U64)si1+4U);
si2=l6;
sf2=f32_load(i->m0,(U64)si2+4U);
sf1-=sf2;
f32_store(i->m0,(U64)si0+4U,sf1);
goto L5;
L21:;
si0=l23;
si1=l6;
sf1=f32_load(i->m0,(U64)si1+4U);
si2=l23;
sf2=f32_load(i->m0,(U64)si2+4U);
sf1*=sf2;
f32_store(i->m0,(U64)si0+4U,sf1);
goto L5;
L20:;
si0=l23;
si1=l23;
sf1=f32_load(i->m0,(U64)si1+4U);
si2=l6;
sf2=f32_load(i->m0,(U64)si2+4U);
sf1/=sf2;
f32_store(i->m0,(U64)si0+4U,sf1);
goto L5;
L19:;
si0=l23;
si1=l23;
sf1=f32_load(i->m0,(U64)si1+4U);
si2=l6;
sf2=f32_load(i->m0,(U64)si2+4U);
sf1=f3108(i,sf1,sf2);
f32_store(i->m0,(U64)si0+4U,sf1);
goto L5;
L18:;
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0);
si1=1U;
si0=si0 == si1;
if(si0){
goto L9;
}
goto L8;
L17:;
si0=l7;
si1=16U;
si0+=si1;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1);
si2=l4;
si2=i32_load(i->m0,(U64)si2+8U);
si3=0U;
f1315(i,si0,si1,si2,si3);
si0=l7;
si0=i32_load(i->m0,(U64)si0+20U);
l5=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+16U);
l3=si0;
si0=l7;
si1=8U;
si0+=si1;
si1=l4;
f1329(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si0=l7;
si1=l5;
si2=0U;
si3=l3;
si1=si3?si1:si2;
l5=si1;
f999(i,si0,si1);
si0=l7;
si0=i32_load(i->m0,(U64)si0);
l21=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l3;
si2=1178664U;
si3=l3;
si1=si3?si1:si2;
si2=l5;
si0=f3069(i,si0,si1,si2);
l3=si0;
si0=l7;
si1=72U;
si0+=si1;
si1=l5;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=68U;
si0+=si1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l21;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l7;
si1=l4;
i32_store(i->m0,(U64)si0+58U,si1);
si0=l7;
si1=21U;
i32_store8(i->m0,(U64)si0+56U,si1);
si0=l7;
si1=56U;
si0+=si1;
si0=f97(i,si0);
l21=si0;
goto L2;
L16:;
si0=1127704U;
f14(i,si0);
UNREACHABLE;
L15:;
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L39;
case 1:
goto L38;
case 2:
goto L39;
default:
goto L38;
}
L39:;
si0=l6;
sj0=i64_load(i->m0,(U64)si0);
l19=sj0;
si0=l7;
si1=56U;
si0+=si1;
si1=l5;
si1=f1962(i,si1);
f1714(i,si0,si1);
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+60U);
l4=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L40;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+56U);
l21=si0;
si0=l7;
sj0=i64_load(i->m0,(U64)si0+56U);
l16=sj0;
si0=(U32)(sj0);
l3=si0;
si1=l3;
si2=8U;
si1+=si2;
sj2=l16;
sj3=1095216660480ULL;
sj2&=sj3;
l16=sj2;
sj3=8589934592ULL;
si2=sj2 == sj3;
si0=si2?si0:si1;
f1035(i,si0);
si0=l3;
sj1=l16;
sj2=8589934592ULL;
si1=sj1 != sj2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l19;
i64_store(i->m0,(U64)si0,sj1);
si0=l21;
si1=l4;
f1708(i,si0,si1);
goto L4;
L40:;
si0=1127720U;
f14(i,si0);
UNREACHABLE;
L38:;
si0=l6;
sj0=i64_load(i->m0,(U64)si0);
l19=sj0;
si0=l5;
si0=f1962(i,si0);
l3=si0;
f1035(i,si0);
si0=l3;
sj1=l19;
i64_store(i->m0,(U64)si0,sj1);
goto L4;
L14:;
si0=l23;
si1=l7;
si1=i32_load(i->m0,(U64)si1+60U);
i32_store(i->m0,(U64)si0+4U,si1);
goto L5;
L13:;
si0=l23;
si1=l7;
si1=i32_load(i->m0,(U64)si1+60U);
i32_store(i->m0,(U64)si0+4U,si1);
goto L5;
L12:;
si0=l23;
si1=l7;
si1=i32_load(i->m0,(U64)si1+60U);
i32_store(i->m0,(U64)si0+4U,si1);
goto L5;
L11:;
si0=l23;
si1=l7;
si1=i32_load(i->m0,(U64)si1+60U);
i32_store(i->m0,(U64)si0+4U,si1);
goto L5;
L10:;
si0=l23;
si1=l7;
si1=i32_load(i->m0,(U64)si1+60U);
i32_store(i->m0,(U64)si0+4U,si1);
goto L5;
L9:;
si0=l3;
si0=i32_load(i->m0,(U64)si0);
si1=-76U;
si0+=si1;
switch(si0){
case 0:
goto L7;
case 1:
goto L42;
case 2:
goto L41;
default:
goto L8;
}
L42:;
si0=l23;
si1=l23;
si1=i32_load8_u(i->m0,(U64)si1+1U);
si2=l6;
si2=i32_load8_u(i->m0,(U64)si2+1U);
si1|=si2;
si2=0U;
si1=si1 != si2;
i32_store8(i->m0,(U64)si0+1U,si1);
goto L5;
L41:;
si0=l23;
si1=l6;
si1=i32_load8_u(i->m0,(U64)si1+1U);
si2=0U;
si1=si1 != si2;
si2=l23;
si2=i32_load8_u(i->m0,(U64)si2+1U);
si3=0U;
si2=si2 != si3;
si1^=si2;
i32_store8(i->m0,(U64)si0+1U,si1);
goto L5;
L8:;
si0=l7;
si1=48U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
si2=l23;
si3=l6;
f1682(i,si0,si1,si2,si3);
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+52U);
l22=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+48U);
l4=si0;
si0=l7;
si1=l6;
i32_store(i->m0,(U64)si0+124U,si1);
si0=l7;
si1=l23;
i32_store(i->m0,(U64)si0+120U,si1);
si0=0U;
l3=si0;
si0=l22;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L43;
}
si0=l7;
si1=40U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+28U);
f1498(i,si0,si1);
si0=l7;
si1=l8;
i32_store16(i->m0,(U64)si0+118U,si1);
si0=l7;
si1=l9;
i32_store16(i->m0,(U64)si0+116U,si1);
si0=l7;
si1=l1;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l7;
si1=l12;
i32_store(i->m0,(U64)si0+100U,si1);
si0=l7;
si1=l14;
i32_store(i->m0,(U64)si0+96U,si1);
si0=l7;
si1=l7;
sj1=i64_load(i->m0,(U64)si1+40U);
i64_store(i->m0,(U64)si0+108U,sj1);
si0=l0;
l3=si0;
L43:;
si0=l7;
si1=l3;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l7;
si1=56U;
si0+=si1;
si1=l7;
si2=92U;
si1+=si2;
si2=l7;
si3=120U;
si2+=si3;
si3=2U;
si4=l4;
TF(i->t0,si4,void (*)(glicolwasmInstance*,U32,U32,U32,U32))(i,si0,si1,si2,si3);
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+56U);
si1=13U;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+60U);
si1=l9;
si2=l8;
si0=f1501(i,si0,si1,si2);
l21=si0;
goto L3;
L44:;
si0=l7;
si0=i32_load(i->m0,(U64)si0+60U);
l21=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+56U);
l3=si0;
si1=255U;
si0&=si1;
si1=13U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l7;
si1=l21;
i32_store(i->m0,(U64)si0+132U,si1);
si0=l7;
si1=l3;
i32_store(i->m0,(U64)si0+128U,si1);
si0=l7;
si1=128U;
si0+=si1;
f1035(i,si0);
goto L5;
L7:;
si0=l23;
si1=l23;
si1=i32_load8_u(i->m0,(U64)si1+1U);
si2=0U;
si1=si1 != si2;
si2=l6;
si2=i32_load8_u(i->m0,(U64)si2+1U);
si3=0U;
si2=si2 != si3;
si1&=si2;
i32_store8(i->m0,(U64)si0+1U,si1);
goto L5;
L6:;
si0=l7;
si1=l6;
i32_store(i->m0,(U64)si0+124U,si1);
si0=l7;
si1=l21;
si2=l21;
si3=8U;
si2+=si3;
si3=l20;
si4=255U;
si3&=si4;
si4=2U;
si3=si3 == si4;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l7;
si1=128U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
si4=l14;
si5=l12;
si6=l3;
sj7=l16;
si8=l7;
si9=120U;
si8+=si9;
si9=2U;
si10=1U;
si11=0U;
si12=l9;
si13=l8;
f1305(i,si0,si1,si2,si3,si4,si5,si6,sj7,si8,si9,si10,si11,si12,si13);
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+136U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L46;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+128U);
l21=si0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=7U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l21;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l21;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l14;
si3=l12;
si0=f363(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=l21;
i32_store(i->m0,(U64)si0+140U,si1);
si0=l7;
si1=56U;
si0+=si1;
si1=l0;
si2=l1;
si3=l2;
si4=l13;
si5=l11;
si6=l3;
si7=8U;
si6+=si7;
sj7=l15;
si8=l7;
si9=120U;
si8+=si9;
si9=2U;
si10=1U;
si11=0U;
si12=l9;
si13=l8;
f1305(i,si0,si1,si2,si3,si4,si5,si6,sj7,si8,si9,si10,si11,si12,si13);
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+64U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+56U);
l21=si0;
si0=l7;
si1=140U;
si0+=si1;
f1354(i,si0);
goto L3;
L47:;
si0=l7;
sj0=i64_load(i->m0,(U64)si0+56U);
l19=sj0;
si0=l7;
si0=i32_load(i->m0,(U64)si0+120U);
f1035(i,si0);
si0=l7;
si0=i32_load(i->m0,(U64)si0+120U);
sj1=l19;
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=140U;
si0+=si1;
f1354(i,si0);
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+136U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L45;
}
L46:;
si0=l7;
si1=128U;
si0+=si1;
f1306(i,si0);
L45:;
si0=l7;
si1=32U;
si0+=si1;
si1=l4;
f1281(i,si0,si1);
si0=l7;
si1=24U;
si0+=si1;
si1=l0;
si2=l7;
si2=i32_load(i->m0,(U64)si2+120U);
si3=l7;
si3=i32_load16_u(i->m0,(U64)si3+32U);
si4=l7;
si4=i32_load16_u(i->m0,(U64)si4+34U);
f1502(i,si0,si1,si2,si3,si4);
si0=l7;
si0=i32_load(i->m0,(U64)si0+24U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+28U);
l21=si0;
goto L3;
L5:;
si0=l18;
si1=l17;
f1708(i,si0,si1);
L4:;
si0=l5;
si1=l9;
si2=l8;
si0=f1975(i,si0,si1,si2);
l21=si0;
si0=l10;
si1=36U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l18;
si1=l17;
f1708(i,si0,si1);
L2:;
si0=l6;
f1035(i,si0);
L1:;
si0=l7;
si1=144U;
si0+=si1;
i->g0=si0;
si0=l21;
L0:;
return si0;
}

void f718(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
l4=si1;
si0-=si1;
si1=l2;
si2=l1;
si1-=si2;
l2=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l3;
si1=8U;
si0+=si1;
si1=l0;
si2=l4;
si3=l2;
f719(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(i->m0,(U64)si1+12U);
f435(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
si1=l1;
si2=l2;
si0=f3069(i,si0,si1,si2);
si0=l0;
si1=l4;
si2=l2;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2750(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
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
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=24U;
si0+=si1;
si0=f2350(i,si0);
l4=si0;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L1;
}
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=0U;
si1=0U;
si2=1172640U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
sj1=(U64)(si1);
f991(i,si0,sj1);
f99(i);
UNREACHABLE;
L0:;
}

void f2008(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=i32_load16_u(i->m0,(U64)si0+270U);
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
si1=272U;
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
f1030(i,si0,si1);
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
i32_store16(i->m0,(U64)si0+268U,si1);
si0=l6;
si1=l1;
i32_store(i->m0,(U64)si0+264U,si1);
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

void f647(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=784U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l3;
si1=4U;
si0+=si1;
si1=0U;
si2=777U;
si0=f3116(i,si0,si1,si2);
si0=l1;
si1=l2;
si0+=si1;
l5=si0;
si0=l3;
si1=12U;
si0+=si1;
l6=si0;
si0=0U;
l7=si0;
si0=l1;
l8=si0;
L3:;
{
si0=l8;
l9=si0;
si0=l2;
si1=l7;
si0+=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l9;
si1=1U;
si0+=si1;
l8=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l9;
si0=i32_load8_u(i->m0,(U64)si0);
l10=si0;
si1=48U;
si0=si0 == si1;
if(si0){
goto L3;
}
}
si0=0U;
l8=si0;
si0=l10;
si1=-48U;
si0+=si1;
l11=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=0U;
si1=l7;
si0-=si1;
l9=si0;
si0=0U;
l8=si0;
L15:;
{
si0=l8;
si1=767U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l8;
si0+=si1;
si1=8U;
si0+=si1;
si1=l11;
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l8=si0;
L16:;
si0=l3;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l7;
si0+=si1;
si0=!(si0);
if(si0){
goto L17;
}
si0=l1;
si1=l9;
si0+=si1;
l10=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l10;
si0=i32_load8_u(i->m0,(U64)si0);
l10=si0;
si1=-48U;
si0+=si1;
l11=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L14;
}
goto L15;
L17:;
}
si0=l1;
si1=l7;
si0-=si1;
l9=si0;
si0=0U;
l10=si0;
goto L6;
L14:;
si0=l1;
si1=l9;
si0+=si1;
si1=-1U;
si0+=si1;
l9=si0;
si0=l2;
si1=l7;
si0+=si1;
l7=si0;
si0=l10;
si1=255U;
si0&=si1;
si1=46U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l7;
si1=1U;
si0+=si1;
l10=si0;
goto L6;
L13:;
si0=l2;
si1=l7;
si0+=si1;
l4=si0;
si0=l9;
si1=1U;
si0+=si1;
l11=si0;
si0=l10;
si1=46U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l11;
l9=si0;
goto L11;
L12:;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l7;
si1=2U;
si0+=si1;
si1=-2U;
si0+=si1;
l4=si0;
l10=si0;
si0=l8;
if(si0){
goto L10;
}
L11:;
si0=0U;
l10=si0;
si0=0U;
l7=si0;
L18:;
{
si0=l4;
si1=l7;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=0U;
l8=si0;
si0=l5;
l9=si0;
goto L9;
L19:;
si0=l9;
si1=l7;
si0+=si1;
l11=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l11;
si0=i32_load8_u(i->m0,(U64)si0);
si1=48U;
si0=si0 == si1;
if(si0){
goto L18;
}
}
si0=l9;
si1=l7;
si0+=si1;
si1=-1U;
si0+=si1;
l9=si0;
si0=l4;
si1=l7;
si0-=si1;
si1=1U;
si0+=si1;
l10=si0;
L10:;
si0=l10;
si1=8U;
si0=si0 < si1;
if(si0){
goto L22;
}
L23:;
{
si0=l8;
si1=8U;
si0+=si1;
si1=768U;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=l9;
sj0=i64_load(i->m0,(U64)si0);
l12=sj0;
sj1=5063812098665367110ULL;
sj0+=sj1;
sj1=l12;
sj2=-3472328296227680304ULL;
sj1+=sj2;
l12=sj1;
sj0|=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L21;
}
si0=l8;
si1=768U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l6;
si1=l8;
si0+=si1;
sj1=l12;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1+4U);
si2=8U;
si1+=si2;
l8=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L23;
}
}
L22:;
si0=l10;
si0=!(si0);
if(si0){
goto L20;
}
L21:;
L24:;
{
si0=l9;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l7=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l8;
si1=767U;
si0=si0 > si1;
if(si0){
goto L25;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l8;
si0+=si1;
si1=8U;
si0+=si1;
si1=l7;
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l8=si0;
L25:;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l3;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L24;
}
}
L20:;
si0=0U;
l10=si0;
L9:;
si0=l3;
si1=l10;
si2=l4;
si1-=si2;
i32_store(i->m0,(U64)si0+8U,si1);
goto L6;
L8:;
si0=l8;
si1=768U;
si2=1062340U;
f641(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l4;
si1=1U;
si0+=si1;
l10=si0;
si1=-1U;
si0+=si1;
l8=si0;
si0=0U;
l4=si0;
goto L5;
L6:;
si0=l8;
if(si0){
goto L27;
}
si0=0U;
l4=si0;
goto L26;
L27:;
si0=l2;
si1=l10;
si0-=si1;
l7=si0;
si0=l2;
si1=l10;
si0=si0 < si1;
if(si0){
goto L28;
}
si0=0U;
l11=si0;
si0=l2;
si1=l10;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l1;
si1=-1U;
si0+=si1;
l2=si0;
si0=0U;
l11=si0;
L30:;
{
si0=l2;
si1=l7;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-46U;
si0+=si1;
switch(si0){
case 0:
goto L31;
case 1:
goto L29;
case 2:
goto L32;
default:
goto L29;
}
L32:;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
L31:;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L30;
}
}
L29:;
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1+8U);
si2=l8;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l8;
si2=l11;
si1-=si2;
l4=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l4;
si1=768U;
si0=si0 <= si1;
if(si0){
goto L26;
}
si0=l3;
si1=768U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1U;
i32_store8(i->m0,(U64)si0+780U,si1);
si0=768U;
l4=si0;
goto L26;
L28:;
si0=l7;
si1=l2;
si2=1062356U;
f381(i,si0,si1,si2);
UNREACHABLE;
L26:;
si0=l10;
si0=!(si0);
if(si0){
goto L4;
}
si0=l10;
si1=-1U;
si0+=si1;
l8=si0;
si0=l9;
si1=1U;
si0+=si1;
l11=si0;
L5:;
si0=l9;
si0=i32_load8_u(i->m0,(U64)si0);
si1=32U;
si0|=si1;
si1=101U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l8;
if(si0){
goto L34;
}
si0=0U;
l7=si0;
goto L33;
L34:;
si0=l11;
si0=i32_load8_u(i->m0,(U64)si0);
l1=si0;
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L38;
case 1:
goto L37;
case 2:
goto L38;
default:
goto L37;
}
L38:;
si0=l10;
si1=-2U;
si0+=si1;
l8=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l9;
si1=2U;
si0+=si1;
l11=si0;
L37:;
si0=0U;
l9=si0;
si0=0U;
l7=si0;
L39:;
{
si0=l11;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
l2=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=l7;
si1=10U;
si0*=si1;
si1=l2;
si0+=si1;
l2=si0;
si1=l7;
si2=l7;
si3=65536U;
si2=(U32)((I32)si2<(I32)si3);
l10=si2;
si0=si2?si0:si1;
l7=si0;
si0=l2;
si1=l9;
si2=l10;
si0=si2?si0:si1;
l9=si0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L39;
}
goto L35;
}
L36:;
si0=0U;
l9=si0;
L35:;
si0=0U;
si1=l9;
si0-=si1;
si1=l9;
si2=l1;
si3=45U;
si2=si2 == si3;
si0=si2?si0:si1;
l7=si0;
L33:;
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1+8U);
si2=l7;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
L4:;
si0=l4;
si1=18U;
si0=si0 > si1;
if(si0){
goto L1;
}
L2:;
si0=l4;
si1=l3;
si2=4U;
si1+=si2;
si0+=si1;
si1=8U;
si0+=si1;
si1=0U;
si2=19U;
si3=l4;
si2-=si3;
si0=f3116(i,si0,si1,si2);
L1:;
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
si2=780U;
si0=f3069(i,si0,si1,si2);
si0=l3;
si1=784U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1321(glicolwasmInstance*i,U32 l0,U32 l1) {
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

void f1751(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
l3=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+8U);
l1=si1;
f155(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
l4=si1;
si0+=si1;
si1=l3;
si2=l1;
si0=f3069(i,si0,si1,si2);
si0=l0;
si1=l4;
si2=l1;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
f1752(i,si0);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1382(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si5=1116396U;
f824(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(i->m0,(U64)si1+12U);
si2=l1;
si3=l2;
si4=1116412U;
f1383(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f1267(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
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
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L2;
case 2:
goto L2;
case 3:
goto L3;
default:
goto L2;
}
L4:;
si0=1U;
l3=si0;
goto L2;
L3:;
si0=l1;
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
l0=si0;
si0=l1;
si1=8U;
si0+=si1;
l4=si0;
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
goto L5;
}
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=20U;
si0+=si1;
f989(i,si0);
si0=0U;
l3=si0;
goto L2;
L5:;
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=9U;
si0=si0 == si1;
l3=si0;
L2:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l3;
goto L0;
L1:;
si0=l2;
sj1=1ULL;
f991(i,si0,sj1);
f99(i);
UNREACHABLE;
L0:;
return si0;
}

void f2295(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
si2=l1;
si1-=si2;
f1124(i,si0,si1);
L1:;
L0:;
}

void f1599(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si4=1167268U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1U;
si1=1U;
si2=1167268U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l3;
si1&=si2;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=4ULL;
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
si0=1178304U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119116U;
si4=1167268U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1167268U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1618(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=0U;
l4=si0;
si0=l3;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l2;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
si1=l1;
si2=l2;
si1-=si2;
l2=si1;
si2=l1;
si1=(U32)((I32)si1<(I32)si2);
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=48U;
si0+=si1;
si1=12U;
si0+=si1;
si1=133U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=2U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l3;
si1=1177968U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l3;
si1=133U;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l3;
si1=l3;
si2=48U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l3;
si1=l3;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l3;
si2=24U;
si1+=si2;
f1496(i,si0,si1);
si0=l0;
si1=l3;
si2=12U;
si1+=si2;
si1=f1662(i,si1);
i32_store(i->m0,(U64)si0+4U,si1);
si0=1U;
l4=si0;
goto L1;
L2:;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
L1:;
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f883(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=37U;
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
goto L9;
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
goto L11;
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
si2=1168939U;
si3=3U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+60U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+56U);
if(si0){
goto L12;
}
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
goto L12;
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
goto L12;
}
L13:;
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
goto L13;
}
goto L11;
}
L12:;
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
goto L11;
}
si0=l1;
si1=l12;
i32_store(i->m0,(U64)si0+20U,si1);
L11:;
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
goto L10;
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
si1=16U;
si0+=si1;
si1=l1;
f913(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
l13=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
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
goto L10;
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
si0=!(si0);
if(si0){
goto L5;
}
L10:;
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
goto L6;
}
si0=l1;
si1=37U;
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
si0=si0 != si1;
if(si0){
goto L4;
}
goto L1;
L5:;
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
goto L14;
}
si0=l1;
si1=37U;
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
goto L3;
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
L15:;
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
L4:;
si0=l1;
si1=l4;
i32_store8(i->m0,(U64)si0+141U,si1);
goto L1;
L3:;
si0=1120504U;
si1=40U;
si2=1111940U;
f16(i,si0,si1,si2);
UNREACHABLE;
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

void f252(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si1=f3083(i,si1);
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

U32 f1429(glicolwasmInstance*i,U32 l0,U32 l1) {
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

U32 f2125(glicolwasmInstance*i,U32 l0) {
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

void f1393(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
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
f1171(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l4=si0;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+36U);
l3=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+36U,si1);
goto L1;
L2:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+4U,si1);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f34(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f806(i,si0,si1,si2,si3);
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

void f108(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0+20U);
f109(i,si0);
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
si0=l0;
si1=48U;
si0+=si1;
f361(i,si0);
si0=l0;
si0=i32_load(i->m0,(U64)si0+104U);
l1=si0;
si1=91U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=90U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L9;
case 2:
goto L2;
case 3:
goto L8;
case 4:
goto L7;
default:
goto L11;
}
L11:;
si0=l1;
si1=-85U;
si0+=si1;
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
goto L2;
}
L10:;
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si1=4U;
si0+=si1;
f266(i,si0);
si0=l0;
f87(i,si0);
goto L0;
L9:;
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
f265(i,si0);
goto L0;
L8:;
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
f265(i,si0);
goto L0;
L7:;
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
f265(i,si0);
goto L0;
L6:;
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
f309(i,si0);
si0=l0;
f87(i,si0);
goto L0;
L5:;
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
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
L4:;
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
f265(i,si0);
goto L0;
L3:;
si0=l0;
si1=108U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
f265(i,si0);
L2:;
L0:;
}

void f2447(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
f1268(i,si0,si1);
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
f1741(i,si0,si1,si2);
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
si2=f1742(i,si2);
l3=si2;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l3;
si3=i32_load(i->m0,(U64)si3+8U);
si4=l5;
sj5=l8;
f2333(i,si0,si1,si2,si3,si4,sj5);
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
f1708(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=2U;
si1=2U;
si2=1168896U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1U;
si1=l4;
si2=1168896U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1169672U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1168896U;
f14(i,si0);
UNREACHABLE;
L0:;
}

U32 f220(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=f161(i,si0);
l1=si0;
si0=512U;
si1=4U;
si0=f171(i,si0,si1);
si1=0U;
si2=512U;
si0=f3116(i,si0,si1,si2);
l3=si0;
si0=l2;
si1=28U;
si0+=si1;
si1=1052804U;
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

U32 f1187(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f1761(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
si0=l1;
si1=8U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
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
si1=4U;
si0+=si1;
l8=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l9=si0;
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
si1=2U;
si0<<=(si1&31);
l3=si0;
si0=0U;
l5=si0;
si0=l2;
si1=1073741823U;
si0=si0 > si1;
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
si1=2U;
si0<<=(si1&31);
l4=si0;
si0=l7;
si1=1073741823U;
si0=si0 <= si1;
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
si0=l8;
si1=l9;
si2=l3;
si3=2U;
si2<<=(si3&31);
si0=f3069(i,si0,si1,si2);
si0=l1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l9;
si1=l7;
f1762(i,si0,si1);
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
si0=l9;
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
si0=f1238(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=l8;
si2=l4;
si3=2U;
si2<<=(si3&31);
si0=f3069(i,si0,si1,si2);
goto L3;
L4:;
si0=1123060U;
si1=32U;
si2=1123092U;
f16(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l1;
si1=l6;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l7;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l2;
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

void f2036(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3,si4,si5,si6,si8,si9,si10,si11,si12,si13;
U64 sj0,sj7;
si0=i->g0;
si1=32U;
si0-=si1;
l10=si0;
i->g0=si0;
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+36U);
l11=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l10;
f2043(i,si0);
si0=l10;
sj0=i64_load(i->m0,(U64)si0+8U);
l12=sj0;
si0=l10;
si1=l6;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l10;
si1=l5;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l10;
si1=l4;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=1125582U;
si5=10U;
si6=0U;
sj7=l12;
si8=l10;
si9=20U;
si8+=si9;
si9=3U;
si10=l7;
si11=0U;
si12=l8;
si13=l9;
f1305(i,si0,si1,si2,si3,si4,si5,si6,sj7,si8,si9,si10,si11,si12,si13);
si0=l2;
si1=l11;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l10;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
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

U32 f363(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
l5=si0;
si0=l1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l4;
si1=8U;
si0+=si1;
si1=0U;
si2=l3;
si3=l0;
si4=l1;
si5=1118492U;
f1143(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=l3;
si2=l4;
si2=i32_load(i->m0,(U64)si2+8U);
si3=l4;
si3=i32_load(i->m0,(U64)si3+12U);
si0=f247(i,si0,si1,si2,si3);
l5=si0;
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

void f1145(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
f439(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(i->m0,(U64)si1+12U);
f435(i,si0,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3052(glicolwasmInstance*i) {
UNREACHABLE;
L0:;
}

void f848(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=192U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=128U;
si0+=si1;
si1=l1;
f840(i,si0,si1);
si0=1U;
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+132U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+128U);
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
si1=4U;
i32_store8(i->m0,(U64)si0+143U,si1);
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
i32_store(i->m0,(U64)si0+160U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+156U,si1);
si0=l2;
si1=0U;
i32_store8(i->m0,(U64)si0+152U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=152U;
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
i32_store(i->m0,(U64)si0+144U,si1);
si0=l2;
si1=l1;
si2=120U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+148U,si1);
si0=l2;
si1=112U;
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
si0=i32_load(i->m0,(U64)si0+116U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+112U);
if(si0){
goto L9;
}
si0=l2;
si1=184U;
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
i64_store(i->m0,(U64)si0+176U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l2;
si1=104U;
si0+=si1;
si1=l1;
f855(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+108U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+104U);
if(si0){
goto L10;
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
goto L10;
}
si0=l2;
si1=160U;
si0+=si1;
l10=si0;
L12:;
{
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
goto L11;
}
si0=l10;
si1=l1;
si2=132U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+124U);
i64_store(i->m0,(U64)si0+152U,sj1);
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
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
goto L13;
}
L14:;
{
si0=l2;
si1=72U;
si0+=si1;
si1=l1;
f845(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+76U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+72U);
si0=!(si0);
if(si0){
goto L14;
}
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
goto L13;
}
si0=l2;
si1=56U;
si0+=si1;
si1=l1;
si2=1159149U;
si3=1U;
f844(i,si0,si1,si2,si3);
si0=l2;
si1=48U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+60U);
f840(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+52U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+48U);
if(si0){
goto L13;
}
L15:;
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
goto L15;
}
}
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
si2=1154189U;
si3=2U;
f844(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+36U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+32U);
if(si0){
goto L13;
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
goto L13;
}
L16:;
{
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
f845(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
si0=!(si0);
if(si0){
goto L16;
}
}
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f855(i,si0,si1);
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
}
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+152U);
i64_store(i->m0,(U64)si0+124U,sj1);
si0=l1;
si1=132U;
si0+=si1;
si1=l2;
si2=160U;
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
goto L11;
}
si0=l1;
si1=l8;
i32_store(i->m0,(U64)si0+20U,si1);
L11:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
si0=l2;
si1=l2;
si2=143U;
si1+=si2;
i32_store(i->m0,(U64)si0+184U,si1);
si0=l2;
si1=l2;
si2=144U;
si1+=si2;
i32_store(i->m0,(U64)si0+180U,si1);
si0=l2;
si1=l2;
si2=148U;
si1+=si2;
i32_store(i->m0,(U64)si0+176U,si1);
si0=l8;
si1=1U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l1;
si1=4U;
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
sj1=i64_load(i->m0,(U64)si1+176U);
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
si2=143U;
si1+=si2;
i32_store(i->m0,(U64)si0+184U,si1);
si0=l2;
si1=l2;
si2=144U;
si1+=si2;
i32_store(i->m0,(U64)si0+180U,si1);
si0=l2;
si1=l2;
si2=148U;
si1+=si2;
i32_store(i->m0,(U64)si0+176U,si1);
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si1=4U;
si2=l3;
si3=l6;
si4=l7;
si5=l5;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si1=176U;
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
goto L18;
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
i32_store(i->m0,(U64)si0+156U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+168U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+160U,si1);
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+143U);
i32_store8(i->m0,(U64)si0+153U,si1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+152U,si1);
si0=l1;
si1=12U;
si0+=si1;
si1=l2;
si2=152U;
si1+=si2;
f841(i,si0,si1);
goto L4;
L18:;
si0=1120504U;
si1=40U;
si2=1111940U;
f16(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l2;
si1=176U;
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
si1=192U;
si0+=si1;
i->g0=si0;
L0:;
}

void f288(glicolwasmInstance*i,U32 l0) {
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
f319(i,si0);
L1:;
L0:;
}

void f1105(glicolwasmInstance*i,U32 l0) {
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
f319(i,si0);
L1:;
L0:;
}

void f1054(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
f1053(i,si0,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si2=12U;
si1*=si2;
f264(i,si0,si1);
L1:;
L0:;
}

void f2639(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
f2635(i,si0,si1,si2);
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
si0=f2636(i,si0,si1);
si0=l0;
sj1=1ULL;
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
si2=1172412U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1172412U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f787(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f56(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=64U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
l5=si0;
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l4;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+12U,sj1);
si0=l4;
si1=24U;
si0+=si1;
si1=l3;
si2=l1;
si3=l2;
f364(i,si0,si1,si2,si3);
L1:;
{
si0=l4;
si1=52U;
si0+=si1;
si1=l4;
si2=24U;
si1+=si2;
f417(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+52U);
if(si0){
goto L2;
}
si0=l4;
si1=12U;
si0+=si1;
si1=l1;
si2=l5;
si1+=si2;
si2=l2;
si3=l5;
si2-=si3;
f156(i,si0,si1,si2);
si0=l0;
si1=8U;
si0+=si1;
si1=l4;
si2=12U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+12U);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+56U);
si1=l5;
si0-=si1;
l3=si0;
si0=l1;
si1=l5;
si0+=si1;
l6=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+60U);
l5=si0;
si0=l4;
si1=12U;
si0+=si1;
si1=l6;
si2=l3;
f156(i,si0,si1,si2);
si0=l4;
si1=12U;
si0+=si1;
si1=1178664U;
si2=1178664U;
f157(i,si0,si1,si2);
goto L1;
}
L0:;
}

void f2923(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=256U;
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
i64_store(i->m0,(U64)si0+160U,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=l5;
si2=160U;
si1+=si2;
f1272(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+56U);
l6=si0;
if(si0){
goto L4;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+60U);
l6=si1;
i32_store(i->m0,(U64)si0+32U,si1);
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
i64_store(i->m0,(U64)si0+160U,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=l5;
si2=160U;
si1+=si2;
f1272(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+56U);
l8=si0;
if(si0){
goto L2;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+60U);
l8=si1;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l4;
si1=2U;
si0=si0 <= si1;
if(si0){
goto L5;
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
i64_store(i->m0,(U64)si0+160U,sj1);
si0=l5;
si1=160U;
si0+=si1;
si0=f2350(i,si0);
l9=si0;
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
goto L7;
}
si0=l6;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
goto L6;
L7:;
si0=l5;
si1=24U;
si0+=si1;
si1=l6;
si2=8U;
si1+=si2;
f1007(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+28U);
l6=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+24U);
l4=si0;
L6:;
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
si1=l8;
si2=8U;
si1+=si2;
f1007(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+20U);
l8=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
l3=si0;
L8:;
si0=l9;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
si0=l5;
si1=56U;
si0+=si1;
si1=l4;
si2=l6;
si3=l3;
si4=l8;
f365(i,si0,si1,si2,si3,si4);
si0=l5;
si1=l9;
i32_store(i->m0,(U64)si0+136U,si1);
si0=l5;
si1=1U;
i32_store16(i->m0,(U64)si0+128U,si1);
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0+124U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l5;
si1=160U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
f2241(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+160U);
si1=13U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l5;
sj1=17179869184ULL;
i64_store(i->m0,(U64)si0+40U,sj1);
goto L10;
L12:;
si0=l5;
sj0=i64_load(i->m0,(U64)si0+160U);
l7=sj0;
si0=l5;
si1=8U;
si0+=si1;
si1=4U;
f75(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l6=si0;
sj1=l7;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=1U;
i32_store(i->m0,(U64)si0+156U,si1);
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0+152U,si1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+148U,si1);
si0=l5;
si1=160U;
si0+=si1;
si1=l5;
si2=56U;
si1+=si2;
si2=88U;
si0=f3069(i,si0,si1,si2);
si0=8U;
l4=si0;
si0=1U;
l3=si0;
L14:;
{
si0=l5;
si1=248U;
si0+=si1;
si1=l5;
si2=160U;
si1+=si2;
f2241(i,si0,si1);
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0+248U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l5;
sj0=i64_load(i->m0,(U64)si0+248U);
l7=sj0;
si0=l3;
si1=l5;
si1=i32_load(i->m0,(U64)si1+148U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=l5;
si1=148U;
si0+=si1;
si1=1U;
f76(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+152U);
l6=si0;
L15:;
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
i32_store(i->m0,(U64)si0+156U,si1);
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
goto L14;
}
L13:;
si0=l5;
si1=248U;
si0+=si1;
f1004(i,si0);
si0=l5;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=148U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+148U);
i64_store(i->m0,(U64)si0+40U,sj1);
goto L10;
L11:;
si0=l5;
si1=40U;
si0+=si1;
si1=l4;
si2=l6;
si1=f1142(i,si1,si2);
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj2=2ULL;
sj1|=sj2;
f2306(i,si0,sj1);
L10:;
si0=l5;
si1=160U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f2412(i,si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+160U);
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=36U;
si0+=si1;
f1038(i,si0);
si0=l5;
si1=32U;
si0+=si1;
f1038(i,si0);
si0=l5;
si1=256U;
si0+=si1;
i->g0=si0;
goto L0;
L5:;
si0=2U;
si1=2U;
si2=1174656U;
f4(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+60U);
i32_store(i->m0,(U64)si0+164U,si1);
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0+160U,si1);
si0=1178304U;
si1=43U;
si2=l5;
si3=160U;
si2+=si3;
si3=1119116U;
si4=1174656U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=0U;
si1=0U;
si2=1174656U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+60U);
i32_store(i->m0,(U64)si0+164U,si1);
si0=l5;
si1=l8;
i32_store(i->m0,(U64)si0+160U,si1);
si0=1178304U;
si1=43U;
si2=l5;
si3=160U;
si2+=si3;
si3=1119116U;
si4=1174656U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=1U;
si1=1U;
si2=1174656U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1090(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
f1038(i,si0);
si0=l0;
si1=8U;
si0+=si1;
f1073(i,si0);
L0:;
}

U32 f1388(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+20U);
si2=1163600U;
si3=1123773U;
si4=l0;
si4=i32_load(i->m0,(U64)si4+12U);
l3=si4;
si2=si4?si2:si3;
si3=3U;
si4=2U;
si5=l3;
si3=si5?si3:si4;
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
si2=1124124U;
si0=f679(i,si0,si1,si2);
l3=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
si1=8U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=3U;
si0<<=(si1&31);
l0=si0;
L2:;
{
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si2=1125304U;
si0=f679(i,si0,si1,si2);
si0=l0;
si1=-8U;
si0+=si1;
l0=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
goto L2;
}
L1:;
si0=l3;
si0=f680(i,si0);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f1166(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U64 l3) {
U32 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l2;
si1=1U;
si0+=si1;
l4=si0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l2;
si3=-1U;
si2^=si3;
si3=l1;
si2+=si3;
si3=3U;
si2<<=(si3&31);
si0=f3080(i,si0,si1,si2);
L1:;
si0=l0;
si1=l2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l3;
i64_store(i->m0,(U64)si0,sj1);
L0:;
}

void f2054(glicolwasmInstance*i,U32 l0,U32 l1) {
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

void f1057(glicolwasmInstance*i,U32 l0) {
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
si0=i32_load8_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L1;
case 1:
goto L16;
case 2:
goto L15;
case 3:
goto L14;
case 4:
goto L13;
case 5:
goto L12;
case 6:
goto L11;
case 7:
goto L10;
case 8:
goto L9;
case 9:
goto L8;
case 10:
goto L7;
case 11:
goto L6;
case 12:
goto L5;
case 13:
goto L4;
case 14:
goto L3;
case 15:
goto L2;
default:
goto L17;
}
L17:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=5U;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l1;
si1=8U;
si0+=si1;
si1=l0;
f1058(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
f1059(i,si0,si1);
goto L18;
L19:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f1059(i,si0,si1);
si0=l3;
si1=l2;
si2=12U;
si1*=si2;
f264(i,si0,si1);
L18:;
si0=l0;
f87(i,si0);
goto L1;
L16:;
si0=l0;
si1=8U;
si0+=si1;
f1060(i,si0);
goto L1;
L15:;
si0=l0;
si1=8U;
si0+=si1;
f1061(i,si0);
goto L1;
L14:;
si0=l0;
si1=8U;
si0+=si1;
f1060(i,si0);
goto L1;
L13:;
si0=l0;
si1=8U;
si0+=si1;
f1060(i,si0);
goto L1;
L12:;
si0=l0;
si1=8U;
si0+=si1;
f1062(i,si0);
goto L1;
L11:;
si0=l0;
si1=8U;
si0+=si1;
f1063(i,si0);
goto L1;
L10:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l0=si0;
f1064(i,si0);
si0=l0;
si1=56U;
si0+=si1;
f1065(i,si0);
si0=l0;
f87(i,si0);
goto L1;
L9:;
si0=l0;
si1=8U;
si0+=si1;
f1066(i,si0);
goto L1;
L8:;
si0=l0;
si1=4U;
si0+=si1;
f1067(i,si0);
goto L1;
L7:;
si0=l0;
si1=8U;
si0+=si1;
f1060(i,si0);
goto L1;
L6:;
si0=l0;
si1=4U;
si0+=si1;
f1068(i,si0);
goto L1;
L5:;
si0=l0;
si1=4U;
si0+=si1;
f1069(i,si0);
goto L1;
L4:;
si0=l0;
si1=4U;
si0+=si1;
f1069(i,si0);
goto L1;
L3:;
si0=l0;
si1=8U;
si0+=si1;
f1070(i,si0);
goto L1;
L2:;
si0=l0;
si1=8U;
si0+=si1;
f1071(i,si0);
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f916(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=22U;
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
si1=128U;
si0+=si1;
si1=8U;
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
l12=si0;
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
si1=104U;
si0+=si1;
si1=8U;
si0+=si1;
l10=si0;
L11:;
{
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
si0=l10;
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
l8=si0;
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
goto L12;
}
L13:;
{
si0=l2;
si1=32U;
si0+=si1;
si1=l1;
f900(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+36U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L13;
}
}
si0=l2;
si1=24U;
si0+=si1;
si1=l1;
f917(i,si0,si1);
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
L14:;
{
si0=l2;
si1=l1;
f900(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L14;
}
goto L11;
}
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
si1=l8;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l1;
si1=l8;
i32_store(i->m0,(U64)si0+20U,si1);
L10:;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f918(i,si0,si1);
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
si1=l12;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l12;
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
si1=22U;
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
goto L15;
}
si0=l1;
si1=22U;
si2=l3;
si3=l6;
si4=l7;
si5=l5;
f833(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+140U);
l8=si0;
L15:;
si0=l8;
si1=255U;
si0&=si1;
si1=2U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+141U);
si0=!(si0);
if(si0){
goto L17;
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
goto L16;
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
L17:;
si0=l2;
si1=128U;
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
L16:;
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
si1=144U;
si0+=si1;
i->g0=si0;
L0:;
}

void f334(glicolwasmInstance*i,U32 l0) {
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

void f1048(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=12U;
si0+=si1;
f1049(i,si0);
si0=l0;
f1038(i,si0);
si0=l0;
si1=112U;
si0+=si1;
f1050(i,si0);
si0=l0;
si1=116U;
si0+=si1;
f1051(i,si0);
L0:;
}

void f1235(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f1240(i,si0);
si0=l0;
si1=48U;
si0+=si1;
l0=si0;
goto L2;
}
L1:;
L0:;
}

U32 f1323(glicolwasmInstance*i,U32 l0,U32 l1) {
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

void f503(glicolwasmInstance*i,U32 l0,U32 l1,F32 l2) {
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
f548(i,si0,si1,si2);
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
f548(i,si0,si1,si2);
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

void f2128(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l1;
si1=16U;
si0+=si1;
si1=45U;
si2=l1;
si3=28U;
si2+=si3;
si3=4U;
f1184(i,si0,si1,si2,si3);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
l3=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
l5=si1;
si2=l0;
si2=i32_load(i->m0,(U64)si2+8U);
l6=si2;
si3=l2;
f2129(i,si0,si1,si2,si3);
si0=l1;
si1=8U;
si0+=si1;
si1=0U;
si2=l2;
si3=l4;
si4=l5;
si5=1116348U;
f824(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
si2=l3;
si3=l2;
si4=1116364U;
f1383(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l6;
si2=l2;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
L1:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f2026(glicolwasmInstance*i,U32 l0,U32 l1) {
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

U32 f1427(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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

U32 f2281(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
goto L0;
L1:;
si0=l0;
si1=l1;
si2=1121280U;
f381(i,si0,si1,si2);
UNREACHABLE;
L0:;
return si0;
}

void f635(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=0U;
l2=si0;
si0=1499U;
l3=si0;
si0=1499U;
l4=si0;
L4:;
{
si0=l3;
si1=1U;
si0>>=(si1&31);
si1=l2;
si0+=si1;
l3=si0;
si1=3U;
si0<<=(si1&31);
si1=1096900U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
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
goto L4;
}
goto L1;
}
L3:;
si0=l3;
si1=3U;
si0<<=(si1&31);
si1=1096904U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L6;
}
sj0=0ULL;
l6=sj0;
si0=l2;
si1=55296U;
si0^=si1;
si1=-1114112U;
si0+=si1;
si1=-1112065U;
si0=si0 > si1;
if(si0){
goto L5;
}
L6:;
si0=l2;
si1=4194303U;
si0&=si1;
si1=12U;
si0*=si1;
l3=si0;
si1=1108892U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
si1=1108896U;
si0+=si1;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
L5:;
si0=l0;
sj1=l6;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l1;
si1^=si2;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f2229(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f2230(i,si0,si1);
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
si1=f1142(i,si1,si2);
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

void f728(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f442(i,si0,si1);
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
si1=l2;
si2=12U;
si1+=si2;
si2=l1;
f726(i,si0,si1,si2);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f2024(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
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
i32_store8(i->m0,(U64)si0+9U,si1);
si0=l2;
si1=l4;
i32_store8(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=12U;
si0*=si1;
l1=si0;
L2:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=4U;
si0+=si1;
si1=l2;
si2=12U;
si1+=si2;
si2=194U;
si0=f244(i,si0,si1,si2);
si0=l1;
si1=-12U;
si0+=si1;
l1=si0;
si0=l3;
si1=12U;
si0+=si1;
l3=si0;
goto L2;
}
L1:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+8U);
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

void f366(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
if(si0){
goto L2;
}
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+48U);
l5=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l6=si0;
si0=l1;
si1=14U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=255U;
si0&=si1;
l7=si0;
L4:;
{
si0=0U;
l8=si0;
si0=l7;
if(si0){
goto L3;
}
si0=l1;
si1=l3;
si2=1U;
si1^=si2;
i32_store8(i->m0,(U64)si0+12U,si1);
si0=l4;
l9=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si1=l6;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l4;
si1=l6;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L6;
L8:;
si0=l5;
si1=l6;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L6;
}
L7:;
si0=l5;
si1=l4;
si2=l6;
si3=l4;
si4=1122364U;
f518(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L6:;
si0=l4;
si1=l6;
si0-=si1;
l9=si0;
L5:;
si0=l2;
si1=l5;
si2=l6;
si1+=si2;
l10=si1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l10;
si2=l9;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=8U;
si1+=si2;
f192(i,si0,si1);
si0=l3;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
si0=1U;
l8=si0;
goto L3;
L9:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
si1=1114112U;
si2=l2;
si2=i32_load(i->m0,(U64)si2);
si0=si2?si0:si1;
l9=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=1U;
l3=si0;
si0=1U;
l10=si0;
si0=l9;
si1=128U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=2U;
l10=si0;
si0=l9;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=3U;
si1=4U;
si2=l9;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
L11:;
si0=l1;
si1=l10;
si2=l6;
si1+=si2;
l6=si1;
i32_store(i->m0,(U64)si0+4U,si1);
goto L4;
L10:;
}
si0=l1;
si1=1U;
i32_store8(i->m0,(U64)si0+14U,si1);
L3:;
si0=l0;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l1;
si1=8U;
si0+=si1;
l6=si0;
si0=l1;
si1=60U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l1;
si1=52U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+56U);
l9=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+48U);
l10=si0;
si0=l1;
si1=36U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l0;
si1=l6;
si2=l10;
si3=l4;
si4=l9;
si5=l3;
si6=0U;
f370(i,si0,si1,si2,si3,si4,si5,si6);
goto L1;
L12:;
si0=l0;
si1=l6;
si2=l10;
si3=l4;
si4=l9;
si5=l3;
si6=1U;
f370(i,si0,si1,si2,si3,si4,si5,si6);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f3006(glicolwasmInstance*i,U32 l0,U64 l1) {
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
f992(i,si0,sj1,si2);
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

void f2462(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
i64_store(i->m0,(U64)si0+8U,sj1);
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
si0=f2350(i,si0);
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
f1741(i,si0,si1,si2);
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
si2=f1742(i,si2);
l3=si2;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l3;
si3=i32_load(i->m0,(U64)si3+8U);
si4=l5;
si5=8U;
si4+=si5;
si5=l4;
f2463(i,si0,si1,si2,si3,si4,si5);
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
f1708(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=2U;
si1=2U;
si2=1168896U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1U;
si1=l4;
si2=1168896U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1169480U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=1168896U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f659(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
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
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=832U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L22;
}
si0=l1;
sj0=i64_load(i->m0,(U64)si0+8U);
l7=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L21;
}
si0=l1;
sj0=i64_load(i->m0,(U64)si0+16U);
l8=sj0;
sj1=0ULL;
si0=sj0 == sj1;
if(si0){
goto L20;
}
sj0=l6;
sj1=l8;
sj0+=sj1;
sj1=l6;
si0=sj0 < sj1;
if(si0){
goto L19;
}
sj0=l6;
sj1=l7;
si0=sj0 < sj1;
if(si0){
goto L18;
}
si0=l1;
si0=i32_load16_u(i->m0,(U64)si0+24U);
l1=si0;
si0=l5;
sj1=l6;
i64_store32(i->m0,(U64)si0+12U,sj1);
si0=l5;
si1=1U;
si2=2U;
sj3=l6;
sj4=4294967296ULL;
si3=sj3 < sj4;
l9=si3;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+172U,si1);
si0=l5;
si1=0U;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=l9;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l5;
si1=20U;
si0+=si1;
si1=0U;
si2=152U;
si0=f3116(i,si0,si1,si2);
si0=l5;
si1=180U;
si0+=si1;
si1=0U;
si2=156U;
si0=f3116(i,si0,si1,si2);
si0=l5;
si1=1U;
i32_store(i->m0,(U64)si0+176U,si1);
si0=l5;
si1=1U;
i32_store(i->m0,(U64)si0+336U,si1);
si0=l1;
sj0=(U64)(si0);
sj0=(U64)(I64)(I16)(U16)(sj0);
sj1=l6;
sj2=-1ULL;
sj1+=sj2;
sj1=I64_CLZ(sj1);
sj0-=sj1;
sj1=1292913986ULL;
sj0*=sj1;
sj1=82746495104ULL;
sj0+=sj1;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l9=si0;
si0=(U32)(I32)(I16)(U16)(si0);
l10=si0;
si0=l1;
si0=(U32)(I32)(I16)(U16)(si0);
l11=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L24;
}
si0=l5;
si1=12U;
si0+=si1;
si1=l1;
si0=f658(i,si0,si1);
goto L23;
L24:;
si0=l5;
si1=176U;
si0+=si1;
si1=0U;
si2=l11;
si1-=si2;
si1=(U32)(I32)(I16)(U16)(si1);
si0=f658(i,si0,si1);
L23:;
si0=l10;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L26;
}
si0=l5;
si1=12U;
si0+=si1;
si1=0U;
si2=l10;
si1-=si2;
si2=65535U;
si1&=si2;
si0=f655(i,si0,si1);
goto L25;
L26:;
si0=l5;
si1=176U;
si0+=si1;
si1=l9;
si2=65535U;
si1&=si2;
si0=f655(i,si0,si1);
L25:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+336U);
l12=si0;
si0=l5;
si1=668U;
si0+=si1;
si1=l5;
si2=176U;
si1+=si2;
si2=160U;
si0=f3069(i,si0,si1,si2);
si0=l5;
si1=l12;
i32_store(i->m0,(U64)si0+828U,si1);
si0=l3;
l13=si0;
si0=l3;
si1=10U;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=l5;
si1=668U;
si0+=si1;
si1=-8U;
si0+=si1;
l14=si0;
si0=l12;
l1=si0;
si0=l3;
l13=si0;
L28:;
{
si0=l1;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L17;
}
si0=l1;
si0=!(si0);
if(si0){
goto L29;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l11=si0;
si0=l1;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
if(si0){
goto L31;
}
si0=l5;
si1=668U;
si0+=si1;
si1=l11;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
goto L30;
L31:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=1U;
si0&=si1;
l15=si0;
si0=l1;
si1=2147483646U;
si0&=si1;
l9=si0;
si0=l14;
si1=l11;
si0+=si1;
l11=si0;
sj0=0ULL;
l6=sj0;
L32:;
{
si0=l11;
l1=si0;
si1=4U;
si0+=si1;
l11=si0;
sj1=l6;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l11;
sj2=i64_load32_u(i->m0,(U64)si2);
sj1|=sj2;
l6=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l7=sj1;
i64_store32(i->m0,(U64)si0,sj1);
si0=l1;
sj1=l7;
sj2=-1000000000ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l1;
sj2=i64_load32_u(i->m0,(U64)si2);
sj1|=sj2;
l6=sj1;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
l7=sj1;
i64_store32(i->m0,(U64)si0,sj1);
sj0=l7;
sj1=-1000000000ULL;
sj0*=sj1;
sj1=l6;
sj0+=sj1;
l6=sj0;
si0=l1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l9;
si1=-2U;
si0+=si1;
l9=si0;
if(si0){
goto L32;
}
}
si0=l15;
si0=!(si0);
if(si0){
goto L29;
}
L30:;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
sj1=l6;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l1;
sj2=i64_load32_u(i->m0,(U64)si2);
sj1|=sj2;
sj2=1000000000ULL;
sj1=DIV_U(sj1,sj2);
i64_store32(i->m0,(U64)si0,sj1);
L29:;
si0=l13;
si1=-9U;
si0+=si1;
l13=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L27;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+828U);
l1=si0;
goto L28;
}
L27:;
si0=l13;
si1=2U;
si0<<=(si1&31);
si1=1064520U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+828U);
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l1;
if(si0){
goto L34;
}
si0=0U;
l1=si0;
goto L33;
L34:;
si0=l1;
si1=2U;
si0<<=(si1&31);
l11=si0;
si0=l9;
sj0=(U64)(si0);
l6=sj0;
si0=l1;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
if(si0){
goto L37;
}
si0=l5;
si1=668U;
si0+=si1;
si1=l11;
si0+=si1;
l1=si0;
sj0=0ULL;
l7=sj0;
goto L36;
L37:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=1U;
si0&=si1;
l13=si0;
si0=l1;
si1=2147483646U;
si0&=si1;
l9=si0;
si0=l11;
si1=l5;
si2=668U;
si1+=si2;
si0+=si1;
si1=-8U;
si0+=si1;
l11=si0;
sj0=0ULL;
l7=sj0;
L38:;
{
si0=l11;
l1=si0;
si1=4U;
si0+=si1;
l11=si0;
sj1=l7;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l11;
sj2=i64_load32_u(i->m0,(U64)si2);
sj1|=sj2;
l7=sj1;
sj2=l6;
sj1=DIV_U(sj1,sj2);
l8=sj1;
i64_store32(i->m0,(U64)si0,sj1);
si0=l1;
sj1=l7;
sj2=l8;
sj3=l6;
sj2*=sj3;
sj1-=sj2;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l1;
sj2=i64_load32_u(i->m0,(U64)si2);
sj1|=sj2;
l7=sj1;
sj2=l6;
sj1=DIV_U(sj1,sj2);
l8=sj1;
i64_store32(i->m0,(U64)si0,sj1);
sj0=l7;
sj1=l8;
sj2=l6;
sj1*=sj2;
sj0-=sj1;
l7=sj0;
si0=l1;
si1=-8U;
si0+=si1;
l11=si0;
si0=l9;
si1=-2U;
si0+=si1;
l9=si0;
if(si0){
goto L38;
}
}
si0=l13;
si0=!(si0);
if(si0){
goto L35;
}
L36:;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
sj1=l7;
sj2=32ULL;
sj1<<=(sj2&63);
si2=l1;
sj2=i64_load32_u(i->m0,(U64)si2);
sj1|=sj2;
sj2=l6;
sj1=DIV_U(sj1,sj2);
i64_store32(i->m0,(U64)si0,sj1);
L35:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+828U);
l1=si0;
L33:;
si0=l1;
si1=l5;
si1=i32_load(i->m0,(U64)si1+172U);
l16=si1;
si2=l1;
si3=l16;
si2=si2 > si3;
si0=si2?si0:si1;
l17=si0;
si1=40U;
si0=si0 > si1;
if(si0){
goto L12;
}
si0=l17;
if(si0){
goto L40;
}
si0=0U;
l17=si0;
goto L39;
L40:;
si0=0U;
l15=si0;
si0=0U;
l13=si0;
si0=l17;
si1=1U;
si0=si0 == si1;
if(si0){
goto L43;
}
si0=l17;
si1=1U;
si0&=si1;
l18=si0;
si0=l17;
si1=-2U;
si0&=si1;
l19=si0;
si0=0U;
l13=si0;
si0=l5;
si1=12U;
si0+=si1;
l9=si0;
si0=l5;
si1=668U;
si0+=si1;
l1=si0;
si0=0U;
l15=si0;
L44:;
{
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l14=si1;
si2=l9;
si2=i32_load(i->m0,(U64)si2);
si1+=si2;
l11=si1;
si2=l13;
si3=1U;
si2&=si3;
si1+=si2;
l20=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l13=si0;
si1=l13;
si1=i32_load(i->m0,(U64)si1);
l21=si1;
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si1+=si2;
l13=si1;
si2=l11;
si3=l14;
si2=si2 < si3;
si3=l20;
si4=l11;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l11=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l13;
si1=l21;
si0=si0 < si1;
si1=l11;
si2=l13;
si1=si1 < si2;
si0|=si1;
l13=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l19;
si1=l15;
si2=2U;
si1+=si2;
l15=si1;
si0=si0 != si1;
if(si0){
goto L44;
}
}
si0=l18;
si0=!(si0);
if(si0){
goto L42;
}
L43:;
si0=l5;
si1=668U;
si0+=si1;
si1=l15;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(i->m0,(U64)si1);
l9=si1;
si2=l5;
si3=12U;
si2+=si3;
si3=l1;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si1+=si2;
l1=si1;
si2=l13;
si1+=si2;
l11=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l11;
si1=l1;
si0=si0 < si1;
if(si0){
goto L41;
}
goto L39;
L42:;
si0=l13;
si0=!(si0);
if(si0){
goto L39;
}
L41:;
si0=l17;
si1=39U;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l5;
si1=668U;
si0+=si1;
si1=l17;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
si0=l17;
si1=1U;
si0+=si1;
l17=si0;
L39:;
si0=l5;
si1=l17;
i32_store(i->m0,(U64)si0+828U,si1);
si0=l17;
si1=l12;
si2=l17;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l1=si0;
L47:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L46;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l5;
si3=176U;
si2+=si3;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=l5;
si4=668U;
si3+=si4;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L47;
}
goto L45;
}
L46:;
si0=-1U;
si1=0U;
si2=l5;
si3=176U;
si2+=si3;
si3=l1;
si2+=si3;
si3=l5;
si4=176U;
si3+=si4;
si2=si2 != si3;
si0=si2?si0:si1;
l9=si0;
L45:;
si0=l9;
si1=1U;
si0=si0 > si1;
if(si0){
goto L48;
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L9;
L48:;
si0=l16;
if(si0){
goto L49;
}
si0=0U;
l16=si0;
goto L10;
L49:;
si0=l16;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l11=si0;
si1=3U;
si0&=si1;
l9=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L50;
}
si0=l5;
si1=12U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
goto L11;
L50:;
si0=l11;
si1=2147483644U;
si0&=si1;
l11=si0;
si0=l5;
si1=12U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
L51:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(i->m0,(U64)si0,sj1);
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
if(si0){
goto L51;
}
goto L11;
}
L22:;
si0=1064823U;
si1=28U;
si2=1065152U;
f16(i,si0,si1,si2);
UNREACHABLE;
L21:;
si0=1064868U;
si1=29U;
si2=1065168U;
f16(i,si0,si1,si2);
UNREACHABLE;
L20:;
si0=1064916U;
si1=28U;
si2=1065184U;
f16(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=1065080U;
si1=54U;
si2=1065296U;
f16(i,si0,si1,si2);
UNREACHABLE;
L18:;
si0=1065008U;
si1=55U;
si2=1065280U;
f16(i,si0,si1,si2);
UNREACHABLE;
L17:;
si0=l1;
si1=40U;
si2=1071124U;
f381(i,si0,si1,si2);
UNREACHABLE;
L16:;
si0=1071195U;
si1=27U;
si2=1071124U;
f16(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l1;
si1=40U;
si2=1071124U;
f381(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=40U;
si1=40U;
si2=1071124U;
f4(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l1;
si1=40U;
si2=1071124U;
f381(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l17;
si1=40U;
si2=1071124U;
f381(i,si0,si1,si2);
UNREACHABLE;
L11:;
si0=l9;
si0=!(si0);
if(si0){
goto L52;
}
L53:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L53;
}
}
L52:;
sj0=l6;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l16;
si1=39U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l5;
si1=12U;
si0+=si1;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
L10:;
si0=l5;
si1=l16;
i32_store(i->m0,(U64)si0+172U,si1);
L9:;
si0=0U;
l14=si0;
si0=l10;
si0=(U32)(I32)(I16)(U16)(si0);
l1=si0;
si1=l4;
si1=(U32)(I32)(I16)(U16)(si1);
l9=si1;
si0=(U32)((I32)si0<(I32)si1);
l22=si0;
if(si0){
goto L55;
}
si0=l10;
si1=l4;
si0-=si1;
si0=(U32)(I32)(I16)(U16)(si0);
si1=l3;
si2=l1;
si3=l9;
si2-=si3;
si3=l3;
si2=si2 < si3;
si0=si2?si0:si1;
l15=si0;
if(si0){
goto L54;
}
si0=0U;
l14=si0;
L55:;
si0=0U;
l15=si0;
goto L3;
L54:;
si0=l5;
si1=340U;
si0+=si1;
si1=l5;
si2=176U;
si1+=si2;
si2=160U;
si0=f3069(i,si0,si1,si2);
si0=l5;
si1=l12;
i32_store(i->m0,(U64)si0+500U,si1);
si0=l5;
si1=340U;
si0+=si1;
si1=1U;
si0=f658(i,si0,si1);
l23=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+336U);
l1=si0;
si0=l5;
si1=504U;
si0+=si1;
si1=l5;
si2=176U;
si1+=si2;
si2=160U;
si0=f3069(i,si0,si1,si2);
si0=l5;
si1=l1;
i32_store(i->m0,(U64)si0+664U,si1);
si0=l5;
si1=504U;
si0+=si1;
si1=2U;
si0=f658(i,si0,si1);
l24=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+336U);
l1=si0;
si0=l5;
si1=668U;
si0+=si1;
si1=l5;
si2=176U;
si1+=si2;
si2=160U;
si0=f3069(i,si0,si1,si2);
si0=l5;
si1=l1;
i32_store(i->m0,(U64)si0+828U,si1);
si0=l5;
si1=668U;
si0+=si1;
si1=3U;
si0=f658(i,si0,si1);
l25=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+172U);
l16=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+336U);
l12=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+500U);
l26=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+664U);
l27=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+828U);
l28=si0;
si0=0U;
l18=si0;
L57:;
{
si0=l18;
l17=si0;
si0=l16;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L65;
}
si0=l17;
si1=1U;
si0+=si1;
l18=si0;
si0=l16;
si1=2U;
si0<<=(si1&31);
l11=si0;
si0=0U;
l1=si0;
L70:;
{
si0=l11;
si1=l1;
si0=si0 == si1;
if(si0){
goto L69;
}
si0=l5;
si1=12U;
si0+=si1;
si1=l1;
si0+=si1;
l9=si0;
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l9;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L70;
}
}
si0=l16;
si1=l28;
si2=l16;
si3=l28;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L64;
}
si0=l4;
si1=2U;
si0<<=(si1&31);
l1=si0;
L73:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L72;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l5;
si3=668U;
si2+=si3;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=l5;
si4=12U;
si3+=si4;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L73;
}
goto L71;
}
L72:;
si0=-1U;
si1=0U;
si2=l5;
si3=668U;
si2+=si3;
si3=l1;
si2+=si3;
si3=l25;
si2=si2 != si3;
si0=si2?si0:si1;
l9=si0;
L71:;
si0=0U;
l29=si0;
si0=l9;
si1=2U;
si0=si0 >= si1;
if(si0){
goto L66;
}
si0=l4;
si0=!(si0);
if(si0){
goto L67;
}
si0=1U;
l13=si0;
si0=0U;
l14=si0;
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L74;
}
si0=l4;
si1=1U;
si0&=si1;
l29=si0;
si0=l4;
si1=-2U;
si0&=si1;
l19=si0;
si0=0U;
l14=si0;
si0=1U;
l13=si0;
si0=l5;
si1=668U;
si0+=si1;
l9=si0;
si0=l5;
si1=12U;
si0+=si1;
l1=si0;
L75:;
{
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l20=si1;
si2=l9;
si2=i32_load(i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l11=si1;
si2=l13;
si3=1U;
si2&=si3;
si1+=si2;
l21=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l13=si0;
si1=l13;
si1=i32_load(i->m0,(U64)si1);
l16=si1;
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l13=si1;
si2=l11;
si3=l20;
si2=si2 < si3;
si3=l21;
si4=l11;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l11=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l13;
si1=l16;
si0=si0 < si1;
si1=l11;
si2=l13;
si1=si1 < si2;
si0|=si1;
l13=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l19;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L75;
}
}
si0=l29;
si0=!(si0);
if(si0){
goto L68;
}
L74:;
si0=l5;
si1=12U;
si0+=si1;
si1=l14;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(i->m0,(U64)si1);
l9=si1;
si2=l25;
si3=l1;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l13;
si1+=si2;
l11=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L67;
}
si0=l11;
si1=l1;
si0=si0 < si1;
if(si0){
goto L67;
}
goto L4;
L69:;
si0=l15;
si1=l3;
si0=si0 > si1;
if(si0){
goto L63;
}
si0=l15;
si1=l17;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=l17;
si0+=si1;
si1=48U;
si2=l15;
si3=l17;
si2-=si3;
si0=f3116(i,si0,si1,si2);
goto L2;
L68:;
si0=l13;
si0=!(si0);
if(si0){
goto L4;
}
L67:;
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+172U,si1);
si0=8U;
l29=si0;
si0=l4;
l16=si0;
L66:;
si0=l16;
si1=l27;
si2=l16;
si3=l27;
si2=si2 > si3;
si0=si2?si0:si1;
l19=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L62;
}
si0=l19;
si1=2U;
si0<<=(si1&31);
l1=si0;
L78:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L77;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l5;
si3=504U;
si2+=si3;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=l5;
si4=12U;
si3+=si4;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L78;
}
goto L76;
}
L77:;
si0=-1U;
si1=0U;
si2=l5;
si3=504U;
si2+=si3;
si3=l1;
si2+=si3;
si3=l24;
si2=si2 != si3;
si0=si2?si0:si1;
l9=si0;
L76:;
si0=l9;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L80;
}
si0=l16;
l19=si0;
goto L79;
L80:;
si0=l19;
si0=!(si0);
if(si0){
goto L81;
}
si0=1U;
l13=si0;
si0=0U;
l14=si0;
si0=l19;
si1=1U;
si0=si0 == si1;
if(si0){
goto L83;
}
si0=l19;
si1=1U;
si0&=si1;
l30=si0;
si0=l19;
si1=-2U;
si0&=si1;
l4=si0;
si0=0U;
l14=si0;
si0=1U;
l13=si0;
si0=l5;
si1=504U;
si0+=si1;
l9=si0;
si0=l5;
si1=12U;
si0+=si1;
l1=si0;
L84:;
{
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l20=si1;
si2=l9;
si2=i32_load(i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l11=si1;
si2=l13;
si3=1U;
si2&=si3;
si1+=si2;
l21=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l13=si0;
si1=l13;
si1=i32_load(i->m0,(U64)si1);
l16=si1;
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l13=si1;
si2=l11;
si3=l20;
si2=si2 < si3;
si3=l21;
si4=l11;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l11=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l13;
si1=l16;
si0=si0 < si1;
si1=l11;
si2=l13;
si1=si1 < si2;
si0|=si1;
l13=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l4;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L84;
}
}
si0=l30;
si0=!(si0);
if(si0){
goto L82;
}
L83:;
si0=l5;
si1=12U;
si0+=si1;
si1=l14;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(i->m0,(U64)si1);
l9=si1;
si2=l24;
si3=l1;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l13;
si1+=si2;
l11=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L81;
}
si0=l11;
si1=l1;
si0=si0 < si1;
if(si0){
goto L81;
}
goto L5;
L82:;
si0=l13;
si0=!(si0);
if(si0){
goto L5;
}
L81:;
si0=l5;
si1=l19;
i32_store(i->m0,(U64)si0+172U,si1);
si0=l29;
si1=4U;
si0|=si1;
l29=si0;
L79:;
si0=l19;
si1=l26;
si2=l19;
si3=l26;
si2=si2 > si3;
si0=si2?si0:si1;
l4=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L61;
}
si0=l4;
si1=2U;
si0<<=(si1&31);
l1=si0;
L87:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L86;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l5;
si3=340U;
si2+=si3;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=l5;
si4=12U;
si3+=si4;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L87;
}
goto L85;
}
L86:;
si0=-1U;
si1=0U;
si2=l5;
si3=340U;
si2+=si3;
si3=l1;
si2+=si3;
si3=l23;
si2=si2 != si3;
si0=si2?si0:si1;
l9=si0;
L85:;
si0=l9;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L89;
}
si0=l19;
l4=si0;
goto L88;
L89:;
si0=l4;
si0=!(si0);
if(si0){
goto L90;
}
si0=1U;
l13=si0;
si0=0U;
l14=si0;
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L92;
}
si0=l4;
si1=1U;
si0&=si1;
l30=si0;
si0=l4;
si1=-2U;
si0&=si1;
l19=si0;
si0=0U;
l14=si0;
si0=1U;
l13=si0;
si0=l5;
si1=340U;
si0+=si1;
l9=si0;
si0=l5;
si1=12U;
si0+=si1;
l1=si0;
L93:;
{
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l20=si1;
si2=l9;
si2=i32_load(i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l11=si1;
si2=l13;
si3=1U;
si2&=si3;
si1+=si2;
l21=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l13=si0;
si1=l13;
si1=i32_load(i->m0,(U64)si1);
l16=si1;
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l13=si1;
si2=l11;
si3=l20;
si2=si2 < si3;
si3=l21;
si4=l11;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l11=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l13;
si1=l16;
si0=si0 < si1;
si1=l11;
si2=l13;
si1=si1 < si2;
si0|=si1;
l13=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l19;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L93;
}
}
si0=l30;
si0=!(si0);
if(si0){
goto L91;
}
L92:;
si0=l5;
si1=12U;
si0+=si1;
si1=l14;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(i->m0,(U64)si1);
l9=si1;
si2=l23;
si3=l1;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l13;
si1+=si2;
l11=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L90;
}
si0=l11;
si1=l1;
si0=si0 < si1;
if(si0){
goto L90;
}
goto L6;
L91:;
si0=l13;
si0=!(si0);
if(si0){
goto L6;
}
L90:;
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+172U,si1);
si0=l29;
si1=2U;
si0+=si1;
l29=si0;
L88:;
si0=l4;
si1=l12;
si2=l4;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l16=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L60;
}
si0=l16;
si1=2U;
si0<<=(si1&31);
l1=si0;
L96:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L95;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l5;
si3=176U;
si2+=si3;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=l5;
si4=12U;
si3+=si4;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L96;
}
goto L94;
}
L95:;
si0=-1U;
si1=0U;
si2=l5;
si3=176U;
si2+=si3;
si3=l1;
si2+=si3;
si3=l5;
si4=176U;
si3+=si4;
si2=si2 != si3;
si0=si2?si0:si1;
l9=si0;
L94:;
si0=l9;
si1=1U;
si0=si0 <= si1;
if(si0){
goto L98;
}
si0=l4;
l16=si0;
goto L97;
L98:;
si0=l16;
si0=!(si0);
if(si0){
goto L99;
}
si0=1U;
l13=si0;
si0=0U;
l14=si0;
si0=l16;
si1=1U;
si0=si0 == si1;
if(si0){
goto L101;
}
si0=l16;
si1=1U;
si0&=si1;
l30=si0;
si0=l16;
si1=-2U;
si0&=si1;
l4=si0;
si0=0U;
l14=si0;
si0=1U;
l13=si0;
si0=l5;
si1=176U;
si0+=si1;
l9=si0;
si0=l5;
si1=12U;
si0+=si1;
l1=si0;
L102:;
{
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l20=si1;
si2=l9;
si2=i32_load(i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l11=si1;
si2=l13;
si3=1U;
si2&=si3;
si1+=si2;
l21=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l13=si0;
si1=l13;
si1=i32_load(i->m0,(U64)si1);
l19=si1;
si2=l9;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l13=si1;
si2=l11;
si3=l20;
si2=si2 < si3;
si3=l21;
si4=l11;
si3=si3 < si4;
si2|=si3;
si1+=si2;
l11=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l13;
si1=l19;
si0=si0 < si1;
si1=l11;
si2=l13;
si1=si1 < si2;
si0|=si1;
l13=si0;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l4;
si1=l14;
si2=2U;
si1+=si2;
l14=si1;
si0=si0 != si1;
if(si0){
goto L102;
}
}
si0=l30;
si0=!(si0);
if(si0){
goto L100;
}
L101:;
si0=l5;
si1=12U;
si0+=si1;
si1=l14;
si2=2U;
si1<<=(si2&31);
l1=si1;
si0+=si1;
l9=si0;
si1=l9;
si1=i32_load(i->m0,(U64)si1);
l9=si1;
si2=l5;
si3=176U;
si2+=si3;
si3=l1;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si3=-1U;
si2^=si3;
si1+=si2;
l1=si1;
si2=l13;
si1+=si2;
l11=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l9;
si0=si0 < si1;
if(si0){
goto L99;
}
si0=l11;
si1=l1;
si0=si0 < si1;
if(si0){
goto L99;
}
goto L7;
L100:;
si0=l13;
si0=!(si0);
if(si0){
goto L7;
}
L99:;
si0=l5;
si1=l16;
i32_store(i->m0,(U64)si0+172U,si1);
si0=l29;
si1=1U;
si0+=si1;
l29=si0;
L97:;
si0=l17;
si1=l3;
si0=si0 == si1;
if(si0){
goto L103;
}
si0=l2;
si1=l17;
si0+=si1;
si1=l29;
si2=48U;
si1+=si2;
i32_store8(i->m0,(U64)si0,si1);
si0=l16;
if(si0){
goto L104;
}
si0=0U;
l16=si0;
goto L58;
L104:;
si0=l16;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l11=si0;
si1=3U;
si0&=si1;
l9=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L105;
}
si0=l5;
si1=12U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
goto L59;
L105:;
si0=l11;
si1=2147483644U;
si0&=si1;
l11=si0;
si0=l5;
si1=12U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
L106:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(i->m0,(U64)si0,sj1);
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
if(si0){
goto L106;
}
goto L59;
}
L103:;
si0=l3;
si1=l3;
si2=1065248U;
f4(i,si0,si1,si2);
UNREACHABLE;
L65:;
si0=l16;
si1=40U;
si2=1071124U;
f381(i,si0,si1,si2);
UNREACHABLE;
L64:;
si0=l4;
si1=40U;
si2=1071124U;
f381(i,si0,si1,si2);
UNREACHABLE;
L63:;
si0=l15;
si1=l3;
si2=1065264U;
f381(i,si0,si1,si2);
UNREACHABLE;
L62:;
si0=l19;
si1=40U;
si2=1071124U;
f381(i,si0,si1,si2);
UNREACHABLE;
L61:;
si0=l4;
si1=40U;
si2=1071124U;
f381(i,si0,si1,si2);
UNREACHABLE;
L60:;
si0=l16;
si1=40U;
si2=1071124U;
f381(i,si0,si1,si2);
UNREACHABLE;
L59:;
si0=l9;
si0=!(si0);
if(si0){
goto L107;
}
L108:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=10ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L108;
}
}
L107:;
sj0=l6;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L58;
}
si0=l16;
si1=39U;
si0=si0 > si1;
if(si0){
goto L56;
}
si0=l5;
si1=12U;
si0+=si1;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l16;
si1=1U;
si0+=si1;
l16=si0;
L58:;
si0=l5;
si1=l16;
i32_store(i->m0,(U64)si0+172U,si1);
si0=l18;
si1=l15;
si0=si0 != si1;
if(si0){
goto L57;
}
}
si0=1U;
l14=si0;
goto L3;
L56:;
si0=40U;
si1=40U;
si2=1071124U;
f4(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l16;
si1=40U;
si2=1071124U;
f4(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=1071140U;
si1=26U;
si2=1071124U;
f16(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1071140U;
si1=26U;
si2=1071124U;
f16(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=1071140U;
si1=26U;
si2=1071124U;
f16(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1071140U;
si1=26U;
si2=1071124U;
f16(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l12;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L115;
}
si0=l12;
if(si0){
goto L116;
}
si0=0U;
l12=si0;
goto L113;
L116:;
si0=l12;
si1=-1U;
si0+=si1;
si1=1073741823U;
si0&=si1;
l1=si0;
si1=1U;
si0+=si1;
l11=si0;
si1=3U;
si0&=si1;
l9=si0;
si0=l1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L117;
}
si0=l5;
si1=176U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
goto L114;
L117:;
si0=l11;
si1=2147483644U;
si0&=si1;
l11=si0;
si0=l5;
si1=176U;
si0+=si1;
l1=si0;
sj0=0ULL;
l6=sj0;
L118:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=5ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=5ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(i->m0,(U64)si0,sj1);
si0=l1;
si1=8U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=5ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(i->m0,(U64)si0,sj1);
si0=l1;
si1=12U;
si0+=si1;
l13=si0;
si1=l13;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=5ULL;
sj1*=sj2;
sj2=l6;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
l6=sj1;
i64_store32(i->m0,(U64)si0,sj1);
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l11;
si1=-4U;
si0+=si1;
l11=si0;
if(si0){
goto L118;
}
goto L114;
}
L115:;
si0=l12;
si1=40U;
si2=1071124U;
f381(i,si0,si1,si2);
UNREACHABLE;
L114:;
si0=l9;
si0=!(si0);
if(si0){
goto L119;
}
L120:;
{
si0=l1;
si1=l1;
sj1=i64_load32_u(i->m0,(U64)si1);
sj2=5ULL;
sj1*=sj2;
sj2=l6;
sj1+=sj2;
l6=sj1;
i64_store32(i->m0,(U64)si0,sj1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=32ULL;
sj0>>=(sj1&63);
l6=sj0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L120;
}
}
L119:;
sj0=l6;
si0=(U32)(sj0);
l1=si0;
si0=!(si0);
if(si0){
goto L113;
}
si0=l12;
si1=39U;
si0=si0 > si1;
if(si0){
goto L112;
}
si0=l5;
si1=176U;
si0+=si1;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
L113:;
si0=l5;
si1=l12;
i32_store(i->m0,(U64)si0+336U,si1);
si0=l16;
si1=l12;
si2=l16;
si3=l12;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
si1=41U;
si0=si0 >= si1;
if(si0){
goto L111;
}
si0=l1;
si1=2U;
si0<<=(si1&31);
l1=si0;
L125:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L124;
}
si0=-1U;
si1=l1;
si2=-4U;
si1+=si2;
l1=si1;
si2=l5;
si3=176U;
si2+=si3;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l9=si1;
si2=l1;
si3=l5;
si4=12U;
si3+=si4;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
l11=si2;
si1=si1 != si2;
si2=l9;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=!(si0);
if(si0){
goto L125;
}
}
si0=l9;
si1=255U;
si0&=si1;
si1=1U;
si0=si0 == si1;
if(si0){
goto L123;
}
goto L109;
L124:;
si0=l14;
si1=l5;
si2=176U;
si1+=si2;
si2=l1;
si1+=si2;
si2=l5;
si3=176U;
si2+=si3;
si1=si1 == si2;
si0&=si1;
si0=!(si0);
if(si0){
goto L109;
}
si0=l15;
si1=-1U;
si0+=si1;
l1=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L122;
}
si0=l2;
si1=l1;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L109;
}
L123:;
si0=l15;
si1=l3;
si0=si0 > si1;
if(si0){
goto L110;
}
si0=l2;
si1=l15;
si0+=si1;
l14=si0;
si0=-1U;
l11=si0;
si0=l15;
l1=si0;
L127:;
{
si0=l1;
l9=si0;
si0=!(si0);
if(si0){
goto L126;
}
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l9;
si1=-1U;
si0+=si1;
l1=si0;
si1=l2;
si0+=si1;
l13=si0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=57U;
si0=si0 == si1;
if(si0){
goto L127;
}
}
si0=l13;
si1=l13;
si1=i32_load8_u(i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store8(i->m0,(U64)si0,si1);
si0=l9;
si1=l15;
si0=si0 >= si1;
if(si0){
goto L109;
}
si0=l2;
si1=l9;
si0+=si1;
si1=48U;
si2=l11;
si0=f3116(i,si0,si1,si2);
goto L109;
L126:;
si0=l15;
if(si0){
goto L129;
}
si0=49U;
l1=si0;
goto L128;
L129:;
si0=l2;
si1=49U;
i32_store8(i->m0,(U64)si0,si1);
si0=48U;
l1=si0;
si0=l15;
si1=1U;
si0=si0 == si1;
if(si0){
goto L128;
}
si0=48U;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
si1=48U;
si2=l15;
si3=-1U;
si2+=si3;
si0=f3116(i,si0,si1,si2);
L128:;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l22;
si0=!(si0);
if(si0){
goto L121;
}
goto L109;
L122:;
si0=l1;
si1=l3;
si2=1065200U;
f4(i,si0,si1,si2);
UNREACHABLE;
L121:;
si0=l15;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L109;
}
si0=l14;
si1=l1;
i32_store8(i->m0,(U64)si0,si1);
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
goto L109;
L112:;
si0=40U;
si1=40U;
si2=1071124U;
f4(i,si0,si1,si2);
UNREACHABLE;
L111:;
si0=l1;
si1=40U;
si2=1071124U;
f381(i,si0,si1,si2);
UNREACHABLE;
L110:;
si0=l15;
si1=l3;
si2=1065216U;
f381(i,si0,si1,si2);
UNREACHABLE;
L109:;
si0=l15;
si1=l3;
si0=si0 > si1;
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=l10;
i32_store16(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l15;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=832U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=l15;
si1=l3;
si2=1065232U;
f381(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

F64 f3109(glicolwasmInstance*i,F64 l0) {
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

void f3033(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
F32 sf1;
F64 sd1,sd2;
si0=i->g0;
si1=80U;
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
i64_store(i->m0,(U64)si0+72U,sj1);
si0=l5;
si1=56U;
si0+=si1;
si1=l5;
si2=72U;
si1+=si2;
f3012(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+64U);
l4=si0;
si0=l5;
sj0=i64_load(i->m0,(U64)si0+56U);
l6=sj0;
si0=l5;
si1=40U;
si0+=si1;
f3034(i,si0);
sj0=l6;
si1=l4;
si2=l5;
sj2=i64_load(i->m0,(U64)si2+40U);
si3=l5;
si3=i32_load(i->m0,(U64)si3+48U);
si0=f3018(i,sj0,si1,sj2,si3);
if(si0){
goto L3;
}
si0=l5;
si1=24U;
si0+=si1;
f3034(i,si0);
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+24U);
si2=l5;
si2=i32_load(i->m0,(U64)si2+32U);
sj3=l6;
si4=l4;
f3032(i,si0,sj1,si2,sj3,si4);
si0=l5;
sj0=i64_load(i->m0,(U64)si0+8U);
l6=sj0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
l4=si0;
si0=l0;
si1=5U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
sd1=(F64)(si1);
sd2=1000000000;
sd1/=sd2;
sj2=l6;
sd2=(F64)(sj2);
sd1+=sd2;
sf1=(F32)(sd1);
f32_store(i->m0,(U64)si0+4U,sf1);
goto L2;
L3:;
si0=1175405U;
si1=28U;
si0=f2375(i,si0,si1);
l4=si0;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
L2:;
si0=l5;
si1=80U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=0U;
si1=0U;
si2=1175640U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
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

void f1372(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l2;
si3=l1;
si3=i32_load(i->m0,(U64)si3+8U);
f1375(i,si0,si1,si2,si3);
goto L0;
L1:;
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
L0:;
}

F32 f3070(glicolwasmInstance*i,F32 l0,F32 l1) {
F32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
F32 l10=0;
F32 l11=0;
F32 l12=0;
F32 l13=0;
U32 si0,si1,si2,si3,si4,si5;
F32 sf0,sf1,sf2,sf3,sf4,sf5,sf6,sf7,sf8,sf9,sf10;
sf0=1;
l2=sf0;
sf0=l0;
si0=i32_reinterpret_f32(sf0);
l3=si0;
si1=1065353216U;
si0=si0 == si1;
if(si0){
goto L1;
}
sf0=l1;
si0=i32_reinterpret_f32(sf0);
l4=si0;
si1=2147483647U;
si0&=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=2147483647U;
si0&=si1;
l6=si0;
si1=2139095040U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l5;
si1=2139095040U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l3;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L3;
}
si0=2U;
l7=si0;
si0=l5;
si1=1266679807U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l5;
si1=1065353216U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
l7=si0;
si0=l5;
si1=22U;
si2=l4;
si3=23U;
si2>>=(si3&31);
si1-=si2;
l8=si1;
si0>>=(si1&31);
l9=si0;
si1=l8;
si0<<=(si1&31);
si1=l5;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=2U;
si1=l9;
si2=1U;
si1&=si2;
si0-=si1;
l7=si0;
goto L2;
L4:;
sf0=l0;
sf1=l1;
sf0+=sf1;
goto L0;
L3:;
si0=0U;
l7=si0;
L2:;
si0=l5;
si1=1065353216U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l5;
si1=2139095040U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l6;
si1=1065353216U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l6;
si1=1065353216U;
si0=si0 > si1;
if(si0){
goto L10;
}
sf0=0;
sf1=l1;
sf1=-(sf1);
si2=l4;
si3=-1U;
si2=(U32)((I32)si2>(I32)si3);
sf0=si2?sf0:sf1;
goto L0;
L10:;
sf0=l1;
sf1=0;
si2=l4;
si3=-1U;
si2=(U32)((I32)si2>(I32)si3);
sf0=si2?sf0:sf1;
goto L0;
L9:;
si0=l4;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
sf0=l0;
goto L0;
L8:;
si0=l4;
si1=1056964608U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l4;
si1=1073741824U;
si0=si0 != si1;
if(si0){
goto L11;
}
sf0=l0;
sf1=l0;
sf0*=sf1;
goto L0;
L12:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L6;
}
L11:;
sf0=l0;
sf0=fabsf(sf0);
l2=sf0;
si0=l3;
si1=1073741823U;
si0&=si1;
si1=1065353216U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l6;
if(si0){
goto L17;
}
L18:;
sf0=1;
sf1=l2;
sf0/=sf1;
sf1=l2;
si2=l4;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
sf0=si2?sf0:sf1;
l2=sf0;
si0=l3;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L1;
}
si0=l7;
si1=l6;
si2=-1065353216U;
si1+=si2;
si0|=si1;
if(si0){
goto L16;
}
sf0=l2;
sf1=l2;
sf0-=sf1;
l0=sf0;
sf1=l0;
sf0/=sf1;
goto L0;
L17:;
sf0=1;
l10=sf0;
si0=l3;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L13;
}
si0=l7;
switch(si0){
case 0:
goto L15;
case 1:
goto L14;
default:
goto L13;
}
L16:;
sf0=l2;
sf0=-(sf0);
sf1=l2;
si2=l7;
si3=1U;
si2=si2 == si3;
sf0=si2?sf0:sf1;
goto L0;
L15:;
sf0=l0;
sf1=l0;
sf0-=sf1;
l0=sf0;
sf1=l0;
sf0/=sf1;
goto L0;
L14:;
sf0=-1;
l10=sf0;
L13:;
si0=l5;
si1=1291845632U;
si0=si0 > si1;
if(si0){
goto L19;
}
sf0=l2;
sf1=16777216;
sf0*=sf1;
si0=i32_reinterpret_f32(sf0);
si1=l6;
si2=l6;
si3=8388608U;
si2=si2 < si3;
l5=si2;
si0=si2?si0:si1;
l7=si0;
si1=8388607U;
si0&=si1;
l6=si0;
si1=1065353216U;
si0|=si1;
l3=si0;
si0=l7;
si1=23U;
si0=(U32)((I32)si0>>(si1&31));
si1=-151U;
si2=-127U;
si3=l5;
si1=si3?si1:si2;
si0+=si1;
l7=si0;
si0=0U;
l5=si0;
si0=l6;
si1=1885298U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l6;
si1=6140887U;
si0=si0 >= si1;
if(si0){
goto L21;
}
si0=1U;
l5=si0;
goto L20;
L21:;
si0=l6;
si1=1056964608U;
si0|=si1;
l3=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
L20:;
si0=l5;
si1=2U;
si0<<=(si1&31);
l6=si0;
si1=1182172U;
si0+=si1;
sf0=f32_load(i->m0,(U64)si0);
sf1=1;
si2=l6;
si3=1182164U;
si2+=si3;
sf2=f32_load(i->m0,(U64)si2);
l0=sf2;
si3=l3;
sf3=f32_reinterpret_i32(si3);
l11=sf3;
sf2+=sf3;
sf1/=sf2;
l2=sf1;
sf2=l11;
sf3=l0;
sf2-=sf3;
l12=sf2;
si3=l3;
si4=1U;
si3>>=(si4&31);
si4=536866816U;
si3&=si4;
si4=l5;
si5=21U;
si4<<=(si5&31);
si3+=si4;
si4=541065216U;
si3+=si4;
sf3=f32_reinterpret_i32(si3);
l13=sf3;
sf4=l12;
sf5=l2;
sf4*=sf5;
l12=sf4;
si4=i32_reinterpret_f32(sf4);
si5=-4096U;
si4&=si5;
sf4=f32_reinterpret_i32(si4);
l2=sf4;
sf3*=sf4;
sf2-=sf3;
sf3=l11;
sf4=l13;
sf5=l0;
sf4-=sf5;
sf3-=sf4;
sf4=l2;
sf3*=sf4;
sf2-=sf3;
sf1*=sf2;
l0=sf1;
sf2=l2;
sf3=l2;
sf2*=sf3;
l11=sf2;
sf3=3;
sf2+=sf3;
sf3=l0;
sf4=l12;
sf5=l2;
sf4+=sf5;
sf3*=sf4;
sf4=l12;
sf5=l12;
sf4*=sf5;
l0=sf4;
sf5=l0;
sf4*=sf5;
sf5=l0;
sf6=l0;
sf7=l0;
sf8=l0;
sf9=l0;
sf10=0.206975013;
sf9*=sf10;
sf10=0.230660751;
sf9+=sf10;
sf8*=sf9;
sf9=0.272728115;
sf8+=sf9;
sf7*=sf8;
sf8=0.333333343;
sf7+=sf8;
sf6*=sf7;
sf7=0.428571433;
sf6+=sf7;
sf5*=sf6;
sf6=0.600000024;
sf5+=sf6;
sf4*=sf5;
sf3+=sf4;
l13=sf3;
sf2+=sf3;
si2=i32_reinterpret_f32(sf2);
si3=-4096U;
si2&=si3;
sf2=f32_reinterpret_i32(si2);
l0=sf2;
sf1*=sf2;
sf2=l12;
sf3=l13;
sf4=l0;
sf5=-3;
sf4+=sf5;
sf5=l11;
sf4-=sf5;
sf3-=sf4;
sf2*=sf3;
sf1+=sf2;
l12=sf1;
sf2=l12;
sf3=l2;
sf4=l0;
sf3*=sf4;
l2=sf3;
sf2+=sf3;
si2=i32_reinterpret_f32(sf2);
si3=-4096U;
si2&=si3;
sf2=f32_reinterpret_i32(si2);
l0=sf2;
sf3=l2;
sf2-=sf3;
sf1-=sf2;
sf2=0.961796701;
sf1*=sf2;
sf2=l0;
sf3=-0.000117368574;
sf2*=sf3;
sf1+=sf2;
sf0+=sf1;
l2=sf0;
si1=l6;
si2=1182180U;
si1+=si2;
sf1=f32_load(i->m0,(U64)si1);
l12=sf1;
sf2=l2;
sf3=l0;
sf4=0.961914062;
sf3*=sf4;
l11=sf3;
sf2+=sf3;
sf1+=sf2;
si2=l7;
sf2=(F32)(I32)(si2);
l2=sf2;
sf1+=sf2;
si1=i32_reinterpret_f32(sf1);
si2=-4096U;
si1&=si2;
sf1=f32_reinterpret_i32(si1);
l0=sf1;
sf2=l2;
sf1-=sf2;
sf2=l12;
sf1-=sf2;
sf2=l11;
sf1-=sf2;
sf0-=sf1;
l12=sf0;
goto L5;
L19:;
si0=l6;
si1=1065353208U;
si0=si0 < si1;
if(si0){
goto L22;
}
si0=l6;
si1=1065353223U;
si0=si0 > si1;
if(si0){
goto L23;
}
sf0=l2;
sf1=-1;
sf0+=sf1;
l0=sf0;
sf1=7.05260754e-06;
sf0*=sf1;
sf1=l0;
sf2=l0;
sf1*=sf2;
sf2=0.5;
sf3=l0;
sf4=l0;
sf5=-0.25;
sf4*=sf5;
sf5=0.333333343;
sf4+=sf5;
sf3*=sf4;
sf2-=sf3;
sf1*=sf2;
sf2=-1.44269502;
sf1*=sf2;
sf0+=sf1;
l2=sf0;
sf1=l2;
sf2=l0;
sf3=1.44268799;
sf2*=sf3;
l12=sf2;
sf1+=sf2;
si1=i32_reinterpret_f32(sf1);
si2=-4096U;
si1&=si2;
sf1=f32_reinterpret_i32(si1);
l0=sf1;
sf2=l12;
sf1-=sf2;
sf0-=sf1;
l12=sf0;
goto L5;
L23:;
si0=l4;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L24;
}
sf0=l10;
sf1=1e-30;
sf0*=sf1;
sf1=1e-30;
sf0*=sf1;
goto L0;
L24:;
sf0=l10;
sf1=1.00000002e+30;
sf0*=sf1;
sf1=1.00000002e+30;
sf0*=sf1;
goto L0;
L22:;
si0=l4;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L25;
}
sf0=l10;
sf1=1e-30;
sf0*=sf1;
sf1=1e-30;
sf0*=sf1;
goto L0;
L25:;
sf0=l10;
sf1=1.00000002e+30;
sf0*=sf1;
sf1=1.00000002e+30;
sf0*=sf1;
goto L0;
L7:;
sf0=1;
sf1=l0;
sf0/=sf1;
goto L0;
L6:;
sf0=l0;
sf0=sqrtf(sf0);
goto L0;
L5:;
sf0=l0;
si1=l4;
si2=-4096U;
si1&=si2;
sf1=f32_reinterpret_i32(si1);
l2=sf1;
sf0*=sf1;
l11=sf0;
sf1=l12;
sf2=l1;
sf1*=sf2;
sf2=l1;
sf3=l2;
sf2-=sf3;
sf3=l0;
sf2*=sf3;
sf1+=sf2;
l0=sf1;
sf0+=sf1;
l1=sf0;
si0=i32_reinterpret_f32(sf0);
l3=si0;
si1=1124073472U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L29;
}
si0=l3;
si1=1124073472U;
si0=si0 != si1;
if(si0){
goto L28;
}
sf0=l0;
sf1=4.29956657e-08;
sf0+=sf1;
sf1=l1;
sf2=l11;
sf1-=sf2;
si0=sf0 > sf1;
si0=!(si0);
if(si0){
goto L27;
}
sf0=l10;
sf1=1.00000002e+30;
sf0*=sf1;
sf1=1.00000002e+30;
sf0*=sf1;
goto L0;
L29:;
sf0=l10;
sf1=1.00000002e+30;
sf0*=sf1;
sf1=1.00000002e+30;
sf0*=sf1;
goto L0;
L28:;
si0=l3;
si1=2147483647U;
si0&=si1;
l4=si0;
si1=1125515264U;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l3;
si1=-1021968384U;
si0=si0 != si1;
if(si0){
goto L30;
}
sf0=l0;
sf1=l1;
sf2=l11;
sf1-=sf2;
si0=sf0 <= sf1;
si0=!(si0);
if(si0){
goto L30;
}
sf0=l10;
sf1=1e-30;
sf0*=sf1;
sf1=1e-30;
sf0*=sf1;
goto L0;
L31:;
sf0=l10;
sf1=1e-30;
sf0*=sf1;
sf1=1e-30;
sf0*=sf1;
goto L0;
L30:;
si0=0U;
l5=si0;
si0=l4;
si1=1056964608U;
si0=si0 <= si1;
if(si0){
goto L26;
}
L27:;
si0=0U;
si1=8388608U;
si2=l3;
si3=23U;
si2>>=(si3&31);
si3=2U;
si2+=si3;
si1>>=(si2&31);
si2=l3;
si1+=si2;
l4=si1;
si2=8388607U;
si1&=si2;
si2=8388608U;
si1|=si2;
si2=22U;
si3=l4;
si4=23U;
si3>>=(si4&31);
l6=si3;
si2-=si3;
si1>>=(si2&31);
l5=si1;
si0-=si1;
si1=l5;
si2=l3;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l5=si0;
sf0=l0;
sf1=l11;
si2=-8388608U;
si3=l6;
si4=1U;
si3+=si4;
si2=(U32)((I32)si2>>(si3&31));
si3=l4;
si2&=si3;
sf2=f32_reinterpret_i32(si2);
sf1-=sf2;
l11=sf1;
sf0+=sf1;
si0=i32_reinterpret_f32(sf0);
l3=si0;
L26:;
si0=l5;
si1=23U;
si0<<=(si1&31);
si1=l3;
si2=-32768U;
si1&=si2;
sf1=f32_reinterpret_i32(si1);
l1=sf1;
sf2=0.693145752;
sf1*=sf2;
l2=sf1;
sf2=l1;
sf3=1.42860654e-06;
sf2*=sf3;
sf3=l0;
sf4=l1;
sf5=l11;
sf4-=sf5;
sf3-=sf4;
sf4=0.693147182;
sf3*=sf4;
sf2+=sf3;
l12=sf2;
sf1+=sf2;
l0=sf1;
sf2=l0;
sf3=l0;
sf4=l0;
sf5=l0;
sf4*=sf5;
l1=sf4;
sf5=l1;
sf6=l1;
sf7=l1;
sf8=l1;
sf9=4.13813694e-08;
sf8*=sf9;
sf9=-1.6533902e-06;
sf8+=sf9;
sf7*=sf8;
sf8=6.61375598e-05;
sf7+=sf8;
sf6*=sf7;
sf7=-0.00277777785;
sf6+=sf7;
sf5*=sf6;
sf6=0.166666672;
sf5+=sf6;
sf4*=sf5;
sf3-=sf4;
l1=sf3;
sf2*=sf3;
sf3=l1;
sf4=-2;
sf3+=sf4;
sf2/=sf3;
sf3=l12;
sf4=l0;
sf5=l2;
sf4-=sf5;
sf3-=sf4;
l1=sf3;
sf4=l0;
sf5=l1;
sf4*=sf5;
sf3+=sf4;
sf2-=sf3;
sf1-=sf2;
sf2=1;
sf1+=sf2;
l0=sf1;
si1=i32_reinterpret_f32(sf1);
si0+=si1;
l3=si0;
si1=8388608U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L33;
}
si0=l3;
sf0=f32_reinterpret_i32(si0);
l0=sf0;
goto L32;
L33:;
sf0=l0;
si1=l5;
sf0=f3071(i,sf0,si1);
l0=sf0;
L32:;
sf0=l10;
sf1=l0;
sf0*=sf1;
l2=sf0;
L1:;
sf0=l2;
L0:;
return sf0;
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
si0=f3069(i,si0,si1,si2);
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
si1=f3069(i,si1,si2,si3);
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

void f384(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
f385(i,si0,si1,si2);
si0=1117040U;
l2=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+24U);
l4=si0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+28U);
l5=si1;
si2=1123660U;
si3=3U;
si0=f247(i,si0,si1,si2,si3);
if(si0){
goto L2;
}
si0=1117210U;
l2=si0;
si0=l4;
si1=l5;
si2=1123663U;
si3=5U;
si0=f247(i,si0,si1,si2,si3);
if(si0){
goto L2;
}
si0=1123775U;
l2=si0;
si0=l4;
si1=l5;
si2=1117361U;
si3=21U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
si0=l4;
si1=l5;
si2=1116900U;
si3=46U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
si0=l4;
si1=l5;
si2=1123668U;
si3=15U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
si0=l4;
si1=l5;
si2=1117043U;
si3=4U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
si0=1123773U;
l2=si0;
si0=2U;
l1=si0;
si0=l4;
si1=l5;
si2=1117014U;
si3=26U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=l4;
si1=l5;
si2=1123683U;
si3=5U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=1123768U;
l2=si0;
si0=l4;
si1=l5;
si2=1116968U;
si3=46U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L5;
}
si0=l4;
si1=l5;
si2=1123688U;
si3=5U;
si0=f49(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L4;
}
L5:;
si0=5U;
l1=si0;
goto L1;
L4:;
si0=1123764U;
l2=si0;
si0=4U;
l1=si0;
si0=l4;
si1=l5;
si2=1117342U;
si3=19U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=4U;
l1=si0;
si0=l4;
si1=l5;
si2=1123693U;
si3=4U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=1123761U;
l2=si0;
si0=l4;
si1=l5;
si2=1117079U;
si3=131U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L2;
}
si0=3U;
l1=si0;
si0=l4;
si1=l5;
si2=1123697U;
si3=3U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=1123752U;
l2=si0;
si0=9U;
l1=si0;
si0=l4;
si1=l5;
si2=1116946U;
si3=22U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=l4;
si1=l5;
si2=1123700U;
si3=7U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=l4;
si1=l5;
si2=1117051U;
si3=28U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L6;
}
si0=l4;
si1=l5;
si2=1123707U;
si3=14U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L6;
}
si0=1123746U;
l2=si0;
si0=l4;
si1=l5;
si2=1117305U;
si3=37U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L3;
}
si0=6U;
l1=si0;
si0=l4;
si1=l5;
si2=1123721U;
si3=14U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=l4;
si1=l5;
si2=1117565U;
si3=36U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L6;
}
si0=l4;
si1=l5;
si2=1117452U;
si3=39U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L6;
}
si0=l4;
si1=l5;
si2=1117259U;
si3=38U;
si0=f363(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L7;
}
si0=l4;
si1=l5;
si0=f386(i,si0,si1);
if(si0){
goto L6;
}
L7:;
si0=5U;
l1=si0;
si0=1123741U;
l2=si0;
si0=l4;
si1=l5;
si2=1117213U;
si3=42U;
si0=f49(i,si0,si1,si2,si3);
if(si0){
goto L1;
}
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
si2=l5;
si3=1123735U;
f387(i,si0,si1,si2,si3);
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
f384(i,si0,si1,si2);
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
si0=1123741U;
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

void f971(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
F32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
F32 sf0,sf1;
si0=i->g0;
si1=128U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=28U;
si0+=si1;
si1=l0;
f810(i,si0,si1);
si0=l2;
si1=104U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
f785(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=56U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l2;
si2=104U;
si1+=si2;
si2=16U;
si1+=si2;
l0=si1;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=56U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=104U;
si1+=si2;
si2=8U;
si1+=si2;
l3=si1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+104U);
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l2;
si1=104U;
si0+=si1;
si1=l2;
si2=28U;
si1+=si2;
f785(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+104U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=80U;
si0+=si1;
si1=16U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=80U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l3;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+104U);
i64_store(i->m0,(U64)si0+80U,sj1);
si0=32U;
si0=f812(i,si0);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
f786(i,si0,si1);
si0=l2;
si1=104U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+16U);
si2=l2;
si2=i32_load(i->m0,(U64)si2+20U);
f57(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+104U);
if(si0){
goto L2;
}
si0=l2;
sf0=f32_load(i->m0,(U64)si0+108U);
l4=sf0;
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=80U;
si1+=si2;
f786(i,si0,si1);
si0=l2;
si1=104U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+8U);
si2=l2;
si2=i32_load(i->m0,(U64)si2+12U);
f57(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+104U);
if(si0){
goto L1;
}
si0=l0;
si1=20U;
si0+=si1;
si1=l2;
sf1=f32_load(i->m0,(U64)si1+108U);
f32_store(i->m0,(U64)si0,sf1);
si0=l0;
si1=-2147483648U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
sf1=l4;
f32_store(i->m0,(U64)si0+4U,sf1);
si0=l0;
si1=-2147483648U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+112U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+108U,si1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l1;
si1=l2;
si2=104U;
si1+=si2;
f966(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+80U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+92U);
f788(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+56U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+68U);
f788(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+40U);
f788(i,si0,si1);
si0=l2;
si1=128U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=1113048U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=1113064U;
f14(i,si0);
UNREACHABLE;
L2:;
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+105U);
i32_store8(i->m0,(U64)si0+127U,si1);
si0=1178304U;
si1=43U;
si2=l2;
si3=127U;
si2+=si3;
si3=1111796U;
si4=1113080U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+105U);
i32_store8(i->m0,(U64)si0+127U,si1);
si0=1178304U;
si1=43U;
si2=l2;
si3=127U;
si2+=si3;
si3=1111796U;
si4=1113096U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f1874(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11) {
U32 l12=0;
U64 l13=0;
U64 l14=0;
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
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=128U;
si0-=si1;
l12=si0;
i->g0=si0;
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+8U);
sj2=1ULL;
sj1+=sj2;
l13=sj1;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l1;
sj0=i64_load(i->m0,(U64)si0+128U);
l14=sj0;
si0=!(sj0);
if(si0){
goto L5;
}
sj0=l13;
sj1=l14;
si0=sj0 > sj1;
if(si0){
goto L4;
}
L5:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+120U);
l15=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l12;
si1=56U;
si0+=si1;
si1=l15;
sj2=l13;
si3=l1;
si4=124U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+20U);
TF(i->t0,si3,void (*)(glicolwasmInstance*,U32,U32,U64))(i,si0,si1,sj2);
si0=l12;
si0=i32_load8_u(i->m0,(U64)si0+56U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l12;
sj0=i64_load(i->m0,(U64)si0+56U);
l13=sj0;
si0=l12;
si1=96U;
si0+=si1;
si1=l11;
i32_store16(i->m0,(U64)si0,si1);
si0=l12;
si1=l10;
i32_store16(i->m0,(U64)si0+94U,si1);
si0=l12;
sj1=l13;
i64_store(i->m0,(U64)si0+100U,sj1);
si0=l12;
si1=29U;
i32_store8(i->m0,(U64)si0+92U,si1);
si0=l12;
si1=92U;
si0+=si1;
si0=f97(i,si0);
l9=si0;
si0=l12;
si1=0U;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l12;
si1=92U;
si0+=si1;
f1492(i,si0);
goto L3;
L4:;
si0=l12;
si1=96U;
si0+=si1;
si1=l11;
i32_store16(i->m0,(U64)si0,si1);
si0=l12;
si1=l10;
i32_store16(i->m0,(U64)si0+94U,si1);
si0=l12;
si1=24U;
i32_store8(i->m0,(U64)si0+92U,si1);
si0=l12;
si1=92U;
si0+=si1;
si0=f97(i,si0);
l9=si0;
L3:;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+36U);
si1=l1;
si2=136U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l7;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l7;
si2=108U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l15=si1;
si2=l15;
si3=8U;
si2=si2 > si3;
si0=si2?si0:si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=124U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l7;
si1=i32_load(i->m0,(U64)si1+116U);
l15=si1;
si2=l15;
si3=5U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l4;
si1=i32_load(i->m0,(U64)si1);
si1=i32_load(i->m0,(U64)si1);
l16=si1;
si0+=si1;
si1=l1;
si2=148U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l2;
si1=24U;
si0+=si1;
l17=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
si0=i32_load(i->m0,(U64)si0);
l18=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
si0=i32_load(i->m0,(U64)si0);
l19=si0;
si0=l12;
si1=40U;
si0+=si1;
si1=l7;
si2=116U;
si1+=si2;
f1008(i,si0,si1);
si0=l12;
si0=i32_load(i->m0,(U64)si0+44U);
l20=si0;
si1=l9;
si2=l20;
si3=l9;
si2=si2 < si3;
si0=si2?si0:si1;
l21=si0;
si0=l12;
si0=i32_load(i->m0,(U64)si0+40U);
l22=si0;
si0=0U;
l9=si0;
L10:;
{
si0=l9;
si1=l21;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l22;
si1=l9;
si2=2U;
si1<<=(si2&31);
l23=si1;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l15=si0;
si1=l15;
si1=i32_load(i->m0,(U64)si1);
l24=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l24;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l8;
si1=l23;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l24=si0;
sj0=i64_load(i->m0,(U64)si0);
l13=sj0;
si0=l24;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
goto L11;
L12:;
si0=l9;
si1=l20;
si0=si0 < si1;
if(si0){
goto L13;
}
sj0=l13;
sj1=-256ULL;
sj0&=sj1;
sj1=13ULL;
sj0|=sj1;
l13=sj0;
goto L11;
L13:;
si0=l22;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l24=si0;
si1=l24;
si1=i32_load(i->m0,(U64)si1);
l23=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l23;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l12;
si1=l24;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l21;
si1=1U;
si0+=si1;
l21=si0;
sj0=l13;
sj1=-256ULL;
sj0&=sj1;
sj1=13ULL;
sj0|=sj1;
l13=sj0;
si0=l12;
si1=92U;
si0+=si1;
f1038(i,si0);
L11:;
sj0=l13;
sj1=255ULL;
sj0&=sj1;
sj1=13ULL;
si0=sj0 == sj1;
if(si0){
goto L14;
}
si0=l12;
sj1=l13;
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l12;
si1=92U;
si0+=si1;
si1=l15;
f1890(i,si0,si1);
si0=l4;
si1=l12;
si2=92U;
si1+=si2;
si1=f81(i,si1);
si2=0U;
si3=l12;
si4=56U;
si3+=si4;
si0=f1891(i,si0,si1,si2,si3);
goto L10;
L14:;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+144U);
l23=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l22=si0;
si0=l6;
if(si0){
goto L16;
}
goto L15;
L16:;
si0=l6;
si0=i32_load(i->m0,(U64)si0+4U);
l9=si0;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l9;
si1=12U;
si0+=si1;
l9=si0;
L18:;
{
si0=l9;
si1=-4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l15=si0;
si1=l15;
si1=i32_load(i->m0,(U64)si1);
l21=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l21;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l9;
si0=i32_load(i->m0,(U64)si0);
l21=si0;
si1=l21;
si1=i32_load(i->m0,(U64)si1);
l24=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l24;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l2;
si1=l15;
si2=l21;
f1892(i,si0,si1,si2);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
if(si0){
goto L18;
}
}
L17:;
si0=l6;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si1=l9;
si1=i32_load(i->m0,(U64)si1);
l15=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l15;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
si0=l17;
si1=l9;
f84(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+8U);
l9=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l9;
si1=l9;
si1=i32_load(i->m0,(U64)si1);
l15=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l15;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
L19:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+48U);
l8=si0;
si0=l2;
si1=l9;
i32_store(i->m0,(U64)si0+48U,si1);
L15:;
si0=l23;
si1=3U;
si0=si0 > si1;
l15=si0;
si0=l12;
si1=32U;
si0+=si1;
si1=l7;
si2=12U;
si1+=si2;
f1216(i,si0,si1);
si0=l12;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
si6=l12;
si6=i32_load(i->m0,(U64)si6+32U);
si7=l12;
si7=i32_load(i->m0,(U64)si7+36U);
si8=1U;
f85(i,si0,si1,si2,si3,si4,si5,si6,si7,si8);
si0=l12;
si0=i32_load8_u(i->m0,(U64)si0+48U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l12;
si0=i32_load(i->m0,(U64)si0+52U);
l1=si0;
si0=l12;
si0=i32_load(i->m0,(U64)si0+48U);
l21=si0;
goto L20;
L21:;
si0=l12;
si0=i32_load(i->m0,(U64)si0+52U);
l9=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l24=si0;
si1=-33U;
si0+=si1;
switch(si0){
case 0:
goto L23;
case 1:
goto L25;
default:
goto L24;
}
L25:;
si0=l12;
si1=56U;
si0+=si1;
si1=l9;
si2=36U;
si0=f3069(i,si0,si1,si2);
si0=l12;
si1=92U;
si0+=si1;
si1=l12;
si2=56U;
si1+=si2;
si2=l10;
si3=l11;
si1=f1687(i,si1,si2,si3);
si2=36U;
si0=f3069(i,si0,si1,si2);
si0=l12;
si1=92U;
si0+=si1;
si0=f97(i,si0);
l1=si0;
si0=13U;
l21=si0;
goto L22;
L24:;
si0=l24;
si0=f1893(i,si0);
if(si0){
goto L28;
}
si0=l12;
si1=56U;
si0+=si1;
si1=l7;
si1=i32_load(i->m0,(U64)si1);
f1180(i,si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L27;
}
si0=l12;
si1=24U;
si0+=si1;
si1=l6;
si1=i32_load(i->m0,(U64)si1);
si2=88U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f1498(i,si0,si1);
si0=l12;
si0=i32_load(i->m0,(U64)si0+24U);
l21=si0;
si0=!(si0);
if(si0){
goto L27;
}
si0=l12;
si0=i32_load(i->m0,(U64)si0+28U);
l1=si0;
goto L26;
L28:;
si0=l12;
si1=56U;
si0+=si1;
si1=l9;
si2=36U;
si0=f3069(i,si0,si1,si2);
si0=l12;
si1=92U;
si0+=si1;
si1=l12;
si2=56U;
si1+=si2;
si2=l10;
si3=l11;
si1=f1687(i,si1,si2,si3);
si2=36U;
si0=f3069(i,si0,si1,si2);
si0=l12;
si1=92U;
si0+=si1;
si0=f97(i,si0);
l1=si0;
si0=13U;
l21=si0;
goto L22;
L27:;
si0=l12;
si1=16U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+28U);
f1498(i,si0,si1);
si0=l12;
si0=i32_load(i->m0,(U64)si0+20U);
si1=0U;
si2=l12;
si2=i32_load(i->m0,(U64)si2+16U);
l21=si2;
si0=si2?si0:si1;
l1=si0;
si0=l21;
si1=1178664U;
si2=l21;
si0=si2?si0:si1;
l21=si0;
L26:;
si0=l12;
si1=8U;
si0+=si1;
si1=l1;
f999(i,si0,si1);
si0=l12;
si0=i32_load(i->m0,(U64)si0+8U);
l24=si0;
si0=l12;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l21;
si2=l1;
si0=f3069(i,si0,si1,si2);
l21=si0;
si0=l12;
si1=124U;
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l12;
si1=120U;
si0+=si1;
si1=l21;
i32_store(i->m0,(U64)si0,si1);
si0=l12;
si1=96U;
si0+=si1;
si1=l11;
i32_store16(i->m0,(U64)si0,si1);
si0=l12;
si1=112U;
si0+=si1;
si1=l12;
si2=64U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l12;
si1=l24;
i32_store(i->m0,(U64)si0+116U,si1);
si0=l12;
si1=l9;
i32_store(i->m0,(U64)si0+100U,si1);
si0=l12;
si1=l10;
i32_store16(i->m0,(U64)si0+94U,si1);
si0=l12;
si1=9U;
i32_store8(i->m0,(U64)si0+92U,si1);
si0=l12;
si1=l12;
sj1=i64_load(i->m0,(U64)si1+56U);
i64_store(i->m0,(U64)si0+104U,sj1);
si0=l12;
si1=92U;
si0+=si1;
si0=f97(i,si0);
l1=si0;
si0=13U;
l21=si0;
goto L20;
L23:;
si0=l9;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=l9;
si0=i32_load(i->m0,(U64)si0+8U);
l21=si0;
si0=l24;
si1=33U;
si0=si0 == si1;
if(si0){
goto L22;
}
si0=l9;
f1367(i,si0);
L22:;
si0=l9;
f87(i,si0);
L20:;
si0=l22;
si1=l23;
si2=l15;
si0=si2?si0:si1;
l9=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l16;
f1894(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
si1=l16;
f1895(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l16;
f1896(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
si1=l19;
f89(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
si1=l18;
f1894(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l18;
f89(i,si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L29;
}
si0=l2;
si1=48U;
si0+=si1;
f1107(i,si0);
si0=l2;
si1=l8;
i32_store(i->m0,(U64)si0+48U,si1);
L29:;
si0=l3;
si1=l9;
f1897(i,si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l21;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l12;
si1=96U;
si0+=si1;
si1=l11;
i32_store16(i->m0,(U64)si0,si1);
si0=l12;
si1=l10;
i32_store16(i->m0,(U64)si0+94U,si1);
si0=l12;
si1=27U;
i32_store8(i->m0,(U64)si0+92U,si1);
si0=l12;
si1=92U;
si0+=si1;
si0=f97(i,si0);
l9=si0;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
goto L1;
L7:;
UNREACHABLE;
L6:;
si0=l12;
si1=96U;
si0+=si1;
si1=l11;
i32_store16(i->m0,(U64)si0,si1);
si0=l12;
si1=l10;
i32_store16(i->m0,(U64)si0+94U,si1);
si0=l12;
si1=25U;
i32_store8(i->m0,(U64)si0+92U,si1);
si0=l12;
si1=92U;
si0+=si1;
si0=f97(i,si0);
l9=si0;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l9;
i32_store(i->m0,(U64)si0+4U,si1);
L1:;
si0=l12;
si1=128U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1098(glicolwasmInstance*i,U32 l0) {
U32 si0;
si0=l0;
f309(i,si0);
si0=l0;
f359(i,si0);
L0:;
}

