/* Generated from interface.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.4.0 (rev 1a1d1495)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: interface.scm -output-file interface.c -unit interface -emit-all-import-libraries
   unit: interface
   uses: eval library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[18];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,42),40,105,110,116,101,114,102,97,99,101,35,99,114,101,97,116,101,45,97,112,112,45,119,105,110,100,111,119,32,119,105,100,116,104,32,104,101,105,103,116,104,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,36),40,105,110,116,101,114,102,97,99,101,35,115,104,111,117,108,100,45,99,108,111,115,101,45,97,112,112,45,119,105,110,100,111,119,63,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,27),40,105,110,116,101,114,102,97,99,101,35,107,101,121,45,117,112,45,112,114,101,115,115,101,100,63,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,29),40,105,110,116,101,114,102,97,99,101,35,107,101,121,45,100,111,119,110,45,112,114,101,115,115,101,100,63,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,29),40,105,110,116,101,114,102,97,99,101,35,107,101,121,45,108,101,102,116,45,112,114,101,115,115,101,100,63,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,30),40,105,110,116,101,114,102,97,99,101,35,107,101,121,45,114,105,103,104,116,45,112,114,101,115,115,101,100,63,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_160)
static void C_ccall f_160(C_word c,C_word *av) C_noret;
C_noret_decl(f_163)
static void C_ccall f_163(C_word c,C_word *av) C_noret;
C_noret_decl(f_166)
static void C_ccall f_166(C_word c,C_word *av) C_noret;
C_noret_decl(f_169)
static void C_ccall f_169(C_word c,C_word *av) C_noret;
C_noret_decl(f_171)
static void C_ccall f_171(C_word c,C_word *av) C_noret;
C_noret_decl(f_177)
static void C_ccall f_177(C_word c,C_word *av) C_noret;
C_noret_decl(f_183)
static void C_ccall f_183(C_word c,C_word *av) C_noret;
C_noret_decl(f_189)
static void C_ccall f_189(C_word c,C_word *av) C_noret;
C_noret_decl(f_195)
static void C_ccall f_195(C_word c,C_word *av) C_noret;
C_noret_decl(f_201)
static void C_ccall f_201(C_word c,C_word *av) C_noret;
C_noret_decl(C_interface_toplevel)
C_externexport void C_ccall C_interface_toplevel(C_word c,C_word *av) C_noret;

/* k158 */
static void C_ccall f_160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_160,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_163,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k161 in k158 */
static void C_ccall f_163(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_163,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_166,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("interface.scm:3: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t4;
av2[2]=lf[17];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k164 in k161 in k158 */
static void C_ccall f_166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_166,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_169,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("interface.scm:3: chicken.load#load-extension"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t2;
av2[2]=lf[15];
av2[3]=lf[16];
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k167 in k164 in k161 in k158 */
static void C_ccall f_169(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_169,c,av);}
a=C_alloc(18);
t2=C_mutate((C_word*)lf[2]+1 /* (set! interface#create-app-window ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_171,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[4]+1 /* (set! interface#should-close-app-window? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_177,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[6]+1 /* (set! interface#key-up-pressed? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_183,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[8]+1 /* (set! interface#key-down-pressed? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_189,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[10]+1 /* (set! interface#key-left-pressed? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_195,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[12]+1 /* (set! interface#key-right-pressed? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_201,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* interface#create-app-window in k167 in k164 in k161 in k158 */
static void C_ccall f_171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_171,c,av);}
C_trace(C_text("interface.scm:10: x11-backend#create-window"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
tp(4,av2);}}

/* interface#should-close-app-window? in k167 in k164 in k161 in k158 */
static void C_ccall f_177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_177,c,av);}
C_trace(C_text("interface.scm:15: x11-backend#is-app-closed?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2=av;
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
tp(2,av2);}}

/* interface#key-up-pressed? in k167 in k164 in k161 in k158 */
static void C_ccall f_183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_183,c,av);}
C_trace(C_text("interface.scm:19: x11-backend#xlib-key-up-pressed?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t1;
tp(2,av2);}}

/* interface#key-down-pressed? in k167 in k164 in k161 in k158 */
static void C_ccall f_189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_189,c,av);}
C_trace(C_text("interface.scm:23: x11-backend#xlib-key-down-pressed?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t1;
tp(2,av2);}}

/* interface#key-left-pressed? in k167 in k164 in k161 in k158 */
static void C_ccall f_195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_195,c,av);}
C_trace(C_text("interface.scm:27: x11-backend#xlib-key-left-pressed?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2=av;
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t1;
tp(2,av2);}}

/* interface#key-right-pressed? in k167 in k164 in k161 in k158 */
static void C_ccall f_201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_201,c,av);}
C_trace(C_text("interface.scm:31: x11-backend#xlib-key-right-pressed?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2=av;
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t1;
tp(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_interface_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("interface"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_interface_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(126))){
C_save(t1);
C_rereclaim2(126*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,18);
lf[0]=C_h_intern(&lf[0],9, C_text("interface"));
lf[1]=C_h_intern(&lf[1],10, C_text("interface#"));
lf[2]=C_h_intern(&lf[2],27, C_text("interface#create-app-window"));
lf[3]=C_h_intern(&lf[3],25, C_text("x11-backend#create-window"));
lf[4]=C_h_intern(&lf[4],34, C_text("interface#should-close-app-window\077"));
lf[5]=C_h_intern(&lf[5],26, C_text("x11-backend#is-app-closed\077"));
lf[6]=C_h_intern(&lf[6],25, C_text("interface#key-up-pressed\077"));
lf[7]=C_h_intern(&lf[7],32, C_text("x11-backend#xlib-key-up-pressed\077"));
lf[8]=C_h_intern(&lf[8],27, C_text("interface#key-down-pressed\077"));
lf[9]=C_h_intern(&lf[9],34, C_text("x11-backend#xlib-key-down-pressed\077"));
lf[10]=C_h_intern(&lf[10],27, C_text("interface#key-left-pressed\077"));
lf[11]=C_h_intern(&lf[11],34, C_text("x11-backend#xlib-key-left-pressed\077"));
lf[12]=C_h_intern(&lf[12],28, C_text("interface#key-right-pressed\077"));
lf[13]=C_h_intern(&lf[13],35, C_text("x11-backend#xlib-key-right-pressed\077"));
lf[14]=C_h_intern(&lf[14],27, C_text("chicken.load#load-extension"));
lf[15]=C_h_intern(&lf[15],8, C_text("renderer"));
lf[16]=C_h_intern(&lf[16],14, C_text("renderer-logic"));
lf[17]=C_h_intern(&lf[17],11, C_text("x11-backend"));
C_register_lf2(lf,18,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_160,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[12] = {
{C_text("f_160:interface_2escm"),(void*)f_160},
{C_text("f_163:interface_2escm"),(void*)f_163},
{C_text("f_166:interface_2escm"),(void*)f_166},
{C_text("f_169:interface_2escm"),(void*)f_169},
{C_text("f_171:interface_2escm"),(void*)f_171},
{C_text("f_177:interface_2escm"),(void*)f_177},
{C_text("f_183:interface_2escm"),(void*)f_183},
{C_text("f_189:interface_2escm"),(void*)f_189},
{C_text("f_195:interface_2escm"),(void*)f_195},
{C_text("f_201:interface_2escm"),(void*)f_201},
{C_text("toplevel:interface_2escm"),(void*)C_interface_toplevel},
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
o|replaced variables: 6 
o|removed binding forms: 12 
o|removed binding forms: 6 
*/
/* end of file */
