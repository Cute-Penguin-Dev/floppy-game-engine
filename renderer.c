/* Generated from renderer.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.4.0 (rev 1a1d1495)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: renderer.scm -output-file renderer.c -dynamic -feature chicken-compile-shared -emit-all-import-libraries
   uses: eval file posix srfi-4 extras library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_externimport void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_externimport void C_ccall C_srfi_2d4_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[24];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,33),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,120,45,121,45,116,111,45,105,110,100,101,120,32,120,32,121,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,38),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,115,101,116,45,112,105,120,101,108,32,120,32,121,32,114,32,103,32,98,32,97,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,12),40,100,111,108,111,111,112,55,55,32,120,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,12),40,100,111,108,111,111,112,55,52,32,121,41,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,53),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,100,114,97,119,45,114,101,99,116,97,110,103,108,101,32,120,112,111,115,32,121,112,111,115,32,119,32,104,32,114,32,103,32,98,32,97,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,25),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,114,101,115,101,116,45,102,98,41,0,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,32),40,100,111,108,111,111,112,57,55,32,98,121,116,101,45,105,110,100,101,120,32,101,120,112,116,45,112,111,119,101,114,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,32),40,100,111,108,111,111,112,57,54,32,98,121,116,101,45,105,110,100,101,120,32,101,120,112,116,45,112,111,119,101,114,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,37),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,108,111,97,100,45,105,109,97,103,101,32,102,105,108,101,45,110,97,109,101,41,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,50,48,32,120,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,49,55,32,121,41,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,43),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,100,114,97,119,45,105,109,97,103,101,32,105,109,97,103,101,32,120,112,111,115,32,121,112,111,115,41,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,26),40,114,101,110,100,101,114,101,114,45,108,111,103,105,99,35,114,101,116,117,114,110,45,102,98,41,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,7),40,118,97,56,56,52,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_266)
static void C_ccall f_266(C_word c,C_word *av) C_noret;
C_noret_decl(f_269)
static void C_ccall f_269(C_word c,C_word *av) C_noret;
C_noret_decl(f_272)
static void C_ccall f_272(C_word c,C_word *av) C_noret;
C_noret_decl(f_275)
static void C_ccall f_275(C_word c,C_word *av) C_noret;
C_noret_decl(f_278)
static void C_ccall f_278(C_word c,C_word *av) C_noret;
C_noret_decl(f_281)
static void C_ccall f_281(C_word c,C_word *av) C_noret;
C_noret_decl(f_284)
static void C_ccall f_284(C_word c,C_word *av) C_noret;
C_noret_decl(f_287)
static void C_ccall f_287(C_word c,C_word *av) C_noret;
C_noret_decl(f_294)
static void C_ccall f_294(C_word c,C_word *av) C_noret;
C_noret_decl(f_296)
static void C_fcall f_296(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_310)
static void C_fcall f_310(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_360)
static void C_ccall f_360(C_word c,C_word *av) C_noret;
C_noret_decl(f_388)
static void C_ccall f_388(C_word c,C_word *av) C_noret;
C_noret_decl(f_392)
static void C_ccall f_392(C_word c,C_word *av) C_noret;
C_noret_decl(f_558)
static void C_ccall f_558(C_word c,C_word *av) C_noret;
C_noret_decl(f_564)
static void C_fcall f_564(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_574)
static void C_ccall f_574(C_word c,C_word *av) C_noret;
C_noret_decl(f_583)
static void C_fcall f_583(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_593)
static void C_ccall f_593(C_word c,C_word *av) C_noret;
C_noret_decl(f_610)
static void C_ccall f_610(C_word c,C_word *av) C_noret;
C_noret_decl(f_616)
static void C_ccall f_616(C_word c,C_word *av) C_noret;
C_noret_decl(f_620)
static void C_ccall f_620(C_word c,C_word *av) C_noret;
C_noret_decl(f_623)
static void C_ccall f_623(C_word c,C_word *av) C_noret;
C_noret_decl(f_626)
static void C_ccall f_626(C_word c,C_word *av) C_noret;
C_noret_decl(f_633)
static void C_ccall f_633(C_word c,C_word *av) C_noret;
C_noret_decl(f_637)
static void C_ccall f_637(C_word c,C_word *av) C_noret;
C_noret_decl(f_641)
static void C_ccall f_641(C_word c,C_word *av) C_noret;
C_noret_decl(f_647)
static void C_ccall f_647(C_word c,C_word *av) C_noret;
C_noret_decl(f_650)
static void C_ccall f_650(C_word c,C_word *av) C_noret;
C_noret_decl(f_657)
static void C_ccall f_657(C_word c,C_word *av) C_noret;
C_noret_decl(f_663)
static void C_fcall f_663(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_693)
static void C_ccall f_693(C_word c,C_word *av) C_noret;
C_noret_decl(f_699)
static void C_fcall f_699(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_729)
static void C_ccall f_729(C_word c,C_word *av) C_noret;
C_noret_decl(f_735)
static void C_ccall f_735(C_word c,C_word *av) C_noret;
C_noret_decl(f_750)
static void C_fcall f_750(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_760)
static void C_ccall f_760(C_word c,C_word *av) C_noret;
C_noret_decl(f_769)
static void C_fcall f_769(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_782)
static void C_ccall f_782(C_word c,C_word *av) C_noret;
C_noret_decl(f_823)
static void C_ccall f_823(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(va884)
static void C_fcall va884(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_296)
static void C_ccall trf_296(C_word c,C_word *av) C_noret;
static void C_ccall trf_296(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_296(t0,t1,t2);}

C_noret_decl(trf_310)
static void C_ccall trf_310(C_word c,C_word *av) C_noret;
static void C_ccall trf_310(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_310(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_564)
static void C_ccall trf_564(C_word c,C_word *av) C_noret;
static void C_ccall trf_564(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_564(t0,t1,t2);}

C_noret_decl(trf_583)
static void C_ccall trf_583(C_word c,C_word *av) C_noret;
static void C_ccall trf_583(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_583(t0,t1,t2);}

C_noret_decl(trf_663)
static void C_ccall trf_663(C_word c,C_word *av) C_noret;
static void C_ccall trf_663(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_663(t0,t1,t2,t3);}

C_noret_decl(trf_699)
static void C_ccall trf_699(C_word c,C_word *av) C_noret;
static void C_ccall trf_699(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_699(t0,t1,t2,t3);}

C_noret_decl(trf_750)
static void C_ccall trf_750(C_word c,C_word *av) C_noret;
static void C_ccall trf_750(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_750(t0,t1,t2);}

C_noret_decl(trf_769)
static void C_ccall trf_769(C_word c,C_word *av) C_noret;
static void C_ccall trf_769(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_769(t0,t1,t2);}

C_noret_decl(trva884)
static void C_ccall trva884(C_word c,C_word *av) C_noret;
static void C_ccall trva884(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va884(t0,t1);}

/* k264 */
static void C_ccall f_266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_266,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_269,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k267 in k264 */
static void C_ccall f_269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_269,c,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_272,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_extras_toplevel(2,av2);}}

/* k270 in k267 in k264 */
static void C_ccall f_272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_272,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_275,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d4_toplevel(2,av2);}}

/* k273 in k270 in k267 in k264 */
static void C_ccall f_275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_275,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_278,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("renderer.scm:12: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t2;
av2[2]=lf[23];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_278,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_281,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_281,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_284,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_284,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_287,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("renderer.scm:12: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t2;
av2[2]=lf[22];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_287(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(40,c,2)))){
C_save_and_reclaim((void *)f_287,c,av);}
a=C_alloc(40);
t2=C_set_block_item(lf[1] /* renderer-logic#fb-length */,0,C_fix(128));
t3=C_set_block_item(lf[2] /* renderer-logic#rgb-length */,0,C_fix(3));
t4=C_set_block_item(lf[3] /* renderer-logic#rgba-length */,0,C_fix(8));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_294,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va884,a[2]=t5,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t7=t6;
va884(t7,C_s_a_i_times(&a,2,C_fast_retrieve(lf[1]),C_fast_retrieve(lf[1])));}

/* k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_294(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,10)))){
C_save_and_reclaim((void *)f_294,c,av);}
a=C_alloc(21);
t2=C_mutate(&lf[4] /* (set! renderer-logic#fb ...) */,t1);
t3=C_mutate(&lf[5] /* (set! renderer-logic#x-y-to-index ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_296,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[6] /* (set! renderer-logic#set-pixel ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_310,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[7]+1 /* (set! renderer-logic#draw-rectangle ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_558,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[8]+1 /* (set! renderer-logic#reset-fb ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_610,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[10]+1 /* (set! renderer-logic#load-image ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_616,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[19]+1 /* (set! renderer-logic#draw-image ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_735,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[20]+1 /* (set! renderer-logic#return-fb ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_823,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* renderer-logic#x-y-to-index in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_fcall f_296(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(95,0,1)))){
C_save_and_reclaim_args((void *)trf_296,3,t1,t2,t3);}
a=C_alloc(95);
t4=C_s_a_i_times(&a,2,t3,C_fast_retrieve(lf[1]));
t5=C_s_a_i_plus(&a,2,t4,t2);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_s_a_i_times(&a,2,t5,C_fast_retrieve(lf[2]));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* renderer-logic#set-pixel in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_fcall f_310(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
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
C_word t28;
C_word t29;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(363,0,3)))){
C_save_and_reclaim_args((void *)trf_310,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(363);
t8=C_retrieve2(lf[4],C_text("renderer-logic#fb"));
t9=C_fast_retrieve(lf[1]);
t10=C_s_a_i_times(&a,2,t3,C_fast_retrieve(lf[1]));
t11=C_s_a_i_plus(&a,2,t10,t2);
t12=C_s_a_i_times(&a,2,t11,C_fast_retrieve(lf[2]));
t13=C_i_u8vector_ref(C_retrieve2(lf[4],C_text("renderer-logic#fb")),t12);
t14=C_s_a_i_times(&a,2,t3,C_fast_retrieve(lf[1]));
t15=C_s_a_i_plus(&a,2,t14,t2);
t16=C_s_a_i_times(&a,2,t15,C_fast_retrieve(lf[2]));
t17=C_s_a_i_plus(&a,2,t16,C_fix(1));
t18=C_i_u8vector_ref(C_retrieve2(lf[4],C_text("renderer-logic#fb")),t17);
t19=C_s_a_i_times(&a,2,t3,C_fast_retrieve(lf[1]));
t20=C_s_a_i_plus(&a,2,t19,t2);
t21=C_s_a_i_times(&a,2,t20,C_fast_retrieve(lf[2]));
t22=C_s_a_i_plus(&a,2,t21,C_fix(2));
t23=C_i_u8vector_ref(C_retrieve2(lf[4],C_text("renderer-logic#fb")),t22);
t24=C_a_i_list3(&a,3,t13,t18,t23);
t25=C_i_list_ref(t24,C_fix(0));
t26=C_i_list_ref(t24,C_fix(1));
t27=C_i_list_ref(t24,C_fix(2));
t28=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_392,a[2]=t4,a[3]=t7,a[4]=t25,a[5]=t5,a[6]=t6,a[7]=t27,a[8]=t1,a[9]=t2,a[10]=t3,tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("renderer.scm:45: x-y-to-index"));
f_296(t28,t2,t3);}

/* k358 in k386 in k390 in renderer-logic#set-pixel in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_360(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_360,c,av);}
a=C_alloc(158);
t2=C_s_a_i_plus(&a,2,t1,C_fix(2));
t3=C_s_a_i_times(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_s_a_i_minus(&a,2,C_fix(255),((C_word*)t0)[3]);
t5=C_s_a_i_times(&a,2,((C_word*)t0)[4],t4);
t6=C_s_a_i_plus(&a,2,t3,t5);
t7=C_s_a_i_quotient(&a,2,t6,C_fix(255));
t8=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_i_u8vector_set(C_retrieve2(lf[4],C_text("renderer-logic#fb")),t2,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k386 in k390 in renderer-logic#set-pixel in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
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
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(164,c,3)))){
C_save_and_reclaim((void *)f_388,c,av);}
a=C_alloc(164);
t2=C_s_a_i_plus(&a,2,t1,C_fix(1));
t3=C_s_a_i_times(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_s_a_i_minus(&a,2,C_fix(255),((C_word*)t0)[3]);
t5=C_s_a_i_times(&a,2,((C_word*)t0)[4],t4);
t6=C_s_a_i_plus(&a,2,t3,t5);
t7=C_s_a_i_quotient(&a,2,t6,C_fix(255));
t8=C_i_u8vector_set(C_retrieve2(lf[4],C_text("renderer-logic#fb")),t2,t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_360,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("renderer.scm:47: x-y-to-index"));
f_296(t9,((C_word*)t0)[8],((C_word*)t0)[9]);}

/* k390 in renderer-logic#set-pixel in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_392(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(139,c,3)))){
C_save_and_reclaim((void *)f_392,c,av);}
a=C_alloc(139);
t2=C_s_a_i_times(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_s_a_i_minus(&a,2,C_fix(255),((C_word*)t0)[3]);
t4=C_s_a_i_times(&a,2,((C_word*)t0)[4],t3);
t5=C_s_a_i_plus(&a,2,t2,t4);
t6=C_s_a_i_quotient(&a,2,t5,C_fix(255));
t7=C_i_u8vector_set(C_retrieve2(lf[4],C_text("renderer-logic#fb")),t1,t6);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_388,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("renderer.scm:46: x-y-to-index"));
f_296(t8,((C_word*)t0)[9],((C_word*)t0)[10]);}

/* renderer-logic#draw-rectangle in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_558(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_558,c,av);}
a=C_alloc(14);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_564,a[2]=t3,a[3]=t5,a[4]=t11,a[5]=t2,a[6]=t4,a[7]=t6,a[8]=t7,a[9]=t8,a[10]=t9,a[11]=((C_word)li3),tmp=(C_word)a,a+=12,tmp));
t13=((C_word*)t11)[1];
f_564(t13,t1,t3);}

/* doloop74 in renderer-logic#draw-rectangle in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_fcall f_564(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_564,3,t0,t1,t2);}
a=C_alloc(47);
t3=C_s_a_i_plus(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_i_nequalp(t2,t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_574,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_583,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t6,a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word)li2),tmp=(C_word)a,a+=11,tmp));
t8=((C_word*)t6)[1];
f_583(t8,t4,((C_word*)t0)[5]);}}

/* k572 in doloop74 in renderer-logic#draw-rectangle in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_574,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_564(t3,((C_word*)t0)[4],t2);}

/* doloop77 in doloop74 in renderer-logic#draw-rectangle in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_fcall f_583(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,0,7)))){
C_save_and_reclaim_args((void *)trf_583,3,t0,t1,t2);}
a=C_alloc(34);
t3=C_s_a_i_plus(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_i_nequalp(t2,t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_593,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("renderer.scm:80: set-pixel"));
f_310(t4,t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}}

/* k591 in doloop77 in doloop74 in renderer-logic#draw-rectangle in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_593,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_583(t3,((C_word*)t0)[4],t2);}

/* renderer-logic#reset-fb in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_610,c,av);}
C_trace(C_text("renderer.scm:88: srfi.160.u8#u8vector-fill!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t1;
av2[2]=C_retrieve2(lf[4],C_text("renderer-logic#fb"));
av2[3]=C_fix(0);
tp(4,av2);}}

/* renderer-logic#load-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_616(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_616,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_620,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("renderer.scm:94: scheme#open-input-file"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[18]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k618 in renderer-logic#load-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_620(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_620,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_623,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_637,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_641,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("renderer.scm:95: chicken.file.posix#port->fileno"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[17]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t4;
av2[2]=t1;
tp(3,av2);}}

/* k621 in k618 in renderer-logic#load-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_623(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_623,c,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_626,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("renderer.scm:96: srfi-4#read-u8vector!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t4;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t3)[1];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k624 in k621 in k618 in renderer-logic#load-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_626(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_626,c,av);}
a=C_alloc(20);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_647,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_699,a[2]=t2,a[3]=t4,a[4]=t9,a[5]=((C_word)li7),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_699(t11,t7,C_fix(8),C_fix(3));}

/* k631 in k655 in k648 in k645 in k624 in k621 in k618 in renderer-logic#load-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_633,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k635 in k618 in renderer-logic#load-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_637,c,av);}
C_trace(C_text("renderer.scm:95: srfi-4#make-u8vector"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k639 in k618 in renderer-logic#load-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_641,c,av);}
C_trace(C_text("renderer.scm:95: chicken.file.posix#file-size"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k645 in k624 in k621 in k618 in renderer-logic#load-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_647(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_647,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_650,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_663,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_663(t6,t2,C_fix(12),C_fix(3));}

/* k648 in k645 in k624 in k621 in k618 in renderer-logic#load-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_650,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("renderer.scm:122: srfi-4#subu8vector"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[12]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_fix(17);
av2[4]=C_i_u8vector_length(((C_word*)t0)[7]);
tp(5,av2);}}

/* k655 in k648 in k645 in k624 in k621 in k618 in renderer-logic#load-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_657(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_657,c,av);}
a=C_alloc(13);
t2=C_a_i_list3(&a,3,t1,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_633,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("renderer.scm:98: scheme#close-input-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}

/* doloop97 in k645 in k624 in k621 in k618 in renderer-logic#load-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_fcall f_663(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_663,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nequalp(t2,C_fix(16)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_693,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("renderer.scm:118: scheme#expt"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t4;
av2[2]=C_fix(256);
av2[3]=t3;
tp(4,av2);}}}

/* k691 in doloop97 in k645 in k624 in k621 in k618 in renderer-logic#load-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_693(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_693,c,av);}
a=C_alloc(120);
t2=C_i_u8vector_ref(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_s_a_i_times(&a,2,t1,t2);
t4=C_s_a_i_plus(&a,2,((C_word*)((C_word*)t0)[4])[1],t3);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t7=C_s_a_i_minus(&a,2,((C_word*)t0)[5],C_fix(1));
t8=((C_word*)((C_word*)t0)[6])[1];
f_663(t8,((C_word*)t0)[7],t6,t7);}

/* doloop96 in k624 in k621 in k618 in renderer-logic#load-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_fcall f_699(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_699,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nequalp(t2,C_fix(12)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_729,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("renderer.scm:111: scheme#expt"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t4;
av2[2]=C_fix(256);
av2[3]=t3;
tp(4,av2);}}}

/* k727 in doloop96 in k624 in k621 in k618 in renderer-logic#load-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(120,c,3)))){
C_save_and_reclaim((void *)f_729,c,av);}
a=C_alloc(120);
t2=C_i_u8vector_ref(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_s_a_i_times(&a,2,t1,t2);
t4=C_s_a_i_plus(&a,2,((C_word*)((C_word*)t0)[4])[1],t3);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t7=C_s_a_i_minus(&a,2,((C_word*)t0)[5],C_fix(1));
t8=((C_word*)((C_word*)t0)[6])[1];
f_699(t8,((C_word*)t0)[7],t6,t7);}

/* renderer-logic#draw-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_735(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_735,c,av);}
a=C_alloc(11);
t5=C_i_list_ref(t2,C_fix(0));
t6=C_i_list_ref(t2,C_fix(1));
t7=C_i_list_ref(t2,C_fix(2));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_750,a[2]=t4,a[3]=t7,a[4]=t9,a[5]=t3,a[6]=t6,a[7]=t5,a[8]=((C_word)li10),tmp=(C_word)a,a+=9,tmp));
t11=((C_word*)t9)[1];
f_750(t11,t1,t4);}

/* doloop117 in renderer-logic#draw-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_fcall f_750(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_750,3,t0,t1,t2);}
a=C_alloc(45);
t3=C_s_a_i_plus(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_i_nequalp(t2,t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_760,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_769,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],a[7]=t6,a[8]=((C_word)li9),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_769(t8,t4,((C_word*)t0)[5]);}}

/* k758 in doloop117 in renderer-logic#draw-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_760,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_750(t3,((C_word*)t0)[4],t2);}

/* doloop120 in doloop117 in renderer-logic#draw-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_fcall f_769(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_769,3,t0,t1,t2);}
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
t8=C_s_a_i_times(&a,2,t7,C_fast_retrieve(lf[3]));
t9=C_i_u8vector_ref(((C_word*)t0)[6],t8);
t10=C_s_a_i_times(&a,2,t5,((C_word*)t0)[3]);
t11=C_s_a_i_plus(&a,2,t10,t4);
t12=C_s_a_i_times(&a,2,t11,C_fast_retrieve(lf[3]));
t13=C_s_a_i_plus(&a,2,t12,C_fix(2));
t14=C_i_u8vector_ref(((C_word*)t0)[6],t13);
t15=C_s_a_i_times(&a,2,t5,((C_word*)t0)[3]);
t16=C_s_a_i_plus(&a,2,t15,t4);
t17=C_s_a_i_times(&a,2,t16,C_fast_retrieve(lf[3]));
t18=C_s_a_i_plus(&a,2,t17,C_fix(4));
t19=C_i_u8vector_ref(((C_word*)t0)[6],t18);
t20=C_s_a_i_times(&a,2,t5,((C_word*)t0)[3]);
t21=C_s_a_i_plus(&a,2,t20,t4);
t22=C_s_a_i_times(&a,2,t21,C_fast_retrieve(lf[3]));
t23=C_s_a_i_plus(&a,2,t22,C_fix(6));
t24=C_i_u8vector_ref(((C_word*)t0)[6],t23);
t25=C_a_i_list4(&a,4,t9,t14,t19,t24);
t26=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_782,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("renderer.scm:142: set-pixel"));
f_310(t26,t2,((C_word*)t0)[4],C_i_list_ref(t25,C_fix(0)),C_i_list_ref(t25,C_fix(1)),C_i_list_ref(t25,C_fix(2)),C_i_list_ref(t25,C_fix(3)));}}

/* k780 in doloop120 in doloop117 in renderer-logic#draw-image in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_782,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_769(t3,((C_word*)t0)[4],t2);}

/* renderer-logic#return-fb in k292 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_ccall f_823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_823,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_retrieve2(lf[4],C_text("renderer-logic#fb"));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point

void C_ccall C_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(147))){
C_save(t1);
C_rereclaim2(147*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,24);
lf[0]=C_h_intern(&lf[0],15, C_text("renderer-logic#"));
lf[1]=C_h_intern(&lf[1],24, C_text("renderer-logic#fb-length"));
lf[2]=C_h_intern(&lf[2],25, C_text("renderer-logic#rgb-length"));
lf[3]=C_h_intern(&lf[3],26, C_text("renderer-logic#rgba-length"));
lf[7]=C_h_intern(&lf[7],29, C_text("renderer-logic#draw-rectangle"));
lf[8]=C_h_intern(&lf[8],23, C_text("renderer-logic#reset-fb"));
lf[9]=C_h_intern(&lf[9],26, C_text("srfi.160.u8#u8vector-fill!"));
lf[10]=C_h_intern(&lf[10],25, C_text("renderer-logic#load-image"));
lf[11]=C_h_intern(&lf[11],23, C_text("scheme#close-input-port"));
lf[12]=C_h_intern(&lf[12],18, C_text("srfi-4#subu8vector"));
lf[13]=C_h_intern(&lf[13],11, C_text("scheme#expt"));
lf[14]=C_h_intern(&lf[14],21, C_text("srfi-4#read-u8vector!"));
lf[15]=C_h_intern(&lf[15],20, C_text("srfi-4#make-u8vector"));
lf[16]=C_h_intern(&lf[16],28, C_text("chicken.file.posix#file-size"));
lf[17]=C_h_intern(&lf[17],31, C_text("chicken.file.posix#port->fileno"));
lf[18]=C_h_intern(&lf[18],22, C_text("scheme#open-input-file"));
lf[19]=C_h_intern(&lf[19],25, C_text("renderer-logic#draw-image"));
lf[20]=C_h_intern(&lf[20],24, C_text("renderer-logic#return-fb"));
lf[21]=C_h_intern(&lf[21],27, C_text("chicken.load#load-extension"));
lf[22]=C_h_intern(&lf[22],11, C_text("srfi.160.u8"));
lf[23]=C_h_intern(&lf[23],7, C_text("srfi-13"));
C_register_lf2(lf,24,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_266,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* va884 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k264 */
static void C_fcall va884(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,3)))){
C_save_and_reclaim_args((void *)trva884,2,t0,t1);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fast_retrieve(lf[2]));
C_trace(C_text("renderer.scm:29: srfi-4#make-u8vector"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[4];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[43] = {
{C_text("f_266:renderer_2escm"),(void*)f_266},
{C_text("f_269:renderer_2escm"),(void*)f_269},
{C_text("f_272:renderer_2escm"),(void*)f_272},
{C_text("f_275:renderer_2escm"),(void*)f_275},
{C_text("f_278:renderer_2escm"),(void*)f_278},
{C_text("f_281:renderer_2escm"),(void*)f_281},
{C_text("f_284:renderer_2escm"),(void*)f_284},
{C_text("f_287:renderer_2escm"),(void*)f_287},
{C_text("f_294:renderer_2escm"),(void*)f_294},
{C_text("f_296:renderer_2escm"),(void*)f_296},
{C_text("f_310:renderer_2escm"),(void*)f_310},
{C_text("f_360:renderer_2escm"),(void*)f_360},
{C_text("f_388:renderer_2escm"),(void*)f_388},
{C_text("f_392:renderer_2escm"),(void*)f_392},
{C_text("f_558:renderer_2escm"),(void*)f_558},
{C_text("f_564:renderer_2escm"),(void*)f_564},
{C_text("f_574:renderer_2escm"),(void*)f_574},
{C_text("f_583:renderer_2escm"),(void*)f_583},
{C_text("f_593:renderer_2escm"),(void*)f_593},
{C_text("f_610:renderer_2escm"),(void*)f_610},
{C_text("f_616:renderer_2escm"),(void*)f_616},
{C_text("f_620:renderer_2escm"),(void*)f_620},
{C_text("f_623:renderer_2escm"),(void*)f_623},
{C_text("f_626:renderer_2escm"),(void*)f_626},
{C_text("f_633:renderer_2escm"),(void*)f_633},
{C_text("f_637:renderer_2escm"),(void*)f_637},
{C_text("f_641:renderer_2escm"),(void*)f_641},
{C_text("f_647:renderer_2escm"),(void*)f_647},
{C_text("f_650:renderer_2escm"),(void*)f_650},
{C_text("f_657:renderer_2escm"),(void*)f_657},
{C_text("f_663:renderer_2escm"),(void*)f_663},
{C_text("f_693:renderer_2escm"),(void*)f_693},
{C_text("f_699:renderer_2escm"),(void*)f_699},
{C_text("f_729:renderer_2escm"),(void*)f_729},
{C_text("f_735:renderer_2escm"),(void*)f_735},
{C_text("f_750:renderer_2escm"),(void*)f_750},
{C_text("f_760:renderer_2escm"),(void*)f_760},
{C_text("f_769:renderer_2escm"),(void*)f_769},
{C_text("f_782:renderer_2escm"),(void*)f_782},
{C_text("f_823:renderer_2escm"),(void*)f_823},
{C_text("toplevel:renderer_2escm"),(void*)C_toplevel},
{C_text("va884:renderer_2escm"),(void*)va884},
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
o|hiding unexported module binding: renderer-logic#fb 
o|hiding unexported module binding: renderer-logic#x-y-to-index 
o|hiding unexported module binding: renderer-logic#set-pixel 
o|hiding unexported module binding: renderer-logic#get-pixel-rgb 
o|hiding unexported module binding: renderer-logic#get-pixel-rgba 
o|hiding unexported module binding: renderer-logic#parse-image-header 
(o e)|assignments to immediate values: 3 
o|contracted procedure: "(renderer.scm:41) renderer-logic#get-pixel-rgb" 
o|propagated global variable: w59 renderer-logic#fb-length 
o|contracted procedure: "(renderer.scm:97) renderer-logic#parse-image-header" 
o|contracted procedure: "(renderer.scm:141) renderer-logic#get-pixel-rgba" 
o|replaced variables: 127 
o|removed binding forms: 46 
o|replaced variables: 28 
o|removed binding forms: 115 
o|removed binding forms: 9 
o|simplifications: ((##core#call . 97)) 
o|  call simplifications:
o|    srfi-4#u8vector-length
o|    scheme#=	6
o|    srfi-4#u8vector-ref	9
o|    scheme#list	3
o|    scheme#list-ref	10
o|    scheme#-	7
o|    scheme#quotient	3
o|    srfi-4#u8vector-set!	3
o|    scheme#+	30
o|    scheme#*	25
o|contracted procedure: k306 
o|contracted procedure: k302 
o|contracted procedure: k472 
o|contracted procedure: k468 
o|contracted procedure: k464 
o|contracted procedure: k420 
o|contracted procedure: k460 
o|propagated global variable: w59 renderer-logic#fb-length 
o|contracted procedure: k456 
o|contracted procedure: k452 
o|contracted procedure: k448 
o|contracted procedure: k424 
o|contracted procedure: k444 
o|propagated global variable: w59 renderer-logic#fb-length 
o|contracted procedure: k440 
o|contracted procedure: k436 
o|contracted procedure: k432 
o|contracted procedure: k428 
o|contracted procedure: k312 
o|contracted procedure: k315 
o|contracted procedure: k318 
o|contracted procedure: k321 
o|contracted procedure: k402 
o|contracted procedure: k410 
o|contracted procedure: k406 
o|contracted procedure: k398 
o|contracted procedure: k394 
o|contracted procedure: k324 
o|contracted procedure: k362 
o|contracted procedure: k374 
o|contracted procedure: k382 
o|contracted procedure: k378 
o|contracted procedure: k370 
o|contracted procedure: k366 
o|contracted procedure: k327 
o|contracted procedure: k334 
o|contracted procedure: k346 
o|contracted procedure: k354 
o|contracted procedure: k350 
o|contracted procedure: k342 
o|contracted procedure: k338 
o|contracted procedure: k606 
o|contracted procedure: k569 
o|contracted procedure: k579 
o|contracted procedure: k602 
o|contracted procedure: k588 
o|contracted procedure: k598 
o|contracted procedure: k628 
o|contracted procedure: k659 
o|contracted procedure: k668 
o|contracted procedure: k695 
o|contracted procedure: k687 
o|contracted procedure: k672 
o|contracted procedure: k679 
o|contracted procedure: k683 
o|contracted procedure: k704 
o|contracted procedure: k731 
o|contracted procedure: k723 
o|contracted procedure: k708 
o|contracted procedure: k715 
o|contracted procedure: k719 
o|contracted procedure: k737 
o|contracted procedure: k740 
o|contracted procedure: k743 
o|contracted procedure: k819 
o|contracted procedure: k755 
o|contracted procedure: k765 
o|contracted procedure: k815 
o|contracted procedure: k774 
o|contracted procedure: k807 
o|contracted procedure: k811 
o|contracted procedure: k554 
o|contracted procedure: k550 
o|contracted procedure: k546 
o|contracted procedure: k482 
o|contracted procedure: k542 
o|contracted procedure: k538 
o|contracted procedure: k534 
o|contracted procedure: k530 
o|contracted procedure: k486 
o|contracted procedure: k526 
o|contracted procedure: k522 
o|contracted procedure: k518 
o|contracted procedure: k514 
o|contracted procedure: k490 
o|contracted procedure: k510 
o|contracted procedure: k506 
o|contracted procedure: k502 
o|contracted procedure: k498 
o|contracted procedure: k494 
o|contracted procedure: k777 
o|contracted procedure: k787 
o|contracted procedure: k791 
o|contracted procedure: k795 
o|contracted procedure: k799 
o|contracted procedure: k803 
o|simplifications: ((##core#call . 2) (let . 11)) 
o|  call simplifications:
o|    scheme#*	2
o|removed binding forms: 94 
o|contracted procedure: k826 
o|removed binding forms: 1 
o|customizable procedures: (va884 doloop120121 doloop117118 doloop9698 doloop97103 renderer-logic#set-pixel doloop7778 doloop7475 renderer-logic#x-y-to-index) 
o|calls to known targets: 18 
o|fast box initializations: 6 
o|fast global references: 14 
o|fast global assignments: 3 
o|dropping unused closure argument: f_296 
o|dropping unused closure argument: f_310 
*/
/* end of file */
