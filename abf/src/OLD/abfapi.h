
#ifndef __ABFAPI_H
#define __ABFAPI_H 1

#include <stdio.h>
#include <strings.h>

typedef char ABFByte;
typedef int ABFInt;
typedef ABFByte *ABFStream;

typedef struct abf {
  ABFInt magic;
  ABFInt token_table_size;
  ABFStream token_table;
  ABFInt instruction_table_size;
  ABFStream instruction_table;
} *ABF;

#define abf_get_magic_number(abf) (abf->magic)
#define abf_get_token_table_size(abf) (abf->token_table_size)
#define abf_get_token_table(abf) (abf->token_table)
#define abf_get_instruction_table_size(abf) (abf->instruction_table_size)
#define abf_get_instruction_table(abf) (abf->instruction_table)

#define abf_free(abf) (free(abf->token_table),\
                       free(abf->instruction_table),\
                       free(abf))

#define abf_alloc_token_table(s) ((ABFStream)malloc(s))
#define abf_alloc_instruction_table(s) ((ABFStream)malloc(s))
#define abf_alloc_abf() ((ABF)malloc(sizeof struct abf))

ABF fread_abf(FILE *f, int size);
void fprint_abf(FILE *f, ABF abf);
char *abf_get_string_for_instruction(int i);

#define ABF_MAGIC_NUMBER ((ABFInt)0xABFC)

#define ABF_INT_SIZE (sizeof(ABFInt))
#define ABF_BYTE_SIZE (sizeof(ABFByte))

#define emit_byte(f,c) (fwrite(&(c),ABF_BYTE_SIZE,1,f))
#define emit_int(f,n) (fwrite(&(n),ABF_INT_SIZE,1,f))
#define emit_str(f,s) (fwrite(s,strlen(s)+1,1,f))

#define read_byte(f,cp) (fread(cp,1,ABF_BYTE_SIZE,f))
#define read_int(f,np) (fread(np,1,ABF_INT_SIZE,f))

#define abf_get_byte(ins,n) (*(ins+n))
#define abf_get_int(ins,n) (*((ABFInt*)(ins+n)))

extern char *an2_type_strings[];



/* Renam avm_ to ail_ */
#define avm_publish 		0
#define avm_epublish 		1
#define avm_unpublish 		2
#define avm_enter 	        3
#define avm_leave 		4
#define avm_trye  		5
#define avm_tryf  		6
#define avm_catche  		7
#define avm_catchf  		8
#define avm_ende 	        9
#define avm_endf 	       10
#define avm_goto  	       11
#define avm_return 	       12
#define avm_lock  	       13
#define avm_unlock  	       14
#define avm_call 	       15
#define avm_raise 	       16
#define avm_fail 	       17
#define avm_add  	       18
#define avm_sub  	       19
#define avm_mul  	       20
#define avm_csub  	       21
#define avm_bind  	       22
#define avm_find  	       23
#define avm_not  	       24
#define avm_override  	       25
#define avm_d_union  	       26
#define avm_then  	       27
#define avm_and_then  	       28
#define avm_provide  	       29
#define avm_exceptionally      30
#define avm_and_exceptionally  31
#define avm_otherwise  	       32
#define avm_indivisibly        33
#define avm_hence   	       34
#define avm_cast    	       35
#define avm_component          36
#define avm_equals  	       37
#define avm_less_than  	       38
#define avm_greater_than       39
#define avm_less_than_or_eq    40
#define avm_greater_than_or_eq 41
#define avm_push	       42
#define avm_copy 	       43
#define avm_create  	       44
#define avm_inspect  	       45
#define avm_destroy  	       46
#define avm_update  	       47
#define avm_activate  	       48
#define avm_deactivate         49
#define avm_send  	       50
#define avm_receive  	       51
#define avm_time  	       52
#define avm_agent  	       53
#define avm_scope 	       54
#define avm_random  	       55
#define avm_const              56
#define avm_merge              57
#define avm_emerge             58

/* These are hidden; i.e. only used by interpreter not by bytecompiler.  */
#define avm_pushref            59
#define avm_gosub              60

#define ABF_NUM_OF_INSTRUCTIONS 61

//extern char *avm_instruction_strings[];

/* This is unused code: making abf_instruction_table static does the same. */
#define ABF_DECLARE_GLOBAL_INS_TBL(name) \
static void *name[ABF_NUM_OF_INSTRUCTIONS]

#define ABF_INIT_GLOBAL_INS_TBL(name) \
memcpy(name, ABF_LOCAL_INS_TBL, ABF_NUM_OF_INSTRUCTIONS * sizeof(void*))

/* See info gcc what to do if this will be used in a shared library. */

#define ABF_LOCAL_INS_TBL abf_instruction_table
#define ABF_DECLARE_LOCAL_INS_TBL(name) \
static const void *ABF_LOCAL_INS_TBL[ABF_NUM_OF_INSTRUCTIONS] = {\
	[avm_publish] &&do_publish,\
	[avm_epublish] &&do_epublish,\
	[avm_unpublish] &&do_unpublish,\
	[avm_enter] &&do_enter,\
	[avm_leave] &&do_leave,\
	[avm_trye] &&do_trye,\
	[avm_tryf] &&do_tryf,\
	[avm_catche] &&do_catche,\
	[avm_catchf] &&do_catchf,\
	[avm_ende] &&do_ende,\
	[avm_endf] &&do_endf,\
	[avm_goto] &&do_goto,\
	[avm_return] &&do_return,\
	[avm_lock] &&do_lock,\
	[avm_unlock] &&do_unlock,\
	[avm_call] &&do_call,\
	[avm_raise] &&do_raise,\
	[avm_fail] &&do_fail,\
	[avm_add] &&do_add,\
	[avm_sub] &&do_sub,\
	[avm_mul] &&do_mul,\
	[avm_csub] &&do_csub,\
	[avm_bind] &&do_bind,\
	[avm_find] &&do_find,\
	[avm_not] &&do_not,\
	[avm_override] &&do_override,\
	[avm_d_union] &&do_d_union,\
	[avm_then] &&do_then,\
	[avm_and_then] &&do_and_then,\
	[avm_provide] &&do_provide,\
	[avm_exceptionally] &&do_exceptionally,\
	[avm_and_exceptionally] &&do_and_exceptionally,\
	[avm_otherwise] &&do_otherwise,\
	[avm_indivisibly] &&do_indivisibly,\
	[avm_hence] &&do_hence,\
	[avm_cast] &&do_cast,\
	[avm_component] &&do_component,\
	[avm_equals] &&do_equals,\
	[avm_less_than] &&do_less_than,\
	[avm_greater_than] &&do_greater_than,\
	[avm_less_than_or_eq] &&do_less_than_or_eq,\
	[avm_greater_than_or_eq] &&do_greater_than_or_eq,\
	[avm_push] &&do_push,\
	[avm_copy] &&do_copy,\
	[avm_create] &&do_create,\
	[avm_inspect] &&do_inspect,\
	[avm_destroy] &&do_destroy,\
	[avm_update] &&do_update,\
	[avm_activate] &&do_activate,\
	[avm_deactivate] &&do_deactivate,\
	[avm_send] &&do_send,\
	[avm_receive] &&do_receive,\
	[avm_time] &&do_time,\
	[avm_agent] &&do_agent,\
	[avm_scope] &&do_scope,\
	[avm_random] &&do_random,\
	[avm_const] &&do_const,\
	[avm_merge] &&do_merge,\
	[avm_emerge] &&do_emerge,\
	[avm_pushref] &&do_pushref,\
	[avm_gosub] &&do_gosub\
}



#endif

