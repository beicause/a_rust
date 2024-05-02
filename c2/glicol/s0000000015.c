#include "w2c2_base.h"

#include "glicol.h"

void f1205(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U64 l3,U32 l4,U32 l5) {
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l6=si0;
i->g0=si0;
sj0=l3;
sj1=25ULL;
sj0>>=(sj1&63);
sj1=127ULL;
sj0&=sj1;
sj1=72340172838076673ULL;
sj0*=sj1;
l7=sj0;
sj0=l3;
si0=(U32)(sj0);
l8=si0;
si0=0U;
l9=si0;
si0=0U;
l10=si0;
L2:;
{
si0=l6;
si1=l1;
si2=l8;
si3=l2;
si2&=si3;
l8=si2;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
l3=sj1;
sj2=l7;
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
i64_store(i->m0,(U64)si0+24U,sj1);
L3:;
{
si0=l6;
si1=16U;
si0+=si1;
si1=l6;
si2=24U;
si1+=si2;
f46(i,si0,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=1U;
l12=si0;
si0=l10;
si1=1U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l6;
si1=8U;
si0+=si1;
si1=l2;
sj2=l3;
si3=l8;
f490(i,si0,si1,sj2,si3);
si0=l6;
si0=i32_load(i->m0,(U64)si0+12U);
l13=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+8U);
l12=si0;
L5:;
sj0=l3;
sj1=l3;
sj2=1ULL;
sj1<<=(sj2&63);
sj0&=sj1;
sj1=-9187201950435737472ULL;
sj0&=sj1;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si1=l8;
si0+=si1;
l8=si0;
si0=l12;
l10=si0;
goto L2;
L6:;
si0=1U;
l2=si0;
si0=l1;
si1=l13;
si0=f1156(i,si0,si1);
l12=si0;
goto L1;
L4:;
si0=l4;
si1=l6;
si1=i32_load(i->m0,(U64)si1+20U);
si2=l8;
si1+=si2;
si2=l2;
si1&=si2;
l12=si1;
si2=l5;
si0=TF(i->t0,si2,U32 (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L3;
}
}
}
si0=0U;
l2=si0;
L1:;
si0=l0;
si1=l12;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2542(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2;
F32 sf1;
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
f2432(i,si0,si1);
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
sf1=f2541(i,si1,si2,si3,si4);
f32_store(i->m0,(U64)si0+4U,sf1);
si0=l0;
si1=5U;
i32_store(i->m0,(U64)si0,si1);
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
si2=1171180U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1171228U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f1130(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
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
si2=4U;
si1+=si2;
f1161(i,si0,si1);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+9U);
l3=si0;
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
goto L1;
L2:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=1U;
l1=si0;
L1:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
si2=1U;
si1&=si2;
i32_store8(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f293(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
f977(i,si0,si1);
L0:;
}

void f1295(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
f1175(i,si0,si1);
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
f1175(i,si0,si1);
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
si1=1181848U;
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
si1=1128416U;
si0=f1509(i,si0,si1);
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
si1=1128416U;
si0=f1509(i,si0,si1);
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
si1=1128416U;
si0=f1509(i,si0,si1);
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
si1=1128416U;
si0=f1509(i,si0,si1);
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
si1=1181792U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l3=si0;
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=1181804U;
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

void f1362(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=1166164U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f1363(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=1166164U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f1364(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=1166164U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f2756(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si2=1172640U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f957(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
f956(i,si0,si1);
si0=0U;
L0:;
return si0;
}

U32 f1921(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l0;
si1=8U;
si0+=si1;
l3=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=2U;
si0<<=(si1&31);
l0=si0;
L2:;
{
si0=l0;
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=-4U;
si0+=si1;
l0=si0;
si0=l1;
si1=l2;
si2=l3;
si0=f1973(i,si0,si1,si2);
l5=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
}
L1:;
si0=l4;
si1=0U;
si0=si0 != si1;
L0:;
return si0;
}

void f772(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
F64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj1;
F64 sd0,sd1;
si0=i->g0;
si1=96U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
sj1=0ULL;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l5=si0;
si0=l3;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+48U,si1);
si0=l3;
si1=l5;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l5;
si2=l4;
si3=40U;
si2*=si3;
l1=si2;
si1+=si2;
l6=si1;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l5;
si1=40U;
si0+=si1;
l7=si0;
si0=l3;
si1=56U;
si0+=si1;
si1=4U;
si0|=si1;
l8=si0;
si0=l3;
si1=8U;
si0+=si1;
l9=si0;
sd0=0;
l10=sd0;
si0=0U;
l11=si0;
L3:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si1=40U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l7;
l6=si0;
L5:;
si0=l3;
si1=l6;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l3;
si1=40U;
si0+=si1;
f749(i,si0);
sd0=l10;
sd0=fabs(sd0);
sd1=1.7763568394002505e-15;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l11;
si1=1U;
si0&=si1;
if(si0){
goto L6;
}
si0=l3;
f750(i,si0);
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
goto L2;
L6:;
si0=l2;
si1=l3;
si0=f766(i,si0,si1);
l5=si0;
si0=l3;
si1=1U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l5;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=4U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
l9=si0;
goto L2;
L4:;
si0=l3;
si1=l4;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l8;
si1=l5;
si2=4U;
si1+=si2;
si2=36U;
si0=f3069(i,si0,si1,si2);
si0=l4;
si0=!(si0);
if(si0){
goto L8;
}
si0=l11;
si1=1U;
si0&=si1;
if(si0){
goto L10;
}
si0=l3;
f750(i,si0);
si0=l3;
si1=l3;
si2=56U;
si1+=si2;
si2=40U;
si0=f3069(i,si0,si1,si2);
goto L9;
L10:;
si0=l2;
si1=l3;
si0=f766(i,si0,si1);
l4=si0;
si0=l3;
si1=l2;
si2=l3;
si3=56U;
si2+=si3;
si1=f766(i,si1,si2);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=4U;
i32_store(i->m0,(U64)si0,si1);
L9:;
si0=1U;
l11=si0;
goto L7;
L8:;
sd0=l10;
si1=l3;
sd1=f64_load(i->m0,(U64)si1+64U);
sd0+=sd1;
l10=sd0;
si0=l3;
si1=56U;
si0+=si1;
f750(i,si0);
L7:;
si0=l5;
si1=40U;
si0+=si1;
l5=si0;
si0=l7;
si1=40U;
si0+=si1;
l7=si0;
si0=l1;
si1=-40U;
si0+=si1;
l1=si0;
goto L3;
}
L2:;
si0=l9;
sd1=l10;
f64_store(i->m0,(U64)si0,sd1);
L1:;
si0=l0;
si1=l3;
si2=40U;
si0=f3069(i,si0,si1,si2);
si0=l3;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f778(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=l1;
si2=l2;
si3=0U;
f777(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
si0=l0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+8U);
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f4(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=2U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1067932U;
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
i32_store(i->m0,(U64)si0+40U,si1);
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l2;
f377(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f1792(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si0=f691(i,si0,si1);
L0:;
return si0;
}

void f1993(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
if(si0){
goto L2;
}
si0=0U;
l3=si0;
goto L1;
L2:;
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
f1487(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l4=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
if(si0){
goto L1;
}
si0=0U;
l3=si0;
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0+16U,si1);
L1:;
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2285(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f1031(i,si0,si1,si2,si3);
si0=l6;
si1=l8;
si2=l3;
si3=l4;
si4=3U;
si3<<=(si4&31);
si2+=si3;
si3=l12;
f1032(i,si0,si1,si2,si3);
si0=l10;
si1=l11;
si2=l7;
si3=12U;
si2*=si3;
si0=f3080(i,si0,si1,si2);
si0=l6;
si1=l6;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
si2=l7;
si3=3U;
si2<<=(si3&31);
si0=f3080(i,si0,si1,si2);
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
f1033(i,si0,si1,si2,si3);
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
si0=f3080(i,si0,si1,si2);
si0=l3;
si1=l4;
si2=l5;
si3=1U;
si2+=si3;
f1034(i,si0,si1,si2);
si0=l6;
si1=0U;
si2=l7;
si3=1U;
si2+=si3;
f1034(i,si0,si1,si2);
goto L1;
L5:;
si0=1120336U;
si1=27U;
si2=1120560U;
f16(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=1120576U;
si1=50U;
si2=1120628U;
f16(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1120644U;
si1=40U;
si2=1120684U;
f16(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1120504U;
si1=40U;
si2=1120700U;
f16(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f2154(glicolwasmInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=80U;
si1=8U;
si0=f1027(i,si0,si1);
si1=l0;
si2=80U;
si0=f3069(i,si0,si1,si2);
L0:;
return si0;
}

void f2738(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1;
si0=i->g0;
si1=560U;
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
i64_store(i->m0,(U64)si0+64U,sj1);
si0=l5;
si1=256U;
si0+=si1;
si1=l5;
si2=64U;
si1+=si2;
f1272(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+256U);
l6=si0;
if(si0){
goto L3;
}
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+260U);
l6=si1;
i32_store(i->m0,(U64)si0+24U,si1);
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
i64_store(i->m0,(U64)si0+64U,sj1);
si0=l5;
si1=64U;
si0+=si1;
si0=f2350(i,si0);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L1;
}
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
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+28U,si1);
si0=1172740U;
si1=l3;
si0=f1414(i,si0,si1);
if(si0){
goto L8;
}
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+264U,si1);
si0=l5;
sj1=17179869184ULL;
i64_store(i->m0,(U64)si0+256U,sj1);
goto L7;
L8:;
si0=l5;
si1=l5;
si2=28U;
si1+=si2;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l5;
si2=36U;
si1+=si2;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l8;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l5;
sj1=17179869184ULL;
i64_store(i->m0,(U64)si0+52U,sj1);
si0=l5;
si1=2U;
i32_store(i->m0,(U64)si0+136U,si1);
si0=l5;
si1=2U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
si0=i32_load(i->m0,(U64)si0+24U);
l4=si0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l5;
si1=l4;
si2=8U;
si1+=si2;
l4=si1;
i32_store(i->m0,(U64)si0+208U,si1);
si0=l5;
si1=l4;
si2=l3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(i->m0,(U64)si0+212U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+216U,si1);
si0=l5;
si1=256U;
si0+=si1;
si1=l5;
si2=64U;
si1+=si2;
si2=152U;
si0=f3069(i,si0,si1,si2);
si0=l5;
si0=i32_load(i->m0,(U64)si0+256U);
l4=si0;
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
i32_store(i->m0,(U64)si0+460U,si1);
si0=l5;
si1=l5;
si2=52U;
si1+=si2;
i32_store(i->m0,(U64)si0+456U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+452U,si1);
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l5;
si1=64U;
si0+=si1;
si1=l5;
si2=452U;
si1+=si2;
f1169(i,si0,si1);
L9:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+400U);
l4=si0;
si0=!(si0);
if(si0){
goto L10;
}
si0=l4;
si1=l5;
si2=404U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l3;
si1=l4;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l3=si0;
L11:;
{
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+544U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+512U,si1);
si0=l5;
si1=1U;
i32_store(i->m0,(U64)si0+488U,si1);
si0=l5;
si1=l6;
si2=56U;
si1+=si2;
l6=si1;
si2=0U;
si3=l6;
si3=i32_load(i->m0,(U64)si3);
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+492U,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l5;
si1=488U;
si0+=si1;
si1=l5;
si2=452U;
si1+=si2;
f1169(i,si0,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L11;
}
}
L10:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+328U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l5;
si1=328U;
si0+=si1;
si1=l5;
si2=452U;
si1+=si2;
f1169(i,si0,si1);
L12:;
si0=l5;
si1=2U;
i32_store(i->m0,(U64)si0+136U,si1);
si0=l5;
si1=2U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l8;
si2=180U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l4=si1;
i32_store(i->m0,(U64)si0+208U,si1);
si0=l5;
si1=l4;
si2=l8;
si3=184U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(i->m0,(U64)si0+212U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+216U,si1);
si0=l5;
si1=256U;
si0+=si1;
si1=l5;
si2=64U;
si1+=si2;
si2=152U;
si0=f3069(i,si0,si1,si2);
si0=l5;
si0=i32_load(i->m0,(U64)si0+256U);
l4=si0;
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
i32_store(i->m0,(U64)si0+460U,si1);
si0=l5;
si1=l5;
si2=52U;
si1+=si2;
i32_store(i->m0,(U64)si0+456U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+452U,si1);
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l5;
si1=64U;
si0+=si1;
si1=l5;
si2=452U;
si1+=si2;
f1169(i,si0,si1);
L13:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+400U);
l4=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l4;
si1=l5;
si2=404U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l3;
si1=l4;
si0-=si1;
si1=2U;
si0>>=(si1&31);
l3=si0;
L15:;
{
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+544U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+512U,si1);
si0=l5;
si1=1U;
i32_store(i->m0,(U64)si0+488U,si1);
si0=l5;
si1=l4;
si1=i32_load(i->m0,(U64)si1);
si2=56U;
si1+=si2;
l6=si1;
si2=0U;
si3=l6;
si3=i32_load(i->m0,(U64)si3);
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+492U,si1);
si0=l4;
si1=4U;
si0+=si1;
l4=si0;
si0=l5;
si1=488U;
si0+=si1;
si1=l5;
si2=452U;
si1+=si2;
f1169(i,si0,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L15;
}
}
L14:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+328U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l5;
si1=328U;
si0+=si1;
si1=l5;
si2=452U;
si1+=si2;
f1169(i,si0,si1);
L16:;
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+228U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+212U,si1);
si0=l5;
si1=2U;
i32_store(i->m0,(U64)si0+136U,si1);
si0=l5;
si1=2U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l8;
si2=192U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
i32_store(i->m0,(U64)si0+236U,si1);
si0=l5;
si1=l8;
si1=i32_load(i->m0,(U64)si1+188U);
l4=si1;
i32_store(i->m0,(U64)si0+232U,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+220U,si1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+216U,si1);
si0=l5;
si1=l8;
si2=196U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=0U;
si3=l4;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l5;
si1=l4;
si2=0U;
si1=si1 != si2;
l4=si1;
i32_store(i->m0,(U64)si0+224U,si1);
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+208U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+248U,si1);
si0=l5;
si1=256U;
si0+=si1;
si1=l5;
si2=64U;
si1+=si2;
si2=184U;
si0=f3069(i,si0,si1,si2);
si0=l5;
si0=i32_load(i->m0,(U64)si0+256U);
l4=si0;
si0=l5;
si1=l5;
si2=48U;
si1+=si2;
i32_store(i->m0,(U64)si0+448U,si1);
si0=l5;
si1=l5;
si2=52U;
si1+=si2;
i32_store(i->m0,(U64)si0+444U,si1);
si0=l5;
si1=l5;
si2=40U;
si1+=si2;
i32_store(i->m0,(U64)si0+440U,si1);
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l5;
si1=64U;
si0+=si1;
si1=l5;
si2=440U;
si1+=si2;
f1169(i,si0,si1);
L17:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+400U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l5;
si1=452U;
si0+=si1;
si1=l5;
si2=400U;
si1+=si2;
si2=36U;
si0=f3069(i,si0,si1,si2);
L19:;
{
si0=l5;
si1=452U;
si0+=si1;
si0=f389(i,si0);
l4=si0;
si0=!(si0);
if(si0){
goto L18;
}
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+544U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+512U,si1);
si0=l5;
si1=1U;
i32_store(i->m0,(U64)si0+488U,si1);
si0=l5;
si1=l4;
si1=i32_load(i->m0,(U64)si1);
si2=56U;
si1+=si2;
l4=si1;
si2=0U;
si3=l4;
si3=i32_load(i->m0,(U64)si3);
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+492U,si1);
si0=l5;
si1=488U;
si0+=si1;
si1=l5;
si2=440U;
si1+=si2;
f1169(i,si0,si1);
goto L19;
}
L18:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+328U);
si1=2U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l5;
si1=328U;
si0+=si1;
si1=l5;
si2=440U;
si1+=si2;
f1169(i,si0,si1);
L20:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
l4=si0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l6=si0;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l5;
sj1=0ULL;
i64_store(i->m0,(U64)si0+80U,sj1);
si0=l5;
si1=l6;
si2=8U;
si1+=si2;
l6=si1;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l6;
si2=l8;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(i->m0,(U64)si0+76U,si1);
si0=l5;
si1=l4;
si2=8U;
si1+=si2;
l4=si1;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l5;
si1=l4;
si2=l3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
i32_store(i->m0,(U64)si0+68U,si1);
L22:;
{
si0=l5;
si1=8U;
si0+=si1;
si1=l5;
si2=64U;
si1+=si2;
f2739(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+48U);
l6=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l4;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l8;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
goto L23;
L24:;
si0=l5;
si1=l8;
si2=8U;
si1+=si2;
f1007(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+4U);
l8=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
L23:;
si0=l6;
si1=l5;
si2=52U;
si1+=si2;
si2=l4;
si3=l8;
si4=l3;
si4=i32_load(i->m0,(U64)si4);
si5=8U;
si4+=si5;
si5=l5;
si5=i32_load(i->m0,(U64)si5+40U);
si6=l5;
si6=i32_load(i->m0,(U64)si6+44U);
f2740(i,si0,si1,si2,si3,si4,si5,si6);
goto L22;
}
L21:;
si0=l5;
si1=256U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l5;
si2=52U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+52U);
i64_store(i->m0,(U64)si0+256U,sj1);
L7:;
si0=l5;
si1=64U;
si0+=si1;
si1=l5;
si2=256U;
si1+=si2;
f2412(i,si0,si1);
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+64U);
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=24U;
si0+=si1;
f1038(i,si0);
si0=l5;
si1=560U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=1U;
si1=1U;
si2=1172772U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+260U);
i32_store(i->m0,(U64)si0+68U,si1);
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0+64U,si1);
si0=1178304U;
si1=43U;
si2=l5;
si3=64U;
si2+=si3;
si3=1119116U;
si4=1172772U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1172772U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1172772U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f2739(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
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
si2=-4U;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=0U;
l2=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l4=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=l4;
si2=-4U;
si1+=si2;
l2=si1;
i32_store(i->m0,(U64)si0+12U,si1);
L3:;
si0=l3;
si1=0U;
si2=l2;
si0=si2?si0:si1;
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

void f2849(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
sf1=truncf(sf1);
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

void f2323(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=12U;
si0+=si1;
si1=0U;
si2=l0;
si3=l0;
f1865(i,si0,si1,si2,si3);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f844(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=8U;
si0+=si1;
si1=l3;
f66(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l2;
si2=l3;
si0=f3069(i,si0,si1,si2);
l6=si0;
si0=l4;
si1=28U;
si0+=si1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=24U;
si0+=si1;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(i->m0,(U64)si0+20U,si1);
si0=0U;
l6=si0;
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=1U;
l7=si0;
si0=l1;
si1=132U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si1=l3;
si0+=si1;
l8=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l8;
si1=l1;
si2=128U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l2;
si1=l3;
si2=l1;
si2=i32_load(i->m0,(U64)si2+124U);
si3=l5;
si2+=si3;
si3=l3;
si0=f247(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l8;
i32_store(i->m0,(U64)si0+132U,si1);
si0=0U;
l7=si0;
si0=1U;
l6=si0;
L1:;
si0=l1;
si1=l5;
si2=l4;
si3=16U;
si2+=si3;
si3=l6;
f825(i,si0,si1,si2,si3);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l7;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2112(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l2;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+44U,sj1);
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
switch(si0){
case 0:
goto L4;
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
default:
goto L15;
}
L15:;
si0=l3;
si1=-85U;
si0+=si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L8;
case 2:
goto L7;
case 3:
goto L6;
case 4:
goto L5;
default:
goto L3;
}
L14:;
si0=l2;
si1=72U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l2;
si1=1178720U;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l2;
si1=170U;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0+84U,si1);
si0=l2;
si1=l2;
si2=84U;
si1+=si2;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=1116712U;
si2=l2;
si3=60U;
si2+=si3;
si0=f683(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L13:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l1;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
goto L16;
L17:;
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
f1007(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
l1=si0;
L16:;
si0=l2;
si1=44U;
si0+=si1;
si1=l1;
si2=l3;
si0=f409(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L12:;
si0=l2;
si1=l1;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l2;
si1=72U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l2;
si1=1178720U;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l2;
si1=171U;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=84U;
si1+=si2;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(i->m0,(U64)si0+84U,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=1116712U;
si2=l2;
si3=60U;
si2+=si3;
si0=f683(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L11:;
si0=l2;
si1=l1;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l2;
si1=72U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l2;
si1=1153852U;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l2;
si1=172U;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=84U;
si1+=si2;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(i->m0,(U64)si0+84U,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=1116712U;
si2=l2;
si3=60U;
si2+=si3;
si0=f683(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L10:;
si0=l2;
si1=44U;
si0+=si1;
si1=1123775U;
si2=6U;
si0=f409(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L9:;
si0=l2;
si1=l1;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l2;
si1=72U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l2;
si1=1178720U;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l2;
si1=173U;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=84U;
si1+=si2;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(i->m0,(U64)si0+84U,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=1116712U;
si2=l2;
si3=60U;
si2+=si3;
si0=f683(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L8:;
si0=l2;
si1=44U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
l1=si1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+8U);
si0=f409(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L7:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l1;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
goto L18;
L19:;
si0=l2;
si1=24U;
si0+=si1;
si1=l3;
f1007(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
l1=si0;
L18:;
si0=l2;
si1=44U;
si0+=si1;
si1=l1;
si2=l3;
si0=f409(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L6:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l1;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
goto L20;
L21:;
si0=l2;
si1=32U;
si0+=si1;
si1=l3;
f1007(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+36U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+32U);
l1=si0;
L20:;
si0=l2;
si1=44U;
si0+=si1;
si1=l1;
si2=l3;
si0=f409(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L5:;
si0=l2;
si1=44U;
si0+=si1;
si1=1153868U;
si2=5U;
si0=f409(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l2;
si1=l1;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l2;
si1=72U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l2;
si1=1178720U;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l2;
si1=134U;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l2;
si1=l2;
si2=84U;
si1+=si2;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l2;
si1=l2;
si2=56U;
si1+=si2;
i32_store(i->m0,(U64)si0+84U,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=1116712U;
si2=l2;
si3=60U;
si2+=si3;
si0=f683(i,si0,si1,si2);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
f1416(i,si0,si1);
si0=l2;
si1=44U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+8U);
si2=l2;
si2=i32_load(i->m0,(U64)si2+12U);
si0=f409(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=1116736U;
si1=55U;
si2=l2;
si3=95U;
si2+=si3;
si3=1116792U;
si4=1116884U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+44U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=44U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
L0:;
}

void f60(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
F32 l5=0;
U32 si0,si1,si2,si3,si4;
F32 sf0,sf1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
L3:;
{
si0=l2;
si1=l1;
f55(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
if(si0){
goto L4;
}
si0=0U;
l1=si0;
goto L2;
L4:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
}
si0=l2;
si1=16U;
si0+=si1;
si1=l3;
si2=l4;
si3=32U;
f56(i,si0,si1,si2,si3);
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+20U);
l1=si1;
si2=l2;
si2=i32_load(i->m0,(U64)si2+24U);
f57(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l2;
sf0=f32_load(i->m0,(U64)si0+12U);
l5=sf0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+16U);
si1=l1;
f58(i,si0,si1);
si0=1U;
l1=si0;
L2:;
si0=l0;
sf1=l5;
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
si1=i32_load8_u(i->m0,(U64)si1+9U);
i32_store8(i->m0,(U64)si0+31U,si1);
si0=1178304U;
si1=43U;
si2=l2;
si3=31U;
si2+=si3;
si3=1054380U;
si4=1057624U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f669(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=1114112U;
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si1=-1114111U;
si0+=si1;
si1=0U;
si2=l2;
si3=-1114112U;
si2+=si3;
si3=3U;
si2=si2 < si3;
si0=si2?si0:si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L1;
default:
goto L5;
}
L5:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=1114112U;
l2=si0;
goto L2;
L4:;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
i32_store(i->m0,(U64)si0,si1);
si0=1114113U;
l2=si0;
goto L2;
L3:;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=1114114U;
l2=si0;
L2:;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+8U,si1);
L1:;
si0=l1;
L0:;
return si0;
}

U32 f1820(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si0=f1431(i,si0,si1);
L0:;
return si0;
}

void f934(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si2=97U;
si3=122U;
f950(i,si0,si1,si2,si3);
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
si2=65U;
si3=90U;
f950(i,si0,si1,si2,si3);
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
si2=48U;
si3=57U;
f950(i,si0,si1,si2,si3);
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

F32 f3117(glicolwasmInstance*i,F32 l0) {
U32 l1=0;
U32 l2=0;
F64 l3=0;
F32 l4=0;
U32 si0,si1,si2,si3;
F32 sf0,sf1,sf2,sf3,sf4,sf5,sf6;
F64 sd0,sd1,sd2,sd3;
sf0=l0;
si0=i32_reinterpret_f32(sf0);
l1=si0;
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1065353215U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l2;
si1=1056964608U;
si0=si0 < si1;
if(si0){
goto L4;
}
sd0=1.5707963267948966;
sd1=INFINITY;
sf2=1;
sf3=l0;
sf3=fabsf(sf3);
sf2-=sf3;
sf3=0.5;
sf2*=sf3;
l0=sf2;
sd2=(F64)(sf2);
sd2=sqrt(sd2);
sf3=l0;
sf4=0;
si3=sf3 < sf4;
sd1=si3?sd1:sd2;
l3=sd1;
sd2=l3;
sf3=l0;
sf4=l0;
sf5=l0;
sf6=-0.008656363;
sf5*=sf6;
sf6=-0.0427434221;
sf5+=sf6;
sf4*=sf5;
sf5=0.166665867;
sf4+=sf5;
sf3*=sf4;
sf4=l0;
sf5=-0.706629634;
sf4*=sf5;
sf5=1;
sf4+=sf5;
sf3/=sf4;
sd3=(F64)(sf3);
sd2*=sd3;
sd1+=sd2;
l3=sd1;
sd2=l3;
sd1+=sd2;
sd0-=sd1;
sf0=(F32)(sd0);
l0=sf0;
sf0=-(sf0);
sf1=l0;
si2=l1;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
sf0=si2?sf0:sf1;
goto L0;
L4:;
si0=l2;
si1=-8388608U;
si0+=si1;
si1=956301312U;
si0=si0 < si1;
if(si0){
goto L2;
}
sf0=l0;
sf1=l0;
sf0*=sf1;
l4=sf0;
sf1=l4;
sf2=l4;
sf3=-0.008656363;
sf2*=sf3;
sf3=-0.0427434221;
sf2+=sf3;
sf1*=sf2;
sf2=0.166665867;
sf1+=sf2;
sf0*=sf1;
sf1=l4;
sf2=-0.706629634;
sf1*=sf2;
sf2=1;
sf1+=sf2;
sf0/=sf1;
sf1=l0;
sf0*=sf1;
sf1=l0;
sf0+=sf1;
goto L0;
L3:;
si0=l2;
si1=1065353216U;
si0=si0 == si1;
if(si0){
goto L1;
}
sf0=0;
sf1=l0;
sf2=l0;
sf1-=sf2;
sf0/=sf1;
l0=sf0;
L2:;
sf0=l0;
goto L0;
L1:;
sf0=l0;
sd0=(F64)(sf0);
sd1=1.5707963267948966;
sd0*=sd1;
sd1=7.5231638452626401e-37;
sd0+=sd1;
sf0=(F32)(sd0);
L0:;
return sf0;
}

U32 f1982(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si0=i32_load(i->m0,(U64)si0);
switch(si0){
case 0:
goto L39;
case 1:
goto L38;
case 2:
goto L37;
case 3:
goto L36;
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
goto L35;
case 10:
goto L34;
case 11:
goto L33;
case 12:
goto L32;
case 13:
goto L31;
case 14:
goto L30;
case 15:
goto L29;
case 16:
goto L28;
case 17:
goto L27;
case 18:
goto L6;
case 19:
goto L26;
case 20:
goto L25;
case 21:
goto L24;
case 22:
goto L23;
case 23:
goto L5;
case 24:
goto L22;
case 25:
goto L21;
case 26:
goto L20;
case 27:
goto L4;
case 28:
goto L19;
case 29:
goto L3;
case 30:
goto L2;
case 31:
goto L18;
case 32:
goto L17;
case 33:
goto L16;
case 34:
goto L15;
case 35:
goto L14;
case 36:
goto L13;
case 37:
goto L12;
default:
goto L39;
}
L39:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1163916U;
si2=20U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L38:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1178720U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=191U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L37:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1163956U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L36:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=4U;
si0+=si1;
si1=12U;
si0+=si1;
si1=175U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1163988U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L35:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1164188U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L34:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1164196U;
si2=22U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L33:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1164244U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L32:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1164252U;
si2=46U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L31:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1164298U;
si2=36U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L30:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1164334U;
si2=40U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L29:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1164374U;
si2=28U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L28:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1164402U;
si2=28U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L27:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1161716U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L26:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=4U;
si0+=si1;
si1=12U;
si0+=si1;
si1=175U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1164524U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L25:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1164552U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L24:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1164568U;
si2=65U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L23:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1164633U;
si2=93U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L22:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1164856U;
si2=47U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L21:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1164940U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L20:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=16U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=4U;
si0+=si1;
si1=12U;
si0+=si1;
si1=175U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1164984U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L19:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1165105U;
si2=48U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L18:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1161680U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L17:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1165276U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L16:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1165304U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L15:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1165312U;
si2=37U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L14:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1165349U;
si2=49U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L13:;
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=4U;
si0+=si1;
si1=12U;
si0+=si1;
si1=174U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1165428U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L12:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1165452U;
si2=49U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L11:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l3;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L40:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1164004U;
si2=18U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L10:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1164022U;
si2=45U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L41:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=0U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L9:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L42;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l3;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L42:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1164067U;
si2=36U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L8:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l3;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L43:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1164103U;
si2=23U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L7:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l3;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L44:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1164126U;
si2=17U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L6:;
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l0;
si1=8U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si0=f1352(i,si0,si1);
if(si0){
goto L45;
}
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1164452U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L45:;
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1164492U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L5:;
si0=l2;
si1=l0;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1164744U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
l0=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
l1=si1;
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
if(si0){
goto L49;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0);
switch(si0){
case 0:
goto L47;
case 1:
goto L46;
default:
goto L48;
}
L49:;
si0=1U;
l1=si0;
goto L1;
L48:;
si0=l2;
si1=36U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1164840U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=174U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L47:;
si0=l0;
si1=1164760U;
si2=28U;
si3=l1;
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L46:;
si0=l0;
si1=1164788U;
si2=26U;
si3=l1;
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L4:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L50;
}
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1165044U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L50:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1165052U;
si2=53U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L3:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L51;
}
si0=l2;
si1=l0;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=24U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=1165180U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=175U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l2;
si2=4U;
si1+=si2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
si2=20U;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si3=24U;
si2+=si3;
si0=f683(i,si0,si1,si2);
l1=si0;
goto L1;
L51:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1165188U;
si2=33U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L2:;
si0=l0;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l3;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
l1=si0;
goto L1;
L52:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1165221U;
si2=32U;
si3=l1;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
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

void f279(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si1=255U;
si0&=si1;
if(si0){
goto L1;
}
si0=f239(i);
if(si0){
goto L1;
}
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+1U,si1);
L1:;
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
L0:;
}

void f84(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
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
f1192(i,si0);
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
L1:;
si0=l2;
si1=l3;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

U32 f1984(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si1=i32_load(i->m0,(U64)si1+20U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+24U);
si0=f1911(i,si0,si1,si2);
L0:;
return si0;
}

void f634(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L4;
}
si0=0U;
l4=si0;
si0=1U;
l5=si0;
goto L3;
L4:;
si0=l2;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
si0=0U;
l4=si0;
si0=0U;
si0=i32_load8_u(i->m0,(U64)si0+1183712U);
si0=l2;
si0=f614(i,si0);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=0U;
l4=si0;
L5:;
{
si0=l1;
si1=l4;
si0+=si1;
l6=si0;
si1=4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si1=l6;
si1=i32_load(i->m0,(U64)si1);
l8=si1;
si0|=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L3;
}
si0=l5;
si1=l4;
si0+=si1;
l6=si0;
si1=4U;
si0+=si1;
si1=l7;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l7;
si1^=si2;
i32_store8(i->m0,(U64)si0,si1);
si0=l6;
si1=l8;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l8;
si1^=si2;
i32_store8(i->m0,(U64)si0,si1);
si0=l6;
si1=7U;
si0+=si1;
si1=l7;
si2=24U;
si1>>=(si2&31);
l9=si1;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l9;
si1^=si2;
i32_store8(i->m0,(U64)si0,si1);
si0=l6;
si1=6U;
si0+=si1;
si1=l7;
si2=16U;
si1>>=(si2&31);
l9=si1;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l9;
si1^=si2;
i32_store8(i->m0,(U64)si0,si1);
si0=l6;
si1=5U;
si0+=si1;
si1=l7;
si2=8U;
si1>>=(si2&31);
l7=si1;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l7;
si1^=si2;
i32_store8(i->m0,(U64)si0,si1);
si0=l6;
si1=3U;
si0+=si1;
si1=l8;
si2=24U;
si1>>=(si2&31);
l7=si1;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l7;
si1^=si2;
i32_store8(i->m0,(U64)si0,si1);
si0=l6;
si1=2U;
si0+=si1;
si1=l8;
si2=16U;
si1>>=(si2&31);
l7=si1;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l7;
si1^=si2;
i32_store8(i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0+=si1;
si1=l8;
si2=8U;
si1>>=(si2&31);
l6=si1;
si2=-97U;
si1+=si2;
si2=255U;
si1&=si2;
si2=26U;
si1=si1 < si2;
si2=5U;
si1<<=(si2&31);
si2=l6;
si1^=si2;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
l6=si0;
si0=l4;
si1=8U;
si0+=si1;
l7=si0;
l4=si0;
si0=l6;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L5;
}
}
si0=l7;
l4=si0;
L3:;
si0=l3;
si1=l5;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l4;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l2;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si1=l2;
si0+=si1;
l2=si0;
si0=l1;
si1=l4;
si0+=si1;
l6=si0;
L7:;
{
si0=l6;
si0=i32_load8_s(i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l7;
si1=255U;
si0&=si1;
l7=si0;
goto L8;
L9:;
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l4=si0;
si0=l7;
si1=31U;
si0&=si1;
l8=si0;
si0=l7;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l4;
si0|=si1;
l7=si0;
si0=l6;
si1=2U;
si0+=si1;
l6=si0;
goto L8;
L10:;
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l4=si0;
si0=l7;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l4;
si1=l8;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
si0=l6;
si1=3U;
si0+=si1;
l6=si0;
goto L8;
L11:;
si0=l4;
si1=6U;
si0<<=(si1&31);
si1=l6;
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
l7=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
L8:;
si0=l3;
si1=20U;
si0+=si1;
si1=l7;
f635(i,si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+24U);
l8=si0;
if(si0){
goto L14;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+20U);
l7=si0;
goto L13;
L14:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+28U);
l7=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1+20U);
f628(i,si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l8;
f628(i,si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L12;
}
L13:;
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
f628(i,si0,si1);
L12:;
si0=l6;
si1=l2;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=32U;
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

void f119(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
l3=si0;
L2:;
{
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0);
si1=l3;
si2=4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
f58(i,si0,si1);
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l3;
si1=16U;
si0+=si1;
l3=si0;
goto L2;
}
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l3;
si2=4U;
si1<<=(si2&31);
f264(i,si0,si1);
L3:;
L0:;
}

void f1089(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0+24U);
l1=si0;
si1=3U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
f2083(i,si0,si1);
goto L0;
L1:;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
f2083(i,si0,si1);
si0=l2;
si1=l1;
si2=3U;
si1<<=(si2&31);
f264(i,si0,si1);
L0:;
}

U32 f1610(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f1021(i,si0,si1);
L0:;
return si0;
}

void f2083(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f1038(i,si0);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
goto L2;
}
L1:;
L0:;
}

void f686(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=1083060U;
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
si1=1083060U;
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
si2=1071012U;
f4(i,si0,si1,si2);
UNREACHABLE;
L23:;
si0=l5;
si1=1083064U;
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
si1=1083060U;
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
si2=1083192U;
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
si2=1067763U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067763U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+11U,si1);
si0=l3;
si1=l1;
si2=16U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067763U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+10U,si1);
si0=l3;
si1=l1;
si2=20U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067763U;
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
si1=i32_load16_u(i->m0,(U64)si1+1071070U);
i32_store16(i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
si2=4U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067763U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+13U,si1);
si0=l4;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(i->m0,(U64)si1+1071072U);
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
si2=1067763U;
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
si1=1069520U;
si2=44U;
si3=1069608U;
si4=196U;
si5=1069804U;
si6=450U;
si0=f687(i,si0,si1,si2,si3,si4,si5,si6);
if(si0){
goto L13;
}
goto L11;
L14:;
si0=l1;
si1=1070254U;
si2=40U;
si3=1070334U;
si4=287U;
si5=1070621U;
si6=303U;
si0=f687(i,si0,si1,si2,si3,si4,si5,si6);
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
si2=1071028U;
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
si2=1067763U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067763U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+11U,si1);
si0=l3;
si1=l1;
si2=16U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067763U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+10U,si1);
si0=l3;
si1=l1;
si2=20U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067763U;
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
si1=i32_load16_u(i->m0,(U64)si1+1071070U);
i32_store16(i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
si2=4U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si2=1067763U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0+13U,si1);
si0=l4;
si1=2U;
si0+=si1;
si1=0U;
si1=i32_load8_u(i->m0,(U64)si1+1071072U);
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
si2=1067763U;
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

void f1530(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=l4;
sf0=f32_load(i->m0,(U64)si0+4U);
l6=sf0;
si0=l0;
si1=5U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sf1=(F32)(I32)(si1);
sf2=l6;
sf1=f3108(i,sf1,sf2);
f32_store(i->m0,(U64)si0+4U,sf1);
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

void f2714(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1;
si0=l1;
si1=l2;
si0=f2713(i,si0,si1);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
f2711(i,si0,si1);
goto L0;
L1:;
si0=l0;
si1=13U;
i32_store8(i->m0,(U64)si0,si1);
L0:;
}

void f1106(glicolwasmInstance*i,U32 l0) {
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
f1038(i,si0);
si0=l0;
f1105(i,si0);
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
f1093(i,si0);
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
si0=1116224U;
si1=17U;
si2=1123124U;
f40(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1116224U;
si1=17U;
si2=1123140U;
f40(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f1840(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=8U;
si0+=si1;
si1=4U;
si2=12U;
f720(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
if(si0){
goto L1;
}
UNREACHABLE;
L1:;
si0=l1;
si1=20U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
f1828(i,si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l1;
si2=20U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+20U);
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

void f1542(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l0;
si1=5U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
sf1=l6;
si2=l3;
sf2=(F32)(I32)(si2);
sf1=f3108(i,sf1,sf2);
f32_store(i->m0,(U64)si0+4U,sf1);
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

U32 f3049(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si0=i32_load(i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l0;
si1=-1U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=-12U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=1179544U;
f668(i,si0);
UNREACHABLE;
L1:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=0U;
L0:;
return si0;
}

U32 f3050(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
si0=i32_load(i->m0,(U64)si0);
l0=si0;
si0=i32_load(i->m0,(U64)si0+8U);
if(si0){
goto L2;
}
si0=l0;
si1=-1U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=-12U;
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=1179544U;
f668(i,si0);
UNREACHABLE;
L1:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=0U;
L0:;
return si0;
}

U32 f1841(glicolwasmInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l0;
si0=f1840(i,si0);
L0:;
return si0;
}

U32 f598(glicolwasmInstance*i,U32 l0) {
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
f66(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l0=si0;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f1805(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=8U;
si0+=si1;
f1049(i,si0);
L0:;
}

void f337(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
f981(i,si0,si1);
L0:;
}

void f2983(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si0=f2350(i,si0);
l7=si0;
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
goto L6;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+48U);
l8=si0;
si1=l4;
si0=f1725(i,si0,si1);
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
f1007(i,si0,si1);
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
f973(i,si0,si1);
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
f2984(i,si0);
goto L3;
L8:;
si0=l5;
si1=24U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f973(i,si0,si1);
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
si1=f1477(i);
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
f1478(i,si0);
si0=l10;
l3=si0;
goto L4;
L7:;
si0=1U;
si1=l4;
si2=1174656U;
f4(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=1175000U;
f14(i,si0);
UNREACHABLE;
L5:;
si0=f1477(i);
l3=si0;
si0=l9;
si0=i32_load(i->m0,(U64)si0);
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f1376(i,si0,si1);
si0=l9;
f1038(i,si0);
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
f1007(i,si0,si1);
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
f1007(i,si0,si1);
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
f1708(i,si0,si1);
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=1116428U;
si1=56U;
si2=1116484U;
f16(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1116428U;
si1=56U;
si2=1116484U;
f16(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f1016(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si1=0U;
si2=l2;
si3=1U;
si2+=si3;
l2=si2;
si3=l0;
si4=l1;
si5=1119052U;
f1015(i,si0,si1,si2,si3,si4,si5);
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si1=20U;
si0*=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
l5=si1;
si0+=si1;
l6=si0;
si1=-20U;
si0+=si1;
l7=si0;
si1=l6;
si2=-40U;
si1+=si2;
l8=si1;
si0=f1014(i,si0,si1);
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si1=8U;
si0+=si1;
si1=16U;
si0+=si1;
l9=si0;
si1=l7;
si2=16U;
si1+=si2;
l10=si1;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=8U;
si0+=si1;
l11=si0;
si1=l7;
si2=8U;
si1+=si2;
l12=si1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=l7;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l7;
si1=l8;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l12;
si1=l8;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l10;
si1=l8;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=-2U;
si0+=si1;
l8=si0;
si0=l6;
si1=-60U;
si0+=si1;
l7=si0;
L5:;
{
si0=l8;
if(si0){
goto L6;
}
si0=l5;
l6=si0;
goto L3;
L6:;
si0=l7;
si1=20U;
si0+=si1;
l6=si0;
si0=l3;
si1=8U;
si0+=si1;
si1=l7;
si0=f1014(i,si0,si1);
si1=255U;
si0&=si1;
si1=255U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l6;
si1=l7;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l7;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l7;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=l7;
si1=-20U;
si0+=si1;
l7=si0;
goto L5;
}
L4:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=l6;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
si1=16U;
si0+=si1;
si1=l9;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=8U;
si0+=si1;
si1=l11;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
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

void f2589(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
goto L3;
}
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
l6=sj1;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si0=f1745(i,si0);
l7=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l3;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l7;
si2=0U;
si3=l3;
si4=l4;
si3-=si4;
f2289(i,si0,si1,si2,si3);
si0=l5;
si1=8U;
si0+=si1;
f2239(i,si0);
goto L1;
L4:;
si0=1U;
si1=l4;
si2=1170336U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=1170644U;
f14(i,si0);
UNREACHABLE;
L2:;
si0=l7;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
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
f1708(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f393(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si0=f393(i,si0,si1);
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
f1974(i,si0,si1);
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
si0=f393(i,si0,si1);
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

void f1178(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si0=l2;
si0=i32_load(i->m0,(U64)si0+48U);
l6=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+32U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+36U);
si2=l3;
si2=i32_load(i->m0,(U64)si2);
si2=i32_load(i->m0,(U64)si2);
l1=si2;
si2=i32_load(i->m0,(U64)si2);
si3=l1;
si4=4U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si0=f49(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
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

void f1628(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2,sj3;
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
f1620(i,si0,si1);
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
f1620(i,si0,si1);
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
si4=1167412U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L4:;
si0=1U;
si1=1U;
si2=1167412U;
f4(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
sj1=1ULL;
sj2=257ULL;
sj3=1ULL;
si4=l4;
si4=i32_load8_u(i->m0,(U64)si4+4U);
sj2=si4?sj2:sj3;
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
si0=1178304U;
si1=43U;
si2=l4;
si3=8U;
si2+=si3;
si3=1119116U;
si4=1167412U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1167412U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f2737(glicolwasmInstance*i,U32 l0) {
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
si1=1131764U;
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

void f1406(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
f1471(i,si0,si1);
L0:;
}

void f2788(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
sd0=f2349(i,si0);
l8=sd0;
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=1U;
si1=1U;
si2=1172940U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1172940U;
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
si2=f2350(i,si2);
sd2=(F64)(I32)(si2);
l9=sd2;
sd3=l8;
sd4=l9;
si3=sd3 >= sd4;
sd1=si3?sd1:sd2;
f2351(i,si0,sd1);
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

U32 f700(glicolwasmInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si1=12U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l4=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+8U);
l5=si1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
l6=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l1=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+32U);
l7=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+16U);
l8=si0;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+28U);
si1=8U;
si0&=si1;
if(si0){
goto L4;
}
si0=l8;
l9=si0;
si0=l7;
l10=si0;
si0=l6;
l1=si0;
goto L3;
L5:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l1;
si0=f703(i,si0,si1,si2);
l5=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l1;
si2=l6;
si3=l0;
si4=24U;
si3+=si4;
si3=i32_load(i->m0,(U64)si3);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(glicolwasmInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=1U;
l10=si0;
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+32U,si1);
si0=48U;
l9=si0;
si0=l0;
si1=48U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=0U;
l1=si0;
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l2;
si1=1178664U;
i32_store(i->m0,(U64)si0,si1);
si0=0U;
si1=l3;
si2=l6;
si1-=si2;
l6=si1;
si2=l6;
si3=l3;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
L3:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=12U;
si0*=si1;
l4=si0;
L7:;
{
si0=l5;
si0=i32_load16_u(i->m0,(U64)si0);
switch(si0){
case 0:
goto L11;
case 1:
goto L9;
case 2:
goto L10;
default:
goto L11;
}
L11:;
si0=l5;
si1=4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
goto L8;
L10:;
si0=l5;
si1=8U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
goto L8;
L9:;
si0=l5;
si1=2U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l11=si0;
si1=1000U;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=4U;
si1=5U;
si2=l11;
si3=10000U;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
goto L8;
L12:;
si0=1U;
l6=si0;
si0=l11;
si1=10U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=2U;
si1=3U;
si2=l11;
si3=100U;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
L8:;
si0=l5;
si1=12U;
si0+=si1;
l5=si0;
si0=l6;
si1=l1;
si0+=si1;
l1=si0;
si0=l4;
si1=-12U;
si0+=si1;
l4=si0;
if(si0){
goto L7;
}
}
L6:;
si0=l3;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l3;
si1=l1;
si0-=si1;
l4=si0;
si0=l10;
si1=255U;
si0&=si1;
l5=si0;
switch(si0){
case 0:
goto L16;
case 1:
goto L18;
case 2:
goto L17;
case 3:
goto L18;
default:
goto L16;
}
L18:;
si0=l4;
l5=si0;
si0=0U;
l4=si0;
goto L16;
L17:;
si0=l4;
si1=1U;
si0>>=(si1&31);
l5=si0;
si0=l4;
si1=1U;
si0+=si1;
si1=1U;
si0>>=(si1&31);
l4=si0;
L16:;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l0;
si1=24U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+20U);
l6=si0;
L19:;
{
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l6;
si1=l9;
si2=l1;
si2=i32_load(i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L19;
}
goto L2;
}
L15:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+20U);
si1=l0;
si1=i32_load(i->m0,(U64)si1+24U);
si2=l2;
si0=f703(i,si0,si1,si2);
l5=si0;
goto L13;
L14:;
si0=l6;
si1=l1;
si2=l2;
si0=f703(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=0U;
l5=si0;
L21:;
{
si0=l4;
si1=l5;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l4;
l5=si0;
goto L20;
L22:;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l6;
si1=l9;
si2=l1;
si2=i32_load(i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L21;
}
}
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
L20:;
si0=l5;
si1=l4;
si0=si0 < si1;
l5=si0;
L13:;
si0=l0;
si1=l7;
i32_store8(i->m0,(U64)si0+32U,si1);
si0=l0;
si1=l8;
i32_store(i->m0,(U64)si0+16U,si1);
goto L1;
L2:;
si0=1U;
l5=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

void f101(glicolwasmInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=304U;
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
si0=l4;
si1=2U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l3;
si1=-2147483646U;
si0=si0 == si1;
if(si0){
goto L3;
}
goto L2;
L8:;
si0=l0;
si1=280U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
f6(i,si0,si1);
goto L4;
L7:;
si0=l0;
si1=280U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+8U);
f7(i,si0,si1,si2);
goto L4;
L6:;
si0=l0;
si1=288U;
si0+=si1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
goto L4;
L5:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+16U);
if(si0){
goto L4;
}
si0=l2;
si1=40U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l1;
si2=12U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+4U);
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l2;
si1=1180344U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l2;
si1=1180344U;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=1180344U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+238U);
l5=si0;
si0=l0;
si1=100U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+96U);
l7=si0;
si0=0U;
l8=si0;
si0=l2;
si1=116U;
si0+=si1;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
si0=l2;
sj1=-9223372036854775808ULL;
i64_store(i->m0,(U64)si0+100U,sj1);
si0=l2;
si1=100U;
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
goto L12;
}
si0=l0;
si1=160U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+100U,si1);
si0=l2;
si1=100U;
si0+=si1;
f103(i,si0);
si0=l2;
si0=i32_load(i->m0,(U64)si0+104U);
si1=l2;
si2=100U;
si1+=si2;
si2=4U;
si1+=si2;
si2=l2;
si2=i32_load(i->m0,(U64)si2+100U);
l11=si2;
si3=3U;
si2=si2 > si3;
l12=si2;
si0=si2?si0:si1;
si1=l2;
si2=100U;
si1+=si2;
si2=l12;
si3=3U;
si2<<=(si3&31);
si1+=si2;
l13=si1;
si1=i32_load(i->m0,(U64)si1);
l14=si1;
si2=12U;
si1*=si2;
si0+=si1;
l4=si0;
si0=l11;
si1=3U;
si2=l12;
si0=si2?si0:si1;
l11=si0;
L14:;
{
si0=l14;
si1=l11;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=l13;
si1=l14;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+44U);
l4=si0;
si1=l2;
si1=i32_load(i->m0,(U64)si1+48U);
si0+=si1;
l14=si0;
L16:;
{
si0=l8;
si1=1U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l2;
si1=l14;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+236U,si1);
si0=l2;
si1=1114113U;
i32_store(i->m0,(U64)si0+232U,si1);
si0=l2;
si1=100U;
si0+=si1;
si1=l2;
si2=232U;
si1+=si2;
f104(i,si0,si1);
si0=1U;
l8=si0;
goto L16;
}
L15:;
si0=l8;
si1=1U;
si0&=si1;
if(si0){
goto L17;
}
si0=l4;
si1=1114113U;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=4U;
si0+=si1;
si1=l2;
si2=40U;
si1+=si2;
si2=l8;
si3=12U;
si2*=si3;
si1+=si2;
l8=si1;
si1=i32_load(i->m0,(U64)si1+4U);
l12=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0+=si1;
si1=l12;
si2=l8;
si2=i32_load(i->m0,(U64)si2+8U);
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=1U;
l8=si0;
si0=l14;
si1=1U;
si0+=si1;
l14=si0;
goto L14;
L17:;
}
si0=l13;
si1=l14;
i32_store(i->m0,(U64)si0,si1);
L13:;
si0=l2;
si1=56U;
si0+=si1;
si1=l2;
si2=100U;
si1+=si2;
si2=40U;
si0=f3069(i,si0,si1,si2);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+144U,si1);
si0=l2;
sj1=4785074605195264ULL;
i64_store(i->m0,(U64)si0+136U,sj1);
si0=l2;
si1=0U;
i32_store16(i->m0,(U64)si0+132U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+128U,si1);
si0=l2;
si1=l10;
i32_store(i->m0,(U64)si0+124U,si1);
si0=l2;
si1=l9;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l2;
si1=1114112U;
i32_store(i->m0,(U64)si0+116U,si1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+100U,si1);
si0=l2;
si1=148U;
si0+=si1;
si1=l2;
si2=56U;
si1+=si2;
si2=40U;
si0=f3069(i,si0,si1,si2);
si0=l2;
si1=91U;
i32_store(i->m0,(U64)si0+204U,si1);
si0=l2;
si1=l6;
i32_store(i->m0,(U64)si0+200U,si1);
si0=l2;
si1=l7;
i32_store(i->m0,(U64)si0+196U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+188U,si1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+192U,si1);
si0=l2;
si1=224U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1122200U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1122192U);
i64_store(i->m0,(U64)si0+216U,sj1);
si0=l9;
si1=l9;
si1=i32_load(i->m0,(U64)si1);
si2=1U;
si1+=si2;
l4=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=256U;
si0+=si1;
si1=1180344U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=252U;
si0+=si1;
si1=1180344U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=5U;
i32_store(i->m0,(U64)si0+244U,si1);
si0=l2;
si1=l9;
i32_store(i->m0,(U64)si0+236U,si1);
si0=l2;
sj1=0ULL;
i64_store(i->m0,(U64)si0+276U,sj1);
si0=l2;
si1=1180344U;
i32_store(i->m0,(U64)si0+248U,si1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+284U,si1);
si0=l2;
si1=1180344U;
i32_store(i->m0,(U64)si0+260U,si1);
si0=l2;
si1=1180344U;
i32_store(i->m0,(U64)si0+268U,si1);
si0=l2;
si1=1180344U;
i32_store(i->m0,(U64)si0+264U,si1);
si0=l2;
si1=l2;
si2=28U;
si1+=si2;
i32_store(i->m0,(U64)si0+272U,si1);
si0=l2;
si1=l2;
si2=216U;
si1+=si2;
i32_store(i->m0,(U64)si0+240U,si1);
si0=l2;
si1=l2;
si2=100U;
si1+=si2;
i32_store(i->m0,(U64)si0+232U,si1);
si0=l2;
si1=288U;
si0+=si1;
si1=l0;
si2=l2;
si3=232U;
si2+=si3;
si3=l5;
f106(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+288U);
l4=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+300U);
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+292U);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=216U;
si0+=si1;
f107(i,si0);
si0=l2;
si1=100U;
si0+=si1;
f108(i,si0);
goto L18;
L19:;
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+292U);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=216U;
si0+=si1;
f107(i,si0);
si0=l2;
si1=100U;
si0+=si1;
f108(i,si0);
L18:;
si0=l9;
f109(i,si0);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+40U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+44U);
f58(i,si0,si1);
si0=l2;
si1=28U;
si0+=si1;
f110(i,si0);
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=240U;
si0+=si1;
f111(i,si0);
si0=l0;
si1=248U;
si0+=si1;
si1=l2;
si2=20U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+12U);
i64_store(i->m0,(U64)si0+240U,sj1);
goto L10;
L12:;
UNREACHABLE;
L11:;
si0=l2;
si1=12U;
si0+=si1;
f112(i,si0);
L10:;
si0=l3;
si1=-2147483646U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L2;
L4:;
si0=l3;
si1=-2147483646U;
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
f58(i,si0,si1);
goto L1;
L2:;
si0=l1;
f8(i,si0);
L1:;
si0=l2;
si1=304U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f2120(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si1=12U;
si0+=si1;
l2=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
L3:;
{
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+20U);
si2=l0;
si2=i32_load(i->m0,(U64)si2+12U);
l3=si2;
si3=l3;
si4=3U;
si3=si3 > si4;
si1=si3?si1:si2;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=1114112U;
goto L0;
L4:;
si0=l2;
si1=l1;
si2=1159676U;
si0=f2134(i,si0,si1,si2);
l3=si0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=1114113U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l3;
si1=l3;
si2=4U;
si1+=si2;
si1=f520(i,si1);
l1=si1;
i32_store(i->m0,(U64)si0,si1);
L5:;
si0=l1;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
si2=1U;
si1+=si2;
l1=si1;
i32_store(i->m0,(U64)si0+8U,si1);
goto L3;
}
L2:;
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
l0=si1;
si2=l0;
si3=1114112U;
si2=si2 == si3;
si0=si2?si0:si1;
l1=si0;
L1:;
si0=l1;
L0:;
return si0;
}

U32 f1014(glicolwasmInstance*i,U32 l0,U32 l1) {
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

void f27(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
F32 l7=0;
U32 l8=0;
F32 l9=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
F32 sf0,sf1,sf3;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si1=20U;
si0+=si1;
l5=si0;
si0=l0;
si1=16U;
si0+=si1;
l6=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
switch(si0){
case 0:
goto L8;
case 1:
goto L7;
default:
goto L3;
}
L8:;
si0=l3;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
sf0=f32_load(i->m0,(U64)si0+12U);
l7=sf0;
si0=0U;
l1=si0;
L9:;
{
si0=l1;
si1=512U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l6;
si1=l5;
si2=l2;
si3=l1;
si2+=si3;
sf3=l7;
f28(i,si0,si1,si2,sf3);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L9;
}
L7:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si1=i32_load(i->m0,(U64)si1);
si2=1053004U;
si0=f3(i,si0,si1,si2);
l1=si0;
goto L4;
L6:;
si0=0U;
si1=0U;
si2=1052972U;
f4(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l4;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l8=si1;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l8;
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
si2=l8;
si1+=si2;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l8;
sj1=i64_load(i->m0,(U64)si1);
sj2=-1ULL;
sj1^=sj2;
sj2=-9187201950435737472ULL;
sj1&=sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si0=f10(i,si0);
l1=si0;
if(si0){
goto L4;
}
si0=1052988U;
f14(i,si0);
UNREACHABLE;
L4:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l0;
sf0=f32_load(i->m0,(U64)si0+24U);
l9=sf0;
si0=0U;
l1=si0;
L10:;
{
si0=l1;
si1=512U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l3;
si1=l1;
si0+=si1;
sf0=f32_load(i->m0,(U64)si0);
l7=sf0;
sf1=0;
si0=sf0 == sf1;
if(si0){
goto L11;
}
si0=l0;
sf1=l7;
f32_store(i->m0,(U64)si0+24U,sf1);
sf0=l7;
l9=sf0;
L11:;
si0=l6;
si1=l5;
si2=l2;
si3=l1;
si2+=si3;
sf3=l9;
f28(i,si0,si1,si2,sf3);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
goto L10;
}
L3:;
si0=l4;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L2:;
si0=0U;
si1=0U;
si2=1053036U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=0U;
si1=0U;
si2=1053020U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f737(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,F64 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3;
F64 sd3;
si0=l0;
si1=92U;
si0+=si1;
si1=l0;
si1=i32_load16_u(i->m0,(U64)si1+226U);
l5=si1;
si2=1U;
si1+=si2;
l6=si1;
si2=l1;
si3=l2;
f738(i,si0,si1,si2,si3);
si0=l0;
si1=l6;
si2=l1;
sd3=l3;
f739(i,si0,si1,si2,sd3);
si0=l1;
si1=1U;
si0+=si1;
l2=si0;
si0=l0;
si1=232U;
si0+=si1;
l7=si0;
si0=l1;
si1=2U;
si0+=si1;
l8=si0;
si1=l5;
si2=2U;
si1+=si2;
l9=si1;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l7;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
si2=l2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si2=l5;
si3=l1;
si2-=si3;
si3=2U;
si2<<=(si3&31);
si0=f3080(i,si0,si1,si2);
L1:;
si0=l7;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store16(i->m0,(U64)si0+226U,si1);
si0=l9;
si1=l2;
si2=l9;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l7=si0;
si0=l1;
si1=2U;
si0<<=(si1&31);
si1=l0;
si0+=si1;
si1=236U;
si0+=si1;
l1=si0;
L3:;
{
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si1=l2;
i32_store16(i->m0,(U64)si0+224U,si1);
si0=l6;
si1=l0;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
goto L3;
}
L2:;
L0:;
}

U32 f1631(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=i32_load(i->m0,(U64)si1);
si2=8U;
si1+=si2;
f397(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
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
f1007(i,si0,si1);
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
si0=f247(i,si0,si1,si2,si3);
l0=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
si1=1U;
si0^=si1;
L0:;
return si0;
}

void f1076(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0+48U);
l1=si0;
si1=4U;
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

void f453(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=67108863U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l1;
si1=5U;
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
si1=4U;
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

U32 f1861(glicolwasmInstance*i,U32 l0) {
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
si0=1180344U;
l4=si0;
si0=0U;
l5=si0;
goto L1;
L2:;
si0=l3;
si0=f1774(i,si0);
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
si1=1180344U;
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
f1828(i,si0,si1);
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

void f2952(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=16U;
si0+=si1;
si1=l5;
si2=40U;
si1+=si2;
f2434(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+20U);
l2=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
l4=si0;
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
l6=si0;
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
l6=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
L5:;
si0=l0;
si1=l8;
si2=l3;
si3=l6;
si4=l4;
si5=0U;
si6=l4;
si7=0U;
si6=(U32)((I32)si6>(I32)si7);
si4=si6?si4:si5;
l4=si4;
si5=l2;
si6=l4;
si7=l2;
si8=l4;
si7=(U32)((I32)si7>(I32)si8);
si5=si7?si5:si6;
si6=l4;
si5-=si6;
si1=f2949(i,si1,si2,si3,si4,si5);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
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
si0=1174656U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f884(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=52U;
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
si2=1114885U;
si3=2U;
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
si1=52U;
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
si1=52U;
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

void f1254(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l1;
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
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
goto L1;
L2:;
si0=l2;
si1=16U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
f1007(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
l3=si0;
L1:;
si0=l3;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
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
goto L6;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
goto L5;
L6:;
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f1007(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l4=si0;
L5:;
si0=l4;
si0=!(si0);
if(si0){
goto L9;
}
si0=l3;
si1=0U;
si2=l3;
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
goto L8;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l1;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
goto L7;
L10:;
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l0;
si1=f1477(i);
l3=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=16U;
si0+=si1;
si1=l1;
si2=16U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=28U;
si0+=si1;
f1478(i,si0);
si0=l3;
l1=si0;
goto L7;
L9:;
si0=l0;
f1038(i,si0);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
goto L3;
L8:;
si0=f1477(i);
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
f1376(i,si0,si1);
si0=l0;
f1038(i,si0);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L7:;
si0=l1;
si1=8U;
si0+=si1;
l0=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
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
goto L12;
}
si0=l3;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
goto L11;
L12:;
si0=l2;
si1=l3;
si2=8U;
si1+=si2;
f1007(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
L11:;
si0=l0;
si1=l1;
si2=l3;
f1379(i,si0,si1,si2);
L4:;
si0=l2;
si1=24U;
si0+=si1;
f1038(i,si0);
L3:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2084(glicolwasmInstance*i,U32 l0,U32 l1) {
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
U64 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
F32 l21=0;
U64 l22=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1;
F32 sf0,sf1;
si0=i->g0;
si1=416U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=296U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+20U);
si2=8U;
si1+=si2;
si2=1159692U;
f2113(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0+300U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+296U);
l4=si0;
si0=i32_load8_u(i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=96U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l4;
si1=0U;
i32_store8(i->m0,(U64)si0+12U,si1);
L1:;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l7=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
f2114(i,si0);
L2:;
si0=l1;
si1=92U;
si0+=si1;
l4=si0;
si0=l1;
si1=36U;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+28U);
l8=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l1;
si1=94U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l9=si0;
si0=l1;
si0=i32_load16_u(i->m0,(U64)si0+92U);
l10=si0;
si0=l2;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+336U,sj1);
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+344U,si1);
si0=l1;
si1=l3;
si2=l8;
si3=l4;
si4=l2;
si5=336U;
si4+=si5;
si5=0U;
si6=l1;
si6=i32_load8_u(i->m0,(U64)si6+33U);
si4=si6?si4:si5;
si1=f2115(i,si1,si2,si3,si4);
l8=si1;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+33U);
si0=!(si0);
if(si0){
goto L17;
}
si0=86U;
l11=si0;
si0=l2;
si1=336U;
si0+=si1;
si0=f1313(i,si0);
l8=si0;
goto L15;
L17:;
si0=l8;
if(si0){
goto L18;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+336U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+340U);
f58(i,si0,si1);
goto L16;
L18:;
si0=l1;
si0=i32_load16_u(i->m0,(U64)si0+94U);
l9=si0;
si0=l1;
si0=i32_load16_u(i->m0,(U64)si0+92U);
l10=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+336U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+340U);
f58(i,si0,si1);
si0=89U;
l11=si0;
goto L15;
L16:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
l8=si0;
si0=l1;
si1=1114112U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l8;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L20;
}
si0=0U;
l12=si0;
goto L19;
L20:;
si0=l2;
si1=336U;
si0+=si1;
si1=l3;
si2=l1;
si3=l4;
si4=l8;
si5=1U;
si6=0U;
si7=1U;
f2116(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l2;
si0=i32_load(i->m0,(U64)si0+336U);
if(si0){
goto L21;
}
si0=5U;
si1=4U;
si2=l2;
si3=352U;
si2+=si3;
si2=i32_load8_u(i->m0,(U64)si2);
si0=si2?si0:si1;
l11=si0;
si0=l2;
si1=356U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=354U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l10=si0;
si0=l2;
si1=336U;
si0+=si1;
si1=4U;
si0+=si1;
si0=f1313(i,si0);
l8=si0;
goto L15;
L21:;
si0=l2;
si1=366U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=364U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l10=si0;
si0=85U;
l11=si0;
si0=l2;
si1=340U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
goto L15;
L19:;
L23:;
{
si0=l3;
si0=f2118(i,si0);
l13=si0;
si0=l4;
f2119(i,si0);
si0=l1;
si0=i32_load16_u(i->m0,(U64)si0+94U);
l9=si0;
si0=l1;
si0=i32_load16_u(i->m0,(U64)si0+92U);
l10=si0;
si0=l13;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l3;
si0=f2120(i,si0);
l8=si0;
si0=l13;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L42;
}
si0=0U;
si1=l8;
si2=l8;
si3=1114112U;
si2=si2 == si3;
si0=si2?si0:si1;
l14=si0;
si0=l13;
si1=-33U;
si0+=si1;
switch(si0){
case 0:
goto L108;
case 1:
goto L120;
case 2:
goto L117;
case 3:
goto L102;
case 4:
goto L104;
case 5:
goto L106;
case 6:
goto L92;
case 7:
goto L118;
case 8:
goto L100;
case 9:
goto L115;
case 10:
goto L116;
case 11:
goto L97;
case 12:
goto L84;
case 13:
goto L113;
case 14:
goto L114;
case 15:
goto L121;
case 16:
goto L121;
case 17:
goto L121;
case 18:
goto L121;
case 19:
goto L121;
case 20:
goto L121;
case 21:
goto L121;
case 22:
goto L121;
case 23:
goto L121;
case 24:
goto L121;
case 25:
goto L111;
case 26:
goto L98;
case 27:
goto L110;
case 28:
goto L112;
case 29:
goto L109;
case 30:
goto L101;
case 31:
goto L103;
case 32:
goto L121;
case 33:
goto L121;
case 34:
goto L121;
case 35:
goto L121;
case 36:
goto L121;
case 37:
goto L121;
case 38:
goto L121;
case 39:
goto L121;
case 40:
goto L121;
case 41:
goto L121;
case 42:
goto L121;
case 43:
goto L121;
case 44:
goto L121;
case 45:
goto L121;
case 46:
goto L121;
case 47:
goto L121;
case 48:
goto L121;
case 49:
goto L121;
case 50:
goto L121;
case 51:
goto L121;
case 52:
goto L121;
case 53:
goto L121;
case 54:
goto L121;
case 55:
goto L121;
case 56:
goto L121;
case 57:
goto L121;
case 58:
goto L29;
case 59:
goto L121;
case 60:
goto L99;
case 61:
goto L105;
case 62:
goto L121;
case 63:
goto L119;
default:
goto L122;
}
L122:;
si0=6U;
l11=si0;
si0=l13;
si1=-123U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L107;
case 2:
goto L35;
case 3:
goto L33;
default:
goto L121;
}
L121:;
si0=l13;
si1=95U;
si0=si0 == si1;
if(si0){
goto L123;
}
si0=l13;
si1=2097119U;
si0&=si1;
si1=-65U;
si0+=si1;
si1=26U;
si0=si0 >= si1;
if(si0){
goto L43;
}
L123:;
si0=l2;
si1=400U;
si0+=si1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(i->m0,(U64)si0+393U,sj1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+392U,si1);
si0=l2;
si1=392U;
si0+=si1;
si1=l13;
f1641(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L41;
}
si0=l7;
f2114(i,si0);
si0=0U;
l8=si0;
goto L40;
L120:;
si0=l2;
si1=336U;
si0+=si1;
si1=l3;
si2=l1;
si3=l4;
si4=34U;
si5=0U;
si6=1U;
si7=0U;
f2116(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l2;
si0=i32_load(i->m0,(U64)si0+336U);
if(si0){
goto L124;
}
si0=4U;
l11=si0;
si0=l2;
si1=336U;
si0+=si1;
si1=4U;
si0+=si1;
si0=f1313(i,si0);
l8=si0;
goto L15;
L124:;
si0=l2;
si1=366U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=364U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l10=si0;
si0=85U;
l11=si0;
si0=l2;
si1=340U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
goto L15;
L119:;
si0=l3;
si0=f2120(i,si0);
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L95;
case 1:
goto L93;
case 2:
goto L93;
case 3:
goto L96;
default:
goto L93;
}
L118:;
si0=8U;
l11=si0;
si0=l14;
si1=-41U;
si0+=si1;
switch(si0){
case 0:
goto L91;
case 1:
goto L90;
default:
goto L14;
}
L117:;
si0=l14;
si1=-32U;
si0+=si1;
switch(si0){
case 0:
goto L87;
case 1:
goto L88;
default:
goto L89;
}
L116:;
si0=l14;
si1=43U;
si0=si0 == si1;
if(si0){
goto L85;
}
si0=l14;
si1=61U;
si0=si0 == si1;
if(si0){
goto L86;
}
si0=13U;
si1=14U;
si2=l1;
si2=i32_load8_u(i->m0,(U64)si2+32U);
si0=si2?si0:si1;
l11=si0;
goto L28;
L115:;
si0=l14;
si1=-41U;
si0+=si1;
switch(si0){
case 0:
goto L83;
case 1:
goto L81;
default:
goto L125;
}
L125:;
si0=l14;
si1=61U;
si0=si0 == si1;
if(si0){
goto L82;
}
si0=17U;
l11=si0;
goto L28;
L114:;
si0=l14;
si1=42U;
si0=si0 == si1;
if(si0){
goto L79;
}
si0=l14;
si1=47U;
si0=si0 == si1;
if(si0){
goto L80;
}
si0=l14;
si1=61U;
si0=si0 == si1;
if(si0){
goto L78;
}
si0=18U;
l11=si0;
goto L28;
L113:;
si0=l14;
si1=46U;
si0=si0 == si1;
if(si0){
goto L72;
}
si0=29U;
l11=si0;
goto L34;
L112:;
si0=36U;
l11=si0;
si0=l14;
si1=-61U;
si0+=si1;
switch(si0){
case 0:
goto L71;
case 1:
goto L70;
default:
goto L14;
}
L111:;
si0=24U;
l11=si0;
si0=l14;
si1=-58U;
si0+=si1;
switch(si0){
case 0:
goto L68;
case 1:
goto L66;
case 2:
goto L14;
case 3:
goto L67;
default:
goto L14;
}
L110:;
si0=l14;
si1=-60U;
si0+=si1;
switch(si0){
case 0:
goto L62;
case 1:
goto L64;
default:
goto L126;
}
L126:;
si0=l14;
si1=45U;
si0=si0 == si1;
if(si0){
goto L63;
}
si0=l14;
si1=124U;
si0=si0 == si1;
if(si0){
goto L61;
}
si0=51U;
l11=si0;
goto L28;
L109:;
si0=52U;
l11=si0;
si0=l14;
si1=-61U;
si0+=si1;
switch(si0){
case 0:
goto L59;
case 1:
goto L58;
default:
goto L14;
}
L108:;
si0=l14;
si1=46U;
si0=si0 == si1;
if(si0){
goto L56;
}
si0=l14;
si1=61U;
si0=si0 == si1;
if(si0){
goto L57;
}
si0=57U;
l11=si0;
si0=l14;
si1=105U;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=l3;
si0=f2118(i,si0);
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L38;
}
si0=l3;
si0=f2120(i,si0);
si1=110U;
si0=si0 == si1;
if(si0){
goto L55;
}
si0=l3;
si1=105U;
f2121(i,si0,si1);
goto L28;
L107:;
si0=l14;
si1=-61U;
si0+=si1;
switch(si0){
case 0:
goto L52;
case 1:
goto L51;
default:
goto L127;
}
L127:;
si0=l14;
si1=124U;
si0=si0 == si1;
if(si0){
goto L53;
}
si0=58U;
l11=si0;
goto L28;
L106:;
si0=l14;
si1=38U;
si0=si0 == si1;
if(si0){
goto L50;
}
si0=l14;
si1=61U;
si0=si0 == si1;
if(si0){
goto L49;
}
si0=61U;
l11=si0;
goto L28;
L105:;
si0=l14;
si1=61U;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=60U;
l11=si0;
goto L28;
L104:;
si0=l14;
si1=61U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=19U;
l11=si0;
goto L28;
L103:;
si0=l2;
si1=336U;
si0+=si1;
si1=1157104U;
si2=1U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L102:;
si0=l2;
si1=336U;
si0+=si1;
si1=1157126U;
si2=1U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L101:;
si0=l14;
si1=46U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l14;
si1=63U;
si0=si0 == si1;
if(si0){
goto L45;
}
si0=l14;
si1=91U;
si0=si0 == si1;
if(si0){
goto L44;
}
si0=l2;
si1=336U;
si0+=si1;
si1=1156996U;
si2=1U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L100:;
si0=9U;
l11=si0;
goto L34;
L99:;
si0=11U;
l11=si0;
goto L34;
L98:;
si0=23U;
l11=si0;
goto L28;
L97:;
si0=28U;
l11=si0;
goto L28;
L96:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l3;
si0=f2120(i,si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L94;
}
L95:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
L94:;
si0=l4;
f2122(i,si0);
L93:;
si0=l2;
si1=336U;
si0+=si1;
si1=l3;
si2=l1;
si3=l4;
si4=96U;
si5=1U;
si6=0U;
si7=1U;
f2116(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l2;
si0=i32_load(i->m0,(U64)si0+336U);
if(si0){
goto L128;
}
si0=5U;
si1=4U;
si2=l2;
si3=352U;
si2+=si3;
si2=i32_load8_u(i->m0,(U64)si2);
si0=si2?si0:si1;
l11=si0;
si0=l2;
si1=336U;
si0+=si1;
si1=4U;
si0+=si1;
si0=f1313(i,si0);
l8=si0;
goto L15;
L128:;
si0=l2;
si1=366U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=364U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l10=si0;
si0=85U;
l11=si0;
si0=l2;
si1=340U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
goto L15;
L92:;
si0=l14;
si1=39U;
si0=si0 == si1;
if(si0){
goto L31;
}
si0=l2;
si1=336U;
si0+=si1;
si1=l3;
si2=l1;
si3=l4;
si4=39U;
si5=0U;
si6=0U;
si7=0U;
f2116(i,si0,si1,si2,si3,si4,si5,si6,si7);
si0=l2;
si0=i32_load(i->m0,(U64)si0+336U);
if(si0){
goto L129;
}
si0=l2;
si1=376U;
si0+=si1;
si1=l2;
si2=348U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+340U);
l15=sj1;
i64_store(i->m0,(U64)si0+368U,sj1);
sj0=l15;
si0=(U32)(sj0);
l3=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L131;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+376U);
l4=si0;
goto L130;
L131:;
si0=l2;
si1=272U;
si0+=si1;
si1=l2;
si2=368U;
si1+=si2;
f1007(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+276U);
l4=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+272U);
l3=si0;
L130:;
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+384U,si1);
si0=l2;
si1=l3;
si2=l4;
si1+=si2;
i32_store(i->m0,(U64)si0+388U,si1);
si0=l2;
si1=384U;
si0+=si1;
si0=f520(i,si0);
l8=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l2;
si1=384U;
si0+=si1;
si0=f520(i,si0);
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L133;
}
si0=3U;
l11=si0;
goto L132;
L133:;
si0=l2;
si1=392U;
si0+=si1;
si1=l2;
si2=368U;
si1+=si2;
f2123(i,si0,si1);
si0=l2;
si1=-2147483643U;
i32_store(i->m0,(U64)si0+404U,si1);
si0=l2;
si1=392U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
si0=85U;
l11=si0;
L132:;
si0=l2;
si1=368U;
si0+=si1;
f266(i,si0);
goto L15;
L129:;
si0=l2;
si1=366U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l9=si0;
si0=l2;
si1=364U;
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0);
l10=si0;
si0=85U;
l11=si0;
si0=l2;
si1=340U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
goto L15;
L91:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=12U;
l11=si0;
goto L34;
L90:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l2;
si1=336U;
si0+=si1;
si1=1157146U;
si2=2U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L89:;
si0=l14;
si1=123U;
si0=si0 == si1;
if(si0){
goto L134;
}
si0=l2;
si1=336U;
si0+=si1;
si1=1157021U;
si2=1U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L134:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=35U;
l11=si0;
goto L34;
L88:;
si0=l2;
si1=336U;
si0+=si1;
si1=1157070U;
si2=2U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L87:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l3;
si0=f2120(i,si0);
si1=123U;
si0=si0 == si1;
if(si0){
goto L136;
}
si0=1U;
l3=si0;
si0=1157021U;
l4=si0;
goto L135;
L136:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=3U;
l3=si0;
si0=1159292U;
l4=si0;
L135:;
si0=l2;
si1=336U;
si0+=si1;
si1=l4;
si2=l3;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L86:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=70U;
l11=si0;
goto L28;
L85:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l2;
si1=336U;
si0+=si1;
si1=1157140U;
si2=2U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L84:;
si0=l14;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L141;
}
si0=l14;
si1=-61U;
si0+=si1;
switch(si0){
case 0:
goto L139;
case 1:
goto L138;
default:
goto L140;
}
L141:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+32U);
if(si0){
goto L142;
}
si0=l9;
si1=16U;
si0<<=(si1&31);
si1=l10;
si0|=si1;
l16=si0;
si0=1U;
l12=si0;
goto L23;
L142:;
si0=15U;
l11=si0;
goto L28;
L140:;
si0=l14;
si1=45U;
si0=si0 == si1;
if(si0){
goto L137;
}
si0=15U;
si1=16U;
si2=l1;
si2=i32_load8_u(i->m0,(U64)si2+32U);
si0=si2?si0:si1;
l11=si0;
goto L28;
L139:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=71U;
l11=si0;
goto L28;
L138:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l2;
si1=336U;
si0+=si1;
si1=1157127U;
si2=2U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L137:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l2;
si1=336U;
si0+=si1;
si1=1157115U;
si2=2U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L83:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l2;
si1=336U;
si0+=si1;
si1=1157144U;
si2=2U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L82:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=72U;
l11=si0;
goto L28;
L81:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l3;
si0=f2120(i,si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L143;
}
si0=20U;
l11=si0;
goto L28;
L143:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=80U;
l11=si0;
goto L28;
L80:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l3;
si0=f2120(i,si0);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+33U);
if(si0){
goto L77;
}
si0=-2147483648U;
l8=si0;
goto L76;
L79:;
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+28U);
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l3;
si0=f2120(i,si0);
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+33U);
if(si0){
goto L75;
}
si0=l2;
si1=-2147483648U;
i32_store(i->m0,(U64)si0+336U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+28U);
l11=si0;
goto L74;
L78:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=73U;
l11=si0;
goto L28;
L77:;
si0=l2;
si1=280U;
si0+=si1;
si1=2U;
f999(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+280U);
l8=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+284U);
l11=si0;
si1=12079U;
i32_store16(i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+344U,si1);
si0=l2;
si1=l11;
i32_store(i->m0,(U64)si0+340U,si1);
L76:;
si0=l2;
si1=l8;
i32_store(i->m0,(U64)si0+336U,si1);
L144:;
{
si0=l3;
si0=f2118(i,si0);
l8=si0;
si1=-10U;
si0+=si1;
switch(si0){
case 0:
goto L25;
case 1:
goto L145;
case 2:
goto L145;
case 3:
goto L147;
default:
goto L146;
}
L147:;
si0=l3;
si0=f2120(i,si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
goto L25;
L146:;
si0=l8;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L24;
}
L145:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+336U);
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L148;
}
si0=l2;
si1=336U;
si0+=si1;
si1=l8;
f1182(i,si0,si1);
L148:;
si0=l4;
f2119(i,si0);
goto L144;
}
L75:;
si0=l2;
si1=288U;
si0+=si1;
si1=2U;
f999(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+288U);
l13=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+292U);
l8=si0;
si1=10799U;
i32_store16(i->m0,(U64)si0,si1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+344U,si1);
si0=l2;
si1=l8;
i32_store(i->m0,(U64)si0+340U,si1);
si0=l2;
si1=l13;
i32_store(i->m0,(U64)si0+336U,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0+28U);
l11=si0;
si0=l2;
si1=336U;
si0+=si1;
l8=si0;
si0=l13;
si1=-2147483648U;
si0=si0 != si1;
if(si0){
goto L73;
}
L74:;
si0=0U;
l8=si0;
L73:;
si0=l1;
si1=l3;
si2=l11;
si3=l4;
si4=l8;
si1=f2115(i,si1,si2,si3,si4);
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+336U);
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L149;
}
si0=l2;
si1=336U;
si0+=si1;
si0=f1313(i,si0);
l8=si0;
si0=86U;
l11=si0;
goto L22;
L149:;
si0=-2147483648U;
si1=l2;
si1=i32_load(i->m0,(U64)si1+340U);
f329(i,si0,si1);
goto L23;
L72:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l3;
si0=f2120(i,si0);
l8=si0;
si1=61U;
si0=si0 == si1;
if(si0){
goto L150;
}
si0=l8;
si1=46U;
si0=si0 == si1;
if(si0){
goto L151;
}
si0=33U;
l11=si0;
goto L28;
L151:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l2;
si1=336U;
si0+=si1;
si1=1157101U;
si2=3U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L150:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=34U;
l11=si0;
goto L28;
L71:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l3;
si0=f2120(i,si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L69;
}
si0=55U;
l11=si0;
goto L28;
L70:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=26U;
l11=si0;
goto L34;
L69:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l2;
si1=336U;
si0+=si1;
si1=1157047U;
si2=3U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L68:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l3;
si0=f2120(i,si0);
si1=60U;
si0=si0 == si1;
if(si0){
goto L65;
}
si0=25U;
l11=si0;
goto L34;
L67:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l2;
si1=336U;
si0+=si1;
si1=1157099U;
si2=2U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L66:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l2;
si1=336U;
si0+=si1;
si1=1157142U;
si2=2U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L65:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l2;
si1=336U;
si0+=si1;
si1=1157137U;
si2=3U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L64:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=53U;
l11=si0;
goto L28;
L63:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l2;
si1=336U;
si0+=si1;
si1=1157109U;
si2=2U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L62:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l3;
si0=f2120(i,si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L60;
}
si0=21U;
l11=si0;
goto L28;
L61:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l2;
si1=336U;
si0+=si1;
si1=1157124U;
si2=2U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L60:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=74U;
l11=si0;
goto L28;
L59:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=54U;
l11=si0;
goto L28;
L58:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l3;
si0=f2120(i,si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L152;
}
si0=22U;
l11=si0;
goto L28;
L152:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=75U;
l11=si0;
goto L28;
L57:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l3;
si0=f2120(i,si0);
si1=61U;
si0=si0 == si1;
if(si0){
goto L54;
}
si0=56U;
l11=si0;
goto L28;
L56:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l2;
si1=336U;
si0+=si1;
si1=1157092U;
si2=2U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L55:;
si0=l3;
si0=f2118(i,si0);
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L39;
}
si0=l3;
si0=f2120(i,si0);
l8=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L154;
}
si0=l8;
si1=95U;
si0=si0 == si1;
if(si0){
goto L153;
}
si0=l8;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L153;
}
si0=l8;
si1=2097119U;
si0&=si1;
si1=-65U;
si0+=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L153;
}
L154:;
si0=l4;
f2119(i,si0);
si0=l4;
f2119(i,si0);
si0=50U;
l11=si0;
goto L28;
L153:;
si0=l3;
si1=110U;
f2121(i,si0,si1);
si0=l3;
si1=105U;
f2121(i,si0,si1);
goto L28;
L54:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l2;
si1=336U;
si0+=si1;
si1=1157067U;
si2=3U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L53:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=59U;
l11=si0;
goto L28;
L52:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=77U;
l11=si0;
goto L28;
L51:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l2;
si1=336U;
si0+=si1;
si1=1157129U;
si2=2U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
goto L32;
L50:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=62U;
l11=si0;
goto L28;
L49:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=76U;
l11=si0;
goto L28;
L48:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=78U;
l11=si0;
goto L28;
L47:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=79U;
l11=si0;
goto L28;
L46:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=30U;
l11=si0;
goto L34;
L45:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=31U;
l11=si0;
goto L28;
L44:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=32U;
l11=si0;
goto L12;
L43:;
si0=l13;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L23;
case 1:
goto L157;
case 2:
goto L155;
case 3:
goto L23;
case 4:
goto L23;
default:
goto L156;
}
L157:;
si0=l4;
f2122(i,si0);
goto L23;
L156:;
si0=l13;
si1=32U;
si0=si0 == si1;
if(si0){
goto L23;
}
L155:;
si0=l2;
si1=336U;
si0+=si1;
si1=l13;
f1747(i,si0,si1);
si0=l2;
si1=-2147483648U;
i32_store(i->m0,(U64)si0+348U,si1);
si0=l2;
si1=336U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
goto L30;
L42:;
si0=l2;
si1=376U;
si0+=si1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(i->m0,(U64)si0+369U,sj1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+368U,si1);
si0=l2;
si1=368U;
si0+=si1;
si1=l13;
f1641(i,si0,si1);
si0=l2;
si1=368U;
si0+=si1;
si1=1U;
si0|=si1;
l17=si0;
si0=196U;
l11=si0;
si0=l13;
si1=48U;
si0=si0 == si1;
l18=si0;
si0=0U;
l14=si0;
si0=0U;
l19=si0;
si0=0U;
l20=si0;
L158:;
{
si0=l3;
si0=f2120(i,si0);
l8=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L174;
}
si0=l8;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L26;
}
si0=l8;
si1=l11;
si0=TF(i->t0,si1,U32 (*)(glicolwasmInstance*,U32))(i,si0);
if(si0){
goto L172;
}
si0=l8;
si1=-98U;
si0+=si1;
switch(si0){
case 0:
goto L170;
case 1:
goto L26;
case 2:
goto L26;
case 3:
goto L165;
default:
goto L173;
}
L174:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
goto L158;
L173:;
si0=l8;
si1=46U;
si0=si0 == si1;
if(si0){
goto L166;
}
si0=l8;
si1=66U;
si0=si0 == si1;
if(si0){
goto L167;
}
si0=l8;
si1=79U;
si0=si0 == si1;
if(si0){
goto L168;
}
si0=l8;
si1=88U;
si0=si0 == si1;
if(si0){
goto L169;
}
si0=l8;
si1=111U;
si0=si0 == si1;
if(si0){
goto L171;
}
si0=l8;
si1=120U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l18;
si0=!(si0);
if(si0){
goto L26;
}
si0=l2;
si1=368U;
si0+=si1;
si0=f1129(i,si0);
si1=1U;
si0=si0 > si1;
if(si0){
goto L26;
}
goto L159;
L172:;
si0=l2;
si1=368U;
si0+=si1;
si1=l8;
f1641(i,si0,si1);
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
goto L158;
L171:;
si0=l18;
si0=!(si0);
if(si0){
goto L26;
}
si0=l2;
si1=368U;
si0+=si1;
si0=f1129(i,si0);
si1=2U;
si0=si0 >= si1;
if(si0){
goto L26;
}
goto L159;
L170:;
si0=l18;
si0=!(si0);
if(si0){
goto L26;
}
si0=l2;
si1=368U;
si0+=si1;
si0=f1129(i,si0);
si1=2U;
si0=si0 >= si1;
if(si0){
goto L26;
}
goto L159;
L169:;
si0=l18;
si0=!(si0);
if(si0){
goto L26;
}
si0=l2;
si1=368U;
si0+=si1;
si0=f1129(i,si0);
si1=2U;
si0=si0 >= si1;
if(si0){
goto L26;
}
goto L159;
L168:;
si0=l18;
si0=!(si0);
if(si0){
goto L26;
}
si0=l2;
si1=368U;
si0+=si1;
si0=f1129(i,si0);
si1=2U;
si0=si0 >= si1;
if(si0){
goto L26;
}
goto L159;
L167:;
si0=l18;
si0=!(si0);
if(si0){
goto L26;
}
si0=l2;
si1=368U;
si0+=si1;
si0=f1129(i,si0);
si1=2U;
si0=si0 >= si1;
if(si0){
goto L26;
}
goto L159;
L166:;
si0=l20;
si1=l14;
si2=0U;
si1=si1 != si2;
si0|=si1;
si1=1U;
si0&=si1;
if(si0){
goto L26;
}
si0=l3;
si0=f2118(i,si0);
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L164;
}
si0=l3;
si0=f2120(i,si0);
l14=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l14;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L163;
}
si0=l14;
si1=46U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l14;
si1=95U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l14;
si1=2097119U;
si0&=si1;
si1=-65U;
si0+=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L27;
}
si0=1U;
l20=si0;
si0=l2;
si1=368U;
si0+=si1;
si1=1124764U;
si2=1U;
f1379(i,si0,si1,si2);
si0=l4;
f2119(i,si0);
si0=l2;
si1=368U;
si0+=si1;
si1=1159344U;
si2=1U;
f1379(i,si0,si1,si2);
si0=0U;
l14=si0;
goto L158;
L165:;
si0=l19;
si1=l14;
si2=0U;
si1=si1 != si2;
si0|=si1;
si1=1U;
si0&=si1;
if(si0){
goto L26;
}
si0=l3;
si0=f2118(i,si0);
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L162;
}
si0=l3;
si0=f2120(i,si0);
l14=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l14;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L176;
}
si0=l14;
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L175;
case 1:
goto L27;
case 2:
goto L175;
default:
goto L27;
}
L176:;
si0=1U;
l19=si0;
si0=l2;
si1=368U;
si0+=si1;
si1=1159364U;
si2=1U;
f1379(i,si0,si1,si2);
si0=l4;
f2119(i,si0);
goto L160;
L175:;
si0=l2;
si1=368U;
si0+=si1;
si1=1159364U;
si2=1U;
f1379(i,si0,si1,si2);
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
l8=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L161;
}
si0=l2;
si1=368U;
si0+=si1;
si1=l8;
f1641(i,si0,si1);
si0=l4;
f2119(i,si0);
si0=1U;
l19=si0;
goto L160;
L164:;
si0=1159328U;
f14(i,si0);
UNREACHABLE;
L163:;
si0=1U;
l20=si0;
si0=l2;
si1=368U;
si0+=si1;
si1=1124764U;
si2=1U;
f1379(i,si0,si1,si2);
si0=l4;
f2119(i,si0);
si0=0U;
l14=si0;
goto L158;
L162:;
si0=1159348U;
f14(i,si0);
UNREACHABLE;
L161:;
si0=1159368U;
f14(i,si0);
UNREACHABLE;
L160:;
si0=0U;
l14=si0;
si0=1U;
l20=si0;
goto L158;
L159:;
si0=l2;
si1=368U;
si0+=si1;
si1=l8;
f1641(i,si0,si1);
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l8;
si1=66U;
si0=si0 == si1;
l13=si0;
if(si0){
goto L178;
}
si0=l8;
si1=79U;
si0=si0 == si1;
if(si0){
goto L179;
}
si0=197U;
l11=si0;
si0=l8;
si1=88U;
si0=si0 == si1;
if(si0){
goto L177;
}
si0=l8;
si1=98U;
si0=si0 == si1;
if(si0){
goto L178;
}
si0=l8;
si1=111U;
si0=si0 == si1;
if(si0){
goto L179;
}
si0=l8;
si1=120U;
si0=si0 == si1;
if(si0){
goto L177;
}
si0=l2;
si1=l8;
i32_store(i->m0,(U64)si0+384U,si1);
si0=l2;
si1=348U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+340U,si1);
si0=l2;
si1=1159464U;
i32_store(i->m0,(U64)si0+336U,si1);
si0=l2;
si1=198U;
i32_store(i->m0,(U64)si0+396U,si1);
si0=l2;
si1=l2;
si2=392U;
si1+=si2;
i32_store(i->m0,(U64)si0+344U,si1);
si0=l2;
si1=l2;
si2=384U;
si1+=si2;
i32_store(i->m0,(U64)si0+392U,si1);
si0=l2;
si1=336U;
si0+=si1;
si1=1159496U;
f377(i,si0,si1);
UNREACHABLE;
L179:;
si0=199U;
l11=si0;
goto L177;
L178:;
si0=200U;
l11=si0;
L177:;
si0=1U;
l14=si0;
si0=l13;
if(si0){
goto L180;
}
si0=l8;
si1=79U;
si0=si0 == si1;
if(si0){
goto L181;
}
si0=16U;
l13=si0;
si0=l8;
si1=88U;
si0=si0 == si1;
if(si0){
goto L158;
}
si0=l8;
si1=98U;
si0=si0 == si1;
if(si0){
goto L180;
}
si0=l8;
si1=111U;
si0=si0 == si1;
if(si0){
goto L181;
}
si0=l8;
si1=120U;
si0=si0 == si1;
if(si0){
goto L158;
}
si0=l2;
si1=l8;
i32_store(i->m0,(U64)si0+384U,si1);
si0=l2;
si1=348U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+340U,si1);
si0=l2;
si1=1159464U;
i32_store(i->m0,(U64)si0+336U,si1);
si0=l2;
si1=198U;
i32_store(i->m0,(U64)si0+396U,si1);
si0=l2;
si1=l2;
si2=392U;
si1+=si2;
i32_store(i->m0,(U64)si0+344U,si1);
si0=l2;
si1=l2;
si2=384U;
si1+=si2;
i32_store(i->m0,(U64)si0+392U,si1);
si0=l2;
si1=336U;
si0+=si1;
si1=1159480U;
f377(i,si0,si1);
UNREACHABLE;
L181:;
si0=8U;
l13=si0;
goto L158;
L180:;
si0=2U;
l13=si0;
goto L158;
}
L41:;
si0=1U;
l8=si0;
L40:;
L182:;
{
si0=l8;
switch(si0){
case 0:
goto L184;
case 1:
goto L183;
default:
goto L183;
}
L184:;
si0=l7;
si1=l13;
f1641(i,si0,si1);
si0=1U;
l8=si0;
goto L182;
L183:;
L187:;
{
si0=l3;
si0=f2120(i,si0);
l13=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L186;
}
si0=l13;
si1=95U;
si0=si0 == si1;
if(si0){
goto L188;
}
si0=l13;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L188;
}
si0=l13;
si1=2097119U;
si0&=si1;
si1=-65U;
si0+=si1;
si1=26U;
si0=si0 >= si1;
if(si0){
goto L186;
}
L188:;
si0=l4;
f2119(i,si0);
si0=l3;
si0=f2118(i,si0);
si0=l2;
si1=392U;
si0+=si1;
si1=l13;
f1641(i,si0,si1);
si0=l1;
si0=i32_load(i->m0,(U64)si0);
if(si0){
goto L185;
}
goto L187;
}
L186:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+392U);
l3=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L190;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+400U);
l4=si0;
goto L189;
L190:;
si0=l2;
si1=264U;
si0+=si1;
si1=l2;
si2=392U;
si1+=si2;
f1007(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+268U);
l4=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+264U);
l3=si0;
L189:;
si0=l2;
si1=336U;
si0+=si1;
si1=l3;
si2=l4;
f1314(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0+336U);
l11=si0;
si1=90U;
si0=si0 == si1;
if(si0){
goto L194;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+340U);
l8=si0;
goto L193;
L194:;
si0=l2;
si1=336U;
si0+=si1;
f1096(i,si0);
si0=l2;
si0=i32_load(i->m0,(U64)si0+392U);
l3=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L196;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+400U);
l4=si0;
goto L195;
L196:;
si0=l2;
si1=256U;
si0+=si1;
si1=l2;
si2=392U;
si1+=si2;
f1007(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+260U);
l4=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+256U);
l3=si0;
L195:;
si0=l3;
si1=l4;
si0=f1353(i,si0,si1);
si1=1U;
si0&=si1;
if(si0){
goto L191;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+392U);
l3=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L198;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+400U);
l4=si0;
goto L197;
L198:;
si0=l2;
si1=248U;
si0+=si1;
si1=l2;
si2=392U;
si1+=si2;
f1007(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+252U);
l4=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+248U);
l3=si0;
L197:;
si0=l3;
si1=l4;
si0=f1352(i,si0,si1);
if(si0){
goto L192;
}
si0=l2;
si1=336U;
si0+=si1;
si1=l2;
si2=392U;
si1+=si2;
f2123(i,si0,si1);
si0=l2;
si1=-2147483642U;
i32_store(i->m0,(U64)si0+348U,si1);
si0=l2;
si1=336U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
si0=85U;
l11=si0;
L193:;
si0=l2;
si1=392U;
si0+=si1;
f266(i,si0);
goto L15;
L192:;
si0=l2;
si1=336U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=392U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+392U);
i64_store(i->m0,(U64)si0+336U,sj1);
si0=l2;
si1=336U;
si0+=si1;
si0=f1313(i,si0);
l8=si0;
si0=l1;
si1=1U;
i32_store8(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l9;
i32_store16(i->m0,(U64)si0+314U,si1);
si0=l2;
si1=l10;
i32_store16(i->m0,(U64)si0+312U,si1);
si0=l2;
si1=l8;
i32_store(i->m0,(U64)si0+308U,si1);
si0=2U;
l11=si0;
si0=l2;
si1=2U;
i32_store(i->m0,(U64)si0+304U,si1);
goto L9;
L191:;
si0=l2;
si1=336U;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
si1=l2;
si2=392U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+392U);
i64_store(i->m0,(U64)si0+336U,sj1);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
si0=87U;
l11=si0;
goto L15;
L185:;
si0=0U;
l8=si0;
goto L182;
}
L39:;
si0=1159312U;
f14(i,si0);
UNREACHABLE;
L38:;
si0=1159296U;
f14(i,si0);
UNREACHABLE;
L37:;
si0=1159528U;
f14(i,si0);
UNREACHABLE;
L36:;
si0=l1;
si1=1U;
i32_store8(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l9;
i32_store16(i->m0,(U64)si0+314U,si1);
si0=l2;
si1=l10;
i32_store16(i->m0,(U64)si0+312U,si1);
si0=l2;
si1=89U;
i32_store(i->m0,(U64)si0+304U,si1);
goto L7;
L35:;
si0=7U;
l11=si0;
L34:;
goto L22;
L33:;
si0=l2;
si1=336U;
si0+=si1;
si1=1157091U;
si2=1U;
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
L32:;
si0=l1;
si1=1U;
i32_store8(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l9;
i32_store16(i->m0,(U64)si0+314U,si1);
si0=l2;
si1=l10;
i32_store16(i->m0,(U64)si0+312U,si1);
si0=l2;
si1=l8;
i32_store(i->m0,(U64)si0+308U,si1);
si0=l2;
si1=87U;
i32_store(i->m0,(U64)si0+304U,si1);
goto L6;
L31:;
si0=l2;
sj1=-9223372015379939328ULL;
i64_store(i->m0,(U64)si0+344U,sj1);
si0=l2;
sj1=4294967296ULL;
i64_store(i->m0,(U64)si0+336U,sj1);
si0=l2;
si1=336U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
L30:;
si0=85U;
l11=si0;
goto L12;
L29:;
si0=10U;
l11=si0;
L28:;
goto L14;
L27:;
si0=l3;
si1=l8;
f2121(i,si0,si1);
si0=0U;
l14=si0;
L26:;
si0=l12;
si1=65535U;
si0&=si1;
si0=!(si0);
if(si0){
goto L199;
}
si0=l16;
si1=16U;
si0>>=(si1&31);
l9=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+368U);
l3=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L201;
}
si0=l2;
si1=368U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+376U);
si2=1U;
si1+=si2;
f1381(i,si0,si1);
si0=l2;
si1=368U;
si0+=si1;
f2128(i,si0);
goto L200;
L201:;
si0=l2;
si1=240U;
si0+=si1;
si1=l2;
si2=368U;
si1+=si2;
f1007(i,si0,si1);
si0=l2;
si1=232U;
si0+=si1;
si1=l2;
si2=368U;
si1+=si2;
f1007(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+236U);
l3=si0;
si1=10U;
si0=si0 > si1;
if(si0){
goto L202;
}
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+336U,si1);
si0=l2;
si1=224U;
si0+=si1;
si1=45U;
si2=l2;
si3=336U;
si2+=si3;
si3=4U;
f1184(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+228U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+224U);
l4=si0;
si0=l2;
si1=216U;
si0+=si1;
si1=l2;
si2=368U;
si1+=si2;
f1007(i,si0,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L200;
}
si0=l17;
si1=11U;
si2=l2;
si2=i32_load(i->m0,(U64)si2+220U);
l8=si2;
si3=l3;
f2129(i,si0,si1,si2,si3);
si0=l2;
si1=208U;
si0+=si1;
si1=0U;
si2=l3;
si3=l17;
si4=11U;
si5=1116348U;
f824(i,si0,si1,si2,si3,si4,si5);
si0=l2;
si0=i32_load(i->m0,(U64)si0+208U);
si1=l2;
si1=i32_load(i->m0,(U64)si1+212U);
si2=l4;
si3=l3;
si4=1116364U;
f1383(i,si0,si1,si2,si3,si4);
si0=l2;
si1=l2;
si1=i32_load8_u(i->m0,(U64)si1+368U);
si2=1U;
si1&=si2;
si2=l8;
si3=l3;
si2+=si3;
si3=1U;
si2<<=(si3&31);
si1|=si2;
i32_store8(i->m0,(U64)si0+368U,si1);
goto L200;
L202:;
si0=l2;
si1=200U;
si0+=si1;
si1=l2;
si2=368U;
si1+=si2;
f1007(i,si0,si1);
si0=l2;
si1=336U;
si0+=si1;
si1=l3;
si2=1U;
si1+=si2;
si2=l2;
si2=i32_load(i->m0,(U64)si2+200U);
si3=l2;
si3=i32_load(i->m0,(U64)si3+204U);
f1375(i,si0,si1,si2,si3);
si0=l2;
si1=336U;
si0+=si1;
f2128(i,si0);
si0=l2;
si1=368U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0+368U,sj1);
L200:;
si0=l16;
l10=si0;
L199:;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L203;
}
si0=l2;
si1=336U;
si0+=si1;
si1=l2;
si2=368U;
si1+=si2;
f1372(i,si0,si1);
si0=l7;
f266(i,si0);
si0=l7;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
L203:;
si0=l14;
si0=!(si0);
if(si0){
goto L207;
}
si0=l2;
si1=192U;
si0+=si1;
si1=l2;
si2=368U;
si1+=si2;
si2=2U;
si3=1159512U;
f2130(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+192U);
l16=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+196U);
l14=si0;
si0=!(si0);
if(si0){
goto L205;
}
si0=l16;
l3=si0;
si0=l14;
l4=si0;
si0=l16;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L209;
case 1:
goto L206;
case 2:
goto L208;
default:
goto L206;
}
L209:;
si0=l14;
si1=-1U;
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L205;
}
si0=l16;
si1=1U;
si0+=si1;
l3=si0;
goto L206;
L208:;
si0=l16;
l3=si0;
si0=l14;
l4=si0;
si0=l14;
si1=1U;
si0=si0 != si1;
if(si0){
goto L206;
}
goto L205;
L207:;
si0=l2;
si1=392U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=368U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+368U);
l15=sj1;
i64_store(i->m0,(U64)si0+392U,sj1);
sj0=l15;
si0=(U32)(sj0);
l3=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L211;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+400U);
l4=si0;
goto L210;
L211:;
si0=l2;
si1=176U;
si0+=si1;
si1=l2;
si2=392U;
si1+=si2;
f1007(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+180U);
l4=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+176U);
l3=si0;
L210:;
si0=l2;
si1=336U;
si0+=si1;
si1=l3;
si2=l4;
si3=10U;
f698(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+336U);
si0=!(si0);
if(si0){
goto L213;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+392U);
l3=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l3;
si0=si0 != si1;
if(si0){
goto L215;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+400U);
l4=si0;
goto L214;
L215:;
si0=l2;
si1=168U;
si0+=si1;
si1=l2;
si2=392U;
si1+=si2;
f1007(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+172U);
l4=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+168U);
l3=si0;
L214:;
si0=l2;
si1=336U;
si0+=si1;
si1=l3;
si2=l4;
f57(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+336U);
si0=!(si0);
if(si0){
goto L216;
}
si0=l2;
si1=336U;
si0+=si1;
si1=l2;
si2=392U;
si1+=si2;
f2123(i,si0,si1);
si0=l2;
si1=-2147483644U;
i32_store(i->m0,(U64)si0+348U,si1);
si0=l2;
si1=336U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
si0=85U;
l11=si0;
goto L212;
L216:;
si0=l2;
sf0=f32_load(i->m0,(U64)si0+340U);
l21=sf0;
si0=l2;
si1=336U;
si0+=si1;
si1=8U;
si0+=si1;
l3=si0;
si1=l2;
si2=392U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+392U);
i64_store(i->m0,(U64)si0+336U,sj1);
si0=16U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
sf1=l21;
f32_store(i->m0,(U64)si0,sf1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l8;
si1=12U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=1U;
l11=si0;
goto L15;
L213:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+340U);
l8=si0;
si0=0U;
l11=si0;
L212:;
si0=l2;
si1=392U;
si0+=si1;
f266(i,si0);
goto L15;
L206:;
si0=l4;
si1=9U;
si0=si0 < si1;
if(si0){
goto L217;
}
si0=l13;
si1=10U;
si0=si0 > si1;
if(si0){
goto L218;
}
si0=0U;
l11=si0;
si0=l13;
sj0=(U64)(si0);
l22=sj0;
si0=0U;
l8=si0;
L219:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L204;
}
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l12=si0;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L205;
}
si0=l8;
sj0=(U64)(si0);
sj1=l22;
sj0*=sj1;
l15=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si0=si0 != si1;
if(si0){
goto L205;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
sj0=l15;
si0=(U32)(sj0);
l18=si0;
si1=l12;
si0+=si1;
l8=si0;
si1=l18;
si0=si0 >= si1;
if(si0){
goto L219;
}
goto L205;
}
L218:;
si0=0U;
l11=si0;
si0=l13;
sj0=(U64)(si0);
l22=sj0;
si0=0U;
l8=si0;
L220:;
{
si0=l4;
si0=!(si0);
if(si0){
goto L204;
}
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0);
l18=si0;
si1=-48U;
si0+=si1;
l12=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L221;
}
si0=-1U;
si1=l18;
si2=32U;
si1|=si2;
l12=si1;
si2=-87U;
si1+=si2;
l18=si1;
si2=l18;
si3=l12;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l12=si0;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L205;
}
L221:;
si0=l8;
sj0=(U64)(si0);
sj1=l22;
sj0*=sj1;
l15=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=0U;
si0=si0 != si1;
if(si0){
goto L205;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
sj0=l15;
si0=(U32)(sj0);
l18=si0;
si1=l12;
si0+=si1;
l8=si0;
si1=l18;
si0=si0 >= si1;
if(si0){
goto L220;
}
goto L205;
}
L217:;
si0=l13;
si1=10U;
si0=si0 > si1;
if(si0){
goto L223;
}
si0=0U;
l8=si0;
L224:;
{
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l11=si0;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L205;
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l11;
si1=l8;
si2=l13;
si1*=si2;
si0+=si1;
l8=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L224;
}
goto L222;
}
L223:;
si0=0U;
l8=si0;
L225:;
{
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0);
l12=si0;
si1=-48U;
si0+=si1;
l11=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L226;
}
si0=-1U;
si1=l12;
si2=32U;
si1|=si2;
l11=si1;
si2=-87U;
si1+=si2;
l12=si1;
si2=l12;
si3=l11;
si4=-97U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l11=si0;
si1=l13;
si0=si0 >= si1;
if(si0){
goto L205;
}
L226:;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l11;
si1=l8;
si2=l13;
si1*=si2;
si0+=si1;
l8=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
if(si0){
goto L225;
}
}
L222:;
si0=0U;
l11=si0;
goto L204;
L205:;
si0=l2;
si1=184U;
si0+=si1;
si1=l14;
f999(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+184U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+188U);
si1=l16;
si2=l14;
si0=f3069(i,si0,si1,si2);
l4=si0;
si0=l2;
si1=-2147483644U;
i32_store(i->m0,(U64)si0+348U,si1);
si0=l2;
si1=l14;
i32_store(i->m0,(U64)si0+344U,si1);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+340U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+336U,si1);
si0=l2;
si1=336U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
si0=85U;
l11=si0;
L204:;
si0=l2;
si1=368U;
si0+=si1;
f266(i,si0);
goto L15;
L25:;
si0=l4;
f2122(i,si0);
L24:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+336U);
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L23;
}
}
si0=l2;
si1=336U;
si0+=si1;
si0=f1313(i,si0);
l8=si0;
si0=86U;
l11=si0;
L22:;
si0=l1;
si1=1U;
i32_store8(i->m0,(U64)si0+32U,si1);
goto L11;
L15:;
si0=1U;
l3=si0;
si0=l11;
si1=-6U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L13;
case 2:
goto L14;
case 3:
goto L13;
case 4:
goto L14;
case 5:
goto L13;
case 6:
goto L13;
case 7:
goto L14;
case 8:
goto L14;
case 9:
goto L14;
case 10:
goto L14;
case 11:
goto L14;
case 12:
goto L14;
case 13:
goto L14;
case 14:
goto L14;
case 15:
goto L14;
case 16:
goto L14;
case 17:
goto L14;
case 18:
goto L14;
case 19:
goto L13;
case 20:
goto L13;
case 21:
goto L13;
case 22:
goto L14;
case 23:
goto L13;
case 24:
goto L13;
case 25:
goto L14;
case 26:
goto L12;
case 27:
goto L14;
case 28:
goto L14;
case 29:
goto L13;
case 30:
goto L14;
case 31:
goto L13;
case 32:
goto L13;
case 33:
goto L13;
case 34:
goto L13;
case 35:
goto L14;
case 36:
goto L13;
case 37:
goto L13;
case 38:
goto L13;
case 39:
goto L14;
case 40:
goto L14;
case 41:
goto L13;
case 42:
goto L13;
case 43:
goto L14;
case 44:
goto L14;
case 45:
goto L14;
case 46:
goto L14;
case 47:
goto L14;
case 48:
goto L14;
case 49:
goto L14;
case 50:
goto L14;
case 51:
goto L14;
case 52:
goto L14;
case 53:
goto L14;
case 54:
goto L14;
case 55:
goto L14;
case 56:
goto L14;
case 57:
goto L13;
case 58:
goto L13;
case 59:
goto L13;
case 60:
goto L14;
case 61:
goto L14;
case 62:
goto L13;
case 63:
goto L13;
case 64:
goto L14;
case 65:
goto L14;
case 66:
goto L14;
case 67:
goto L14;
case 68:
goto L14;
case 69:
goto L14;
case 70:
goto L14;
case 71:
goto L14;
case 72:
goto L14;
case 73:
goto L14;
case 74:
goto L14;
case 75:
goto L13;
case 76:
goto L13;
case 77:
goto L13;
case 78:
goto L13;
case 79:
goto L12;
default:
goto L13;
}
L14:;
si0=0U;
l3=si0;
L13:;
si0=l1;
si1=l3;
i32_store8(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l9;
i32_store16(i->m0,(U64)si0+314U,si1);
si0=l2;
si1=l10;
i32_store16(i->m0,(U64)si0+312U,si1);
si0=l2;
si1=l8;
i32_store(i->m0,(U64)si0+308U,si1);
si0=l2;
si1=l11;
i32_store(i->m0,(U64)si0+304U,si1);
si0=l11;
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L9;
case 1:
goto L5;
case 2:
goto L8;
default:
goto L10;
}
L12:;
si0=l1;
si1=0U;
i32_store8(i->m0,(U64)si0+32U,si1);
L11:;
si0=l2;
si1=l9;
i32_store16(i->m0,(U64)si0+314U,si1);
si0=l2;
si1=l10;
i32_store16(i->m0,(U64)si0+312U,si1);
si0=l2;
si1=l8;
i32_store(i->m0,(U64)si0+308U,si1);
si0=l2;
si1=l11;
i32_store(i->m0,(U64)si0+304U,si1);
goto L5;
L10:;
si0=l11;
si1=-87U;
si0+=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L7;
default:
goto L5;
}
L9:;
si0=88U;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+88U);
l4=si0;
si1=212U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l4;
si2=216U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l8;
si0=f2131(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
goto L4;
L8:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=1114112U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
si1=-2147483647U;
i32_store(i->m0,(U64)si0+348U,si1);
si0=l2;
si1=336U;
si0+=si1;
si0=f2117(i,si0);
l1=si0;
si0=l0;
si1=l9;
i32_store16(i->m0,(U64)si0+10U,si1);
si0=l0;
si1=l10;
i32_store16(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=85U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=304U;
si0+=si1;
f1078(i,si0);
goto L3;
L7:;
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+304U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=8U;
si0+=si1;
si1=l2;
si2=304U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
goto L3;
L6:;
si0=l2;
si1=l8;
l4=si1;
i32_store(i->m0,(U64)si0+320U,si1);
si0=l2;
si1=160U;
si0+=si1;
si1=l4;
f397(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+164U);
l8=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+160U);
l11=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+88U);
l3=si0;
si1=212U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l3;
si2=216U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l4;
si0=f2131(i,si0,si1,si2);
l13=si0;
si0=l11;
si1=l8;
si2=1157047U;
si3=3U;
si0=f247(i,si0,si1,si2,si3);
l3=si0;
si0=l13;
if(si0){
goto L231;
}
si0=l3;
if(si0){
goto L230;
}
L231:;
si0=l13;
si1=l11;
si2=l8;
si3=1157067U;
si4=3U;
si1=f247(i,si1,si2,si3,si4);
si2=1U;
si1^=si2;
si0|=si1;
si0=!(si0);
if(si0){
goto L238;
}
si0=l13;
si1=l11;
si2=l8;
si3=1157127U;
si4=2U;
si1=f247(i,si1,si2,si3,si4);
si2=1U;
si1^=si2;
si0|=si1;
si0=!(si0);
if(si0){
goto L237;
}
si0=l13;
si1=l11;
si2=l8;
si3=1157109U;
si4=2U;
si1=f247(i,si1,si2,si3,si4);
si2=1U;
si1^=si2;
si0|=si1;
si0=!(si0);
if(si0){
goto L236;
}
si0=l13;
si1=l11;
si2=l8;
si3=1157099U;
si4=2U;
si1=f247(i,si1,si2,si3,si4);
si2=1U;
si1^=si2;
si0|=si1;
si0=!(si0);
if(si0){
goto L235;
}
si0=l13;
si1=l11;
si2=l8;
si3=1157142U;
si4=2U;
si1=f247(i,si1,si2,si3,si4);
si2=1U;
si1^=si2;
si0|=si1;
si0=!(si0);
if(si0){
goto L234;
}
si0=l11;
si1=l8;
si2=1157137U;
si3=3U;
si0=f247(i,si0,si1,si2,si3);
if(si0){
goto L233;
}
si0=88U;
l3=si0;
si0=l13;
si0=!(si0);
if(si0){
goto L232;
}
goto L227;
L238:;
si0=l2;
si1=336U;
si0+=si1;
si1=l2;
si2=320U;
si1+=si2;
f2099(i,si0,si1);
si0=l2;
si1=144U;
si0+=si1;
si1=73U;
f999(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+144U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+148U);
si1=1159781U;
si2=73U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l2;
si1=356U;
si0+=si1;
si1=73U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=352U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+348U,si1);
si0=l2;
si1=336U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
goto L228;
L237:;
si0=l2;
si1=336U;
si0+=si1;
si1=l2;
si2=320U;
si1+=si2;
f2099(i,si0,si1);
si0=l2;
si1=136U;
si0+=si1;
si1=49U;
f999(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+136U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+140U);
si1=1159854U;
si2=49U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l2;
si1=356U;
si0+=si1;
si1=49U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=352U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+348U,si1);
si0=l2;
si1=336U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
goto L228;
L236:;
si0=l2;
si1=336U;
si0+=si1;
si1=l2;
si2=320U;
si1+=si2;
f2099(i,si0,si1);
si0=l2;
si1=128U;
si0+=si1;
si1=62U;
f999(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+128U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+132U);
si1=1159903U;
si2=62U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l2;
si1=356U;
si0+=si1;
si1=62U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=352U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+348U,si1);
si0=l2;
si1=336U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
goto L228;
L235:;
si0=l2;
si1=336U;
si0+=si1;
si1=l2;
si2=320U;
si1+=si2;
f2099(i,si0,si1);
si0=l2;
si1=120U;
si0+=si1;
si1=91U;
f999(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+120U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+124U);
si1=1159965U;
si2=91U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l2;
si1=356U;
si0+=si1;
si1=91U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=352U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+348U,si1);
si0=l2;
si1=336U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
goto L228;
L234:;
si0=l2;
si1=336U;
si0+=si1;
si1=l2;
si2=320U;
si1+=si2;
f2099(i,si0,si1);
si0=l2;
si1=112U;
si0+=si1;
si1=46U;
f999(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+112U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+116U);
si1=1160056U;
si2=46U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l2;
si1=356U;
si0+=si1;
si1=46U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=352U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+348U,si1);
si0=l2;
si1=336U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
goto L228;
L233:;
si0=88U;
l3=si0;
si0=l13;
if(si0){
goto L227;
}
si0=l2;
si1=336U;
si0+=si1;
si1=l2;
si2=320U;
si1+=si2;
f2099(i,si0,si1);
si0=l2;
si1=88U;
si0+=si1;
si1=66U;
f999(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+88U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+92U);
si1=1160102U;
si2=66U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l2;
si1=356U;
si0+=si1;
si1=66U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=352U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+348U,si1);
si0=l2;
si1=336U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
goto L228;
L232:;
si0=l11;
si1=l8;
si2=1157146U;
si3=2U;
si0=f247(i,si0,si1,si2,si3);
if(si0){
goto L240;
}
si0=l11;
si1=l8;
si2=1157144U;
si3=2U;
si0=f247(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L239;
}
L240:;
si0=l2;
si1=336U;
si0+=si1;
si1=l2;
si2=320U;
si1+=si2;
f2099(i,si0,si1);
si0=l2;
si1=96U;
si0+=si1;
si1=86U;
f999(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+96U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+100U);
si1=1160274U;
si2=86U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l2;
si1=356U;
si0+=si1;
si1=86U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=352U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+348U,si1);
si0=l2;
si1=336U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
goto L228;
L239:;
si0=l11;
si1=l8;
si2=1159292U;
si3=3U;
si0=f247(i,si0,si1,si2,si3);
if(si0){
goto L229;
}
si0=87U;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+88U);
l13=si0;
si1=200U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l13;
si2=204U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l11;
si3=l8;
si0=f2132(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L227;
}
si0=l2;
si1=l8;
i32_store(i->m0,(U64)si0+388U,si1);
si0=l2;
si1=l11;
i32_store(i->m0,(U64)si0+384U,si1);
si0=l11;
si1=l8;
si0=f1352(i,si0,si1);
l3=si0;
si0=l2;
si1=392U;
si0+=si1;
si1=12U;
si0+=si1;
si1=4U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=336U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=4U;
i32_store(i->m0,(U64)si0+396U,si1);
si0=l2;
si1=3U;
i32_store(i->m0,(U64)si0+340U,si1);
si0=l2;
si1=1160192U;
i32_store(i->m0,(U64)si0+336U,si1);
si0=l2;
si1=7U;
si2=6U;
si3=l3;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+372U,si1);
si0=l2;
si1=1160222U;
si2=1160216U;
si3=l3;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+368U,si1);
si0=l2;
si1=l2;
si2=384U;
si1+=si2;
i32_store(i->m0,(U64)si0+400U,si1);
si0=l2;
si1=l2;
si2=368U;
si1+=si2;
i32_store(i->m0,(U64)si0+392U,si1);
si0=l2;
si1=l2;
si2=392U;
si1+=si2;
i32_store(i->m0,(U64)si0+344U,si1);
si0=l2;
si1=324U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
f1496(i,si0,si1);
si0=l2;
si1=336U;
si0+=si1;
si1=l2;
si2=320U;
si1+=si2;
f2099(i,si0,si1);
si0=l2;
si1=356U;
si0+=si1;
si1=l2;
si2=332U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+324U);
i64_store(i->m0,(U64)si0+348U,sj1);
si0=l2;
si1=336U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
goto L228;
L230:;
si0=l2;
si1=336U;
si0+=si1;
si1=l2;
si2=320U;
si1+=si2;
f2099(i,si0,si1);
si0=l2;
si1=152U;
si0+=si1;
si1=73U;
f999(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+152U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+156U);
si1=1159708U;
si2=73U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l2;
si1=356U;
si0+=si1;
si1=73U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=352U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+348U,si1);
si0=l2;
si1=336U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
goto L228;
L229:;
si0=l2;
si1=336U;
si0+=si1;
si1=l2;
si2=320U;
si1+=si2;
f2099(i,si0,si1);
si0=l2;
si1=104U;
si0+=si1;
si1=45U;
f999(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+104U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+108U);
si1=1160229U;
si2=45U;
si0=f3069(i,si0,si1,si2);
l8=si0;
si0=l2;
si1=356U;
si0+=si1;
si1=45U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=352U;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+348U,si1);
si0=l2;
si1=336U;
si0+=si1;
si0=f2117(i,si0);
l8=si0;
L228:;
si0=l4;
f1097(i,si0);
si0=85U;
l3=si0;
goto L4;
L227:;
si0=l4;
l8=si0;
goto L4;
L5:;
si0=l11;
si0=f2133(i,si0);
si0=!(si0);
if(si0){
goto L241;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+88U);
l3=si0;
si0=l2;
si1=80U;
si0+=si1;
si1=l11;
f1416(i,si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+212U);
l16=si0;
si0=!(si0);
if(si0){
goto L242;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+84U);
l13=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+80U);
l14=si0;
si0=l3;
si1=216U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l12=si0;
L243:;
{
si0=l16;
si1=4U;
si0+=si1;
l4=si0;
si0=l16;
si0=i32_load16_u(i->m0,(U64)si0+138U);
l18=si0;
si1=12U;
si0*=si1;
l3=si0;
si0=-1U;
l8=si0;
L245:;
{
si0=l3;
if(si0){
goto L246;
}
si0=l18;
l8=si0;
goto L244;
L246:;
si0=l2;
si1=72U;
si0+=si1;
si1=l4;
f397(i,si0,si1);
si0=l3;
si1=-12U;
si0+=si1;
l3=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l4;
si1=12U;
si0+=si1;
l4=si0;
si0=l14;
si1=l13;
si2=l2;
si2=i32_load(i->m0,(U64)si2+72U);
si3=l2;
si3=i32_load(i->m0,(U64)si3+76U);
si0=f159(i,si0,si1,si2,si3);
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L247;
case 1:
goto L245;
default:
goto L244;
}
L247:;
}
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+304U);
l15=sj1;
i64_store(i->m0,(U64)si0+392U,sj1);
si0=l2;
si1=64U;
si0+=si1;
sj1=l15;
si1=(U32)(sj1);
f1416(i,si0,si1);
si0=l2;
si1=336U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+64U);
si2=l2;
si2=i32_load(i->m0,(U64)si2+68U);
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=392U;
si0+=si1;
f1078(i,si0);
si0=88U;
l3=si0;
goto L4;
L244:;
si0=l12;
si0=!(si0);
if(si0){
goto L242;
}
si0=l12;
si1=-1U;
si0+=si1;
l12=si0;
si0=l16;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=152U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l16=si0;
goto L243;
}
L242:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+88U);
l3=si0;
si0=l2;
si1=56U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+304U);
f1416(i,si0,si1);
si0=l3;
si1=200U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l3;
si2=204U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
si2=l2;
si2=i32_load(i->m0,(U64)si2+56U);
si3=l2;
si3=i32_load(i->m0,(U64)si3+60U);
si0=f2132(i,si0,si1,si2,si3);
if(si0){
goto L248;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+308U);
l8=si0;
goto L241;
L248:;
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+304U);
l15=sj1;
i64_store(i->m0,(U64)si0+392U,sj1);
si0=l2;
si1=48U;
si0+=si1;
sj1=l15;
si1=(U32)(sj1);
f1416(i,si0,si1);
si0=l2;
si1=336U;
si0+=si1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+48U);
si2=l2;
si2=i32_load(i->m0,(U64)si2+52U);
f80(i,si0,si1,si2);
si0=12U;
si1=4U;
si0=f1027(i,si0,si1);
l8=si0;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=392U;
si0+=si1;
f1078(i,si0);
si0=87U;
l3=si0;
goto L4;
L241:;
si0=l11;
l3=si0;
L4:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+96U);
l4=si0;
if(si0){
goto L250;
}
si0=l2;
si1=l8;
i32_store(i->m0,(U64)si0+308U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+304U,si1);
goto L249;
L250:;
si0=l1;
si1=100U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l11=si0;
si0=l2;
si1=346U;
si0+=si1;
si1=l9;
i32_store16(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+348U,si1);
si0=l2;
si1=l10;
i32_store16(i->m0,(U64)si0+344U,si1);
si0=l2;
si1=l8;
i32_store(i->m0,(U64)si0+340U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+336U,si1);
si0=l2;
si1=304U;
si0+=si1;
si1=l4;
si2=l2;
si3=336U;
si2+=si3;
si3=l10;
si4=l9;
si5=l1;
si6=l11;
si6=i32_load(i->m0,(U64)si6+20U);
TF(i->t0,si6,void (*)(glicolwasmInstance*,U32,U32,U32,U32,U32,U32))(i,si0,si1,si2,si3,si4,si5);
L249:;
si0=l5;
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L251;
}
si0=l2;
si1=40U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+20U);
si2=8U;
si1+=si2;
si2=1160360U;
f2113(i,si0,si1,si2);
si0=l2;
si0=i32_load(i->m0,(U64)si0+44U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+40U);
l4=si0;
si0=l2;
si1=304U;
si0+=si1;
si1=1153824U;
si0=f2067(i,si0,si1);
si0=!(si0);
if(si0){
goto L252;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0);
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L252;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L255;
}
si0=l2;
si1=400U;
si0+=si1;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
sj1=0ULL;
i64_store(i->m0,(U64)si0+393U,sj1);
si0=l2;
si1=1U;
i32_store8(i->m0,(U64)si0+392U,si1);
si0=l7;
si0=f1001(i,si0);
if(si0){
goto L257;
}
si0=l6;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L256;
}
goto L254;
L257:;
si0=l2;
si1=348U;
si0+=si1;
sj1=1ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=1U;
i32_store(i->m0,(U64)si0+340U,si1);
si0=l2;
si1=1178720U;
i32_store(i->m0,(U64)si0+336U,si1);
si0=l2;
si1=169U;
i32_store(i->m0,(U64)si0+372U,si1);
si0=l2;
si1=l2;
si2=368U;
si1+=si2;
i32_store(i->m0,(U64)si0+344U,si1);
si0=l2;
si1=l2;
si2=304U;
si1+=si2;
i32_store(i->m0,(U64)si0+368U,si1);
si0=l2;
si1=392U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si0=f1335(i,si0,si1);
si0=!(si0);
if(si0){
goto L253;
}
si0=1178304U;
si1=43U;
si2=l2;
si3=336U;
si2+=si3;
si3=1116792U;
si4=1160408U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L256:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+304U);
si1=126U;
si0&=si1;
si1=4U;
si0=si0 != si1;
if(si0){
goto L254;
}
si0=l2;
si1=32U;
si0+=si1;
si1=l7;
si2=1U;
si3=1160392U;
f2130(i,si0,si1,si2,si3);
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1+32U);
si2=l2;
si2=i32_load(i->m0,(U64)si2+36U);
f156(i,si0,si1,si2);
goto L253;
L255:;
si0=1160376U;
f14(i,si0);
UNREACHABLE;
L254:;
si0=l2;
si1=336U;
si0+=si1;
si1=l7;
f1372(i,si0,si1);
si0=l2;
si1=392U;
si0+=si1;
f266(i,si0);
si0=l2;
si1=392U;
si0+=si1;
si1=8U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+336U);
i64_store(i->m0,(U64)si0+392U,sj1);
L253:;
si0=l2;
si1=392U;
si0+=si1;
si0=f1001(i,si0);
if(si0){
goto L258;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
si0=!(si0);
if(si0){
goto L258;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+392U);
l1=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l1;
si0=si0 != si1;
if(si0){
goto L260;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+400U);
l8=si0;
goto L259;
L260:;
si0=l2;
si1=24U;
si0+=si1;
si1=l2;
si2=392U;
si1+=si2;
f1007(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+28U);
l8=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+24U);
l1=si0;
L259:;
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+336U,si1);
si0=l2;
si1=l1;
si2=l8;
si1+=si2;
i32_store(i->m0,(U64)si0+340U,si1);
si0=l2;
si1=336U;
si0+=si1;
si0=f520(i,si0);
l1=si0;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L262;
}
si0=l1;
si1=95U;
si0=si0 == si1;
if(si0){
goto L261;
}
si0=l1;
si1=2097119U;
si0&=si1;
si1=-65U;
si0+=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L261;
}
si0=l1;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
if(si0){
goto L261;
}
goto L258;
L262:;
si0=1160424U;
f14(i,si0);
UNREACHABLE;
L261:;
si0=l2;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
l1=si1;
si2=l4;
si2=i32_load(i->m0,(U64)si2+8U);
si1+=si2;
i32_store(i->m0,(U64)si0+340U,si1);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+336U,si1);
si0=l2;
si1=16U;
si0+=si1;
si1=l2;
si2=336U;
si1+=si2;
f1609(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+20U);
si1=1114112U;
si2=l2;
si2=i32_load(i->m0,(U64)si2+16U);
si0=si2?si0:si1;
l1=si0;
si1=95U;
si0=si0 == si1;
if(si0){
goto L263;
}
si0=l1;
si1=1114112U;
si0=si0 != si1;
if(si0){
goto L264;
}
si0=1160440U;
f14(i,si0);
UNREACHABLE;
L264:;
si0=l1;
si1=2097119U;
si0&=si1;
si1=-65U;
si0+=si1;
si1=26U;
si0=si0 < si1;
if(si0){
goto L263;
}
si0=l1;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L258;
}
L263:;
si0=l4;
si1=1160456U;
si2=1160457U;
f157(i,si0,si1,si2);
L258:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+392U);
l1=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l1;
si0=si0 != si1;
if(si0){
goto L266;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+400U);
l8=si0;
goto L265;
L266:;
si0=l2;
si1=8U;
si0+=si1;
si1=l2;
si2=392U;
si1+=si2;
f1007(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l8=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
L265:;
si0=l4;
si1=l1;
si2=l8;
f156(i,si0,si1,si2);
si0=l2;
si1=392U;
si0+=si1;
f266(i,si0);
L252:;
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L251:;
si0=l0;
si1=l9;
i32_store16(i->m0,(U64)si0+10U,si1);
si0=l0;
si1=l10;
i32_store16(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+304U);
i64_store(i->m0,(U64)si0,sj1);
L3:;
si0=l2;
si1=416U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2971(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
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
f2967(i,si0,si1);
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
si0=f2968(i,si0,si1);
l6=si0;
si0=i32_load(i->m0,(U64)si0);
si0=f2972(i,si0);
l7=si0;
si0=l0;
sj1=0ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
si1=l7;
i32_store(i->m0,(U64)si0,si1);
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
si2=1175096U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1175096U;
f14(i,si0);
UNREACHABLE;
L0:;
}

void f2678(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
F32 l10=0;
F32 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
F32 sf0,sf1,sf2,sf3;
si0=i->g0;
si1=112U;
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
i64_store(i->m0,(U64)si0+48U,sj1);
sj0=l7;
sj1=255ULL;
sj0&=sj1;
sj1=12ULL;
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=8U;
l6=si0;
si0=1160932U;
l8=si0;
goto L3;
L4:;
si0=l5;
si1=40U;
si0+=si1;
si1=l5;
si2=48U;
si1+=si2;
f96(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+44U);
l6=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+40U);
l8=si0;
L3:;
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l5;
si1=l8;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l5;
sj1=l7;
i64_store(i->m0,(U64)si0+88U,sj1);
si0=l5;
si1=104U;
si0+=si1;
si1=l5;
si2=88U;
si1+=si2;
f1771(i,si0,si1);
si0=l5;
sj0=i64_load(i->m0,(U64)si0+104U);
l7=sj0;
sj1=255ULL;
sj0&=sj1;
sj1=11ULL;
si0=sj0 != sj1;
if(si0){
goto L6;
}
si0=l5;
si1=24U;
si0+=si1;
sj1=l7;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
l6=si1;
si1=i32_load(i->m0,(U64)si1);
si2=l6;
si2=i32_load(i->m0,(U64)si2+4U);
si2=i32_load(i->m0,(U64)si2+12U);
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l5;
sj0=i64_load(i->m0,(U64)si0+24U);
sj1=-6926920777486993019ULL;
sj0^=sj1;
si1=l5;
si2=24U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
sj2=-2037230561991712802ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l6;
si1=i32_load(i->m0,(U64)si1);
si2=l6;
si2=i32_load(i->m0,(U64)si2+4U);
si2=i32_load(i->m0,(U64)si2+36U);
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l5;
si1=l5;
si1=i32_load(i->m0,(U64)si1+16U);
l8=si1;
si2=l5;
si2=i32_load(i->m0,(U64)si2+20U);
l9=si2;
si2=i32_load(i->m0,(U64)si2+12U);
TF(i->t0,si2,void (*)(glicolwasmInstance*,U32,U32))(i,si0,si1);
si0=l5;
sj0=i64_load(i->m0,(U64)si0);
sj1=-6926920777486993019ULL;
sj0^=sj1;
si1=l5;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
sj2=-2037230561991712802ULL;
sj1^=sj2;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l8;
if(si0){
goto L5;
}
si0=l9;
l8=si0;
L7:;
si0=l8;
sf0=f32_load(i->m0,(U64)si0);
l10=sf0;
si0=l8;
sf0=f32_load(i->m0,(U64)si0+4U);
l11=sf0;
si0=l8;
f87(i,si0);
si0=l5;
si1=72U;
si0+=si1;
sf1=l11;
f32_store(i->m0,(U64)si0,sf1);
si0=l5;
sf1=l10;
f32_store(i->m0,(U64)si0+68U,sf1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l6;
f87(i,si0);
si0=l4;
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=1U;
si1=1U;
si2=1172108U;
f4(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l5;
si1=1U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l5;
sj1=l7;
i64_store(i->m0,(U64)si0+68U,sj1);
si0=l5;
si1=68U;
si0+=si1;
f1035(i,si0);
si0=l5;
si1=64U;
si0+=si1;
si1=12U;
si0+=si1;
sj1=2ULL;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=88U;
si0+=si1;
si1=12U;
si0+=si1;
si1=4U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=2U;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l5;
si1=1161472U;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l5;
si1=4U;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l5;
si1=28U;
i32_store(i->m0,(U64)si0+108U,si1);
si0=l5;
si1=1117382U;
i32_store(i->m0,(U64)si0+104U,si1);
si0=l5;
si1=l5;
si2=88U;
si1+=si2;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l5;
si1=l5;
si2=104U;
si1+=si2;
i32_store(i->m0,(U64)si0+96U,si1);
si0=l5;
si1=l5;
si2=56U;
si1+=si2;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l5;
si1=64U;
si0+=si1;
si1=1161488U;
f377(i,si0,si1);
UNREACHABLE;
L5:;
si0=l5;
si1=l9;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l5;
si1=l8;
i32_store(i->m0,(U64)si0+88U,si1);
si0=1178304U;
si1=43U;
si2=l5;
si3=88U;
si2+=si3;
si3=1119084U;
si4=1161440U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=0U;
si1=0U;
si2=1172108U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
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
i64_store(i->m0,(U64)si0+64U,sj1);
si0=l5;
si1=64U;
si0+=si1;
sf1=l10;
sf2=l11;
si3=l5;
si4=64U;
si3+=si4;
sf3=f2380(i,si3);
f2679(i,si0,sf1,sf2,sf3);
si0=l0;
si1=l5;
si2=64U;
si1+=si2;
f2680(i,si0,si1);
si0=l5;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2588(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
f1744(i,si0,si1,si2);
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
si0=f1745(i,si0);
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
si5=1118528U;
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
si5=1118544U;
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
si2=1118576U;
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
f1708(i,si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
goto L0;
L3:;
si0=0U;
si1=0U;
si2=1170660U;
f4(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=1170660U;
f14(i,si0);
UNREACHABLE;
L1:;
si0=l9;
si1=l9;
si2=1118560U;
f4(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f180(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1;
si0=l1;
si0=f181(i,si0);
l1=si0;
si0=l0;
si1=l2;
f162(i,si0,si1);
si0=l0;
si1=16U;
si0+=si1;
si1=1052584U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
L0:;
}

void f2237(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f999(i,si0,si1);
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
f2238(i,si0,si1);
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

void f607(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
f600(i);
si0=l1;
si1=12U;
si0+=si1;
f238(i,si0);
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
si0=!(si0);
if(si0){
goto L1;
}
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
si0=1178304U;
si1=43U;
si2=l1;
si3=24U;
si2+=si3;
si3=1054332U;
si4=1061040U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l1;
si1=20U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l2=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
l3=si0;
si1=328U;
si0+=si1;
si1=l0;
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
f279(i,si0,si1);
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1453(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
l1=si0;
goto L1;
L2:;
si0=l1;
si1=l3;
si2=8U;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
f1170(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
L1:;
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
L0:;
}

void f2900(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si1=f2506(i,si1);
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
si1=1178720U;
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
si0=f1335(i,si0,si1);
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
si2=1174156U;
f4(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=1178304U;
si1=43U;
si2=l5;
si3=16U;
si2+=si3;
si3=1116792U;
si4=1174036U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

U32 f1662(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=28U;
si0+=si1;
si1=l0;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0+14U,si1);
si0=l1;
si1=23U;
i32_store8(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l0;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0+20U,sj1);
si0=l1;
si1=12U;
si0+=si1;
si0=f97(i,si0);
l0=si0;
si0=l1;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f140(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
l2=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+20U);
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+28U);
l3=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+8U);
si2=l2;
si3=2U;
si2<<=(si3&31);
l2=si2;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
si2=l2;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
goto L0;
L1:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+4U,si1);
L0:;
}

void f320(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si1=12U;
si0+=si1;
l0=si0;
goto L2;
}
L1:;
L0:;
}

U32 f701(glicolwasmInstance*i,U32 l0,F32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
F32 sf0,sf1;
si0=i->g0;
si1=128U;
si0-=si1;
l4=si0;
i->g0=si0;
sf0=l1;
si0=i32_reinterpret_f32(sf0);
l5=si0;
sf0=l1;
sf0=fabsf(sf0);
sf1=INFINITY;
si0=sf0 != sf1;
if(si0){
goto L2;
}
si0=3U;
l6=si0;
goto L1;
L2:;
sf0=l1;
sf1=l1;
si0=sf0 == sf1;
if(si0){
goto L3;
}
si0=2U;
l6=si0;
goto L1;
L3:;
si0=l5;
si1=2147483647U;
si0&=si1;
if(si0){
goto L4;
}
si0=4U;
l6=si0;
goto L1;
L4:;
si0=l5;
si1=8388607U;
si0&=si1;
si1=8388608U;
si0|=si1;
si1=l5;
si2=1U;
si1<<=(si2&31);
si2=16777214U;
si1&=si2;
si2=l5;
si3=23U;
si2>>=(si3&31);
si3=255U;
si2&=si3;
l6=si2;
si0=si2?si0:si1;
l7=si0;
sj0=(U64)(si0);
l8=sj0;
sj1=1ULL;
sj0&=sj1;
l9=sj0;
si0=l5;
si1=2139095040U;
si0&=si1;
if(si0){
goto L5;
}
si0=l6;
si1=-150U;
si0+=si1;
l7=si0;
sj0=l9;
si0=!(sj0);
l6=si0;
sj0=1ULL;
l10=sj0;
goto L1;
L5:;
sj0=33554432ULL;
sj1=l8;
sj2=1ULL;
sj1<<=(sj2&63);
si2=l7;
si3=8388608U;
si2=si2 == si3;
l7=si2;
sj0=si2?sj0:sj1;
l8=sj0;
sj0=2ULL;
sj1=1ULL;
si2=l7;
sj0=si2?sj0:sj1;
l10=sj0;
si0=-152U;
si1=-151U;
si2=l7;
si0=si2?si0:si1;
si1=l6;
si0+=si1;
l7=si0;
sj0=l9;
si0=!(sj0);
l6=si0;
L1:;
si0=l4;
si1=l7;
i32_store16(i->m0,(U64)si0+120U,si1);
si0=l4;
sj1=l10;
i64_store(i->m0,(U64)si0+112U,sj1);
si0=l4;
sj1=1ULL;
i64_store(i->m0,(U64)si0+104U,sj1);
si0=l4;
sj1=l8;
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
l11=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=1151401U;
si1=1151400U;
si2=l5;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
l6=si2;
si0=si2?si0:si1;
si1=1151401U;
si2=1178664U;
si3=l6;
si1=si3?si1:si2;
si2=l2;
si0=si2?si0:si1;
l7=si0;
si0=1U;
l6=si0;
si0=1U;
si1=l5;
si2=31U;
si1>>=(si2&31);
si2=l2;
si0=si2?si0:si1;
l5=si0;
si0=l11;
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
l2=si0;
goto L6;
L9:;
si0=l4;
si1=3U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1067226U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l4;
si1=2U;
i32_store16(i->m0,(U64)si0+32U,si1);
si0=1U;
l6=si0;
si0=l4;
si1=32U;
si0+=si1;
l2=si0;
si0=0U;
l5=si0;
si0=1178664U;
l7=si0;
goto L6;
L8:;
si0=l4;
si1=3U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1067229U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l4;
si1=2U;
i32_store16(i->m0,(U64)si0+32U,si1);
si0=l4;
si1=32U;
si0+=si1;
l2=si0;
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
si1=1067188U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l4;
si1=32U;
si0+=si1;
l2=si0;
goto L6;
L13:;
si0=1U;
l6=si0;
si0=l4;
si1=1U;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l4;
si1=1159344U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l4;
si1=32U;
si0+=si1;
l2=si0;
L6:;
si0=l4;
si1=92U;
si0+=si1;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
i32_store(i->m0,(U64)si0+88U,si1);
si0=l4;
si1=l5;
i32_store(i->m0,(U64)si0+84U,si1);
si0=l4;
si1=l7;
i32_store(i->m0,(U64)si0+80U,si1);
si0=l0;
si1=l4;
si2=80U;
si1+=si2;
si0=f700(i,si0,si1);
l5=si0;
si0=l4;
si1=128U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f3065(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si0-=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l1;
si1=l2;
si0+=si1;
l3=si0;
si0=l0;
si1=l2;
si0+=si1;
l4=si0;
si0=l2;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l0;
l5=si0;
goto L2;
L5:;
si0=l4;
si1=-4U;
si0&=si1;
l5=si0;
si0=0U;
si1=l4;
si2=3U;
si1&=si2;
l6=si1;
si0-=si1;
l7=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l2;
si0+=si1;
si1=-1U;
si0+=si1;
l8=si0;
L7:;
{
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si1=l8;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0,si1);
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
si0=l5;
si1=l4;
si0=si0 < si1;
if(si0){
goto L7;
}
}
L6:;
si0=l5;
si1=l2;
si2=l6;
si1-=si2;
l9=si1;
si2=-4U;
si1&=si2;
l6=si1;
si0-=si1;
l4=si0;
si0=l3;
si1=l7;
si0+=si1;
l7=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L8;
}
si0=l6;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L3;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=24U;
si0&=si1;
l2=si0;
si0=l7;
si1=-4U;
si0&=si1;
l10=si0;
si1=-4U;
si0+=si1;
l1=si0;
si0=0U;
si1=l8;
si0-=si1;
si1=24U;
si0&=si1;
l3=si0;
si0=l10;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
L9:;
{
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si1=l8;
si2=l3;
si1<<=(si2&31);
si2=l1;
si2=i32_load(i->m0,(U64)si2);
l8=si2;
si3=l2;
si2>>=(si3&31);
si1|=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l4;
si1=l5;
si0=si0 < si1;
if(si0){
goto L9;
}
goto L3;
}
L8:;
si0=l6;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L3;
}
si0=l9;
si1=l1;
si0+=si1;
si1=-4U;
si0+=si1;
l1=si0;
L10:;
{
si0=l5;
si1=-4U;
si0+=si1;
l5=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l4;
si1=l5;
si0=si0 < si1;
if(si0){
goto L10;
}
goto L3;
}
L4:;
si0=l2;
si1=16U;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l0;
l4=si0;
goto L11;
L12:;
si0=l0;
si1=0U;
si2=l0;
si1-=si2;
si2=3U;
si1&=si2;
l3=si1;
si0+=si1;
l5=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L13;
}
si0=l0;
l4=si0;
si0=l1;
l8=si0;
L14:;
{
si0=l4;
si1=l8;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0,si1);
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L14;
}
}
L13:;
si0=l5;
si1=l2;
si2=l3;
si1-=si2;
l9=si1;
si2=-4U;
si1&=si2;
l6=si1;
si0+=si1;
l4=si0;
si0=l1;
si1=l3;
si0+=si1;
l7=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=l6;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L15;
}
si0=l7;
si1=3U;
si0<<=(si1&31);
l8=si0;
si1=24U;
si0&=si1;
l2=si0;
si0=l7;
si1=-4U;
si0&=si1;
l10=si0;
si1=4U;
si0+=si1;
l1=si0;
si0=0U;
si1=l8;
si0-=si1;
si1=24U;
si0&=si1;
l3=si0;
si0=l10;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
L17:;
{
si0=l5;
si1=l8;
si2=l2;
si1>>=(si2&31);
si2=l1;
si2=i32_load(i->m0,(U64)si2);
l8=si2;
si3=l3;
si2<<=(si3&31);
si1|=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L17;
}
goto L15;
}
L16:;
si0=l6;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L15;
}
si0=l7;
l1=si0;
L18:;
{
si0=l5;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L18;
}
}
L15:;
si0=l9;
si1=3U;
si0&=si1;
l2=si0;
si0=l7;
si1=l6;
si0+=si1;
l1=si0;
L11:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si1=l2;
si0+=si1;
l5=si0;
L19:;
{
si0=l4;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=l5;
si0=si0 < si1;
if(si0){
goto L19;
}
goto L1;
}
L3:;
si0=l9;
si1=3U;
si0&=si1;
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=0U;
si2=l6;
si1-=si2;
si0+=si1;
l3=si0;
si0=l4;
si1=l1;
si0-=si1;
l5=si0;
L2:;
si0=l3;
si1=-1U;
si0+=si1;
l1=si0;
L20:;
{
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1);
i32_store8(i->m0,(U64)si0,si1);
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si0=l5;
si1=l4;
si0=si0 < si1;
if(si0){
goto L20;
}
}
L1:;
si0=l0;
L0:;
return si0;
}

void f2999(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
f1272(i,si0,si1);
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
f1714(i,si0,si1);
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
f1007(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+4U);
l7=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
L8:;
si0=l5;
si1=1127392U;
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
si1=f1946(i,si1,si2,si3,si4);
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
si0=f1477(i);
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
f1478(i,si0);
si0=l2;
l3=si0;
goto L2;
L7:;
si0=1U;
si1=l4;
si2=1174656U;
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
si0=1178304U;
si1=43U;
si2=l5;
si3=24U;
si2+=si3;
si3=1119116U;
si4=1174656U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=1174888U;
f14(i,si0);
UNREACHABLE;
L4:;
si0=1174656U;
f14(i,si0);
UNREACHABLE;
L3:;
si0=f1477(i);
l3=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
si1=8U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
f1376(i,si0,si1);
si0=l5;
si1=16U;
si0+=si1;
f1038(i,si0);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+16U,si1);
L2:;
si0=l3;
si1=8U;
si0+=si1;
si1=l4;
si2=l7;
f1379(i,si0,si1,si2);
L1:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0,si1);
si0=l9;
si1=l8;
f1708(i,si0,si1);
si0=l5;
si1=12U;
si0+=si1;
f1038(i,si0);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f1876(glicolwasmInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=4U;
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

void f769(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si0=f3069(i,si0,si1,si2);
si0=l0;
si1=l2;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
L0:;
}

U32 f2707(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=0U;
l4=si0;
L2:;
{
si0=l1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=8U;
si0+=si1;
si1=l0;
f2706(i,si0,si1);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+8U);
si1=13U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
f1004(i,si0);
goto L2;
L3:;
}
si0=l1;
si1=l4;
si0-=si1;
l3=si0;
si0=l2;
si1=8U;
si0+=si1;
f1004(i,si0);
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f1134(glicolwasmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=128U;
f1147(i,si0,si1);
L0:;
}

void f1315(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=0U;
l5=si0;
si0=l1;
si1=255U;
si0&=si1;
si1=10U;
si0=si0 == si1;
if(si0){
goto L2;
}
goto L1;
L2:;
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l2;
si2=32U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l3=si1;
si2=l3;
si3=3U;
si2=si2 > si3;
si0=si2?si0:si1;
if(si0){
goto L1;
}
L3:;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si1=1U;
si0+=si1;
si1=-2U;
si0&=si1;
si1=l5;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l1;
si1=16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
goto L1;
L4:;
si0=l4;
si1=8U;
si0+=si1;
si1=l1;
si2=8U;
si1+=si2;
f1007(i,si0,si1);
si0=l4;
si0=i32_load(i->m0,(U64)si0+12U);
l1=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
L1:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f2719(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
l2=si1;
si2=l1;
si2=i32_load(i->m0,(U64)si2);
l1=si2;
si1-=si2;
si2=0U;
si3=l2;
si4=l1;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l1=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f1642(glicolwasmInstance*i,U32 l0,U32 l1,U32 l2) {
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
l1=si0;
si1=7U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=0U;
l4=si0;
si0=l1;
si1=12U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l2;
si1=16U;
si0+=si1;
l4=si0;
si0=l2;
si1=8U;
si0+=si1;
l1=si0;
si0=l2;
si1=l5;
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
si1=l1;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l3;
si1=l4;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l3;
si1=1U;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l3;
si1=36U;
si0+=si1;
f989(i,si0);
si0=0U;
l2=si0;
goto L4;
L7:;
si0=l0;
si1=l2;
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
si0=l3;
si1=16U;
si0+=si1;
si1=l4;
f1175(i,si0,si1);
si0=l3;
sj0=i64_load(i->m0,(U64)si0+16U);
sj1=7152074590014949270ULL;
sj0^=sj1;
si1=l3;
si2=16U;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
sj2=-684005379736877845ULL;
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
si1=l1;
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
si0=l1;
si1=l1;
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
f991(i,si0,sj1);
f99(i);
UNREACHABLE;
L0:;
}

U32 f1319(glicolwasmInstance*i,U32 l0,U32 l1) {
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
f986(i,si0,si1);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l0=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si2=1123028U;
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
si1=l1;
si2=4U;
si1<<=(si2&31);
si0+=si1;
L0:;
return si0;
}

F64 f3088(glicolwasmInstance*i,F64 l0) {
U32 l1=0;
U64 l2=0;
U32 l3=0;
F64 l4=0;
F64 l5=0;
F64 l6=0;
F64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
sd1=l0;
f64_store(i->m0,(U64)si0+8U,sd1);
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l2=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l3=si0;
si1=1078159481U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l3;
si1=1071001154U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l3;
si1=1016070144U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=0U;
l3=si0;
sd0=0;
l4=sd0;
goto L3;
L9:;
sd0=l0;
sd1=l0;
si0=sd0 != sd1;
if(si0){
goto L2;
}
sj0=l2;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
goto L10;
}
sd0=-1;
goto L0;
L10:;
sd0=l0;
sd1=709.78271289338397;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L6;
}
sd0=l0;
sd1=8.9884656743115795e+307;
sd0*=sd1;
goto L0;
L8:;
si0=l3;
si1=1048576U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l1;
sd0=f64_load(i->m0,(U64)si0+8U);
sd0=l0;
goto L0;
L7:;
si0=l3;
si1=1072734898U;
si0=si0 < si1;
if(si0){
goto L5;
}
L6:;
sd0=l0;
sd1=1.4426950408889634;
sd0*=sd1;
sd1=0.5;
sd2=l0;
sd1=copysign(sd1,sd2);
sd0+=sd1;
l5=sd0;
sd1=-2147483648;
si0=sd0 >= sd1;
l3=si0;
sd0=l5;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L12;
}
sd0=l5;
si0=I32_TRUNC_S_F64(sd0);
l1=si0;
goto L11;
L12:;
si0=-2147483648U;
l1=si0;
L11:;
si0=0U;
si1=2147483647U;
si2=l1;
si3=-2147483648U;
si4=l3;
si2=si4?si2:si3;
sd3=l5;
sd4=2147483647;
si3=sd3 > sd4;
si1=si3?si1:si2;
sd2=l5;
sd3=l5;
si2=sd2 != sd3;
si0=si2?si0:si1;
l3=si0;
sd0=(F64)(I32)(si0);
l4=sd0;
sd1=1.9082149292705877e-10;
sd0*=sd1;
l5=sd0;
sd0=l0;
sd1=l4;
sd2=-0.69314718036912382;
sd1*=sd2;
sd0+=sd1;
l4=sd0;
goto L4;
L5:;
sj0=l2;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L13;
}
sd0=l0;
sd1=0.69314718036912382;
sd0+=sd1;
l4=sd0;
sd0=-1.9082149292705877e-10;
l5=sd0;
si0=-1U;
l3=si0;
goto L4;
L13:;
sd0=l0;
sd1=-0.69314718036912382;
sd0+=sd1;
l4=sd0;
sd0=1.9082149292705877e-10;
l5=sd0;
si0=1U;
l3=si0;
L4:;
sd0=l4;
sd1=l4;
sd2=l5;
sd1-=sd2;
l0=sd1;
sd0-=sd1;
sd1=l5;
sd0-=sd1;
l4=sd0;
L3:;
sd0=l0;
sd1=l0;
sd2=0.5;
sd1*=sd2;
l6=sd1;
sd0*=sd1;
l5=sd0;
sd1=l5;
sd2=l5;
sd3=l5;
sd4=l5;
sd5=l5;
sd6=-2.0109921818362437e-07;
sd5*=sd6;
sd6=4.0082178273293624e-06;
sd5+=sd6;
sd4*=sd5;
sd5=-7.9365075786748794e-05;
sd4+=sd5;
sd3*=sd4;
sd4=0.0015873015872548146;
sd3+=sd4;
sd2*=sd3;
sd3=-0.033333333333333132;
sd2+=sd3;
sd1*=sd2;
sd2=1;
sd1+=sd2;
l7=sd1;
sd2=3;
sd3=l6;
sd4=l7;
sd3*=sd4;
sd2-=sd3;
l6=sd2;
sd1-=sd2;
sd2=6;
sd3=l0;
sd4=l6;
sd3*=sd4;
sd2-=sd3;
sd1/=sd2;
sd0*=sd1;
l6=sd0;
si0=l3;
if(si0){
goto L14;
}
sd0=l0;
sd1=l0;
sd2=l6;
sd1*=sd2;
sd2=l5;
sd1-=sd2;
sd0-=sd1;
goto L0;
L14:;
sd0=l0;
sd1=l6;
sd2=l4;
sd1-=sd2;
sd0*=sd1;
sd1=l4;
sd0-=sd1;
sd1=l5;
sd0-=sd1;
l5=sd0;
si0=l3;
si1=1U;
si0+=si1;
switch(si0){
case 0:
goto L17;
case 1:
goto L15;
case 2:
goto L16;
default:
goto L15;
}
L17:;
sd0=l0;
sd1=l5;
sd0-=sd1;
sd1=0.5;
sd0*=sd1;
sd1=-0.5;
sd0+=sd1;
goto L0;
L16:;
sd0=l0;
sd1=-0.25;
si0=sd0 < sd1;
if(si0){
goto L18;
}
sd0=l0;
sd1=l5;
sd0-=sd1;
l0=sd0;
sd1=l0;
sd0+=sd1;
sd1=1;
sd0+=sd1;
goto L0;
L18:;
sd0=l5;
sd1=l0;
sd2=0.5;
sd1+=sd2;
sd0-=sd1;
sd1=-2;
sd0*=sd1;
goto L0;
L15:;
si0=l3;
si1=1023U;
si0+=si1;
sj0=(U64)(si0);
sj1=52ULL;
sj0<<=(sj1&63);
sd0=f64_reinterpret_i64(sj0);
l4=sd0;
si0=l3;
si1=56U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=1023U;
si1=l3;
si0-=si1;
sj0=(U64)(si0);
sj1=52ULL;
sj0<<=(sj1&63);
sd0=f64_reinterpret_i64(sj0);
l6=sd0;
si0=l3;
si1=20U;
si0=si0 < si1;
if(si0){
goto L20;
}
sd0=l0;
sd1=l5;
sd2=l6;
sd1+=sd2;
sd0-=sd1;
sd1=1;
sd0+=sd1;
l0=sd0;
goto L19;
L20:;
sd0=1;
sd1=l6;
sd0-=sd1;
sd1=l0;
sd2=l5;
sd1-=sd2;
sd0+=sd1;
l0=sd0;
L19:;
sd0=l0;
sd1=l4;
sd0*=sd1;
l0=sd0;
L2:;
sd0=l0;
goto L0;
L1:;
sd0=l0;
sd1=l5;
sd0-=sd1;
sd1=1;
sd0+=sd1;
l0=sd0;
sd1=l0;
sd0+=sd1;
sd1=8.9884656743115795e+307;
sd0*=sd1;
sd1=l0;
sd2=l4;
sd1*=sd2;
si2=l3;
si3=1024U;
si2=si2 == si3;
sd0=si2?sd0:sd1;
sd1=-1;
sd0+=sd1;
L0:;
return sd0;
}

void f22(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
F32 sf1;
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
goto L4;
case 1:
goto L3;
case 2:
goto L2;
default:
goto L5;
}
L5:;
si0=l2;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
sf1=f32_load(i->m0,(U64)si1+4U);
f32_store(i->m0,(U64)si0+12U,sf1);
goto L1;
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

void f24(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
F32 sf1;
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
goto L4;
case 1:
goto L3;
case 2:
goto L2;
default:
goto L5;
}
L5:;
si0=l2;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
sf1=f32_load(i->m0,(U64)si1+4U);
f32_store(i->m0,(U64)si0+12U,sf1);
goto L1;
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

void f538(glicolwasmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2,si3;
F32 sf1;
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
goto L4;
case 1:
goto L3;
case 2:
goto L2;
default:
goto L5;
}
L5:;
si0=l2;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
sf1=f32_load(i->m0,(U64)si1+4U);
f32_store(i->m0,(U64)si0+12U,sf1);
goto L1;
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

void f1967(glicolwasmInstance*i,U32 l0,U32 l1) {
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
si2=1116712U;
si0=f2062(i,si0,si1,si2);
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
si0=1116736U;
si1=55U;
si2=l2;
si3=15U;
si2+=si3;
si3=1116792U;
si4=1116884U;
f59(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

