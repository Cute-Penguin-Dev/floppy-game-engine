/* Generated from main.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.4.0 (rev 1a1d1495)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: main.scm -output-file um.c -optimize-level 3 -uses renderer,x11-backend,interface
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

static C_TLS C_word lf[27];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,27),40,100,114,97,119,45,108,111,111,112,32,99,111,108,111,114,32,121,112,111,115,32,120,112,111,115,41,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,6),40,97,50,51,55,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,14),40,117,112,100,97,116,101,45,105,109,97,103,101,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


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
C_noret_decl(f_227)
static void C_ccall f_227(C_word c,C_word *av) C_noret;
C_noret_decl(f_230)
static void C_ccall f_230(C_word c,C_word *av) C_noret;
C_noret_decl(f_232)
static void C_ccall f_232(C_word c,C_word *av) C_noret;
C_noret_decl(f_238)
static void C_ccall f_238(C_word c,C_word *av) C_noret;
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
C_noret_decl(f_259)
static void C_fcall f_259(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_269)
static void C_fcall f_269(C_word t0,C_word t1) C_noret;
C_noret_decl(f_272)
static void C_fcall f_272(C_word t0,C_word t1) C_noret;
C_noret_decl(f_275)
static void C_fcall f_275(C_word t0,C_word t1) C_noret;
C_noret_decl(f_278)
static void C_fcall f_278(C_word t0,C_word t1) C_noret;
C_noret_decl(f_281)
static void C_fcall f_281(C_word t0,C_word t1) C_noret;
C_noret_decl(f_284)
static void C_ccall f_284(C_word c,C_word *av) C_noret;
C_noret_decl(f_287)
static void C_ccall f_287(C_word c,C_word *av) C_noret;
C_noret_decl(f_290)
static void C_ccall f_290(C_word c,C_word *av) C_noret;
C_noret_decl(f_293)
static void C_ccall f_293(C_word c,C_word *av) C_noret;
C_noret_decl(f_296)
static void C_ccall f_296(C_word c,C_word *av) C_noret;
C_noret_decl(f_299)
static void C_ccall f_299(C_word c,C_word *av) C_noret;
C_noret_decl(f_310)
static void C_ccall f_310(C_word c,C_word *av) C_noret;
C_noret_decl(f_314)
static void C_ccall f_314(C_word c,C_word *av) C_noret;
C_noret_decl(f_318)
static void C_ccall f_318(C_word c,C_word *av) C_noret;
C_noret_decl(f_322)
static void C_ccall f_322(C_word c,C_word *av) C_noret;
C_noret_decl(f_326)
static void C_ccall f_326(C_word c,C_word *av) C_noret;
C_noret_decl(f_330)
static void C_ccall f_330(C_word c,C_word *av) C_noret;
C_noret_decl(f_337)
static void C_ccall f_337(C_word c,C_word *av) C_noret;
C_noret_decl(f_344)
static void C_ccall f_344(C_word c,C_word *av) C_noret;
C_noret_decl(f_351)
static void C_ccall f_351(C_word c,C_word *av) C_noret;
C_noret_decl(f_358)
static void C_ccall f_358(C_word c,C_word *av) C_noret;
C_noret_decl(f_366)
static void C_ccall f_366(C_word c,C_word *av) C_noret;
C_noret_decl(f_369)
static void C_ccall f_369(C_word c,C_word *av) C_noret;
C_noret_decl(f_372)
static void C_ccall f_372(C_word c,C_word *av) C_noret;
C_noret_decl(f_378)
static void C_ccall f_378(C_word c,C_word *av) C_noret;
C_noret_decl(f_380)
static void C_fcall f_380(C_word t0,C_word t1) C_noret;
C_noret_decl(f_384)
static void C_ccall f_384(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_259)
static void C_ccall trf_259(C_word c,C_word *av) C_noret;
static void C_ccall trf_259(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_259(t0,t1,t2,t3,t4);}

C_noret_decl(trf_269)
static void C_ccall trf_269(C_word c,C_word *av) C_noret;
static void C_ccall trf_269(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_269(t0,t1);}

C_noret_decl(trf_272)
static void C_ccall trf_272(C_word c,C_word *av) C_noret;
static void C_ccall trf_272(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_272(t0,t1);}

C_noret_decl(trf_275)
static void C_ccall trf_275(C_word c,C_word *av) C_noret;
static void C_ccall trf_275(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_275(t0,t1);}

C_noret_decl(trf_278)
static void C_ccall trf_278(C_word c,C_word *av) C_noret;
static void C_ccall trf_278(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_278(t0,t1);}

C_noret_decl(trf_281)
static void C_ccall trf_281(C_word c,C_word *av) C_noret;
static void C_ccall trf_281(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_281(t0,t1);}

C_noret_decl(trf_380)
static void C_ccall trf_380(C_word c,C_word *av) C_noret;
static void C_ccall trf_380(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_380(t0,t1);}

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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_200,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_203,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_renderer_toplevel(2,av2);}}

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
C_x11_2dbackend_toplevel(2,av2);}}

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
C_interface_toplevel(2,av2);}}

/* k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_209,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_212,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k210 in k207 in k204 in k201 in k198 in k195 */
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
C_srfi_2d4_toplevel(2,av2);}}

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
C_trace(C_text("main.scm:1: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[23]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t2;
av2[2]=lf[26];
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_218,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_221,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_221,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_224,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_224,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_227,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:1: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[23]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t2;
av2[2]=lf[25];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_227,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_230,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:1: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[23]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t2;
av2[2]=lf[24];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_230,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[0]+1 /* (set! update-image ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_232,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_369,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:43: update-image"));
t4=C_fast_retrieve(lf[0]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_232(2,av2);}}

/* update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
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
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_238,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:16: srfi-18#thread-start!"));
t3=C_fast_retrieve(lf[21]);{
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

/* a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_238,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_242,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:17: renderer-logic#init-fb"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[20]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=C_fix(512);
av2[3]=C_fix(512);
av2[4]=C_fix(8);
tp(5,av2);}}

/* k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_242,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_245,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:18: renderer-logic#reset-fb"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_245,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_248,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:19: interface#create-app-window"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t2;
av2[2]=C_fix(512);
av2[3]=C_fix(512);
tp(4,av2);}}

/* k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_248,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_251,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:20: srfi-18#thread-sleep!"));
t3=C_fast_retrieve(lf[18]);{
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

/* k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_251,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_254,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:21: renderer-logic#load-image"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=lf[17];
tp(3,av2);}}

/* k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_254,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_259,a[2]=t3,a[3]=t1,a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_259(t5,((C_word*)t0)[2],C_fix(245),C_fix(0),C_fix(0));}

/* draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_fcall f_259(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_259,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_366,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t6,a[6]=t7,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("main.scm:23: interface#should-close-app-window?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[2];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t8;
tp(2,av2);}}

/* k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in ... */
static void C_fcall f_269(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_269,2,t0,t1);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_272,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_351,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("main.scm:26: interface#key-down-pressed?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word av2[2];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
tp(2,av2);}}

/* k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in ... */
static void C_fcall f_272(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_272,2,t0,t1);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_275,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_344,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("main.scm:27: interface#key-left-pressed?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[12]);
C_word av2[2];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t3;
tp(2,av2);}}

/* k273 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in ... */
static void C_fcall f_275(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_275,2,t0,t1);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_278,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_337,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("main.scm:28: interface#key-right-pressed?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word av2[2];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
tp(2,av2);}}

/* k276 in k273 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in ... */
static void C_fcall f_278(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_278,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_281,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nequalp(((C_word*)((C_word*)t0)[2])[1],C_fix(255)))){
t3=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t4=t2;
f_281(t4,t3);}
else{
t3=t2;
f_281(t3,C_SCHEME_UNDEFINED);}}

/* k279 in k276 in k273 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in ... */
static void C_fcall f_281(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_281,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("main.scm:30: renderer-logic#reset-fb"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word av2[2];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k282 in k279 in k276 in k273 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in ... */
static void C_ccall f_284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_284,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_326,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_330,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:31: scheme#round"));
t5=*((C_word*)lf[7]+1);{
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

/* k285 in k282 in k279 in k276 in k273 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in ... */
static void C_ccall f_287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_287,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_290,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_310,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_322,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:32: scheme#round"));
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k288 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in ... */
static void C_ccall f_290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_290,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("main.scm:33: renderer-logic#upscale-fb"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[4]);
C_word *av2=av;
av2[0]=*((C_word*)lf[4]+1);
av2[1]=t2;
tp(2,av2);}}

/* k291 in k288 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in ... */
static void C_ccall f_293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_293,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("main.scm:34: renderer-logic#sync-fb-to-x11-memory"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
tp(2,av2);}}

/* k294 in k291 in k288 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in ... */
static void C_ccall f_296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_296,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_299,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("main.scm:35: srfi-18#thread-yield!"));
t3=C_fast_retrieve(lf[2]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k297 in k294 in k291 in k288 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in ... */
static void C_ccall f_299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_299,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,lf[1],((C_word*)((C_word*)t0)[2])[1]);
C_trace(C_text("main.scm:36: draw-loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_259(t3,((C_word*)t0)[4],t2,((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[6])[1]);}

/* k308 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in ... */
static void C_ccall f_310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_310,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_318,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("main.scm:32: scheme#round"));
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k312 in k308 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in ... */
static void C_ccall f_314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_314,c,av);}
C_trace(C_text("main.scm:32: renderer-logic#draw-image"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* k316 in k308 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in ... */
static void C_ccall f_318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_318,c,av);}
C_trace(C_text("main.scm:32: scheme#inexact->exact"));
t2=*((C_word*)lf[6]+1);{
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

/* k320 in k285 in k282 in k279 in k276 in k273 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in ... */
static void C_ccall f_322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_322,c,av);}
C_trace(C_text("main.scm:32: scheme#inexact->exact"));
t2=*((C_word*)lf[6]+1);{
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

/* k324 in k282 in k279 in k276 in k273 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in ... */
static void C_ccall f_326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,9)))){
C_save_and_reclaim((void *)f_326,c,av);}
C_trace(C_text("main.scm:31: renderer-logic#draw-rectangle"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word *av2;
if(c >= 10) {
  av2=av;
} else {
  av2=C_alloc(10);
}
av2[0]=*((C_word*)lf[8]+1);
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

/* k328 in k282 in k279 in k276 in k273 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in ... */
static void C_ccall f_330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_330,c,av);}
C_trace(C_text("main.scm:31: scheme#inexact->exact"));
t2=*((C_word*)lf[6]+1);{
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

/* k335 in k273 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in ... */
static void C_ccall f_337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_337,c,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=C_s_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],lf[10]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_278(t4,t3);}
else{
t2=((C_word*)t0)[3];
f_278(t2,C_SCHEME_UNDEFINED);}}

/* k342 in k270 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in ... */
static void C_ccall f_344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_344,c,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=C_s_a_i_minus(&a,2,((C_word*)((C_word*)t0)[2])[1],lf[10]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_275(t4,t3);}
else{
t2=((C_word*)t0)[3];
f_275(t2,C_SCHEME_UNDEFINED);}}

/* k349 in k267 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in ... */
static void C_ccall f_351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_351,c,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=C_s_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],lf[10]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_272(t4,t3);}
else{
t2=((C_word*)t0)[3];
f_272(t2,C_SCHEME_UNDEFINED);}}

/* k356 in k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 in ... */
static void C_ccall f_358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_358,c,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=C_s_a_i_minus(&a,2,((C_word*)((C_word*)t0)[2])[1],lf[10]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_269(t4,t3);}
else{
t2=((C_word*)t0)[3];
f_269(t2,C_SCHEME_UNDEFINED);}}

/* k364 in draw-loop in k252 in k249 in k246 in k243 in k240 in a237 in update-image in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_366,c,av);}
a=C_alloc(12);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_269,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_358,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("main.scm:25: interface#key-up-pressed?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2=av;
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k367 in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_369(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_369,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_372,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_380,a[2]=t4,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_380(t6,t2);}

/* k370 in k367 in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_372,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
t3=C_fast_retrieve(lf[22]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k376 in k370 in k367 in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_378,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k367 in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_fcall f_380(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_380,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_384,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("main.scm:46: srfi-18#thread-sleep!"));
t3=C_fast_retrieve(lf[18]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k382 in loop in k367 in k228 in k225 in k222 in k219 in k216 in k213 in k210 in k207 in k204 in k201 in k198 in k195 */
static void C_ccall f_384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_384,c,av);}
C_trace(C_text("main.scm:47: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_380(t2,((C_word*)t0)[3]);}

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
if(C_unlikely(!C_demand_2(176))){
C_save(t1);
C_rereclaim2(176*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,27);
lf[0]=C_h_intern(&lf[0],12, C_text("update-image"));
lf[1]=C_decode_literal(C_heaptop,C_text("\376U0.5\000"));
lf[2]=C_h_intern(&lf[2],21, C_text("srfi-18#thread-yield!"));
lf[3]=C_h_intern(&lf[3],36, C_text("renderer-logic#sync-fb-to-x11-memory"));
lf[4]=C_h_intern(&lf[4],25, C_text("renderer-logic#upscale-fb"));
lf[5]=C_h_intern(&lf[5],25, C_text("renderer-logic#draw-image"));
lf[6]=C_h_intern(&lf[6],21, C_text("scheme#inexact->exact"));
lf[7]=C_h_intern(&lf[7],12, C_text("scheme#round"));
lf[8]=C_h_intern(&lf[8],29, C_text("renderer-logic#draw-rectangle"));
lf[9]=C_h_intern(&lf[9],23, C_text("renderer-logic#reset-fb"));
lf[10]=C_decode_literal(C_heaptop,C_text("\376U0.125\000"));
lf[11]=C_h_intern(&lf[11],28, C_text("interface#key-right-pressed\077"));
lf[12]=C_h_intern(&lf[12],27, C_text("interface#key-left-pressed\077"));
lf[13]=C_h_intern(&lf[13],27, C_text("interface#key-down-pressed\077"));
lf[14]=C_h_intern(&lf[14],25, C_text("interface#key-up-pressed\077"));
lf[15]=C_h_intern(&lf[15],34, C_text("interface#should-close-app-window\077"));
lf[16]=C_h_intern(&lf[16],25, C_text("renderer-logic#load-image"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010image.ff"));
lf[18]=C_h_intern(&lf[18],21, C_text("srfi-18#thread-sleep!"));
lf[19]=C_h_intern(&lf[19],27, C_text("interface#create-app-window"));
lf[20]=C_h_intern(&lf[20],22, C_text("renderer-logic#init-fb"));
lf[21]=C_h_intern(&lf[21],21, C_text("srfi-18#thread-start!"));
lf[22]=C_h_intern(&lf[22],34, C_text("chicken.base#implicit-exit-handler"));
lf[23]=C_h_intern(&lf[23],27, C_text("chicken.load#load-extension"));
lf[24]=C_h_intern(&lf[24],7, C_text("srfi-18"));
lf[25]=C_h_intern(&lf[25],11, C_text("srfi.160.u8"));
lf[26]=C_h_intern(&lf[26],7, C_text("srfi-13"));
C_register_lf2(lf,27,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_197,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[49] = {
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
{C_text("f_227:main_2escm"),(void*)f_227},
{C_text("f_230:main_2escm"),(void*)f_230},
{C_text("f_232:main_2escm"),(void*)f_232},
{C_text("f_238:main_2escm"),(void*)f_238},
{C_text("f_242:main_2escm"),(void*)f_242},
{C_text("f_245:main_2escm"),(void*)f_245},
{C_text("f_248:main_2escm"),(void*)f_248},
{C_text("f_251:main_2escm"),(void*)f_251},
{C_text("f_254:main_2escm"),(void*)f_254},
{C_text("f_259:main_2escm"),(void*)f_259},
{C_text("f_269:main_2escm"),(void*)f_269},
{C_text("f_272:main_2escm"),(void*)f_272},
{C_text("f_275:main_2escm"),(void*)f_275},
{C_text("f_278:main_2escm"),(void*)f_278},
{C_text("f_281:main_2escm"),(void*)f_281},
{C_text("f_284:main_2escm"),(void*)f_284},
{C_text("f_287:main_2escm"),(void*)f_287},
{C_text("f_290:main_2escm"),(void*)f_290},
{C_text("f_293:main_2escm"),(void*)f_293},
{C_text("f_296:main_2escm"),(void*)f_296},
{C_text("f_299:main_2escm"),(void*)f_299},
{C_text("f_310:main_2escm"),(void*)f_310},
{C_text("f_314:main_2escm"),(void*)f_314},
{C_text("f_318:main_2escm"),(void*)f_318},
{C_text("f_322:main_2escm"),(void*)f_322},
{C_text("f_326:main_2escm"),(void*)f_326},
{C_text("f_330:main_2escm"),(void*)f_330},
{C_text("f_337:main_2escm"),(void*)f_337},
{C_text("f_344:main_2escm"),(void*)f_344},
{C_text("f_351:main_2escm"),(void*)f_351},
{C_text("f_358:main_2escm"),(void*)f_358},
{C_text("f_366:main_2escm"),(void*)f_366},
{C_text("f_369:main_2escm"),(void*)f_369},
{C_text("f_372:main_2escm"),(void*)f_372},
{C_text("f_378:main_2escm"),(void*)f_378},
{C_text("f_380:main_2escm"),(void*)f_380},
{C_text("f_384:main_2escm"),(void*)f_384},
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
(o e)|safe calls: 20 
(o e)|assignments to immediate values: 1 
o|inlining procedure: k261 
o|inlining procedure: k261 
o|replaced variables: 14 
o|removed binding forms: 37 
o|removed binding forms: 15 
o|simplifications: ((##core#call . 7)) 
o|  call simplifications:
o|    scheme#not
o|    scheme#-	2
o|    scheme#=
o|    scheme#+	3
o|contracted procedure: k264 
o|contracted procedure: k304 
o|contracted procedure: k331 
o|contracted procedure: k339 
o|contracted procedure: k346 
o|contracted procedure: k353 
o|contracted procedure: k360 
o|simplifications: ((let . 2)) 
o|removed binding forms: 7 
o|customizable procedures: (loop76 k267 k270 k273 k276 k279 draw-loop56) 
o|calls to known targets: 15 
o|fast box initializations: 2 
*/
/* end of file */
