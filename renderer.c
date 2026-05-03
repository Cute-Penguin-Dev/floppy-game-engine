/* Generated from renderer.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.4.0 (rev 1a1d1495)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: renderer.scm -output-file renderer.c -unit renderer -emit-all-import-libraries
   unit: renderer
   uses: eval file lolevel posix srfi-4 extras library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_externimport void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_externimport void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_externimport void C_ccall C_srfi_2d4_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[36];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,8),40,118,97,49,50,50,54,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,8),40,118,97,49,50,50,56,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,43),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,105,110,105,116,45,102,98,32,119,105,100,116,104,32,104,101,105,103,116,104,32,115,99,97,108,101,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,38),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,115,121,110,99,45,102,98,45,116,111,45,120,49,49,45,109,101,109,111,114,121,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,35),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,120,45,121,45,116,111,45,105,110,100,101,120,32,120,32,121,32,119,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,38),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,115,101,116,45,112,105,120,101,108,32,120,32,121,32,114,32,103,32,98,32,97,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,43),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,103,101,116,45,112,105,120,101,108,45,114,103,98,32,112,105,120,101,108,115,32,120,32,121,32,119,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,12),40,100,111,108,111,111,112,57,56,32,120,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,12),40,100,111,108,111,111,112,57,53,32,121,41,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,53),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,100,114,97,119,45,114,101,99,116,97,110,103,108,101,32,120,112,111,115,32,121,112,111,115,32,119,32,104,32,114,32,103,32,98,32,97,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,25),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,114,101,115,101,116,45,102,98,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,33),40,100,111,108,111,111,112,49,49,56,32,98,121,116,101,45,105,110,100,101,120,32,101,120,112,116,45,112,111,119,101,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,33),40,100,111,108,111,111,112,49,49,55,32,98,121,116,101,45,105,110,100,101,120,32,101,120,112,116,45,112,111,119,101,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,37),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,108,111,97,100,45,105,109,97,103,101,32,102,105,108,101,45,110,97,109,101,41,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,52,49,32,120,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,51,56,32,121,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,43),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,100,114,97,119,45,105,109,97,103,101,32,105,109,97,103,101,32,120,112,111,115,32,121,112,111,115,41,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,8),40,118,97,49,50,52,50,41};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,54,53,32,105,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,54,57,32,105,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,54,52,32,120,41,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,53,53,32,121,41,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,8),40,118,97,49,50,53,50,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,8),40,118,97,49,50,53,52,41};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,53,52,32,121,41,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,8),40,118,97,49,50,53,56,41};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,27),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,117,112,115,99,97,108,101,45,102,98,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,26),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,114,101,116,117,114,110,45,102,98,41,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,35),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,114,101,116,117,114,110,45,102,98,45,108,111,99,97,116,105,118,101,41,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word *av) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word *av) C_noret;
C_noret_decl(f_1022)
static void C_fcall f_1022(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1107)
static void C_fcall f_1107(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1125)
static void C_ccall f_1125(C_word c,C_word *av) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word *av) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word *av) C_noret;
C_noret_decl(f_341)
static void C_ccall f_341(C_word c,C_word *av) C_noret;
C_noret_decl(f_344)
static void C_ccall f_344(C_word c,C_word *av) C_noret;
C_noret_decl(f_347)
static void C_ccall f_347(C_word c,C_word *av) C_noret;
C_noret_decl(f_350)
static void C_ccall f_350(C_word c,C_word *av) C_noret;
C_noret_decl(f_353)
static void C_ccall f_353(C_word c,C_word *av) C_noret;
C_noret_decl(f_356)
static void C_ccall f_356(C_word c,C_word *av) C_noret;
C_noret_decl(f_359)
static void C_ccall f_359(C_word c,C_word *av) C_noret;
C_noret_decl(f_362)
static void C_ccall f_362(C_word c,C_word *av) C_noret;
C_noret_decl(f_365)
static void C_ccall f_365(C_word c,C_word *av) C_noret;
C_noret_decl(f_377)
static void C_ccall f_377(C_word c,C_word *av) C_noret;
C_noret_decl(f_379)
static void C_ccall f_379(C_word c,C_word *av) C_noret;
C_noret_decl(f_384)
static void C_ccall f_384(C_word c,C_word *av) C_noret;
C_noret_decl(f_388)
static void C_ccall f_388(C_word c,C_word *av) C_noret;
C_noret_decl(f_409)
static void C_ccall f_409(C_word c,C_word *av) C_noret;
C_noret_decl(f_415)
static void C_fcall f_415(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_429)
static void C_fcall f_429(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_433)
static void C_ccall f_433(C_word c,C_word *av) C_noret;
C_noret_decl(f_479)
static void C_ccall f_479(C_word c,C_word *av) C_noret;
C_noret_decl(f_507)
static void C_ccall f_507(C_word c,C_word *av) C_noret;
C_noret_decl(f_535)
static void C_ccall f_535(C_word c,C_word *av) C_noret;
C_noret_decl(f_537)
static void C_fcall f_537(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_561)
static void C_ccall f_561(C_word c,C_word *av) C_noret;
C_noret_decl(f_569)
static void C_ccall f_569(C_word c,C_word *av) C_noret;
C_noret_decl(f_577)
static void C_ccall f_577(C_word c,C_word *av) C_noret;
C_noret_decl(f_661)
static void C_ccall f_661(C_word c,C_word *av) C_noret;
C_noret_decl(f_667)
static void C_fcall f_667(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_677)
static void C_ccall f_677(C_word c,C_word *av) C_noret;
C_noret_decl(f_686)
static void C_fcall f_686(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_696)
static void C_ccall f_696(C_word c,C_word *av) C_noret;
C_noret_decl(f_713)
static void C_ccall f_713(C_word c,C_word *av) C_noret;
C_noret_decl(f_719)
static void C_ccall f_719(C_word c,C_word *av) C_noret;
C_noret_decl(f_723)
static void C_ccall f_723(C_word c,C_word *av) C_noret;
C_noret_decl(f_726)
static void C_ccall f_726(C_word c,C_word *av) C_noret;
C_noret_decl(f_729)
static void C_ccall f_729(C_word c,C_word *av) C_noret;
C_noret_decl(f_736)
static void C_ccall f_736(C_word c,C_word *av) C_noret;
C_noret_decl(f_740)
static void C_ccall f_740(C_word c,C_word *av) C_noret;
C_noret_decl(f_744)
static void C_ccall f_744(C_word c,C_word *av) C_noret;
C_noret_decl(f_750)
static void C_ccall f_750(C_word c,C_word *av) C_noret;
C_noret_decl(f_753)
static void C_ccall f_753(C_word c,C_word *av) C_noret;
C_noret_decl(f_760)
static void C_ccall f_760(C_word c,C_word *av) C_noret;
C_noret_decl(f_766)
static void C_fcall f_766(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_796)
static void C_ccall f_796(C_word c,C_word *av) C_noret;
C_noret_decl(f_802)
static void C_fcall f_802(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_832)
static void C_ccall f_832(C_word c,C_word *av) C_noret;
C_noret_decl(f_838)
static void C_ccall f_838(C_word c,C_word *av) C_noret;
C_noret_decl(f_853)
static void C_fcall f_853(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_863)
static void C_ccall f_863(C_word c,C_word *av) C_noret;
C_noret_decl(f_872)
static void C_fcall f_872(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_885)
static void C_ccall f_885(C_word c,C_word *av) C_noret;
C_noret_decl(f_926)
static void C_ccall f_926(C_word c,C_word *av) C_noret;
C_noret_decl(f_930)
static void C_ccall f_930(C_word c,C_word *av) C_noret;
C_noret_decl(f_933)
static void C_ccall f_933(C_word c,C_word *av) C_noret;
C_noret_decl(f_936)
static void C_ccall f_936(C_word c,C_word *av) C_noret;
C_noret_decl(f_941)
static void C_fcall f_941(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word *av) C_noret;
C_noret_decl(f_954)
static void C_ccall f_954(C_word c,C_word *av) C_noret;
C_noret_decl(f_963)
static void C_fcall f_963(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_978)
static void C_ccall f_978(C_word c,C_word *av) C_noret;
C_noret_decl(f_999)
static void C_fcall f_999(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_renderer_toplevel)
C_externexport void C_ccall C_renderer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(va1226)
static void C_fcall va1226(C_word t0,C_word t1) C_noret;
C_noret_decl(va1228)
static void C_fcall va1228(C_word t0,C_word t1) C_noret;
C_noret_decl(va1242)
static void C_fcall va1242(C_word t0,C_word t1) C_noret;
C_noret_decl(va1252)
static void C_fcall va1252(C_word t0,C_word t1) C_noret;
C_noret_decl(va1254)
static void C_fcall va1254(C_word t0,C_word t1) C_noret;
C_noret_decl(va1258)
static void C_fcall va1258(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1022)
static void C_ccall trf_1022(C_word c,C_word *av) C_noret;
static void C_ccall trf_1022(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1022(t0,t1,t2);}

C_noret_decl(trf_1107)
static void C_ccall trf_1107(C_word c,C_word *av) C_noret;
static void C_ccall trf_1107(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1107(t0,t1,t2);}

C_noret_decl(trf_415)
static void C_ccall trf_415(C_word c,C_word *av) C_noret;
static void C_ccall trf_415(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_415(t0,t1,t2,t3);}

C_noret_decl(trf_429)
static void C_ccall trf_429(C_word c,C_word *av) C_noret;
static void C_ccall trf_429(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_429(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_537)
static void C_ccall trf_537(C_word c,C_word *av) C_noret;
static void C_ccall trf_537(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_537(t0,t1,t2,t3,t4);}

C_noret_decl(trf_667)
static void C_ccall trf_667(C_word c,C_word *av) C_noret;
static void C_ccall trf_667(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_667(t0,t1,t2);}

C_noret_decl(trf_686)
static void C_ccall trf_686(C_word c,C_word *av) C_noret;
static void C_ccall trf_686(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_686(t0,t1,t2);}

C_noret_decl(trf_766)
static void C_ccall trf_766(C_word c,C_word *av) C_noret;
static void C_ccall trf_766(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_766(t0,t1,t2,t3);}

C_noret_decl(trf_802)
static void C_ccall trf_802(C_word c,C_word *av) C_noret;
static void C_ccall trf_802(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_802(t0,t1,t2,t3);}

C_noret_decl(trf_853)
static void C_ccall trf_853(C_word c,C_word *av) C_noret;
static void C_ccall trf_853(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_853(t0,t1,t2);}

C_noret_decl(trf_872)
static void C_ccall trf_872(C_word c,C_word *av) C_noret;
static void C_ccall trf_872(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_872(t0,t1,t2);}

C_noret_decl(trf_941)
static void C_ccall trf_941(C_word c,C_word *av) C_noret;
static void C_ccall trf_941(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_941(t0,t1,t2);}

C_noret_decl(trf_963)
static void C_ccall trf_963(C_word c,C_word *av) C_noret;
static void C_ccall trf_963(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_963(t0,t1,t2);}

C_noret_decl(trf_999)
static void C_ccall trf_999(C_word c,C_word *av) C_noret;
static void C_ccall trf_999(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_999(t0,t1,t2);}

C_noret_decl(trva1226)
static void C_ccall trva1226(C_word c,C_word *av) C_noret;
static void C_ccall trva1226(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va1226(t0,t1);}

C_noret_decl(trva1228)
static void C_ccall trva1228(C_word c,C_word *av) C_noret;
static void C_ccall trva1228(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va1228(t0,t1);}

C_noret_decl(trva1242)
static void C_ccall trva1242(C_word c,C_word *av) C_noret;
static void C_ccall trva1242(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va1242(t0,t1);}

C_noret_decl(trva1252)
static void C_ccall trva1252(C_word c,C_word *av) C_noret;
static void C_ccall trva1252(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va1252(t0,t1);}

C_noret_decl(trva1254)
static void C_ccall trva1254(C_word c,C_word *av) C_noret;
static void C_ccall trva1254(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va1254(t0,t1);}

C_noret_decl(trva1258)
static void C_ccall trva1258(C_word c,C_word *av) C_noret;
static void C_ccall trva1258(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va1258(t0,t1);}

/* k1008 in doloop164 in doloop155 in k934 in k931 in k928 in renderer-logic#upscale-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_1010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_1010,c,av);}
a=C_alloc(14);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1013,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1022,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=t5,a[6]=((C_word)li19),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1022(t7,t3,C_fix(0));}

/* k1011 in k1008 in doloop164 in doloop155 in k934 in k931 in k928 in renderer-logic#upscale-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_1013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_1013,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_999(t3,((C_word*)t0)[4],t2);}

/* doloop169 in k1008 in doloop164 in doloop155 in k934 in k931 in k928 in renderer-logic#upscale-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall f_1022(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(401,0,2)))){
C_save_and_reclaim_args((void *)trf_1022,3,t0,t1,t2);}
a=C_alloc(401);
if(C_truep(C_i_nequalp(t2,C_retrieve2(lf[5],C_text("renderer-logic#fb-scale"))))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_s_a_i_times(&a,2,((C_word*)t0)[2],C_retrieve2(lf[5],C_text("renderer-logic#fb-scale")));
t4=C_s_a_i_plus(&a,2,t3,t2);
t5=C_s_a_i_times(&a,2,t4,C_fast_retrieve(lf[6]));
t6=C_s_a_i_plus(&a,2,t5,C_fix(0));
t7=C_i_list_ref(((C_word*)((C_word*)t0)[3])[1],C_fix(0));
t8=C_i_u8vector_set(((C_word*)t0)[4],t6,t7);
t9=C_s_a_i_times(&a,2,((C_word*)t0)[2],C_retrieve2(lf[5],C_text("renderer-logic#fb-scale")));
t10=C_s_a_i_plus(&a,2,t9,t2);
t11=C_s_a_i_times(&a,2,t10,C_fast_retrieve(lf[6]));
t12=C_s_a_i_plus(&a,2,t11,C_fix(1));
t13=C_i_list_ref(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t14=C_i_u8vector_set(((C_word*)t0)[4],t12,t13);
t15=C_s_a_i_times(&a,2,((C_word*)t0)[2],C_retrieve2(lf[5],C_text("renderer-logic#fb-scale")));
t16=C_s_a_i_plus(&a,2,t15,t2);
t17=C_s_a_i_times(&a,2,t16,C_fast_retrieve(lf[6]));
t18=C_s_a_i_plus(&a,2,t17,C_fix(2));
t19=C_i_list_ref(((C_word*)((C_word*)t0)[3])[1],C_fix(2));
t20=C_i_u8vector_set(((C_word*)t0)[4],t18,t19);
t21=C_s_a_i_plus(&a,2,t2,C_fix(1));
t23=t1;
t24=t21;
t1=t23;
t2=t24;
goto loop;}}

/* doloop154 in k931 in k928 in renderer-logic#upscale-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall f_1107(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(42,0,2)))){
C_save_and_reclaim_args((void *)trf_1107,3,t0,t1,t2);}
a=C_alloc(42);
if(C_truep(C_i_nequalp(t2,C_retrieve2(lf[4],C_text("renderer-logic#fb-heigth-no-scale"))))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)va1254,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word)li23),tmp=(C_word)a,a+=9,tmp);
t4=t3;
va1254(t4,C_s_a_i_times(&a,2,t2,C_retrieve2(lf[2],C_text("renderer-logic#fb-width"))));}}

/* k1123 */
static void C_ccall f_1125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_1125,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1107(t3,((C_word*)t0)[4],t2);}

/* renderer-logic#return-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_1146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1146,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_retrieve2(lf[9],C_text("renderer-logic#fb"));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* renderer-logic#return-fb-locative in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_1149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1149,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_retrieve2(lf[8],C_text("renderer-logic#fb-locative"));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k339 */
static void C_ccall f_341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_341,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_344,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k342 in k339 */
static void C_ccall f_344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_344,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_347,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_extras_toplevel(2,av2);}}

/* k345 in k342 in k339 */
static void C_ccall f_347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_347,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_350,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d4_toplevel(2,av2);}}

/* k348 in k345 in k342 in k339 */
static void C_ccall f_350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_350,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_353,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("renderer.scm:15: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t2;
av2[2]=lf[35];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_353,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_356,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_356,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_359,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lolevel_toplevel(2,av2);}}

/* k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_359,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_362,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_362,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_365,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("renderer.scm:15: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t2;
av2[2]=lf[34];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_365,c,av);}
a=C_alloc(3);
t2=lf[2] /* renderer-logic#fb-width */ =C_fix(0);;
t3=lf[3] /* renderer-logic#fb-width-no-scale */ =C_fix(0);;
t4=lf[4] /* renderer-logic#fb-heigth-no-scale */ =C_fix(0);;
t5=lf[5] /* renderer-logic#fb-scale */ =C_fix(0);;
t6=C_set_block_item(lf[6] /* renderer-logic#rgb-length */,0,C_fix(4));
t7=C_set_block_item(lf[7] /* renderer-logic#rgba-length */,0,C_fix(8));
t8=lf[8] /* renderer-logic#fb-locative */ =C_SCHEME_END_OF_LIST;;
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_377,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("renderer.scm:42: srfi-4#make-u8vector"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[12]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t9;
av2[2]=C_fix(0);
av2[3]=C_fix(0);
tp(4,av2);}}

/* k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,10)))){
C_save_and_reclaim((void *)f_377,c,av);}
a=C_alloc(36);
t2=C_mutate(&lf[9] /* (set! renderer-logic#fb ...) */,t1);
t3=C_mutate((C_word*)lf[10]+1 /* (set! renderer-logic#init-fb ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_379,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[13]+1 /* (set! renderer-logic#sync-fb-to-x11-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_409,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[15] /* (set! renderer-logic#x-y-to-index ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_415,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[16] /* (set! renderer-logic#set-pixel ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_429,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[17] /* (set! renderer-logic#get-pixel-rgb ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_537,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[18]+1 /* (set! renderer-logic#draw-rectangle ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_661,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[19]+1 /* (set! renderer-logic#reset-fb ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_713,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[21]+1 /* (set! renderer-logic#load-image ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_719,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[29]+1 /* (set! renderer-logic#draw-image ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_838,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[30]+1 /* (set! renderer-logic#upscale-fb ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_926,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[31]+1 /* (set! renderer-logic#return-fb ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1146,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[32]+1 /* (set! renderer-logic#return-fb-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1149,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t15=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t15;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}

/* renderer-logic#init-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(43,c,2)))){
C_save_and_reclaim((void *)f_379,c,av);}
a=C_alloc(43);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_384,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va1228,a[2]=t5,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
t7=t6;
va1228(t7,C_s_a_i_times(&a,2,t2,t3));}

/* k382 in renderer-logic#init-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(43,c,2)))){
C_save_and_reclaim((void *)f_384,c,av);}
a=C_alloc(43);
t2=C_mutate(&lf[9] /* (set! renderer-logic#fb ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_388,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va1226,a[2]=t3,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
t5=t4;
va1226(t5,C_s_a_i_times(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]));}

/* k386 in k382 in renderer-logic#init-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,1)))){
C_save_and_reclaim((void *)f_388,c,av);}
a=C_alloc(10);
t2=C_mutate(&lf[8] /* (set! renderer-logic#fb-locative ...) */,t1);
t3=C_mutate(&lf[2] /* (set! renderer-logic#fb-width ...) */,((C_word*)t0)[2]);
t4=C_s_a_i_quotient(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t5=C_mutate(&lf[3] /* (set! renderer-logic#fb-width-no-scale ...) */,t4);
t6=C_s_a_i_quotient(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t7=C_mutate(&lf[4] /* (set! renderer-logic#fb-heigth-no-scale ...) */,t6);
t8=C_mutate(&lf[5] /* (set! renderer-logic#fb-scale ...) */,((C_word*)t0)[3]);
t9=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* renderer-logic#sync-fb-to-x11-memory in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_409,c,av);}
C_trace(C_text("renderer.scm:57: chicken.memory#move-memory!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t1;
av2[2]=C_retrieve2(lf[9],C_text("renderer-logic#fb"));
av2[3]=C_retrieve2(lf[8],C_text("renderer-logic#fb-locative"));
tp(4,av2);}}

/* renderer-logic#x-y-to-index in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall f_415(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(95,0,1)))){
C_save_and_reclaim_args((void *)trf_415,4,t1,t2,t3,t4);}
a=C_alloc(95);
t5=C_s_a_i_times(&a,2,t3,t4);
t6=C_s_a_i_plus(&a,2,t5,t2);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_s_a_i_times(&a,2,t6,C_fast_retrieve(lf[6]));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* renderer-logic#set-pixel in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall f_429(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_429,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(9);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_433,a[2]=t4,a[3]=t7,a[4]=t5,a[5]=t6,a[6]=t1,a[7]=t2,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("renderer.scm:69: get-pixel-rgb"));
f_537(t8,C_retrieve2(lf[9],C_text("renderer-logic#fb")),t2,t3,C_retrieve2(lf[2],C_text("renderer-logic#fb-width")));}

/* k431 in renderer-logic#set-pixel in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_433,c,av);}
a=C_alloc(12);
t2=C_i_list_ref(t1,C_fix(2));
t3=C_i_list_ref(t1,C_fix(1));
t4=C_i_list_ref(t1,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_535,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=t4,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("renderer.scm:75: x-y-to-index"));
f_415(t5,((C_word*)t0)[7],((C_word*)t0)[8],C_retrieve2(lf[2],C_text("renderer-logic#fb-width")));}

/* k477 in k505 in k533 in k431 in renderer-logic#set-pixel in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(158,c,1)))){
C_save_and_reclaim((void *)f_479,c,av);}
a=C_alloc(158);
t2=C_s_a_i_plus(&a,2,t1,C_fix(0));
t3=C_s_a_i_times(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_s_a_i_minus(&a,2,C_fix(255),((C_word*)t0)[3]);
t5=C_s_a_i_times(&a,2,((C_word*)t0)[4],t4);
t6=C_s_a_i_plus(&a,2,t3,t5);
t7=C_s_a_i_quotient(&a,2,t6,C_fix(255));
t8=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_i_u8vector_set(C_retrieve2(lf[9],C_text("renderer-logic#fb")),t2,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k505 in k533 in k431 in renderer-logic#set-pixel in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(164,c,4)))){
C_save_and_reclaim((void *)f_507,c,av);}
a=C_alloc(164);
t2=C_s_a_i_plus(&a,2,t1,C_fix(1));
t3=C_s_a_i_times(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_s_a_i_minus(&a,2,C_fix(255),((C_word*)t0)[3]);
t5=C_s_a_i_times(&a,2,((C_word*)t0)[4],t4);
t6=C_s_a_i_plus(&a,2,t3,t5);
t7=C_s_a_i_quotient(&a,2,t6,C_fix(255));
t8=C_i_u8vector_set(C_retrieve2(lf[9],C_text("renderer-logic#fb")),t2,t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_479,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("renderer.scm:77: x-y-to-index"));
f_415(t9,((C_word*)t0)[8],((C_word*)t0)[9],C_retrieve2(lf[2],C_text("renderer-logic#fb-width")));}

/* k533 in k431 in renderer-logic#set-pixel in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(168,c,4)))){
C_save_and_reclaim((void *)f_535,c,av);}
a=C_alloc(168);
t2=C_s_a_i_plus(&a,2,t1,C_fix(2));
t3=C_s_a_i_times(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_s_a_i_minus(&a,2,C_fix(255),((C_word*)t0)[3]);
t5=C_s_a_i_times(&a,2,((C_word*)t0)[4],t4);
t6=C_s_a_i_plus(&a,2,t3,t5);
t7=C_s_a_i_quotient(&a,2,t6,C_fix(255));
t8=C_i_u8vector_set(C_retrieve2(lf[9],C_text("renderer-logic#fb")),t2,t7);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_507,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("renderer.scm:76: x-y-to-index"));
f_415(t9,((C_word*)t0)[10],((C_word*)t0)[11],C_retrieve2(lf[2],C_text("renderer-logic#fb-width")));}

/* renderer-logic#get-pixel-rgb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall f_537(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_537,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_577,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("renderer.scm:85: x-y-to-index"));
f_415(t6,t3,t4,t5);}

/* k559 in k567 in k575 in renderer-logic#get-pixel-rgb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(38,c,1)))){
C_save_and_reclaim((void *)f_561,c,av);}
a=C_alloc(38);
t2=C_s_a_i_plus(&a,2,t1,C_fix(2));
t3=C_i_u8vector_ref(((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list3(&a,3,((C_word*)t0)[4],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k567 in k575 in renderer-logic#get-pixel-rgb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_569,c,av);}
a=C_alloc(35);
t2=C_s_a_i_plus(&a,2,t1,C_fix(1));
t3=C_i_u8vector_ref(((C_word*)t0)[2],t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("renderer.scm:87: x-y-to-index"));
f_415(t4,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k575 in renderer-logic#get-pixel-rgb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(37,c,4)))){
C_save_and_reclaim((void *)f_577,c,av);}
a=C_alloc(37);
t2=C_s_a_i_plus(&a,2,t1,C_fix(0));
t3=C_i_u8vector_ref(((C_word*)t0)[2],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("renderer.scm:86: x-y-to-index"));
f_415(t4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* renderer-logic#draw-rectangle in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8=av[8];
C_word t9=av[9];
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c!=10) C_bad_argc_2(c,10,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_661,c,av);}
a=C_alloc(14);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_667,a[2]=t3,a[3]=t5,a[4]=t11,a[5]=t2,a[6]=t4,a[7]=t6,a[8]=t7,a[9]=t8,a[10]=t9,a[11]=((C_word)li8),tmp=(C_word)a,a+=12,tmp));
t13=((C_word*)t11)[1];
f_667(t13,t1,t3);}

/* doloop95 in renderer-logic#draw-rectangle in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall f_667(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(47,0,3)))){
C_save_and_reclaim_args((void *)trf_667,3,t0,t1,t2);}
a=C_alloc(47);
t3=C_s_a_i_plus(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_i_nequalp(t2,t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_677,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_686,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t6,a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word)li7),tmp=(C_word)a,a+=11,tmp));
t8=((C_word*)t6)[1];
f_686(t8,t4,((C_word*)t0)[5]);}}

/* k675 in doloop95 in renderer-logic#draw-rectangle in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_677,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_667(t3,((C_word*)t0)[4],t2);}

/* doloop98 in doloop95 in renderer-logic#draw-rectangle in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall f_686(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,0,7)))){
C_save_and_reclaim_args((void *)trf_686,3,t0,t1,t2);}
a=C_alloc(34);
t3=C_s_a_i_plus(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_i_nequalp(t2,t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_696,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("renderer.scm:110: set-pixel"));
f_429(t4,t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}}

/* k694 in doloop98 in doloop95 in renderer-logic#draw-rectangle in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_696,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_686(t3,((C_word*)t0)[4],t2);}

/* renderer-logic#reset-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_713,c,av);}
C_trace(C_text("renderer.scm:118: srfi.160.u8#u8vector-fill!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[20]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t1;
av2[2]=C_retrieve2(lf[9],C_text("renderer-logic#fb"));
av2[3]=C_fix(0);
tp(4,av2);}}

/* renderer-logic#load-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_719,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_723,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("renderer.scm:124: scheme#open-input-file"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k721 in renderer-logic#load-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_723,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_726,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_740,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_744,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("renderer.scm:125: chicken.file.posix#port->fileno"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[27]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t4;
av2[2]=t1;
tp(3,av2);}}

/* k724 in k721 in renderer-logic#load-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_726,c,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_729,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("renderer.scm:126: srfi-4#read-u8vector!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[25]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t4;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t3)[1];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k727 in k724 in k721 in renderer-logic#load-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_729,c,av);}
a=C_alloc(20);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_750,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_802,a[2]=t2,a[3]=t4,a[4]=t9,a[5]=((C_word)li12),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_802(t11,t7,C_fix(8),C_fix(3));}

/* k734 in k758 in k751 in k748 in k727 in k724 in k721 in renderer-logic#load-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_736,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k738 in k721 in renderer-logic#load-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_740,c,av);}
C_trace(C_text("renderer.scm:125: srfi-4#make-u8vector"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[12]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k742 in k721 in renderer-logic#load-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_744,c,av);}
C_trace(C_text("renderer.scm:125: chicken.file.posix#file-size"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[26]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k748 in k727 in k724 in k721 in renderer-logic#load-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_750,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_753,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_766,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_766(t6,t2,C_fix(12),C_fix(3));}

/* k751 in k748 in k727 in k724 in k721 in renderer-logic#load-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_753,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_760,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("renderer.scm:152: srfi-4#subu8vector"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[23]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_fix(16);
av2[4]=C_i_u8vector_length(((C_word*)t0)[7]);
tp(5,av2);}}

/* k758 in k751 in k748 in k727 in k724 in k721 in renderer-logic#load-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_760,c,av);}
a=C_alloc(13);
t2=C_a_i_list3(&a,3,t1,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_736,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("renderer.scm:128: scheme#close-input-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[22]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}

/* doloop118 in k748 in k727 in k724 in k721 in renderer-logic#load-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall f_766(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_766,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nequalp(t2,C_fix(16)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_796,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("renderer.scm:148: scheme#expt"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[24]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t4;
av2[2]=C_fix(256);
av2[3]=t3;
tp(4,av2);}}}

/* k794 in doloop118 in k748 in k727 in k724 in k721 in renderer-logic#load-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(120,c,3)))){
C_save_and_reclaim((void *)f_796,c,av);}
a=C_alloc(120);
t2=C_i_u8vector_ref(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_s_a_i_times(&a,2,t1,t2);
t4=C_s_a_i_plus(&a,2,((C_word*)((C_word*)t0)[4])[1],t3);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t7=C_s_a_i_minus(&a,2,((C_word*)t0)[5],C_fix(1));
t8=((C_word*)((C_word*)t0)[6])[1];
f_766(t8,((C_word*)t0)[7],t6,t7);}

/* doloop117 in k727 in k724 in k721 in renderer-logic#load-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall f_802(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_802,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nequalp(t2,C_fix(12)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_832,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("renderer.scm:141: scheme#expt"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[24]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t4;
av2[2]=C_fix(256);
av2[3]=t3;
tp(4,av2);}}}

/* k830 in doloop117 in k727 in k724 in k721 in renderer-logic#load-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(120,c,3)))){
C_save_and_reclaim((void *)f_832,c,av);}
a=C_alloc(120);
t2=C_i_u8vector_ref(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_s_a_i_times(&a,2,t1,t2);
t4=C_s_a_i_plus(&a,2,((C_word*)((C_word*)t0)[4])[1],t3);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t7=C_s_a_i_minus(&a,2,((C_word*)t0)[5],C_fix(1));
t8=((C_word*)((C_word*)t0)[6])[1];
f_802(t8,((C_word*)t0)[7],t6,t7);}

/* renderer-logic#draw-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_838,c,av);}
a=C_alloc(11);
t5=C_i_list_ref(t2,C_fix(0));
t6=C_i_list_ref(t2,C_fix(1));
t7=C_i_list_ref(t2,C_fix(2));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_853,a[2]=t4,a[3]=t7,a[4]=t9,a[5]=t3,a[6]=t6,a[7]=t5,a[8]=((C_word)li15),tmp=(C_word)a,a+=9,tmp));
t11=((C_word*)t9)[1];
f_853(t11,t1,t4);}

/* doloop138 in renderer-logic#draw-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall f_853(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(45,0,3)))){
C_save_and_reclaim_args((void *)trf_853,3,t0,t1,t2);}
a=C_alloc(45);
t3=C_s_a_i_plus(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_i_nequalp(t2,t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_863,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_872,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],a[7]=t6,a[8]=((C_word)li14),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_872(t8,t4,((C_word*)t0)[5]);}}

/* k861 in doloop138 in renderer-logic#draw-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_863,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_853(t3,((C_word*)t0)[4],t2);}

/* doloop141 in doloop138 in renderer-logic#draw-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall f_872(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(571,0,7)))){
C_save_and_reclaim_args((void *)trf_872,3,t0,t1,t2);}
a=C_alloc(571);
t3=C_s_a_i_plus(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_i_nequalp(t2,t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_s_a_i_minus(&a,2,t2,((C_word*)t0)[2]);
t5=C_s_a_i_minus(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t6=C_s_a_i_times(&a,2,t5,((C_word*)t0)[3]);
t7=C_s_a_i_plus(&a,2,t6,t4);
t8=C_s_a_i_times(&a,2,t7,C_fast_retrieve(lf[7]));
t9=C_i_u8vector_ref(((C_word*)t0)[6],t8);
t10=C_s_a_i_times(&a,2,t5,((C_word*)t0)[3]);
t11=C_s_a_i_plus(&a,2,t10,t4);
t12=C_s_a_i_times(&a,2,t11,C_fast_retrieve(lf[7]));
t13=C_s_a_i_plus(&a,2,t12,C_fix(2));
t14=C_i_u8vector_ref(((C_word*)t0)[6],t13);
t15=C_s_a_i_times(&a,2,t5,((C_word*)t0)[3]);
t16=C_s_a_i_plus(&a,2,t15,t4);
t17=C_s_a_i_times(&a,2,t16,C_fast_retrieve(lf[7]));
t18=C_s_a_i_plus(&a,2,t17,C_fix(4));
t19=C_i_u8vector_ref(((C_word*)t0)[6],t18);
t20=C_s_a_i_times(&a,2,t5,((C_word*)t0)[3]);
t21=C_s_a_i_plus(&a,2,t20,t4);
t22=C_s_a_i_times(&a,2,t21,C_fast_retrieve(lf[7]));
t23=C_s_a_i_plus(&a,2,t22,C_fix(6));
t24=C_i_u8vector_ref(((C_word*)t0)[6],t23);
t25=C_a_i_list4(&a,4,t9,t14,t19,t24);
t26=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_885,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("renderer.scm:172: set-pixel"));
f_429(t26,t2,((C_word*)t0)[4],C_i_list_ref(t25,C_fix(0)),C_i_list_ref(t25,C_fix(1)),C_i_list_ref(t25,C_fix(2)),C_i_list_ref(t25,C_fix(3)));}}

/* k883 in doloop141 in doloop138 in renderer-logic#draw-image in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_885,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_872(t3,((C_word*)t0)[4],t2);}

/* renderer-logic#upscale-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(40,c,2)))){
C_save_and_reclaim((void *)f_926,c,av);}
a=C_alloc(40);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_930,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va1258,a[2]=t2,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t4=t3;
va1258(t4,C_s_a_i_times(&a,2,C_retrieve2(lf[3],C_text("renderer-logic#fb-width-no-scale")),C_retrieve2(lf[4],C_text("renderer-logic#fb-heigth-no-scale"))));}

/* k928 in renderer-logic#upscale-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(43,c,2)))){
C_save_and_reclaim((void *)f_930,c,av);}
a=C_alloc(43);
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_933,a[2]=t3,a[3]=t5,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t7=C_s_a_i_times(&a,2,C_retrieve2(lf[2],C_text("renderer-logic#fb-width")),C_fast_retrieve(lf[6]));
C_trace(C_text("renderer.scm:193: srfi-4#make-u8vector"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[12]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t6;
av2[2]=t7;
tp(3,av2);}}

/* k931 in k928 in renderer-logic#upscale-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_933,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word)li24),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1107(t6,t2,C_fix(0));}

/* k934 in k931 in k928 in renderer-logic#upscale-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_936,c,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_941,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li21),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_941(t5,((C_word*)t0)[6],C_fix(0));}

/* doloop155 in k934 in k931 in k928 in renderer-logic#upscale-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall f_941(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,3)))){
C_save_and_reclaim_args((void *)trf_941,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_nequalp(t2,C_retrieve2(lf[4],C_text("renderer-logic#fb-heigth-no-scale"))))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_951,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_999,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word)li20),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_999(t7,t3,C_fix(0));}}

/* k949 in doloop155 in k934 in k931 in k928 in renderer-logic#upscale-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_951,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_963,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=((C_word*)t0)[7],a[7]=((C_word)li18),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_963(t6,t2,C_fix(0));}

/* k952 in k949 in doloop155 in k934 in k931 in k928 in renderer-logic#upscale-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_ccall f_954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_954,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_941(t3,((C_word*)t0)[4],t2);}

/* doloop165 in k949 in doloop155 in k934 in k931 in k928 in renderer-logic#upscale-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall f_963(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(104,0,2)))){
C_save_and_reclaim_args((void *)trf_963,3,t0,t1,t2);}
a=C_alloc(104);
if(C_truep(C_i_nequalp(t2,C_retrieve2(lf[5],C_text("renderer-logic#fb-scale"))))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t4=C_s_a_i_times(&a,2,((C_word*)t0)[3],C_retrieve2(lf[5],C_text("renderer-logic#fb-scale")));
t5=C_s_a_i_plus(&a,2,t4,t2);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)va1242,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=((C_word)li17),tmp=(C_word)a,a+=9,tmp);
t7=t6;
va1242(t7,C_s_a_i_times(&a,2,t5,C_retrieve2(lf[2],C_text("renderer-logic#fb-width"))));}}

/* k976 */
static void C_ccall f_978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_978,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_963(t3,((C_word*)t0)[4],t2);}

/* doloop164 in doloop155 in k934 in k931 in k928 in renderer-logic#upscale-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall f_999(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_999,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nequalp(t2,C_retrieve2(lf[3],C_text("renderer-logic#fb-width-no-scale"))))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1010,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("renderer.scm:209: get-pixel-rgb"));
f_537(t5,((C_word*)t0)[4],t2,((C_word*)t0)[5],C_retrieve2(lf[3],C_text("renderer-logic#fb-width-no-scale")));}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_renderer_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("renderer"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_renderer_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(189))){
C_save(t1);
C_rereclaim2(189*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,36);
lf[0]=C_h_intern(&lf[0],8, C_text("renderer"));
lf[1]=C_h_intern(&lf[1],15, C_text("renderer-logic#"));
lf[6]=C_h_intern(&lf[6],25, C_text("renderer-logic#rgb-length"));
lf[7]=C_h_intern(&lf[7],26, C_text("renderer-logic#rgba-length"));
lf[10]=C_h_intern(&lf[10],22, C_text("renderer-logic#init-fb"));
lf[11]=C_h_intern(&lf[11],23, C_text("chicken.memory#allocate"));
lf[12]=C_h_intern(&lf[12],20, C_text("srfi-4#make-u8vector"));
lf[13]=C_h_intern(&lf[13],36, C_text("renderer-logic#sync-fb-to-x11-memory"));
lf[14]=C_h_intern(&lf[14],27, C_text("chicken.memory#move-memory!"));
lf[18]=C_h_intern(&lf[18],29, C_text("renderer-logic#draw-rectangle"));
lf[19]=C_h_intern(&lf[19],23, C_text("renderer-logic#reset-fb"));
lf[20]=C_h_intern(&lf[20],26, C_text("srfi.160.u8#u8vector-fill!"));
lf[21]=C_h_intern(&lf[21],25, C_text("renderer-logic#load-image"));
lf[22]=C_h_intern(&lf[22],23, C_text("scheme#close-input-port"));
lf[23]=C_h_intern(&lf[23],18, C_text("srfi-4#subu8vector"));
lf[24]=C_h_intern(&lf[24],11, C_text("scheme#expt"));
lf[25]=C_h_intern(&lf[25],21, C_text("srfi-4#read-u8vector!"));
lf[26]=C_h_intern(&lf[26],28, C_text("chicken.file.posix#file-size"));
lf[27]=C_h_intern(&lf[27],31, C_text("chicken.file.posix#port->fileno"));
lf[28]=C_h_intern(&lf[28],22, C_text("scheme#open-input-file"));
lf[29]=C_h_intern(&lf[29],25, C_text("renderer-logic#draw-image"));
lf[30]=C_h_intern(&lf[30],25, C_text("renderer-logic#upscale-fb"));
lf[31]=C_h_intern(&lf[31],24, C_text("renderer-logic#return-fb"));
lf[32]=C_h_intern(&lf[32],33, C_text("renderer-logic#return-fb-locative"));
lf[33]=C_h_intern(&lf[33],27, C_text("chicken.load#load-extension"));
lf[34]=C_h_intern(&lf[34],11, C_text("srfi.160.u8"));
lf[35]=C_h_intern(&lf[35],7, C_text("srfi-13"));
C_register_lf2(lf,36,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_341,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* va1226 in k382 in renderer-logic#init-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall va1226(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,2)))){
C_save_and_reclaim_args((void *)trva1226,2,t0,t1);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fast_retrieve(lf[6]));
C_trace(C_text("renderer.scm:47: chicken.memory#allocate"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word av2[3];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
tp(3,av2);}}

/* va1228 in renderer-logic#init-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall va1228(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,3)))){
C_save_and_reclaim_args((void *)trva1228,2,t0,t1);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fast_retrieve(lf[6]));
C_trace(C_text("renderer.scm:46: srfi-4#make-u8vector"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[12]);
C_word av2[4];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}

/* va1242 in doloop165 in k949 in doloop155 in k934 in k931 in k928 in renderer-logic#upscale-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall va1242(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(71,0,6)))){
C_save_and_reclaim_args((void *)trva1242,2,t0,t1);}
a=C_alloc(71);
t2=C_s_a_i_times(&a,2,t1,C_fast_retrieve(lf[6]));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_978,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_s_a_i_times(&a,2,C_retrieve2(lf[2],C_text("renderer-logic#fb-width")),C_fast_retrieve(lf[6]));
C_trace(C_text("renderer.scm:223: chicken.memory#move-memory!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word av2[7];
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
av2[3]=C_retrieve2(lf[9],C_text("renderer-logic#fb"));
av2[4]=t5;
av2[5]=((C_word*)((C_word*)t0)[7])[1];
av2[6]=((C_word*)((C_word*)t0)[2])[1];
tp(7,av2);}}

/* va1252 */
static void C_fcall va1252(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(71,0,6)))){
C_save_and_reclaim_args((void *)trva1252,2,t0,t1);}
a=C_alloc(71);
t2=C_s_a_i_times(&a,2,t1,C_fast_retrieve(lf[6]));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1125,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_s_a_i_times(&a,2,C_retrieve2(lf[3],C_text("renderer-logic#fb-width-no-scale")),C_fast_retrieve(lf[6]));
C_trace(C_text("renderer.scm:200: chicken.memory#move-memory!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word av2[7];
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t4;
av2[2]=C_retrieve2(lf[9],C_text("renderer-logic#fb"));
av2[3]=((C_word*)t0)[6];
av2[4]=t5;
av2[5]=((C_word*)((C_word*)t0)[7])[1];
av2[6]=((C_word*)((C_word*)t0)[2])[1];
tp(7,av2);}}

/* va1254 in doloop154 in k931 in k928 in renderer-logic#upscale-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall va1254(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(75,0,2)))){
C_save_and_reclaim_args((void *)trva1254,2,t0,t1);}
a=C_alloc(75);
t2=C_s_a_i_times(&a,2,t1,C_fast_retrieve(lf[6]));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)va1252,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],a[8]=((C_word)li22),tmp=(C_word)a,a+=9,tmp);
t5=t4;
va1252(t5,C_s_a_i_times(&a,2,((C_word*)t0)[4],C_retrieve2(lf[4],C_text("renderer-logic#fb-heigth-no-scale"))));}

/* va1258 in renderer-logic#upscale-fb in k375 in k363 in k360 in k357 in k354 in k351 in k348 in k345 in k342 in k339 */
static void C_fcall va1258(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,2)))){
C_save_and_reclaim_args((void *)trva1258,2,t0,t1);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fast_retrieve(lf[6]));
C_trace(C_text("renderer.scm:190: srfi-4#make-u8vector"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[12]);
C_word av2[3];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
tp(3,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[74] = {
{C_text("f_1010:renderer_2escm"),(void*)f_1010},
{C_text("f_1013:renderer_2escm"),(void*)f_1013},
{C_text("f_1022:renderer_2escm"),(void*)f_1022},
{C_text("f_1107:renderer_2escm"),(void*)f_1107},
{C_text("f_1125:renderer_2escm"),(void*)f_1125},
{C_text("f_1146:renderer_2escm"),(void*)f_1146},
{C_text("f_1149:renderer_2escm"),(void*)f_1149},
{C_text("f_341:renderer_2escm"),(void*)f_341},
{C_text("f_344:renderer_2escm"),(void*)f_344},
{C_text("f_347:renderer_2escm"),(void*)f_347},
{C_text("f_350:renderer_2escm"),(void*)f_350},
{C_text("f_353:renderer_2escm"),(void*)f_353},
{C_text("f_356:renderer_2escm"),(void*)f_356},
{C_text("f_359:renderer_2escm"),(void*)f_359},
{C_text("f_362:renderer_2escm"),(void*)f_362},
{C_text("f_365:renderer_2escm"),(void*)f_365},
{C_text("f_377:renderer_2escm"),(void*)f_377},
{C_text("f_379:renderer_2escm"),(void*)f_379},
{C_text("f_384:renderer_2escm"),(void*)f_384},
{C_text("f_388:renderer_2escm"),(void*)f_388},
{C_text("f_409:renderer_2escm"),(void*)f_409},
{C_text("f_415:renderer_2escm"),(void*)f_415},
{C_text("f_429:renderer_2escm"),(void*)f_429},
{C_text("f_433:renderer_2escm"),(void*)f_433},
{C_text("f_479:renderer_2escm"),(void*)f_479},
{C_text("f_507:renderer_2escm"),(void*)f_507},
{C_text("f_535:renderer_2escm"),(void*)f_535},
{C_text("f_537:renderer_2escm"),(void*)f_537},
{C_text("f_561:renderer_2escm"),(void*)f_561},
{C_text("f_569:renderer_2escm"),(void*)f_569},
{C_text("f_577:renderer_2escm"),(void*)f_577},
{C_text("f_661:renderer_2escm"),(void*)f_661},
{C_text("f_667:renderer_2escm"),(void*)f_667},
{C_text("f_677:renderer_2escm"),(void*)f_677},
{C_text("f_686:renderer_2escm"),(void*)f_686},
{C_text("f_696:renderer_2escm"),(void*)f_696},
{C_text("f_713:renderer_2escm"),(void*)f_713},
{C_text("f_719:renderer_2escm"),(void*)f_719},
{C_text("f_723:renderer_2escm"),(void*)f_723},
{C_text("f_726:renderer_2escm"),(void*)f_726},
{C_text("f_729:renderer_2escm"),(void*)f_729},
{C_text("f_736:renderer_2escm"),(void*)f_736},
{C_text("f_740:renderer_2escm"),(void*)f_740},
{C_text("f_744:renderer_2escm"),(void*)f_744},
{C_text("f_750:renderer_2escm"),(void*)f_750},
{C_text("f_753:renderer_2escm"),(void*)f_753},
{C_text("f_760:renderer_2escm"),(void*)f_760},
{C_text("f_766:renderer_2escm"),(void*)f_766},
{C_text("f_796:renderer_2escm"),(void*)f_796},
{C_text("f_802:renderer_2escm"),(void*)f_802},
{C_text("f_832:renderer_2escm"),(void*)f_832},
{C_text("f_838:renderer_2escm"),(void*)f_838},
{C_text("f_853:renderer_2escm"),(void*)f_853},
{C_text("f_863:renderer_2escm"),(void*)f_863},
{C_text("f_872:renderer_2escm"),(void*)f_872},
{C_text("f_885:renderer_2escm"),(void*)f_885},
{C_text("f_926:renderer_2escm"),(void*)f_926},
{C_text("f_930:renderer_2escm"),(void*)f_930},
{C_text("f_933:renderer_2escm"),(void*)f_933},
{C_text("f_936:renderer_2escm"),(void*)f_936},
{C_text("f_941:renderer_2escm"),(void*)f_941},
{C_text("f_951:renderer_2escm"),(void*)f_951},
{C_text("f_954:renderer_2escm"),(void*)f_954},
{C_text("f_963:renderer_2escm"),(void*)f_963},
{C_text("f_978:renderer_2escm"),(void*)f_978},
{C_text("f_999:renderer_2escm"),(void*)f_999},
{C_text("toplevel:renderer_2escm"),(void*)C_renderer_toplevel},
{C_text("va1226:renderer_2escm"),(void*)va1226},
{C_text("va1228:renderer_2escm"),(void*)va1228},
{C_text("va1242:renderer_2escm"),(void*)va1242},
{C_text("va1252:renderer_2escm"),(void*)va1252},
{C_text("va1254:renderer_2escm"),(void*)va1254},
{C_text("va1258:renderer_2escm"),(void*)va1258},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|hiding unexported module binding: renderer-logic#fb-width 
o|hiding unexported module binding: renderer-logic#fb-heigth 
o|hiding unexported module binding: renderer-logic#fb-width-no-scale 
o|hiding unexported module binding: renderer-logic#fb-heigth-no-scale 
o|hiding unexported module binding: renderer-logic#fb-scale 
o|hiding unexported module binding: renderer-logic#fb-locative 
o|hiding unexported module binding: renderer-logic#fb 
o|hiding unexported module binding: renderer-logic#x-y-to-index 
o|hiding unexported module binding: renderer-logic#set-pixel 
o|hiding unexported module binding: renderer-logic#get-pixel-rgb 
o|hiding unexported module binding: renderer-logic#get-pixel-rgba 
o|hiding unexported module binding: renderer-logic#parse-image-header 
(o e)|assignments to immediate values: 9 
o|removed side-effect free assignment to unused variable: renderer-logic#fb-heigth 
o|removed side-effect free assignment to unused variable: renderer-logic#fb-heigth 
o|contracted procedure: "(renderer.scm:127) renderer-logic#parse-image-header" 
o|contracted procedure: "(renderer.scm:171) renderer-logic#get-pixel-rgba" 
o|replaced variables: 173 
o|removed binding forms: 83 
o|replaced variables: 18 
o|removed binding forms: 154 
o|removed binding forms: 6 
o|simplifications: ((##core#call . 130)) 
o|  call simplifications:
o|    srfi-4#u8vector-length
o|    scheme#=	11
o|    srfi-4#u8vector-ref	9
o|    scheme#list	3
o|    scheme#list-ref	13
o|    scheme#-	7
o|    srfi-4#u8vector-set!	6
o|    scheme#+	41
o|    scheme#*	34
o|    scheme#quotient	5
o|contracted procedure: k392 
o|contracted procedure: k396 
o|contracted procedure: k425 
o|contracted procedure: k421 
o|contracted procedure: k434 
o|contracted procedure: k437 
o|contracted procedure: k440 
o|contracted procedure: k509 
o|contracted procedure: k521 
o|contracted procedure: k529 
o|contracted procedure: k525 
o|contracted procedure: k517 
o|contracted procedure: k513 
o|contracted procedure: k443 
o|contracted procedure: k481 
o|contracted procedure: k493 
o|contracted procedure: k501 
o|contracted procedure: k497 
o|contracted procedure: k489 
o|contracted procedure: k485 
o|contracted procedure: k446 
o|contracted procedure: k453 
o|contracted procedure: k465 
o|contracted procedure: k473 
o|contracted procedure: k469 
o|contracted procedure: k461 
o|contracted procedure: k457 
o|contracted procedure: k571 
o|contracted procedure: k543 
o|contracted procedure: k563 
o|contracted procedure: k547 
o|contracted procedure: k555 
o|contracted procedure: k551 
o|contracted procedure: k709 
o|contracted procedure: k672 
o|contracted procedure: k682 
o|contracted procedure: k705 
o|contracted procedure: k691 
o|contracted procedure: k701 
o|contracted procedure: k731 
o|contracted procedure: k762 
o|contracted procedure: k771 
o|contracted procedure: k798 
o|contracted procedure: k790 
o|contracted procedure: k775 
o|contracted procedure: k782 
o|contracted procedure: k786 
o|contracted procedure: k807 
o|contracted procedure: k834 
o|contracted procedure: k826 
o|contracted procedure: k811 
o|contracted procedure: k818 
o|contracted procedure: k822 
o|contracted procedure: k840 
o|contracted procedure: k843 
o|contracted procedure: k846 
o|contracted procedure: k922 
o|contracted procedure: k858 
o|contracted procedure: k868 
o|contracted procedure: k918 
o|contracted procedure: k877 
o|contracted procedure: k910 
o|contracted procedure: k914 
o|contracted procedure: k657 
o|contracted procedure: k653 
o|contracted procedure: k649 
o|contracted procedure: k585 
o|contracted procedure: k645 
o|contracted procedure: k641 
o|contracted procedure: k637 
o|contracted procedure: k633 
o|contracted procedure: k589 
o|contracted procedure: k629 
o|contracted procedure: k625 
o|contracted procedure: k621 
o|contracted procedure: k617 
o|contracted procedure: k593 
o|contracted procedure: k613 
o|contracted procedure: k609 
o|contracted procedure: k605 
o|contracted procedure: k601 
o|contracted procedure: k597 
o|contracted procedure: k880 
o|contracted procedure: k890 
o|contracted procedure: k894 
o|contracted procedure: k898 
o|contracted procedure: k902 
o|contracted procedure: k906 
o|contracted procedure: k946 
o|contracted procedure: k959 
o|contracted procedure: k968 
o|contracted procedure: k983 
o|contracted procedure: k987 
o|contracted procedure: k995 
o|contracted procedure: k991 
o|contracted procedure: k1004 
o|contracted procedure: k1018 
o|contracted procedure: k1027 
o|contracted procedure: k1103 
o|contracted procedure: k1099 
o|contracted procedure: k1095 
o|contracted procedure: k1087 
o|contracted procedure: k1091 
o|contracted procedure: k1030 
o|contracted procedure: k1083 
o|contracted procedure: k1079 
o|contracted procedure: k1075 
o|contracted procedure: k1067 
o|contracted procedure: k1071 
o|contracted procedure: k1033 
o|contracted procedure: k1063 
o|contracted procedure: k1059 
o|contracted procedure: k1055 
o|contracted procedure: k1047 
o|contracted procedure: k1051 
o|contracted procedure: k1036 
o|contracted procedure: k1043 
o|contracted procedure: k1112 
o|contracted procedure: k1130 
o|contracted procedure: k1134 
o|contracted procedure: k1138 
o|simplifications: ((let . 16) (##core#call . 12)) 
o|  call simplifications:
o|    scheme#*	12
o|removed binding forms: 121 
o|contracted procedure: k401 
o|contracted procedure: k405 
o|contracted procedure: k973 
o|contracted procedure: k1116 
o|contracted procedure: k1120 
o|contracted procedure: k1142 
o|removed binding forms: 6 
o|customizable procedures: (va1258 va1254 va1252 doloop154156 doloop169170 doloop164166 va1242 doloop165179 doloop155162 doloop141142 doloop138139 doloop117119 doloop118124 renderer-logic#set-pixel doloop9899 doloop9596 renderer-logic#get-pixel-rgb renderer-logic#x-y-to-index va1228 va1226) 
o|calls to known targets: 38 
o|identified direct recursive calls: f_1022 1 
o|fast box initializations: 11 
o|fast global references: 43 
o|fast global assignments: 15 
o|dropping unused closure argument: f_415 
o|dropping unused closure argument: f_429 
o|dropping unused closure argument: f_537 
*/
/* end of file */
