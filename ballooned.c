/* Generated from main.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.4.0 (rev 1a1d1495)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: main.scm -output-file ballooned.c -optimize-level 3 -uses renderer,x11-backend,interface
   uses: x11-backend eval library interface renderer file posix srfi-4 extras
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_x11_2dbackend_toplevel)
C_externimport void C_ccall C_x11_2dbackend_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_interface_toplevel)
C_externimport void C_ccall C_interface_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_renderer_toplevel)
C_externimport void C_ccall C_renderer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_externimport void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_externimport void C_ccall C_srfi_2d4_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[22];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,17),40,100,114,97,119,45,108,111,111,112,32,99,111,108,111,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,6),40,97,50,51,49,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,14),40,117,112,100,97,116,101,45,105,109,97,103,101,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_191)
static void C_ccall f_191(C_word c,C_word *av) C_noret;
C_noret_decl(f_194)
static void C_ccall f_194(C_word c,C_word *av) C_noret;
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
C_noret_decl(f_221)
static void C_ccall f_221(C_word c,C_word *av) C_noret;
C_noret_decl(f_224)
static void C_ccall f_224(C_word c,C_word *av) C_noret;
C_noret_decl(f_226)
static void C_ccall f_226(C_word c,C_word *av) C_noret;
C_noret_decl(f_232)
static void C_ccall f_232(C_word c,C_word *av) C_noret;
C_noret_decl(f_236)
static void C_ccall f_236(C_word c,C_word *av) C_noret;
C_noret_decl(f_239)
static void C_ccall f_239(C_word c,C_word *av) C_noret;
C_noret_decl(f_242)
static void C_ccall f_242(C_word c,C_word *av) C_noret;
C_noret_decl(f_245)
static void C_ccall f_245(C_word c,C_word *av) C_noret;
C_noret_decl(f_248)
static void C_ccall f_248(C_word c,C_word *av) C_noret;
C_noret_decl(f_253)
static void C_fcall f_253(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_263)
static void C_fcall f_263(C_word t0,C_word t1) C_noret;
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
C_noret_decl(f_292)
static void C_ccall f_292(C_word c,C_word *av) C_noret;
C_noret_decl(f_296)
static void C_ccall f_296(C_word c,C_word *av) C_noret;
C_noret_decl(f_304)
static void C_ccall f_304(C_word c,C_word *av) C_noret;
C_noret_decl(f_307)
static void C_ccall f_307(C_word c,C_word *av) C_noret;
C_noret_decl(f_310)
static void C_ccall f_310(C_word c,C_word *av) C_noret;
C_noret_decl(f_316)
static void C_ccall f_316(C_word c,C_word *av) C_noret;
C_noret_decl(f_318)
static void C_fcall f_318(C_word t0,C_word t1) C_noret;
C_noret_decl(f_322)
static void C_ccall f_322(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_253)
static void C_ccall trf_253(C_word c,C_word *av) C_noret;
static void C_ccall trf_253(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_253(t0,t1,t2);}

C_noret_decl(trf_263)
static void C_ccall trf_263(C_word c,C_word *av) C_noret;
static void C_ccall trf_263(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_263(t0,t1);}

C_noret_decl(trf_318)
static void C_ccall trf_318(C_word c,C_word *av) C_noret;
static void C_ccall trf_318(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_318(t0,t1);}

/* k189 */
static void C_ccall f_191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_191,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_194,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k192 in k189 */
static void C_ccall f_194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_194,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_197,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_renderer_toplevel(2,av2);}}

/* k195 in k192 in k189 */
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
C_x11_2dbackend_toplevel(2,av2);}}

/* k198 in k195 in k192 in k189 */
static void C_ccall f_200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_200,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_203,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_interface_toplevel(2,av2);}}

/* k201 in k198 in k195 in k192 in k189 */
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
C_extras_toplevel(2,av2);}}

/* k204 in k201 in k198 in k195 in k192 in k189 */
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
C_srfi_2d4_toplevel(2,av2);}}

/* k207 in k204 in k201 in k198 in k195 in k192 in k189 */
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
C_trace(C_text("main.scm:1: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[18]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t2;
av2[2]=lf[21];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_212,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_215,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_215,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_218,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_218,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_221,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:1: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[18]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t2;
av2[2]=lf[20];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_221,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_224,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:1: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[18]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t2;
av2[2]=lf[19];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_224,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[0]+1 /* (set! update-image ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_226,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_307,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:39: update-image"));
t4=C_fast_retrieve(lf[0]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_226(2,av2);}}

/* update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_226,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_232,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:16: srfi-18#thread-start!"));
t3=C_fast_retrieve(lf[16]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_232,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_236,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:17: srfi-18#thread-sleep!"));
t3=C_fast_retrieve(lf[15]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k234 in a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_236,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_239,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:18: renderer-logic#init-fb"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t2;
av2[2]=C_fix(512);
av2[3]=C_fix(512);
av2[4]=C_fix(8);
tp(5,av2);}}

/* k237 in k234 in a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_239,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_242,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:19: renderer-logic#reset-fb"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k240 in k237 in k234 in a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_242,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_245,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:20: interface#create-app-window"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t2;
av2[2]=C_fix(512);
av2[3]=C_fix(512);
tp(4,av2);}}

/* k243 in k240 in k237 in k234 in a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_245,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_248,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:21: renderer-logic#load-image"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t2;
av2[2]=lf[12];
tp(3,av2);}}

/* k246 in k243 in k240 in k237 in k234 in a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_248,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_253,a[2]=t3,a[3]=t1,a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_253(t5,((C_word*)t0)[2],C_fix(245));}

/* draw-loop in k246 in k243 in k240 in k237 in k234 in a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_fcall f_253(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_253,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_304,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("main.scm:23: interface#should-close-app-window?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[10]);
C_word av2[2];
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t4;
tp(2,av2);}}

/* k261 in k302 in draw-loop in k246 in k243 in k240 in k237 in k234 in a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 in ... */
static void C_fcall f_263(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_263,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_266,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("main.scm:26: renderer-logic#reset-fb"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word av2[2];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k264 in k261 in k302 in draw-loop in k246 in k243 in k240 in k237 in k234 in a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in ... */
static void C_ccall f_266(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_266,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_269,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_292,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_296,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:27: scheme#round"));
t5=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k267 in k264 in k261 in k302 in draw-loop in k246 in k243 in k240 in k237 in k234 in a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in ... */
static void C_ccall f_269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_269,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_272,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("main.scm:28: renderer-logic#draw-image"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=C_fix(0);
tp(5,av2);}}

/* k270 in k267 in k264 in k261 in k302 in draw-loop in k246 in k243 in k240 in k237 in k234 in a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in ... */
static void C_ccall f_272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_272,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_275,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("main.scm:29: renderer-logic#upscale-fb"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[4]);
C_word *av2=av;
av2[0]=*((C_word*)lf[4]+1);
av2[1]=t2;
tp(2,av2);}}

/* k273 in k270 in k267 in k264 in k261 in k302 in draw-loop in k246 in k243 in k240 in k237 in k234 in a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in ... */
static void C_ccall f_275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_275,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_278,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("main.scm:30: renderer-logic#sync-fb-to-x11-memory"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
tp(2,av2);}}

/* k276 in k273 in k270 in k267 in k264 in k261 in k302 in draw-loop in k246 in k243 in k240 in k237 in k234 in a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in ... */
static void C_ccall f_278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_278,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_281,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("main.scm:31: srfi-18#thread-yield!"));
t3=C_fast_retrieve(lf[2]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k279 in k276 in k273 in k270 in k267 in k264 in k261 in k302 in draw-loop in k246 in k243 in k240 in k237 in k234 in a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in ... */
static void C_ccall f_281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_281,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,lf[1],((C_word*)((C_word*)t0)[2])[1]);
C_trace(C_text("main.scm:32: draw-loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_253(t3,((C_word*)t0)[4],t2);}

/* k290 in k264 in k261 in k302 in draw-loop in k246 in k243 in k240 in k237 in k234 in a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in ... */
static void C_ccall f_292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,9)))){
C_save_and_reclaim((void *)f_292,c,av);}
C_trace(C_text("main.scm:27: renderer-logic#draw-rectangle"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 10) {
  av2=av;
} else {
  av2=C_alloc(10);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
av2[3]=C_fix(0);
av2[4]=C_fix(32);
av2[5]=C_fix(32);
av2[6]=t1;
av2[7]=C_fix(0);
av2[8]=C_fix(0);
av2[9]=C_fix(255);
tp(10,av2);}}

/* k294 in k264 in k261 in k302 in draw-loop in k246 in k243 in k240 in k237 in k234 in a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in ... */
static void C_ccall f_296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_296,c,av);}
C_trace(C_text("main.scm:27: scheme#inexact->exact"));
t2=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k302 in draw-loop in k246 in k243 in k240 in k237 in k234 in a231 in update-image in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_304,c,av);}
a=C_alloc(6);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nequalp(((C_word*)((C_word*)t0)[2])[1],C_fix(255)))){
t3=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t4=t2;
f_263(t4,t3);}
else{
t3=t2;
f_263(t3,C_SCHEME_UNDEFINED);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k305 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_307(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_307,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_310,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_318,a[2]=t4,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_318(t6,t2);}

/* k308 in k305 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_310,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_316,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
t3=C_fast_retrieve(lf[17]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k314 in k308 in k305 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_316,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k305 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_fcall f_318(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_318,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_322,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("main.scm:42: srfi-18#thread-sleep!"));
t3=C_fast_retrieve(lf[15]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k320 in loop in k305 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in k192 in k189 */
static void C_ccall f_322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_322,c,av);}
C_trace(C_text("main.scm:43: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_318(t2,((C_word*)t0)[3]);}

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
if(C_unlikely(!C_demand_2(144))){
C_save(t1);
C_rereclaim2(144*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,22);
lf[0]=C_h_intern(&lf[0],12, C_text("update-image"));
lf[1]=C_decode_literal(C_heaptop,C_text("\376U0.5\000"));
lf[2]=C_h_intern(&lf[2],21, C_text("srfi-18#thread-yield!"));
lf[3]=C_h_intern(&lf[3],36, C_text("renderer-logic#sync-fb-to-x11-memory"));
lf[4]=C_h_intern(&lf[4],25, C_text("renderer-logic#upscale-fb"));
lf[5]=C_h_intern(&lf[5],25, C_text("renderer-logic#draw-image"));
lf[6]=C_h_intern(&lf[6],29, C_text("renderer-logic#draw-rectangle"));
lf[7]=C_h_intern(&lf[7],21, C_text("scheme#inexact->exact"));
lf[8]=C_h_intern(&lf[8],12, C_text("scheme#round"));
lf[9]=C_h_intern(&lf[9],23, C_text("renderer-logic#reset-fb"));
lf[10]=C_h_intern(&lf[10],34, C_text("interface#should-close-app-window\077"));
lf[11]=C_h_intern(&lf[11],25, C_text("renderer-logic#load-image"));
lf[12]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010image.ff"));
lf[13]=C_h_intern(&lf[13],27, C_text("interface#create-app-window"));
lf[14]=C_h_intern(&lf[14],22, C_text("renderer-logic#init-fb"));
lf[15]=C_h_intern(&lf[15],21, C_text("srfi-18#thread-sleep!"));
lf[16]=C_h_intern(&lf[16],21, C_text("srfi-18#thread-start!"));
lf[17]=C_h_intern(&lf[17],34, C_text("chicken.base#implicit-exit-handler"));
lf[18]=C_h_intern(&lf[18],27, C_text("chicken.load#load-extension"));
lf[19]=C_h_intern(&lf[19],7, C_text("srfi-18"));
lf[20]=C_h_intern(&lf[20],11, C_text("srfi.160.u8"));
lf[21]=C_h_intern(&lf[21],7, C_text("srfi-13"));
C_register_lf2(lf,22,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_191,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[37] = {
{C_text("f_191:main_2escm"),(void*)f_191},
{C_text("f_194:main_2escm"),(void*)f_194},
{C_text("f_197:main_2escm"),(void*)f_197},
{C_text("f_200:main_2escm"),(void*)f_200},
{C_text("f_203:main_2escm"),(void*)f_203},
{C_text("f_206:main_2escm"),(void*)f_206},
{C_text("f_209:main_2escm"),(void*)f_209},
{C_text("f_212:main_2escm"),(void*)f_212},
{C_text("f_215:main_2escm"),(void*)f_215},
{C_text("f_218:main_2escm"),(void*)f_218},
{C_text("f_221:main_2escm"),(void*)f_221},
{C_text("f_224:main_2escm"),(void*)f_224},
{C_text("f_226:main_2escm"),(void*)f_226},
{C_text("f_232:main_2escm"),(void*)f_232},
{C_text("f_236:main_2escm"),(void*)f_236},
{C_text("f_239:main_2escm"),(void*)f_239},
{C_text("f_242:main_2escm"),(void*)f_242},
{C_text("f_245:main_2escm"),(void*)f_245},
{C_text("f_248:main_2escm"),(void*)f_248},
{C_text("f_253:main_2escm"),(void*)f_253},
{C_text("f_263:main_2escm"),(void*)f_263},
{C_text("f_266:main_2escm"),(void*)f_266},
{C_text("f_269:main_2escm"),(void*)f_269},
{C_text("f_272:main_2escm"),(void*)f_272},
{C_text("f_275:main_2escm"),(void*)f_275},
{C_text("f_278:main_2escm"),(void*)f_278},
{C_text("f_281:main_2escm"),(void*)f_281},
{C_text("f_292:main_2escm"),(void*)f_292},
{C_text("f_296:main_2escm"),(void*)f_296},
{C_text("f_304:main_2escm"),(void*)f_304},
{C_text("f_307:main_2escm"),(void*)f_307},
{C_text("f_310:main_2escm"),(void*)f_310},
{C_text("f_316:main_2escm"),(void*)f_316},
{C_text("f_318:main_2escm"),(void*)f_318},
{C_text("f_322:main_2escm"),(void*)f_322},
{C_text("toplevel:main_2escm"),(void*)C_toplevel},
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
(o e)|safe calls: 12 
(o e)|assignments to immediate values: 1 
o|inlining procedure: k255 
o|inlining procedure: k255 
o|replaced variables: 10 
o|removed binding forms: 33 
o|removed binding forms: 11 
o|simplifications: ((##core#call . 3)) 
o|  call simplifications:
o|    scheme#not
o|    scheme#=
o|    scheme#+
o|contracted procedure: k258 
o|contracted procedure: k286 
o|contracted procedure: k297 
o|simplifications: ((let . 2)) 
o|removed binding forms: 3 
o|customizable procedures: (loop70 k261 draw-loop56) 
o|calls to known targets: 7 
o|fast box initializations: 2 
*/
/* end of file */
