/* Generated from x11-backend.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.4.0 (rev 1a1d1495)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: x11-backend.scm -output-file x11-backend.c -unit x11-backend -emit-all-import-libraries
   unit: x11-backend
   uses: eval extras lolevel library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_externimport void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[56];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,23),40,120,49,49,45,98,97,99,107,101,110,100,35,99,108,111,115,101,45,97,112,112,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,19),40,102,101,116,99,104,45,101,118,101,110,116,115,45,108,111,111,112,41,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,12),40,101,118,101,110,116,45,108,111,111,112,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,7),40,118,97,52,55,48,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,6),40,97,50,51,54,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,40),40,120,49,49,45,98,97,99,107,101,110,100,35,99,114,101,97,116,101,45,119,105,110,100,111,119,32,119,105,100,116,104,32,104,101,105,103,116,104,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,34),40,120,49,49,45,98,97,99,107,101,110,100,35,120,108,105,98,45,107,101,121,45,117,112,45,112,114,101,115,115,101,100,63,41,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,36),40,120,49,49,45,98,97,99,107,101,110,100,35,120,108,105,98,45,107,101,121,45,100,111,119,110,45,112,114,101,115,115,101,100,63,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,36),40,120,49,49,45,98,97,99,107,101,110,100,35,120,108,105,98,45,107,101,121,45,108,101,102,116,45,112,114,101,115,115,101,100,63,41,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,37),40,120,49,49,45,98,97,99,107,101,110,100,35,120,108,105,98,45,107,101,121,45,114,105,103,104,116,45,112,114,101,115,115,101,100,63,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,28),40,120,49,49,45,98,97,99,107,101,110,100,35,105,115,45,97,112,112,45,99,108,111,115,101,100,63,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_197)
static void C_ccall f_197(C_word c,C_word *av) C_noret;
C_noret_decl(f_200)
static void C_ccall f_200(C_word c,C_word *av) C_noret;
C_noret_decl(f_203)
static void C_ccall f_203(C_word c,C_word *av) C_noret;
C_noret_decl(f_206)
static void C_ccall f_206(C_word c,C_word *av) C_noret;
C_noret_decl(f_209)
static void C_ccall f_209(C_word c,C_word *av) C_noret;
C_noret_decl(f_212)
static void C_ccall f_212(C_word c,C_word *av) C_noret;
C_noret_decl(f_215)
static void C_ccall f_215(C_word c,C_word *av) C_noret;
C_noret_decl(f_218)
static void C_ccall f_218(C_word c,C_word *av) C_noret;
C_noret_decl(f_224)
static void C_ccall f_224(C_word c,C_word *av) C_noret;
C_noret_decl(f_227)
static void C_ccall f_227(C_word c,C_word *av) C_noret;
C_noret_decl(f_231)
static void C_ccall f_231(C_word c,C_word *av) C_noret;
C_noret_decl(f_237)
static void C_ccall f_237(C_word c,C_word *av) C_noret;
C_noret_decl(f_242)
static void C_ccall f_242(C_word c,C_word *av) C_noret;
C_noret_decl(f_245)
static void C_ccall f_245(C_word c,C_word *av) C_noret;
C_noret_decl(f_248)
static void C_ccall f_248(C_word c,C_word *av) C_noret;
C_noret_decl(f_251)
static void C_ccall f_251(C_word c,C_word *av) C_noret;
C_noret_decl(f_254)
static void C_ccall f_254(C_word c,C_word *av) C_noret;
C_noret_decl(f_257)
static void C_ccall f_257(C_word c,C_word *av) C_noret;
C_noret_decl(f_260)
static void C_ccall f_260(C_word c,C_word *av) C_noret;
C_noret_decl(f_263)
static void C_ccall f_263(C_word c,C_word *av) C_noret;
C_noret_decl(f_267)
static void C_ccall f_267(C_word c,C_word *av) C_noret;
C_noret_decl(f_270)
static void C_ccall f_270(C_word c,C_word *av) C_noret;
C_noret_decl(f_275)
static void C_fcall f_275(C_word t0,C_word t1) C_noret;
C_noret_decl(f_285)
static void C_ccall f_285(C_word c,C_word *av) C_noret;
C_noret_decl(f_288)
static void C_ccall f_288(C_word c,C_word *av) C_noret;
C_noret_decl(f_291)
static void C_ccall f_291(C_word c,C_word *av) C_noret;
C_noret_decl(f_294)
static void C_ccall f_294(C_word c,C_word *av) C_noret;
C_noret_decl(f_302)
static void C_fcall f_302(C_word t0,C_word t1) C_noret;
C_noret_decl(f_312)
static void C_ccall f_312(C_word c,C_word *av) C_noret;
C_noret_decl(f_315)
static void C_fcall f_315(C_word t0,C_word t1) C_noret;
C_noret_decl(f_335)
static void C_ccall f_335(C_word c,C_word *av) C_noret;
C_noret_decl(f_348)
static void C_ccall f_348(C_word c,C_word *av) C_noret;
C_noret_decl(f_352)
static void C_ccall f_352(C_word c,C_word *av) C_noret;
C_noret_decl(f_356)
static void C_ccall f_356(C_word c,C_word *av) C_noret;
C_noret_decl(f_360)
static void C_ccall f_360(C_word c,C_word *av) C_noret;
C_noret_decl(f_364)
static void C_ccall f_364(C_word c,C_word *av) C_noret;
C_noret_decl(f_375)
static void C_ccall f_375(C_word c,C_word *av) C_noret;
C_noret_decl(f_379)
static void C_ccall f_379(C_word c,C_word *av) C_noret;
C_noret_decl(f_383)
static void C_ccall f_383(C_word c,C_word *av) C_noret;
C_noret_decl(f_387)
static void C_ccall f_387(C_word c,C_word *av) C_noret;
C_noret_decl(f_391)
static void C_ccall f_391(C_word c,C_word *av) C_noret;
C_noret_decl(f_395)
static void C_ccall f_395(C_word c,C_word *av) C_noret;
C_noret_decl(f_397)
static void C_ccall f_397(C_word c,C_word *av) C_noret;
C_noret_decl(f_409)
static void C_ccall f_409(C_word c,C_word *av) C_noret;
C_noret_decl(f_411)
static void C_ccall f_411(C_word c,C_word *av) C_noret;
C_noret_decl(f_423)
static void C_ccall f_423(C_word c,C_word *av) C_noret;
C_noret_decl(f_425)
static void C_ccall f_425(C_word c,C_word *av) C_noret;
C_noret_decl(f_437)
static void C_ccall f_437(C_word c,C_word *av) C_noret;
C_noret_decl(f_439)
static void C_ccall f_439(C_word c,C_word *av) C_noret;
C_noret_decl(f_451)
static void C_ccall f_451(C_word c,C_word *av) C_noret;
C_noret_decl(f_453)
static void C_ccall f_453(C_word c,C_word *av) C_noret;
C_noret_decl(C_x11_2dbackend_toplevel)
C_externexport void C_ccall C_x11_2dbackend_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(va470)
static void C_fcall va470(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_275)
static void C_ccall trf_275(C_word c,C_word *av) C_noret;
static void C_ccall trf_275(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_275(t0,t1);}

C_noret_decl(trf_302)
static void C_ccall trf_302(C_word c,C_word *av) C_noret;
static void C_ccall trf_302(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_302(t0,t1);}

C_noret_decl(trf_315)
static void C_ccall trf_315(C_word c,C_word *av) C_noret;
static void C_ccall trf_315(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_315(t0,t1);}

C_noret_decl(trva470)
static void C_ccall trva470(C_word c,C_word *av) C_noret;
static void C_ccall trva470(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va470(t0,t1);}

/* k195 */
static void C_ccall f_197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_197,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_200,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k198 in k195 */
static void C_ccall f_200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_200,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_203,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("x11-backend.scm:2: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t4;
av2[2]=lf[55];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k201 in k198 in k195 */
static void C_ccall f_203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_203,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_206,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lolevel_toplevel(2,av2);}}

/* k204 in k201 in k198 in k195 */
static void C_ccall f_206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_206,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_209,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_209,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_212,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("x11-backend.scm:2: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t2;
av2[2]=lf[53];
av2[3]=lf[54];
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_212,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_215,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("x11-backend.scm:2: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t2;
av2[2]=lf[52];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_215,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_218,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("x11-backend.scm:2: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t2;
av2[2]=lf[51];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_218,c,av);}
a=C_alloc(3);
t2=C_set_block_item(lf[2] /* x11-backend#should-close */,0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[3] /* x11-backend#xlib-display */,0,C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_224,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("x11-backend.scm:15: scheme#make-vector"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[49]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=C_fix(256);
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_224(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_224,c,av);}
a=C_alloc(21);
t2=C_mutate((C_word*)lf[4]+1 /* (set! x11-backend#keyboard-state ...) */,t1);
t3=C_set_block_item(lf[5] /* x11-backend#is-mapped */,0,C_SCHEME_FALSE);
t4=C_mutate((C_word*)lf[6]+1 /* (set! x11-backend#close-app ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_227,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[7]+1 /* (set! x11-backend#create-window ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_231,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[39]+1 /* (set! x11-backend#xlib-key-up-pressed? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_397,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[42]+1 /* (set! x11-backend#xlib-key-down-pressed? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_411,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[44]+1 /* (set! x11-backend#xlib-key-left-pressed? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_425,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[46]+1 /* (set! x11-backend#xlib-key-right-pressed? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_439,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[48]+1 /* (set! x11-backend#is-app-closed? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_453,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t11=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* x11-backend#close-app in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_227,c,av);}
t2=C_set_block_item(lf[2] /* x11-backend#should-close */,0,C_SCHEME_TRUE);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_231,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_237,a[2]=t2,a[3]=t3,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("x11-backend.scm:22: srfi-18#thread-start!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2=av;
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t1;
av2[2]=t4;
tp(3,av2);}}

/* a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_237,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_242,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("x11-backend.scm:23: xlib#xopendisplay"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
tp(3,av2);}}

/* k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_242,c,av);}
a=C_alloc(8);
t2=C_mutate((C_word*)lf[3]+1 /* (set! x11-backend#xlib-display ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_395,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("x11-backend.scm:24: xlib#xdefaultscreen"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t4;
av2[2]=C_fast_retrieve(lf[3]);
tp(3,av2);}}

/* k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_245,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_248,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_391,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("x11-backend.scm:25: xlib#xdefaultscreen"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t3;
av2[2]=C_fast_retrieve(lf[3]);
tp(3,av2);}}

/* k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_248,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_251,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_387,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("x11-backend.scm:26: xlib#xdefaultrootwindow"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=C_fast_retrieve(lf[3]);
tp(3,av2);}}

/* k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_251,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_254,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("x11-backend.scm:27: xlib#xcreategc"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[32]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=t1;
av2[4]=C_fix(0);
av2[5]=C_SCHEME_FALSE;
tp(6,av2);}}

/* k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_254,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_257,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("x11-backend.scm:28: xlib#make-xevent"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2=av;
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t2;
tp(2,av2);}}

/* k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_257,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_260,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_375,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_383,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("x11-backend.scm:31: xlib#xdefaultscreen"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t4;
av2[2]=C_fast_retrieve(lf[3]);
tp(3,av2);}}

/* k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_260,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("x11-backend.scm:41: xlib#xsetforeground"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[25]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[8];
tp(5,av2);}}

/* k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_263(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_263,c,av);}
a=C_alloc(19);
t2=C_set_block_item(lf[2] /* x11-backend#should-close */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)va470,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp);
t5=t4;
va470(t5,C_s_a_i_bitwise_ior(&a,2,C_fast_retrieve(lf[23]),C_fast_retrieve(lf[24])));}

/* k265 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_267,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("x11-backend.scm:44: xlib#xmapwindow"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[20]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* k268 in k265 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_270,c,av);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_275,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li2),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_275(t5,((C_word*)t0)[8]);}

/* event-loop in k268 in k265 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in ... */
static void C_fcall f_275(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,2)))){
C_save_and_reclaim_args((void *)trf_275,2,t0,t1);}
a=C_alloc(16);
if(C_truep(C_i_not(C_fast_retrieve(lf[2])))){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_285,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_302,a[2]=t4,a[3]=((C_word*)t0)[8],a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_302(t6,t2);}
else{
C_trace(C_text("x11-backend.scm:82: xlib#xclosedisplay"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word av2[3];
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t1;
av2[2]=C_fast_retrieve(lf[3]);
tp(3,av2);}}}

/* k283 in event-loop in k268 in k265 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in ... */
static void C_ccall f_285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,11)))){
C_save_and_reclaim((void *)f_285,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fast_retrieve(lf[5]))){
C_trace(C_text("x11-backend.scm:67: xlib#xputimage"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[10]);
C_word *av2;
if(c >= 12) {
  av2=av;
} else {
  av2=C_alloc(12);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
av2[6]=C_fix(0);
av2[7]=C_fix(0);
av2[8]=C_fix(0);
av2[9]=C_fix(0);
av2[10]=((C_word*)t0)[7];
av2[11]=((C_word*)t0)[8];
tp(12,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_288(2,av2);}}}

/* k286 in k283 in event-loop in k268 in k265 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in ... */
static void C_ccall f_288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_288,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_291,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("x11-backend.scm:77: xlib#xsync"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=C_fix(0);
tp(4,av2);}}

/* k289 in k286 in k283 in event-loop in k268 in k265 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in ... */
static void C_ccall f_291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_291,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("x11-backend.scm:78: srfi-18#thread-yield!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word *av2=av;
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t2;
tp(2,av2);}}

/* k292 in k289 in k286 in k283 in event-loop in k268 in k265 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in ... */
static void C_ccall f_294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_294,c,av);}
C_trace(C_text("x11-backend.scm:79: event-loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_275(t2,((C_word*)t0)[3]);}

/* fetch-events-loop in event-loop in k268 in k265 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in ... */
static void C_fcall f_302(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_302,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_364,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("x11-backend.scm:51: xlib#xpending"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[18]);
C_word av2[3];
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[3]);
tp(3,av2);}}

/* k310 in k362 in fetch-events-loop in event-loop in k268 in k265 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in ... */
static void C_ccall f_312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_312,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_360,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("x11-backend.scm:54: xlib#xanyevent-type"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k313 in k310 in k362 in fetch-events-loop in event-loop in k268 in k265 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in ... */
static void C_fcall f_315(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_315,2,t0,t1);}
C_trace(C_text("x11-backend.scm:62: fetch-events-loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_302(t2,((C_word*)t0)[3]);}

/* k333 in k354 in k358 in k310 in k362 in fetch-events-loop in event-loop in k268 in k265 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in ... */
static void C_ccall f_335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_335,c,av);}
t2=((C_word*)t0)[2];
f_315(t2,C_i_vector_set(C_fast_retrieve(lf[4]),t1,C_SCHEME_TRUE));}

/* k346 in k350 in k354 in k358 in k310 in k362 in fetch-events-loop in event-loop in k268 in k265 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in ... */
static void C_ccall f_348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_348,c,av);}
t2=((C_word*)t0)[2];
f_315(t2,C_i_vector_set(C_fast_retrieve(lf[4]),t1,C_SCHEME_FALSE));}

/* k350 in k354 in k358 in k310 in k362 in fetch-events-loop in event-loop in k268 in k265 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in ... */
static void C_ccall f_352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_352,c,av);}
a=C_alloc(3);
if(C_truep(C_i_nequalp(t1,C_fast_retrieve(lf[14])))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_348,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("x11-backend.scm:59: xlib#xkeyreleasedevent-keycode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=((C_word*)t0)[2];
f_315(t2,C_SCHEME_UNDEFINED);}}

/* k354 in k358 in k310 in k362 in fetch-events-loop in event-loop in k268 in k265 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in ... */
static void C_ccall f_356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_356,c,av);}
a=C_alloc(4);
if(C_truep(C_i_nequalp(t1,C_fast_retrieve(lf[12])))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_335,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("x11-backend.scm:57: xlib#xkeypressedevent-keycode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("x11-backend.scm:58: xlib#xanyevent-type"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}}

/* k358 in k310 in k362 in fetch-events-loop in event-loop in k268 in k265 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in ... */
static void C_ccall f_360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_360,c,av);}
a=C_alloc(4);
if(C_truep(C_i_nequalp(t1,C_fast_retrieve(lf[11])))){
t2=C_set_block_item(lf[5] /* x11-backend#is-mapped */,0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
f_315(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("x11-backend.scm:56: xlib#xanyevent-type"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}}

/* k362 in fetch-events-loop in event-loop in k268 in k265 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in ... */
static void C_ccall f_364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_364,c,av);}
a=C_alloc(5);
if(C_truep(C_i_greaterp(t1,C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("x11-backend.scm:52: xlib#xnextevent"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[17]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k373 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_375,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_379,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("x11-backend.scm:35: renderer-logic#return-fb-locative"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t2;
tp(2,av2);}}

/* k377 in k373 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,11)))){
C_save_and_reclaim((void *)f_379,c,av);}
C_trace(C_text("x11-backend.scm:29: xlib#xcreateimage"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[26]);
C_word *av2;
if(c >= 12) {
  av2=av;
} else {
  av2=C_alloc(12);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=((C_word*)t0)[3];
av2[4]=C_fix(24);
av2[5]=C_fast_retrieve(lf[27]);
av2[6]=C_fix(0);
av2[7]=t1;
av2[8]=((C_word*)t0)[4];
av2[9]=((C_word*)t0)[5];
av2[10]=C_fix(32);
av2[11]=C_fix(0);
tp(12,av2);}}

/* k381 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_383,c,av);}
C_trace(C_text("x11-backend.scm:31: xlib#xdefaultvisual"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=t1;
tp(4,av2);}}

/* k385 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,10)))){
C_save_and_reclaim((void *)f_387,c,av);}
C_trace(C_text("x11-backend.scm:26: xlib#xcreatesimplewindow"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 11) {
  av2=av;
} else {
  av2=C_alloc(11);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=t1;
av2[4]=C_fix(0);
av2[5]=C_fix(0);
av2[6]=((C_word*)t0)[3];
av2[7]=((C_word*)t0)[4];
av2[8]=C_fix(0);
av2[9]=((C_word*)t0)[5];
av2[10]=((C_word*)t0)[6];
tp(11,av2);}}

/* k389 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_391,c,av);}
C_trace(C_text("x11-backend.scm:25: xlib#xwhitepixel"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=t1;
tp(4,av2);}}

/* k393 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_395,c,av);}
C_trace(C_text("x11-backend.scm:24: xlib#xblackpixel"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=t1;
tp(4,av2);}}

/* x11-backend#xlib-key-up-pressed? in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_397,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_409,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("x11-backend.scm:89: xlib#xkeysymtokeycode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=C_fast_retrieve(lf[41]);
tp(4,av2);}}

/* k407 in x11-backend#xlib-key-up-pressed? in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_409,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_vector_ref(C_fast_retrieve(lf[4]),C_fix(C_character_code(t1)));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* x11-backend#xlib-key-down-pressed? in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_411,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_423,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("x11-backend.scm:93: xlib#xkeysymtokeycode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=C_fast_retrieve(lf[43]);
tp(4,av2);}}

/* k421 in x11-backend#xlib-key-down-pressed? in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_423,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_vector_ref(C_fast_retrieve(lf[4]),C_fix(C_character_code(t1)));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* x11-backend#xlib-key-left-pressed? in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_425,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_437,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("x11-backend.scm:97: xlib#xkeysymtokeycode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=C_fast_retrieve(lf[45]);
tp(4,av2);}}

/* k435 in x11-backend#xlib-key-left-pressed? in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_437,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_vector_ref(C_fast_retrieve(lf[4]),C_fix(C_character_code(t1)));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* x11-backend#xlib-key-right-pressed? in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_439,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_451,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("x11-backend.scm:101: xlib#xkeysymtokeycode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=C_fast_retrieve(lf[47]);
tp(4,av2);}}

/* k449 in x11-backend#xlib-key-right-pressed? in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_451,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_vector_ref(C_fast_retrieve(lf[4]),C_fix(C_character_code(t1)));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* x11-backend#is-app-closed? in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_453,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fast_retrieve(lf[2]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_x11_2dbackend_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("x11-backend"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_x11_2dbackend_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(392))){
C_save(t1);
C_rereclaim2(392*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,56);
lf[0]=C_h_intern(&lf[0],11, C_text("x11-backend"));
lf[1]=C_h_intern(&lf[1],12, C_text("x11-backend#"));
lf[2]=C_h_intern(&lf[2],24, C_text("x11-backend#should-close"));
lf[3]=C_h_intern(&lf[3],24, C_text("x11-backend#xlib-display"));
lf[4]=C_h_intern(&lf[4],26, C_text("x11-backend#keyboard-state"));
lf[5]=C_h_intern(&lf[5],21, C_text("x11-backend#is-mapped"));
lf[6]=C_h_intern(&lf[6],21, C_text("x11-backend#close-app"));
lf[7]=C_h_intern(&lf[7],25, C_text("x11-backend#create-window"));
lf[8]=C_h_intern(&lf[8],21, C_text("srfi-18#thread-yield!"));
lf[9]=C_h_intern(&lf[9],10, C_text("xlib#xsync"));
lf[10]=C_h_intern(&lf[10],14, C_text("xlib#xputimage"));
lf[11]=C_h_intern(&lf[11],14, C_text("xlib#MAPNOTIFY"));
lf[12]=C_h_intern(&lf[12],13, C_text("xlib#KEYPRESS"));
lf[13]=C_h_intern(&lf[13],29, C_text("xlib#xkeypressedevent-keycode"));
lf[14]=C_h_intern(&lf[14],15, C_text("xlib#KEYRELEASE"));
lf[15]=C_h_intern(&lf[15],30, C_text("xlib#xkeyreleasedevent-keycode"));
lf[16]=C_h_intern(&lf[16],19, C_text("xlib#xanyevent-type"));
lf[17]=C_h_intern(&lf[17],15, C_text("xlib#xnextevent"));
lf[18]=C_h_intern(&lf[18],13, C_text("xlib#xpending"));
lf[19]=C_h_intern(&lf[19],18, C_text("xlib#xclosedisplay"));
lf[20]=C_h_intern(&lf[20],15, C_text("xlib#xmapwindow"));
lf[21]=C_h_intern(&lf[21],19, C_text("xlib#KEYRELEASEMASK"));
lf[22]=C_h_intern(&lf[22],17, C_text("xlib#xselectinput"));
lf[23]=C_h_intern(&lf[23],24, C_text("xlib#STRUCTURENOTIFYMASK"));
lf[24]=C_h_intern(&lf[24],17, C_text("xlib#KEYPRESSMASK"));
lf[25]=C_h_intern(&lf[25],19, C_text("xlib#xsetforeground"));
lf[26]=C_h_intern(&lf[26],17, C_text("xlib#xcreateimage"));
lf[27]=C_h_intern(&lf[27],12, C_text("xlib#ZPIXMAP"));
lf[28]=C_h_intern(&lf[28],33, C_text("renderer-logic#return-fb-locative"));
lf[29]=C_h_intern(&lf[29],19, C_text("xlib#xdefaultvisual"));
lf[30]=C_h_intern(&lf[30],19, C_text("xlib#xdefaultscreen"));
lf[31]=C_h_intern(&lf[31],16, C_text("xlib#make-xevent"));
lf[32]=C_h_intern(&lf[32],14, C_text("xlib#xcreategc"));
lf[33]=C_h_intern(&lf[33],24, C_text("xlib#xcreatesimplewindow"));
lf[34]=C_h_intern(&lf[34],23, C_text("xlib#xdefaultrootwindow"));
lf[35]=C_h_intern(&lf[35],16, C_text("xlib#xwhitepixel"));
lf[36]=C_h_intern(&lf[36],16, C_text("xlib#xblackpixel"));
lf[37]=C_h_intern(&lf[37],17, C_text("xlib#xopendisplay"));
lf[38]=C_h_intern(&lf[38],21, C_text("srfi-18#thread-start!"));
lf[39]=C_h_intern(&lf[39],32, C_text("x11-backend#xlib-key-up-pressed\077"));
lf[40]=C_h_intern(&lf[40],21, C_text("xlib#xkeysymtokeycode"));
lf[41]=C_h_intern(&lf[41],10, C_text("xlib#XK_UP"));
lf[42]=C_h_intern(&lf[42],34, C_text("x11-backend#xlib-key-down-pressed\077"));
lf[43]=C_h_intern(&lf[43],12, C_text("xlib#XK_DOWN"));
lf[44]=C_h_intern(&lf[44],34, C_text("x11-backend#xlib-key-left-pressed\077"));
lf[45]=C_h_intern(&lf[45],12, C_text("xlib#XK_LEFT"));
lf[46]=C_h_intern(&lf[46],35, C_text("x11-backend#xlib-key-right-pressed\077"));
lf[47]=C_h_intern(&lf[47],13, C_text("xlib#XK_RIGHT"));
lf[48]=C_h_intern(&lf[48],26, C_text("x11-backend#is-app-closed\077"));
lf[49]=C_h_intern(&lf[49],18, C_text("scheme#make-vector"));
lf[50]=C_h_intern(&lf[50],27, C_text("chicken.load#load-extension"));
lf[51]=C_h_intern(&lf[51],4, C_text("xlib"));
lf[52]=C_h_intern(&lf[52],7, C_text("srfi-18"));
lf[53]=C_h_intern(&lf[53],8, C_text("renderer"));
lf[54]=C_h_intern(&lf[54],14, C_text("renderer-logic"));
lf[55]=C_h_intern(&lf[55],11, C_text("srfi.160.u8"));
C_register_lf2(lf,56,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_197,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* va470 in k261 in k258 in k255 in k252 in k249 in k246 in k243 in k240 in a236 in x11-backend#create-window in k222 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_fcall va470(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trva470,2,t0,t1);}
a=C_alloc(5);
t2=C_s_a_i_bitwise_ior(&a,2,t1,C_fast_retrieve(lf[21]));
C_trace(C_text("x11-backend.scm:43: xlib#xselectinput"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word av2[5];
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=((C_word*)t0)[3];
av2[4]=t2;
tp(5,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[54] = {
{C_text("f_197:x11_2dbackend_2escm"),(void*)f_197},
{C_text("f_200:x11_2dbackend_2escm"),(void*)f_200},
{C_text("f_203:x11_2dbackend_2escm"),(void*)f_203},
{C_text("f_206:x11_2dbackend_2escm"),(void*)f_206},
{C_text("f_209:x11_2dbackend_2escm"),(void*)f_209},
{C_text("f_212:x11_2dbackend_2escm"),(void*)f_212},
{C_text("f_215:x11_2dbackend_2escm"),(void*)f_215},
{C_text("f_218:x11_2dbackend_2escm"),(void*)f_218},
{C_text("f_224:x11_2dbackend_2escm"),(void*)f_224},
{C_text("f_227:x11_2dbackend_2escm"),(void*)f_227},
{C_text("f_231:x11_2dbackend_2escm"),(void*)f_231},
{C_text("f_237:x11_2dbackend_2escm"),(void*)f_237},
{C_text("f_242:x11_2dbackend_2escm"),(void*)f_242},
{C_text("f_245:x11_2dbackend_2escm"),(void*)f_245},
{C_text("f_248:x11_2dbackend_2escm"),(void*)f_248},
{C_text("f_251:x11_2dbackend_2escm"),(void*)f_251},
{C_text("f_254:x11_2dbackend_2escm"),(void*)f_254},
{C_text("f_257:x11_2dbackend_2escm"),(void*)f_257},
{C_text("f_260:x11_2dbackend_2escm"),(void*)f_260},
{C_text("f_263:x11_2dbackend_2escm"),(void*)f_263},
{C_text("f_267:x11_2dbackend_2escm"),(void*)f_267},
{C_text("f_270:x11_2dbackend_2escm"),(void*)f_270},
{C_text("f_275:x11_2dbackend_2escm"),(void*)f_275},
{C_text("f_285:x11_2dbackend_2escm"),(void*)f_285},
{C_text("f_288:x11_2dbackend_2escm"),(void*)f_288},
{C_text("f_291:x11_2dbackend_2escm"),(void*)f_291},
{C_text("f_294:x11_2dbackend_2escm"),(void*)f_294},
{C_text("f_302:x11_2dbackend_2escm"),(void*)f_302},
{C_text("f_312:x11_2dbackend_2escm"),(void*)f_312},
{C_text("f_315:x11_2dbackend_2escm"),(void*)f_315},
{C_text("f_335:x11_2dbackend_2escm"),(void*)f_335},
{C_text("f_348:x11_2dbackend_2escm"),(void*)f_348},
{C_text("f_352:x11_2dbackend_2escm"),(void*)f_352},
{C_text("f_356:x11_2dbackend_2escm"),(void*)f_356},
{C_text("f_360:x11_2dbackend_2escm"),(void*)f_360},
{C_text("f_364:x11_2dbackend_2escm"),(void*)f_364},
{C_text("f_375:x11_2dbackend_2escm"),(void*)f_375},
{C_text("f_379:x11_2dbackend_2escm"),(void*)f_379},
{C_text("f_383:x11_2dbackend_2escm"),(void*)f_383},
{C_text("f_387:x11_2dbackend_2escm"),(void*)f_387},
{C_text("f_391:x11_2dbackend_2escm"),(void*)f_391},
{C_text("f_395:x11_2dbackend_2escm"),(void*)f_395},
{C_text("f_397:x11_2dbackend_2escm"),(void*)f_397},
{C_text("f_409:x11_2dbackend_2escm"),(void*)f_409},
{C_text("f_411:x11_2dbackend_2escm"),(void*)f_411},
{C_text("f_423:x11_2dbackend_2escm"),(void*)f_423},
{C_text("f_425:x11_2dbackend_2escm"),(void*)f_425},
{C_text("f_437:x11_2dbackend_2escm"),(void*)f_437},
{C_text("f_439:x11_2dbackend_2escm"),(void*)f_439},
{C_text("f_451:x11_2dbackend_2escm"),(void*)f_451},
{C_text("f_453:x11_2dbackend_2escm"),(void*)f_453},
{C_text("toplevel:x11_2dbackend_2escm"),(void*)C_x11_2dbackend_toplevel},
{C_text("va470:x11_2dbackend_2escm"),(void*)va470},
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
(o e)|assignments to immediate values: 1 
o|replaced variables: 57 
o|removed binding forms: 36 
o|removed binding forms: 43 
o|simplifications: ((##core#call . 16)) 
o|  call simplifications:
o|    scheme#char->integer	4
o|    scheme#vector-ref	4
o|    chicken.bitwise#bitwise-ior
o|    scheme#not
o|    scheme#>
o|    scheme#=	3
o|    scheme#vector-set!	2
o|contracted procedure: k280 
o|contracted procedure: k307 
o|contracted procedure: k319 
o|contracted procedure: k326 
o|contracted procedure: k339 
o|contracted procedure: k403 
o|contracted procedure: k417 
o|contracted procedure: k431 
o|contracted procedure: k445 
o|simplifications: ((##core#call . 2) (let . 9)) 
o|  call simplifications:
o|    chicken.bitwise#bitwise-ior	2
o|removed binding forms: 9 
o|contracted procedure: k369 
o|removed binding forms: 1 
o|customizable procedures: (va470 k313 fetch-events-loop46 event-loop45) 
o|calls to known targets: 10 
o|fast box initializations: 2 
*/
/* end of file */
