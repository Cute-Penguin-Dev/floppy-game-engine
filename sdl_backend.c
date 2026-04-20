/* Generated from sdl_backend.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.4.0 (rev 1a1d1495)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: sdl_backend.scm -output-file sdl_backend.c -dynamic -feature chicken-compile-shared -emit-all-import-libraries
   uses: eval lolevel library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_externimport void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[28];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,97,51,49,56,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,8),40,97,51,55,49,32,101,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,101,118,101,110,116,115,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,18),40,97,51,50,52,32,119,105,110,51,48,32,114,101,110,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,56),40,115,100,108,50,45,98,97,99,107,101,110,100,35,105,110,105,116,45,98,97,99,107,101,110,100,32,116,105,116,108,101,32,119,105,100,116,104,32,104,101,105,103,104,116,32,100,114,97,119,45,112,114,111,99,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,43),40,115,100,108,50,45,98,97,99,107,101,110,100,35,114,101,110,100,101,114,45,102,114,97,109,101,32,119,105,100,116,104,32,104,101,105,103,104,116,32,102,98,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


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
C_noret_decl(f_294)
static void C_fcall f_294(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_298)
static void C_ccall f_298(C_word c,C_word *av) C_noret;
C_noret_decl(f_310)
static void C_ccall f_310(C_word c,C_word *av) C_noret;
C_noret_decl(f_314)
static void C_ccall f_314(C_word c,C_word *av) C_noret;
C_noret_decl(f_319)
static void C_ccall f_319(C_word c,C_word *av) C_noret;
C_noret_decl(f_325)
static void C_ccall f_325(C_word c,C_word *av) C_noret;
C_noret_decl(f_331)
static void C_ccall f_331(C_word c,C_word *av) C_noret;
C_noret_decl(f_334)
static void C_ccall f_334(C_word c,C_word *av) C_noret;
C_noret_decl(f_337)
static void C_ccall f_337(C_word c,C_word *av) C_noret;
C_noret_decl(f_340)
static void C_ccall f_340(C_word c,C_word *av) C_noret;
C_noret_decl(f_343)
static void C_ccall f_343(C_word c,C_word *av) C_noret;
C_noret_decl(f_348)
static void C_fcall f_348(C_word t0,C_word t1) C_noret;
C_noret_decl(f_352)
static void C_ccall f_352(C_word c,C_word *av) C_noret;
C_noret_decl(f_355)
static void C_ccall f_355(C_word c,C_word *av) C_noret;
C_noret_decl(f_358)
static void C_ccall f_358(C_word c,C_word *av) C_noret;
C_noret_decl(f_361)
static void C_ccall f_361(C_word c,C_word *av) C_noret;
C_noret_decl(f_367)
static void C_ccall f_367(C_word c,C_word *av) C_noret;
C_noret_decl(f_372)
static void C_ccall f_372(C_word c,C_word *av) C_noret;
C_noret_decl(f_376)
static void C_ccall f_376(C_word c,C_word *av) C_noret;
C_noret_decl(f_387)
static void C_ccall f_387(C_word c,C_word *av) C_noret;
C_noret_decl(f_391)
static void C_ccall f_391(C_word c,C_word *av) C_noret;
C_noret_decl(f_398)
static void C_ccall f_398(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_294)
static void C_ccall trf_294(C_word c,C_word *av) C_noret;
static void C_ccall trf_294(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_294(t0,t1,t2);}

C_noret_decl(trf_348)
static void C_ccall trf_348(C_word c,C_word *av) C_noret;
static void C_ccall trf_348(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_348(t0,t1);}

/* k270 */
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
C_eval_toplevel(2,av2);}}

/* k273 in k270 */
static void C_ccall f_275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_275,c,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_278,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_lolevel_toplevel(2,av2);}}

/* k276 in k273 in k270 */
static void C_ccall f_278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_278,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_281,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("sdl_backend.scm:5: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[25]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t2;
av2[2]=lf[27];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k279 in k276 in k273 in k270 */
static void C_ccall f_281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_281,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_284,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("sdl_backend.scm:5: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[25]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t2;
av2[2]=lf[26];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_284(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_284,c,av);}
a=C_alloc(6);
t2=lf[1] /* sdl2-backend#*renderer* */ =C_SCHEME_FALSE;;
t3=lf[2] /* sdl2-backend#*texture* */ =C_SCHEME_FALSE;;
t4=C_mutate((C_word*)lf[3]+1 /* (set! sdl2-backend#init-backend ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_310,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[21]+1 /* (set! sdl2-backend#render-frame ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_387,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* loop in k350 in loop in k329 in a324 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_fcall f_294(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_294,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_298,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("sdl_backend.scm:18: sdl2#poll-event!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word av2[2];
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
tp(2,av2);}}

/* k296 in loop in k350 in loop in k329 in a324 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_298,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
C_trace(C_text("sdl_backend.scm:20: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_294(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_310,c,av);}
a=C_alloc(6);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_314,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("sdl_backend.scm:25: sdl2#init!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word *av2=av;
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t6;
av2[2]=lf[20];
tp(3,av2);}}

/* k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_314,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_319,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("sdl_backend.scm:27: ##sys#call-with-values"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a318 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_319,c,av);}
C_trace(C_text("sdl_backend.scm:27: sdl2#create-window-and-renderer!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[4]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[4]+1);
av2[1]=t1;
av2[2]=C_fix(128);
av2[3]=C_fix(128);
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}

/* a324 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_325,c,av);}
a=C_alloc(6);
t4=C_mutate(&lf[1] /* (set! sdl2-backend#*renderer* ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_331,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("sdl_backend.scm:32: sdl2#create-texture*"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t5;
av2[2]=t3;
av2[3]=lf[17];
av2[4]=lf[18];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
tp(7,av2);}}

/* k329 in a324 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_331(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_331,c,av);}
a=C_alloc(13);
t2=C_mutate(&lf[2] /* (set! sdl2-backend#*texture* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_334,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_348,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_348(t7,t3);}

/* k332 in k329 in a324 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_334,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("sdl_backend.scm:52: sdl2#destroy-texture!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t2;
av2[2]=C_retrieve2(lf[2],C_text("sdl2-backend#\052texture\052"));
tp(3,av2);}}

/* k335 in k332 in k329 in a324 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_337,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("sdl_backend.scm:53: sdl2#destroy-renderer!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k338 in k335 in k332 in k329 in a324 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_340,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_343,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("sdl_backend.scm:54: sdl2#destroy-window!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k341 in k338 in k335 in k332 in k329 in a324 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_343,c,av);}
C_trace(C_text("sdl_backend.scm:55: sdl2#quit!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2=av;
av2[0]=*((C_word*)lf[5]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}

/* loop in k329 in a324 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_fcall f_348(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_348,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_352,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("sdl_backend.scm:35: sdl2#pump-events!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[2];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
tp(2,av2);}}

/* k350 in loop in k329 in a324 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_352(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_352,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_294,a[2]=t4,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_294(t6,t2,C_SCHEME_END_OF_LIST);}

/* k353 in k350 in loop in k329 in a324 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_355,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("sdl_backend.scm:38: draw-proc"));
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k356 in k353 in k350 in loop in k329 in a324 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_358,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("sdl_backend.scm:41: sdl2#render-present!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k359 in k356 in k353 in k350 in loop in k329 in a324 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_361,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_372,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("sdl_backend.scm:44: srfi-1#any"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[12]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k365 in k359 in k356 in k353 in k350 in loop in k329 in a324 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_367,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
C_trace(C_text("sdl_backend.scm:49: loop"));
t2=((C_word*)((C_word*)t0)[3])[1];
f_348(t2,((C_word*)t0)[2]);}}

/* a371 in k359 in k356 in k353 in k350 in loop in k329 in a324 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_372(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_372,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_376,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("sdl_backend.scm:45: sdl2-internals#event-type"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2=av;
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k374 in a371 in k359 in k356 in k353 in k350 in loop in k329 in a324 in k312 in sdl2-backend#init-backend in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_376,c,av);}
t2=C_eqp(t1,lf[9]);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?t2:C_eqp(t1,lf[10]));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* sdl2-backend#render-frame in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_387(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_387,c,av);}
a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_391,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_398,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("sdl_backend.scm:60: chicken.memory#object->pointer"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[24]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t6;
av2[2]=t4;
tp(3,av2);}}

/* k389 in sdl2-backend#render-frame in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_391,c,av);}
C_trace(C_text("sdl_backend.scm:61: sdl2#render-copy!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[1],C_text("sdl2-backend#\052renderer\052"));
av2[3]=C_retrieve2(lf[2],C_text("sdl2-backend#\052texture\052"));
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_FALSE;
tp(6,av2);}}

/* k396 in sdl2-backend#render-frame in k282 in k279 in k276 in k273 in k270 */
static void C_ccall f_398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,5)))){
C_save_and_reclaim((void *)f_398,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,((C_word*)t0)[2],C_fix(4));
C_trace(C_text("sdl_backend.scm:60: sdl2#update-texture-raw!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[23]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=C_retrieve2(lf[2],C_text("sdl2-backend#\052texture\052"));
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=t2;
tp(6,av2);}}

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
if(C_unlikely(!C_demand_2(185))){
C_save(t1);
C_rereclaim2(185*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,28);
lf[0]=C_h_intern(&lf[0],13, C_text("sdl2-backend#"));
lf[3]=C_h_intern(&lf[3],25, C_text("sdl2-backend#init-backend"));
lf[4]=C_h_intern(&lf[4],32, C_text("sdl2#create-window-and-renderer!"));
lf[5]=C_h_intern(&lf[5],10, C_text("sdl2#quit!"));
lf[6]=C_h_intern(&lf[6],20, C_text("sdl2#destroy-window!"));
lf[7]=C_h_intern(&lf[7],22, C_text("sdl2#destroy-renderer!"));
lf[8]=C_h_intern(&lf[8],21, C_text("sdl2#destroy-texture!"));
lf[9]=C_h_intern(&lf[9],4, C_text("quit"));
lf[10]=C_h_intern(&lf[10],8, C_text("key-down"));
lf[11]=C_h_intern(&lf[11],25, C_text("sdl2-internals#event-type"));
lf[12]=C_h_intern(&lf[12],10, C_text("srfi-1#any"));
lf[13]=C_h_intern(&lf[13],20, C_text("sdl2#render-present!"));
lf[14]=C_h_intern(&lf[14],16, C_text("sdl2#poll-event!"));
lf[15]=C_h_intern(&lf[15],17, C_text("sdl2#pump-events!"));
lf[16]=C_h_intern(&lf[16],20, C_text("sdl2#create-texture\052"));
lf[17]=C_h_intern(&lf[17],8, C_text("rgba8888"));
lf[18]=C_h_intern(&lf[18],9, C_text("streaming"));
lf[19]=C_h_intern(&lf[19],10, C_text("sdl2#init!"));
lf[20]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\005\001video\376\377\016"));
lf[21]=C_h_intern(&lf[21],25, C_text("sdl2-backend#render-frame"));
lf[22]=C_h_intern(&lf[22],17, C_text("sdl2#render-copy!"));
lf[23]=C_h_intern(&lf[23],24, C_text("sdl2#update-texture-raw!"));
lf[24]=C_h_intern(&lf[24],30, C_text("chicken.memory#object->pointer"));
lf[25]=C_h_intern(&lf[25],27, C_text("chicken.load#load-extension"));
lf[26]=C_h_intern(&lf[26],6, C_text("srfi-1"));
lf[27]=C_h_intern(&lf[27],4, C_text("sdl2"));
C_register_lf2(lf,28,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_272,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[29] = {
{C_text("f_272:sdl_5fbackend_2escm"),(void*)f_272},
{C_text("f_275:sdl_5fbackend_2escm"),(void*)f_275},
{C_text("f_278:sdl_5fbackend_2escm"),(void*)f_278},
{C_text("f_281:sdl_5fbackend_2escm"),(void*)f_281},
{C_text("f_284:sdl_5fbackend_2escm"),(void*)f_284},
{C_text("f_294:sdl_5fbackend_2escm"),(void*)f_294},
{C_text("f_298:sdl_5fbackend_2escm"),(void*)f_298},
{C_text("f_310:sdl_5fbackend_2escm"),(void*)f_310},
{C_text("f_314:sdl_5fbackend_2escm"),(void*)f_314},
{C_text("f_319:sdl_5fbackend_2escm"),(void*)f_319},
{C_text("f_325:sdl_5fbackend_2escm"),(void*)f_325},
{C_text("f_331:sdl_5fbackend_2escm"),(void*)f_331},
{C_text("f_334:sdl_5fbackend_2escm"),(void*)f_334},
{C_text("f_337:sdl_5fbackend_2escm"),(void*)f_337},
{C_text("f_340:sdl_5fbackend_2escm"),(void*)f_340},
{C_text("f_343:sdl_5fbackend_2escm"),(void*)f_343},
{C_text("f_348:sdl_5fbackend_2escm"),(void*)f_348},
{C_text("f_352:sdl_5fbackend_2escm"),(void*)f_352},
{C_text("f_355:sdl_5fbackend_2escm"),(void*)f_355},
{C_text("f_358:sdl_5fbackend_2escm"),(void*)f_358},
{C_text("f_361:sdl_5fbackend_2escm"),(void*)f_361},
{C_text("f_367:sdl_5fbackend_2escm"),(void*)f_367},
{C_text("f_372:sdl_5fbackend_2escm"),(void*)f_372},
{C_text("f_376:sdl_5fbackend_2escm"),(void*)f_376},
{C_text("f_387:sdl_5fbackend_2escm"),(void*)f_387},
{C_text("f_391:sdl_5fbackend_2escm"),(void*)f_391},
{C_text("f_398:sdl_5fbackend_2escm"),(void*)f_398},
{C_text("toplevel:sdl_5fbackend_2escm"),(void*)C_toplevel},
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
o|hiding unexported module binding: sdl2-backend#*renderer* 
o|hiding unexported module binding: sdl2-backend#*texture* 
o|hiding unexported module binding: sdl2-backend#get-all-events 
o|eliminated procedure checks: 1 
o|contracted procedure: "(sdl_backend.scm:36) sdl2-backend#get-all-events" 
o|replaced variables: 29 
o|removed binding forms: 25 
o|replaced variables: 1 
o|removed binding forms: 21 
o|removed binding forms: 1 
o|simplifications: ((if . 1) (##core#call . 5)) 
o|  call simplifications:
o|    scheme#*
o|    ##sys#call-with-values
o|    scheme#cons
o|    scheme#eq?	2
o|contracted procedure: k377 
o|contracted procedure: k306 
o|contracted procedure: k400 
o|removed binding forms: 3 
o|customizable procedures: (loop20 loop38) 
o|calls to known targets: 4 
o|fast box initializations: 2 
o|fast global references: 4 
o|fast global assignments: 4 
*/
/* end of file */
