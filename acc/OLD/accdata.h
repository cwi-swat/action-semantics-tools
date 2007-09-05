
#ifndef __ACCDATA_H 
#define __ACCDATA_H 1

#include <stdlib.h>

/*
 * General legenda:
 * make_*  : refers to the creation of ACData structures from a basetype
 * give_*  : refers to the execution of data operations.
 * get_*   : refers to getting a basetype from a datarecord.
 * lowercase macros are the actual interface.
 * NB: if there are more than one ACData arguments, they must
 * be distinct. E.g. d = GIVE_NOT(d,d) will not work.
 * TODO:
 * - define storage in terms of list (to keep track of mem)
 * - taggedbuffers (map from message-tag to queue).
 * - adapt print_ac_data to this
 * - store maps as balanced binary trees (future)
 */

/* Axiom: sizeof(void*) == sizeof(int)! */
typedef struct datastruct {
  int type;
  void *content;
} *ACData;

/* Not to be used outside...(but in accdata2.h) */
static ACData __data__;
static ACData *__dataptr__;

void print_ac_data(ACData d);


/* Types for distinguishing data */
#define PROVIDE_OP             0
#define INDIVISIBLY_OP         1
#define THEN_OP                2
#define AND_THEN_OP            3
#define AND_OP                 4
#define EXCEPTIONALLY_OP       5
#define AND_EXCEPTIONALLY_OP   6
#define OTHERWISE_OP           7
#define HENCE_OP               8

#define UNDEF_TYPE            10
#define INT_TYPE              11
#define BOOL_TYPE             12
#define TUPLE_TYPE            13
#define AGENT_TYPE            14
#define AVM_ACTION_TYPE       15
#define ACC_ACTION_TYPE       16
#define BINDINGS_TYPE         17
#define CELL_TYPE             18
#define MESSAGETAG_TYPE       19
#define TOKEN_TYPE            20
#define LIST_TYPE             21
#define TAGGEDBUFFERS_TYPE    22

#define EXCEPTION             30
#define FAILURE               31

#define AC_ALLOC(n) (alloca(n))

#define ALLOC_ARGS(d1,d2) (__dataptr__=(ACData*)AC_ALLOC(2*sizeof(ACData)),\
                           __dataptr__[0]=d1,__dataptr__[1]=d2,__dataptr__)

#define ALLOC_LIST(d,l) ALLOC_ARGS(d,l)

#define ALLOC_TUPLE(d1,d2) (__dataptr__=(ACData*)AC_ALLOC(3*sizeof(ACData)),\
                            __dataptr__[0]=(void*)2,__dataptr__[1]=d1,__dataptr__[2]=d2,__dataptr__)

#define REALLOC_TUPLE(t,n) (__dataptr__=(ACData*)AC_ALLOC(n*sizeof(ACData)+(t[0]+1)*sizeof(ACData)),\
                            memcpy(__dataptr__,t,((int)t[0]+1)*sizeof(ACData)),\
                           __dataptr__[0]=(void*)(((int)(__dataptr__[0]))+n),__dataptr__)

#define CONCAT_TUPLES(t1,t2) (__dataptr__=REALLOC_TUPLE(t1, ((int)(t2[0]))),\
                             memcpy(__dataptr__+(int)t1[0]+1,&(t2[1]),\
                             (int)t2[0]*sizeof(ACData)),__dataptr__)

#define ALLOC_MAP(tk,d) (__dataptr__=(ACData*)AC_ALLOC(3*sizeof(ACData)),\
                            __dataptr__[0]=(void*)1,__dataptr__[1]=tk,__dataptr__[2]=d,__dataptr__)


#define REALLOC_MAP(bs,n) (__dataptr__=(ACData*)AC_ALLOC(2*n*sizeof(ACData)+\
                              (2*((int)(bs[0]))+1)*sizeof(ACData)),\
                              memcpy(__dataptr__,bs,(2*((int)(bs[0]))+1)*sizeof(ACData)),\
                              __dataptr__[0]=(void*)(((int)(__dataptr__[0]))+n), __dataptr__)

#define CONCAT_MAPS(bs1,bs2) (REALLOC_MAP(bs1, ((int)(bs2[0]))),\
                                  memcpy(__dataptr__+2*((int)(bs1[0]))+1,&(bs2[1]),\
                                  2*((int)(bs2[0]))*sizeof(ACData)),__dataptr__)

#define GET_TYPE(d) (((ACData)d)->type)
#define SET_TYPE(d,t) (((ACData)d)->type=(t))
#define GET_CONTENT(d) (((ACData)d)->content)
#define SET_CONTENT(d1,d2) (((ACData)d1)->content=(void*)(d2))
#define GET_INT(d) ((int)GET_CONTENT(d))
#define GET_DATA(d) ((ACData)GET_CONTENT(d))
#define GET_LABEL(d) ((void*)GET_CONTENT(d))
#define GET_ADDRESS(d) ((char*)GET_CONTENT(d))
#define GET_STRING(d) ((char*)GET_CONTENT(d))
#define GET_ARRAY(d) ((ACData*)GET_CONTENT(d))
#define GET_ARRAY_SIZE(a) (((int)(a[0])))
#define GET_ARRAY_ELT(a,n) (a[(n)])
#define SET_ARRAY_ELT(a,n,d) (a[(n)]=d)

#define GET_ARGS(d) (GET_ARRAY(d))
#define GET_ARG0(d) (GET_ARGS(d)[0])
#define GET_ARG1(d) (GET_ARGS(d)[1])

#define GET_FIRST(d) (GET_ARG0(d))
#define GET_NEXT(d) (GET_ARG1(d))

#define GET_TUPLE_ARRAY(d) (GET_ARRAY(d))
#define GET_TUPLE_SIZE(d) (GET_ARRAY_SIZE(GET_TUPLE_ARRAY(d)))
#define GET_TUPLE_ELT(d,n) (GET_ARRAY_ELT(GET_TUPLE_ARRAY(d),n))

#define GET_MAP_ARRAY(d) (GET_ARRAY(d))
#define GET_MAP_SIZE(d) (GET_ARRAY_SIZE(GET_MAP_ARRAY(d)))
#define GET_MAP_SRC(d,n) (GET_ARRAY_ELT(GET_MAP_ARRAY(d),2*n-1))
#define GET_MAP_TRG(d,n) (GET_ARRAY_ELT(GET_MAP_ARRAY(d),2*n))
#define SET_MAP_SRC(d,n,s) (SET_ARRAY_ELT(GET_MAP_ARRAY(d),2*n-1,s))
#define SET_MAP_TRG(d,n,t) (SET_ARRAY_ELT(GET_MAP_ARRAY(d),2*n,t))

/* This assumes that tokens are shared via a tokentable */
#define GIVE_MAP_IMAGE(m,src) \
({\
  int i; ACData d = NULL;\
  for (i = 1; i <= GET_MAP_SIZE(m); i++) {\
    if (GET_STRING(GET_MAP_SRC(m,i)) == GET_STRING(src))\
       d = GET_MAP_TRG(m, i)\
       break;\
    }\
  }\
  d;\
})



/*
 * Name: NEW_DATA
 * Pre: void
 * Action: allocate space for a datarecord.
 * Post: a pointer to a clean datarecord is returned
 */
#define NEW_DATA() ((ACData)AC_ALLOC(sizeof(struct datastruct)))

/*
 * Name: ALLOC_DATA
 * Pre: ACData d, type-constant t
 * Action: allocate a new dataobject of type t in d
 * Post: d pointer to a datarecord of type t.
 */
#define ALLOC_DATA(d,t) (d=NEW_DATA(),SET_TYPE(d,t))


/*
 * Name: MAKE_DATA
 * Pre: ACData d, int t type-constant, expression castable to void* e
 * Action: allocate a datarecord, set to type t and initialize with e
 * Post: a newly created datarecord is returned
 */
#define MAKE_DATA(d,t,e) (ALLOC_DATA(d,t),SET_CONTENT(d,e),d)

#define MAKE_NODATA(d) MAKE_DATA(d,UNDEF_TYPE,NULL)

/*
 * Name: MAKE_INT
 * Pre: ACData d, int n
 * Action: allocate and initialize datarecord d with n
 * Post: d is returned.
 */
#define MAKE_INT(d,n) MAKE_DATA(d, INT_TYPE, n)

/*
 * Name: GIVE_op
 * Pre: ACData d1, d2 of type int
 * Action: compute op of d1 and d2
 * Post: a new datarecord containing d1 op d2 is returned
 */
#define GIVE_PLUS(d, d1,d2) MAKE_DATA(d,INT_TYPE,GET_INT(d1)+GET_INT(d2))
#define GIVE_MINUS(d,d1,d2) MAKE_DATA(d,INT_TYPE,GET_INT(d1)-GET_INT(d2))
#define GIVE_MONUS(d,d1,d2) MAKE_DATA(d,INT_TYPE,\
                            GET_INT(d1)>GET_INT(d2) ? \
                            GET_INT(d1)-GET_INT(d2) : 0)
#define GIVE_TIMES(d,d1,d2) MAKE_DATA(d,INT_TYPE,GET_INT(d1)*GET_INT(d2))



/*
 * Name: MAKE_BOOL
 * Pre: int b
 * Action: convert b into a new datarecord
 * Post: a pointer to a new booldatarecord is returned
 */
#define MAKE_BOOL(d,b) MAKE_DATA(d,BOOL_TYPE,b)

/*
 * Name: GIVE_NOT
 * Pre: ACData[BOOL_TYPE] d
 * Action: 
 * Post: expression of type ACData[BOOL_TYPE]
 */
#define GIVE_NOT(d,b) MAKE_DATA(d,BOOL_TYPE,(!GET_INT(b)))

/*
 * Name: MAKE_CELL
 * Pre: ACData d1, d2, int c
 * Action: build a cell datarecord containing c and ref to d2.
 * Post: a new cell datarecord is returned.
 */
#define MAKE_CELL(d1,c,d2) MAKE_DATA(d,CELL_TYPE,ALLOC_ARGS(c,d2))

/*
 * Name: MAKE_AGENT
 * Pre: ACData d, int a
 * Action: build an agent datarecord referring to agent a
 * Post: a new agent datarecord is returned
 */
#define MAKE_AGENT(d,a) MAKE_DATA(d,AGENT_TYPE,a)

/*
 * Name: MAKE_ACC_ACTION
 * Pre: ACData d, identifier l (label to be gone to)
 * Action: construct an action datarecord referring to label l
 * Post: a new action datarecord is returned
 */
#define MAKE_ACC_ACTION(d,l) MAKE_DATA(d,ACC_ACTION_TYPE,&&l)

#define MAKE_AVM_ACTION(d,a) MAKE_DATA(d,AVM_ACTION_TYPE,a)


/*
 * Name: MAKE_1COMPOSITE
 * Pre: ACData d, AFun c (combinator), ACData[|action] a
 * Action: construct an action datarecord using unary combinator c
 * Post: a new action datarecord is returned composed from c with a.
 */
#define MAKE_1COMPOSITE(d,c,a) MAKE_DATA(d,c,a)
#define GET_1COMPOSITE_ARG(a) (GET_DATA(d))

/*
 * Name: GIVE_PROVIDE
 * Pre: ACData d, d2
 * Action: from data d2 build an action representing provide d2
 * Post: a new action datarecord is returned.
 */
#define GIVE_PROVIDE(d,d2) MAKE_1COMPOSITE(d,PROVIDE_OP,d2)

/*
 * Name: GIVE_INDIVISIBLY
 * Pre: ACData d, ACData[action|composite] a
 * Action: make action a indivisible 
 * Post: an action datarecord is returned that will perform a indivisibly.
 */
#define GIVE_INDIVISIBLY(d,a) MAKE_1COMPOSITE(d,INDIVISIBLY_OP,a)

/*
 * Name: MAKE_2COMPOSITE
 * Pre: ACData d, ACData[action|composite] l, r, AFun c (combinator)
 * Action: build a new action using binary combinator c with l and r
 * Post: the new composite action is returned.
 */
#define MAKE_2COMPOSITE(d,c,l,r) MAKE_DATA(d, c, ALLOC_ARGS(l,r))
#define GET_2COMPOSITE_LEFT_ARG(a) (GET_ARG0(a))
#define GET_2COMPOSITE_RIGHT_ARG(a) (GET_ARG1(a))


/*
 * Name: GIVE_c
 * Pre: ACData d, ACData[action] l, r
 * Action: construct action with combinator c and operands l and r
 * Post: a new composite action is returned.
 */
#define GIVE_THEN(d,l,r) MAKE_2COMPOSITE(d,THEN_OP,l,r)
#define GIVE_AND_THEN(d,l,r) MAKE_2COMPOSITE(d,AND_THEN_OP,l,r)
#define GIVE_AND(d,l,r) MAKE_2COMPOSITE(d,AND_OP,l,r)
#define GIVE_EXCEPTIONALLY(d,l,r) MAKE_2COMPOSITE(d,EXCEPTIONALLY_OP,l,r)
#define GIVE_AND_EXCEPTIONALLY(d,l,r) MAKE_2COMPOSITE(d,AND_EXCEPTIONALLY_OP,l,r)
#define GIVE_OTHERWISE(d,l,r) MAKE_2COMPOSITE(d,OTHERWISE_OP,l,r)
#define GIVE_HENCE(d,l,r) MAKE_2COMPOSITE(d,HENCE_OP,l,r)

/*
 * Name: MAKE_MESSAGETAG
 * Pre: ACData d, int m
 * Action: construct a datarecord for messagetag m in d
 * Post: the newly created datarecord is returned.
 */
#define MAKE_MESSAGETAG(d,m) MAKE_DATA(d,MESSAGETAG_TYPE,m)

/*
 * Name: MAKE_TOKEN
 * Pre: ACData d, char *s
 * Action: construct a datarecord containing s in d
 * Post: the created and protected datarecord is returned
 */
#define MAKE_TOKEN(d,s) MAKE_DATA(d,TOKEN_TYPE,s)

/*
 * Name: NEW_TUPLE
 * Pre: ACData d1, d2
 * Action: construct an ATermList containing refs to d1 and d2
 * Post: an ATermList is returned containing d1 and d2 reversed.
 */
#define NEW_TUPLE(d1,d2) (ALLOC_TUPLE(d1,d2))

/*
 * Name: MAKE_TUPLE
 * Pre: ACData d, d1, d2
 * Action: create a datarecord with an TUPLE-aterm as contents in d
 * Post: the newly created datarecord is returned.
 */
#define MAKE_TUPLE(d,d1,d2) MAKE_DATA(d,TUPLE_TYPE,NEW_TUPLE(d1,d2))

/*
 * Name: ADD_TO_TUPLE
 * Pre: ACData[tuple] t, ACData d
 * Action: add d to tuple t
 * Post: t is updated, nothing is returned.
 */
#define ADD_TO_TUPLE(t,d) (SET_CONTENT(t,REALLOC_TUPLE(t,1)),\
                          SET_ARRAY_ELT(GET_TUPLE_ARRAY(t),GET_TUPLE_SIZE(t),d))

#define MERGE_TUPLES(d,t1,t2) MAKE_DATA(d,TUPLE_TYPE,CONCAT_TUPLES(\
                              GET_TUPLE_ARRAY(t1),GET_TUPLE_ARRAY(t2)))

/*
 * Name: GIVE_TUPLE_COMPONENT
 * Pre: ACData[tuple] t, int n
 * Action: get the n'th element in t counting from 1
 * Post: the n'th element is returned.
 */
#define GIVE_TUPLE_COMPONENT(t,n) GET_TUPLE_ELT(t,n)

/*
 * Name: GIVE_BINDING
 * Pre: ACData d, ACData[token] tk, ACData d2
 * Action: create a map from tk to d2 in d
 * Post: the created and protected bindings datarecord is returned.
 * Note: must become a balanced binary tree.
 */
#define GIVE_BINDING(b,tk,d) (MAKE_DATA(b,BINDINGS_TYPE,ALLOC_MAP(tk,d)))



/*
 * Name: GIVE_OVERRIDING
 * Pre: ACData d, ACData[bindings] bs1, bs2
 * Action: let bindings bs2 override bindings bs1 in d
 * Post: the new binding-set is returned.
 */
#define GIVE_OVERRIDING(d,bs1,bs2) MAKE_DATA(d,BINDINGS_TYPE,\
				   CONCAT_MAPS(GET_MAP_ARRAY(bs1),\
					       GET_MAP_ARRAY(bs2)))

/*
 * Name: GIVE_DISJOINT_UNION
 * Pre: ACData d, ACData[bindings] bs1, bs2
 * Action: compute the disjoint union of finitemaps bs1 and bs2 in d
 * Post: the new binding-set is returned.
 */
#define GIVE_DISJOINT_UNION(d,bs1,bs2) GIVE_OVERRIDING(d,bs2,bs1)

/*
 * Name: GIVE_BOUND
 * Pre: ACData[bindings] bs, ACData[token] tk
 * Action: find the associated data to tk in bs
 * Post: return the bound data if found, NULL otherwise.
 */
#define GIVE_BOUND(bs,tk) GIVE_MAP_IMAGE(bs,tk)

#define MAKE_LIST(d,f,n) MAKE_DATA(d,LIST_TYPE,ALLOC_LIST(f,n))
#define IS_EMPTY_LIST(d) (GET_FIRST(d) == NULL)

#define GIVE_PREPEND(d,list,elt) MAKE_LIST(d,elt,list)
#define GIVE_POP(list) (__data__=GET_FIRST(list),list=GET_NEXT(list),__data__)
#define GIVE_TOP(list) (GET_FIRST(list))

#define MAKE_EXCEPTION(d1,d2) (MAKE_DATA(d1,EXCEPTION,d2))
#define MAKE_FAILURE(d) (MAKE_DATA(d,FAILURE,NULL))

#endif
