

#include "acr-actions.h"
#include "acr-utils.h"
#include "acr-sched.h"
#include "acr-agent.h"
#include <an2.h>
#include <time.h>

extern AN2Store store;
extern int cell_counter;
extern int agent_counter;
extern ACRSchedule schedule;


static ANK_Action ACR_handleTerminated(ANK_Action action,AN2Data data,AN2Bindings bindings);
//static ANK_Action ACR_handleBracket(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleConst(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handlePrefix(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleInfix(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleProvide(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleGive(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleCheck(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleSelect(ANK_Action action,AN2Data data,AN2Bindings bindings);

static ANK_Action ACR_handleThen(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleAndThen(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleAnd(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleExceptionally(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleOtherwise(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleAndExceptionally(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleHence(ANK_Action action,AN2Data data,AN2Bindings bindings);

static ANK_Action ACR_handleIndivisibly(ANK_Action action,AN2Data data,AN2Bindings bindings);


static ANK_Action ACR_handleDataOp(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleDataOpPrefix(ANK_DataOp op,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleDataOpInfix(ANK_DataOp op,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleDataPredPrefix(ANK_DataPred pred,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleDataPredInfix(ANK_DataPred pred,AN2Data data,AN2Bindings bindings);

static ANK_Action ACR_handleCopy(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleRaise(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleFail(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleChooseNatural(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleGiveCurrentBindings(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleEnact(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleCreate(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleDestroy(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleUpdate(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleInspect(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleActivate(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleDeactivate(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleGiveCurrentAgent(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleSend(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleReceive(ANK_Action action,AN2Data data,AN2Bindings bindings);
static ANK_Action ACR_handleGiveCurrentTime(ANK_Action action,AN2Data data,AN2Bindings bindings);


ANK_Action ACR_handleAction(ANK_Action action,AN2Data data,AN2Bindings bindings) {
#ifdef DEBUG
  ATwarning("handleAction\n",data,bindings);
#endif
  if (ANK_isActionPrefix(action) == ATtrue)
    return ACR_handlePrefix(action,data,bindings);
  if (ANK_isActionInfix(action) == ATtrue)
    return ACR_handleInfix(action,data,bindings);
  if (ANK_isActionConst(action) == ATtrue) {
    ANK_Action reduct = ACR_handleConst(action,data,bindings);
#ifdef DEBUG
    ATwarning("const reduct: %t\n",reduct);
#endif
    return reduct;
  }
  if (ANK_isActionTerminated(action) == ATtrue) 
    return ACR_handleTerminated(action,data,bindings);
  if (ANK_isActionProvide(action) == ATtrue) 
    return ACR_handleProvide(action,data,bindings);
  if (ANK_isActionGive(action) == ATtrue)
    return ACR_handleGive(action,data,bindings);
  if (ANK_isActionCheck(action) == ATtrue)
    return ACR_handleCheck(action,data,bindings);
  if (ANK_isActionSelect(action) == ATtrue)
    return ACR_handleSelect(action,data,bindings);
  ATabort("Invalid action: %t.\n", action);
  return (ANK_Action)NULL;
}

static ANK_Action ACR_handleTerminated(ANK_Action action,AN2Data data,AN2Bindings bindings) {
#ifdef DEBUG
  ATwarning("handleTerminated\n");
#endif
  return action;
}

static ANK_Action ACR_handleConst(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  ANK_ActionConst c = ANK_getActionActionConst(action);
#ifdef DEBUG
  ATwarning("handleConst\n");
#endif
  if (ANK_isActionConstCopy(c) == ATtrue) 
    return ACR_handleCopy(action,data,bindings);
  if (ANK_isActionConstRaise(c) == ATtrue) 
    return ACR_handleRaise(action,data,bindings);
  if (ANK_isActionConstFail(c) == ATtrue) 
    return ACR_handleFail(action,data,bindings);
  if (ANK_isActionConstChooseNatural(c) == ATtrue) 
    return ACR_handleChooseNatural(action,data,bindings);
  if (ANK_isActionConstGiveCurrentBindings(c) == ATtrue) 
    return ACR_handleGiveCurrentBindings(action,data,bindings);
  if (ANK_isActionConstEnact(c) == ATtrue) 
    return ACR_handleEnact(action,data,bindings);
  if (ANK_isActionConstCreate(c) == ATtrue) 
    return ACR_handleCreate(action,data,bindings);
  if (ANK_isActionConstDestroy(c) == ATtrue) 
    return ACR_handleDestroy(action,data,bindings);
  if (ANK_isActionConstUpdate(c) == ATtrue) 
    return ACR_handleUpdate(action,data,bindings);
  if (ANK_isActionConstInspect(c) == ATtrue) 
    return ACR_handleInspect(action,data,bindings);
  if (ANK_isActionConstActivate(c) == ATtrue) 
    return ACR_handleActivate(action,data,bindings);
  if (ANK_isActionConstDeactivate(c) == ATtrue) 
    return ACR_handleDeactivate(action,data,bindings);
  if (ANK_isActionConstGiveCurrentAgent(c) == ATtrue) 
    return ACR_handleGiveCurrentAgent(action,data,bindings);
  if (ANK_isActionConstSend(c) == ATtrue) 
    return ACR_handleSend(action,data,bindings);
  if (ANK_isActionConstReceive(c) == ATtrue) 
    return ACR_handleReceive(action,data,bindings);
  if (ANK_isActionConstGiveCurrentTime(c) == ATtrue) 
    return ACR_handleGiveCurrentTime(action,data,bindings);
  ATabort("Invalid ActionConst: %t.\n", action);
  return (ANK_Action)NULL;
}

static ANK_Action ACR_handlePrefix(ANK_Action action,AN2Data data,AN2Bindings bindings) {
#ifdef DEBUG
  ATwarning("handlePrefix\n");
#endif
  if (ANK_isActionPrefixIndivisibly(ANK_getActionPrefix(action)))
    return ACR_handleIndivisibly(action,data,bindings);
  ATabort("Invalid prefix action: %t.\n", action);
  return (ANK_Action)NULL;
}
  
static ANK_Action ACR_handleInfix(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  ANK_ActionInfix inf = ANK_getActionInfix(action);
#ifdef DEBUG
  ATwarning("handleInfix\n");
#endif
  if (ANK_isActionInfixThen(inf)) {
    return ACR_handleThen(action,data,bindings);
  }
  if (ANK_isActionInfixAndThen(inf)) {
    return ACR_handleAndThen(action,data,bindings);
  }
  if (ANK_isActionInfixAnd(inf)) {
    return ACR_handleAnd(action,data,bindings);
  }
  if (ANK_isActionInfixExceptionally(inf)) {
    return ACR_handleExceptionally(action,data,bindings);
  }
  if (ANK_isActionInfixOtherwise(inf)) {
    return ACR_handleOtherwise(action,data,bindings);
  }
  if (ANK_isActionInfixAndExceptionally(inf)) {
    return ACR_handleAndExceptionally(action,data,bindings);
  }
  if (ANK_isActionInfixHence(inf)) {
    return ACR_handleHence(action,data,bindings);
  }
  ATabort("Invalid action infix: %t.\n", (ATerm)action);
  return (ANK_Action)NULL;
}

  

static ANK_Action ACR_handleProvide(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  ANK_Data d; ANK_Action a;
#ifdef DEBUG
  ATwarning("handleProvide\n");
#endif
  d = ANK_getActionData(action);
#ifdef DEBUG
  ATwarning("d = %t\n",d);
#endif
  a = (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)ACR_dataToAN2Data(d));
#ifdef DEBUG
  ATwarning("a = %t\n",a);
#endif
  return a;
}

static ANK_Action ACR_handleGive(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  ANK_DataOp op = ANK_getActionOp(action);
  ANK_Action reduct;
#ifdef DEBUG
  ATwarning("handleGive: %t\n",data);
#endif
  if (ANK_isDataOpPrefix(op) == ATtrue)
    reduct = ACR_handleDataOpPrefix(op,data,bindings);
  else if (ANK_isDataOpInfix(op) == ATtrue)
    reduct = ACR_handleDataOpInfix(op,data,bindings);
  else ATabort("Invalid dataop: %t.\n", (ATerm)action);
#ifdef DEBUG
  ATwarning("****** DATAOP REDUCT = %t\n",reduct);
#endif
  return (ANK_Action)reduct;
}

static ANK_Action ACR_handleDataOpPrefix(ANK_DataOp op,AN2Data data,AN2Bindings bindings) { 
  ANK_DataOpPrefix pre = ANK_getDataOpPrefix(op);
  AN2Data d;
#ifdef DEBUG
  ATwarning("handleDataOpPrefix %t, pre = %t\n",data,pre);
#endif
  if (ANK_isDataOpPrefixTheSort(pre) == ATtrue) {
    ANK_DataSort opsort = ANK_getDataOpPrefixSort(pre);
    AN2Type t;
#ifdef DEBUG
    ATwarning("opsort = %t\n",opsort);
#endif
    t = ACR_dataSortToAN2Type((ANK_DataSort)opsort);
    if (an2_type_equal(t,AN2_DATA_CASTABLE_TYPE)) 
      return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)data);
    if (an2_type_equal(t,AN2_DATUM_CASTABLE_TYPE) && !an2_has_type(data,AN2_TUPLE_TYPE))
      return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)data);
    if (an2_has_type(data,t))
      return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)data);
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (ANK_isDataOpPrefixBound(pre) == ATtrue) {
    if (an2_has_type(data,AN2_TUPLE_TYPE)) {
      d = an2_do_give_bound((AN2Tuple)data);
      if (d) return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)d);
    }
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (ANK_isDataOpPrefixBinding(pre) == ATtrue) {
    if (an2_has_type(data,AN2_TUPLE_TYPE)) {
      d = an2_do_give_binding((AN2Tuple)data);
      if (d) return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)d);
    }
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (ANK_isDataOpPrefixOverriding(pre) == ATtrue) {
    if (an2_has_type(data,AN2_TUPLE_TYPE)) {
      d = an2_do_give_overriding((AN2Tuple)data);
      if (d) return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)d);
    }
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (ANK_isDataOpPrefixDisjointUnion(pre) == ATtrue) {
    if (an2_has_type(data,AN2_TUPLE_TYPE)) {
      d = an2_do_give_disjoint_union((AN2Tuple)data);
      if (d) return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)d);
    }
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (ANK_isDataOpPrefixActionPrefix(pre) == ATtrue) {
    ANK_ActionPrefix p = ANK_getDataOpPrefixActionPrefix(pre);
    if (an2_has_type(data,AN2_ACTION_TYPE))
      return (ANK_Action)ANK_makeTerminatedNormal(
	  (ANK_Data)an2_set_type(ANK_makeActionPrefix(p,(ANK_Action)data),
	  AN2_ACTION_TYPE));
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (ANK_isDataOpPrefixProvide(pre) == ATtrue) {
    return (ANK_Action)ANK_makeTerminatedNormal(
         (ANK_Data)an2_set_type(ANK_makeActionProvide((ANK_Data)data),AN2_ACTION_TYPE));
  }
  if (ANK_isDataOpPrefixTupleToList(pre) == ATtrue) {
    d = an2_do_give_tupleToList(data);
    if (d) return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)d);
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (ANK_isDataOpPrefixNot(pre) == ATtrue) {
    if (an2_has_type(data,AN2_BOOL_TYPE))
      return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_give_not(d));
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (ANK_isDataOpPrefixOpComponent(pre) == ATtrue) {
    if (an2_has_type(data,AN2_TUPLE_TYPE)) {
      int len = an2_get_tuple_size((AN2Tuple)data);
      if (len > 1) {
	ANK_NatCon natcon = ANK_getDataOpPrefixNatCon(pre);
	int n = ACR_NatConToInt(natcon);
	//#ifdef DEBUG
	//ATwarning("natcon = %t\n", natcon);
	//fprintf(stderr,"************************** n = %d\n", n);
	//#endif
	if (0 < n && n <= len)
	  return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_give_component((AN2Tuple)data,n));
      }
    }
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  ATabort("Invalid dataop-prefix: %t.\n", pre);
  return (ANK_Action)NULL;
}

static ANK_Action ACR_handleDataOpInfix(ANK_DataOp op,AN2Data data,AN2Bindings bindings) {
  ANK_DataOpInfix inf = ANK_getDataOpInfix(op);
  AN2Data d;
#ifdef DEBUG
  ATwarning("handleDataOpInfix");
#endif
  if (ANK_isDataOpInfixActionInfix(inf) == ATtrue) {
    ANK_ActionInfix ai = ANK_getDataOpInfixActionInfix(inf);
    if (an2_has_type(data,AN2_TUPLE_TYPE) && an2_get_tuple_size(data) == 2) {
      if (an2_has_type(an2_get_elt1((AN2Tuple)data),AN2_ACTION_TYPE) &&
	  an2_has_type(an2_get_elt2((AN2Tuple)data),AN2_ACTION_TYPE))
	return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_set_type(
		  ANK_makeActionInfix((ANK_Action)an2_get_elt1((AN2Tuple)data),ai,
		  (ANK_Action)an2_get_elt2((AN2Tuple)data)), AN2_ACTION_TYPE));
    }
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (ANK_isDataOpInfixPlus(inf) == ATtrue) {
    if (an2_has_type(data,AN2_TUPLE_TYPE)) {
      d = an2_do_give_plus((AN2Tuple)data);
      if (d) return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)d);
    }
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (ANK_isDataOpInfixMonus(inf) == ATtrue) {
    if (an2_has_type(data,AN2_TUPLE_TYPE)) {
      d = an2_do_give_monus((AN2Tuple)data);
      if (d) return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)d);
    }
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (ANK_isDataOpInfixTimes(inf) == ATtrue) {
    if (an2_has_type(data,AN2_TUPLE_TYPE)) {
      d = an2_do_give_times((AN2Tuple)data);
      if (d) return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)d);
    }
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (ANK_isDataOpInfixMinus(inf) == ATtrue) {
    if (an2_has_type(data,AN2_TUPLE_TYPE)) {
      d = an2_do_give_minus((AN2Tuple)data);
      if (d) return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)d);
    }
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  ATabort("Invalid dataop-infix: %t.\n", op);
  return (ANK_Action)NULL;
}


static ANK_Action ACR_handleDataPredPrefix(ANK_DataPred pred,AN2Data data,AN2Bindings bindings) {
  ANK_DataPredPrefix pre = ANK_getDataPredPrefix(pred);
#ifdef DEBUG
  ATwarning("handleDataPredPrefix\n");
#endif
  if (ANK_isDataPredPrefixDef(pre) == ATtrue) {
    ATabort("Non-supported DataPredPrefix: %t.\n", pred);
  }
  ATabort("Invalid datapred-prefix: %t.\n", pred);
  return (ANK_Action)NULL;
}

static ANK_Action ACR_handleDataPredInfix(ANK_DataPred pred,AN2Data data,AN2Bindings bindings) {
  ANK_DataPredInfix inf = ANK_getDataPredInfix(pred);
#ifdef DEBUG
  ATwarning("handleDataPredInfix\n");
#endif
  if (!an2_has_type(data,AN2_TUPLE_TYPE) || an2_get_tuple_size(data) != 2)
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  if (ANK_isDataPredInfixEquals(inf) == ATtrue) {
    if (an2_is_equal(an2_get_elt1((AN2Tuple)data),an2_get_elt2((AN2Tuple)data)))
      return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_make_empty());
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (ANK_isDataPredInfixGt(inf) == ATtrue) {
    if (an2_do_check_greater_than((AN2Tuple)data))
      return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_make_empty());
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (ANK_isDataPredInfixLt(inf) == ATtrue) {
    if (an2_do_check_less_than((AN2Tuple)data))
      return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_make_empty());
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (ANK_isDataPredInfixGe(inf) == ATtrue) {
    if (an2_do_check_greater_than_or_eq((AN2Tuple)data))
      return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_make_empty());
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (ANK_isDataPredInfixLe(inf) == ATtrue) {
    if (an2_do_check_less_than_or_eq((AN2Tuple)data))
      return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_make_empty());
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  ATabort("Invalid datapred-infix: %t.\n", pred);
  return (ANK_Action)NULL;
}
  
  


static ANK_Action ACR_handleCheck(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  ANK_DataPred pred = ANK_getActionPred(action);
  ANK_Action reduct;
#ifdef DEBUG
  ATwarning("handleCheck: %t\n", data);
#endif
  if (ANK_isDataPredInfix(pred) == ATtrue)
    reduct = ACR_handleDataPredInfix(pred,data,bindings);
  else if (ANK_isDataPredPrefix(pred) == ATtrue)
    reduct = ACR_handleDataPredPrefix(pred,data,bindings);
  else ATabort("Invalid DataPred: %t.\n", action);
#ifdef DEBUG
  ATwarning("datapred reduct: %t\n", reduct);
#endif
  return (ANK_Action)reduct;
}


static ANK_Action ACR_handleSelect(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  ANK_ActionChoices cs = ANK_getActionChoices(action);
  ANK_Action head = ANK_getActionChoicesHead(cs);
#ifdef DEBUG
  ATwarning("handleSelect\n");
#endif
#ifdef NATURAL
  if (ANK_isActionChoicesSingle(cs))
    return ACR_handleAction(head,data,bindings);
  if (ANK_isActionChoicesMany(cs))
    return ACR_handleAction(ANK_makeActionInfix(head, ANK_makeActionInfixOtherwise(), 
						ANK_makeActionSelect(ANK_getActionChoicesTail(cs))),data,bindings);
#else
  if (ANK_isActionChoicesSingle(cs))
    return head;
  if (ANK_isActionChoicesMany(cs))
    return ANK_makeActionInfix(head, ANK_makeActionInfixOtherwise(), 
			       ANK_makeActionSelect(ANK_getActionChoicesTail(cs)));
#endif
  /*
  if (ANK_isValidTerminated((ANK_Terminated)head) == ATfalse) 
    return ANK_makeActionSelect(ANK_setActionChoicesHead(cs, ACR_handleAction(head,data,bindings)));
  if (ANK_isTerminatedFailed((ANK_Terminated)head) == ATtrue) {
    if (ANK_hasActionChoicesTail(cs) == ATtrue)
      return ANK_makeActionSelect(ANK_getActionChoicesTail(cs));
  return head;
      }*/
  ATabort("Invalid select combinator: %t\n", action);
  return (ANK_Action)NULL;
}


static ANK_Action ACR_handleThen(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  ANK_Action left = ANK_getActionLhs(action);
  ANK_Action right = ANK_getActionRhs(action);
#ifdef DEBUG
  ATwarning("handleThen\n");
#endif
#ifdef NATURAL
  left = ACR_handleAction(left,data,bindings);
  if (ANK_isTerminatedNormal((ANK_Terminated)left))
    return ACR_handleAction(right, (AN2Data)ANK_getTerminatedData((ANK_Terminated)left), bindings);
  return left;
#else
  if (!ANK_isValidTerminated((ANK_Terminated)left))
    return ANK_makeActionInfix(ACR_handleAction(left,data,bindings),ANK_makeActionInfixThen(),right);
  if (ANK_isTerminatedNormal((ANK_Terminated)left) && !ANK_isValidTerminated((ANK_Terminated)right))
    return ANK_makeActionInfix(left,ANK_makeActionInfixThen(),
			       ACR_handleAction(right, (AN2Data)ANK_getTerminatedData((ANK_Terminated)left),bindings));
  if (!ANK_isTerminatedNormal((ANK_Terminated)left))
    return left;
  if (ANK_isValidTerminated((ANK_Terminated)right))
    return right;
#endif
  ATabort("Invalid 'then' combinator: %t.\n", action);
  return (ANK_Action)NULL;
}

static ANK_Action ACR_handleAndThen(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  ANK_Action left = ANK_getActionLhs(action);
  ANK_Action right = ANK_getActionRhs(action);
#ifdef DEBUG
  ATwarning("handleAndThen\n");
#endif
#ifdef NATURAL
  left = ACR_handleAction(left,data,bindings);
  if (!ANK_isTerminatedNormal((ANK_Terminated)left))
    return left;
  right = ACR_handleAction(right, data, bindings);
  if (!ANK_isTerminatedNormal((ANK_Terminated)right))
    return right;
  return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_merge_data(ANK_getTerminatedData((ANK_Terminated)left),
								       ANK_getTerminatedData((ANK_Terminated)right)));
#else
  if (!ANK_isValidTerminated((ANK_Terminated)left))
    return ANK_makeActionInfix(ACR_handleAction(left,data,bindings),ANK_makeActionInfixAndThen(),right);
  if (ANK_isTerminatedNormal((ANK_Terminated)left) && !ANK_isValidTerminated((ANK_Terminated)right))
    return ANK_makeActionInfix(left,ANK_makeActionInfixAndThen(), ACR_handleAction(right, data, bindings));
  if (ANK_isTerminatedNormal((ANK_Terminated)left) && ANK_isTerminatedNormal((ANK_Terminated)right)) 
    return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_merge_data(ANK_getTerminatedData((ANK_Terminated)left),
							     ANK_getTerminatedData((ANK_Terminated)right)));
  if (!ANK_isTerminatedNormal((ANK_Terminated)left))
    return left;
  if (ANK_isValidTerminated((ANK_Terminated)right))
    return right;
#endif
  ATabort("Invalid 'and then' combinator: %t.\n", action); 
  return (ANK_Action)NULL;
}

static ANK_Action ACR_handleAnd(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  ANK_Action left = ANK_getActionLhs(action);
  ANK_Action right = ANK_getActionRhs(action);
#ifdef DEBUG
  ATwarning("handleAnd\n");
#endif
#ifdef NATURAL
  left = ACR_handleAction(left,data,bindings);
  if (!ANK_isTerminatedNormal((ANK_Terminated)left))
    return left;
  right = ACR_handleAction(right, data, bindings);
  if (!ANK_isTerminatedNormal((ANK_Terminated)right))
    return right;
  return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_merge_data(ANK_getTerminatedData((ANK_Terminated)left),
								       ANK_getTerminatedData((ANK_Terminated)right)));
#else
  if (!ANK_isValidTerminated((ANK_Terminated)left))
    return ANK_makeActionInfix(ACR_handleAction(left,data,bindings),ANK_makeActionInfixAnd(),right);
  if (ANK_isTerminatedNormal((ANK_Terminated)left) && !ANK_isValidTerminated((ANK_Terminated)right))
    return ANK_makeActionInfix(left,ANK_makeActionInfixAnd(), ACR_handleAction(right, data ,bindings));
  if (ANK_isTerminatedNormal((ANK_Terminated)left) && ANK_isTerminatedNormal((ANK_Terminated)right)) 
    return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_merge_data(ANK_getTerminatedData((ANK_Terminated)left),
							     ANK_getTerminatedData((ANK_Terminated)right)));
  if (!ANK_isTerminatedNormal((ANK_Terminated)left))
    return left;
  if (ANK_isValidTerminated((ANK_Terminated)right))
    return right;
#endif
  ATabort("Invalid 'and' combinator: %t.\n", action); 
  return (ANK_Action)NULL;
}
  
static ANK_Action ACR_handleExceptionally(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  ANK_Action left = ANK_getActionLhs(action);
  ANK_Action right = ANK_getActionRhs(action);
#ifdef DEBUG
  ATwarning("handleExceptionally\n");
#endif
#ifdef NATURAL
  left = ACR_handleAction(left,data,bindings);
  if (ANK_isTerminatedExceptional((ANK_Terminated)left))
    return ACR_handleAction(right, (AN2Data)ANK_getTerminatedData((ANK_Terminated)left), bindings);
  return left;
#else
  if (!ANK_isValidTerminated((ANK_Terminated)left))
    return ANK_makeActionInfix(ACR_handleAction(left,data,bindings),ANK_makeActionInfixExceptionally(),right);
  if (ANK_isTerminatedExceptional((ANK_Terminated)left) && !ANK_isValidTerminated((ANK_Terminated)right))
    return ANK_makeActionInfix(left,ANK_makeActionInfixExceptionally(),
			       ACR_handleAction(right, (AN2Data)ANK_getTerminatedData((ANK_Terminated)left),bindings));
  if (!ANK_isTerminatedExceptional((ANK_Terminated)left))
    return left;
  if (ANK_isValidTerminated((ANK_Terminated)right))
    return right;
#endif
  ATabort("Invalid 'exceptionally' combinator: %t.\n", action);
  return (ANK_Action)NULL;
}

static ANK_Action ACR_handleOtherwise(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  ANK_Action left = ANK_getActionLhs(action);
  ANK_Action right = ANK_getActionRhs(action);
#ifdef DEBUG
  ATwarning("handleOtherwise\n");
#endif
#ifdef NATURAL
  left = ACR_handleAction(left,data,bindings);
  if (!ANK_isTerminatedFailed((ANK_Terminated)left))
    return left;
  return ACR_handleAction(right, data, bindings);
#else
  if (!ANK_isValidTerminated((ANK_Terminated)left))
    return ANK_makeActionInfix(ACR_handleAction(left,data,bindings),ANK_makeActionInfixOtherwise(),right);
  if (ANK_isTerminatedFailed((ANK_Terminated)left) && !ANK_isValidTerminated((ANK_Terminated)right))
    return ANK_makeActionInfix(left,ANK_makeActionInfixOtherwise(), ACR_handleAction(right, data, bindings));
  if (!ANK_isTerminatedFailed((ANK_Terminated)left))
    return left;
  if (ANK_isValidTerminated((ANK_Terminated)right))
    return right;
#endif
  ATabort("Invalid 'otherwise' combinator: %t.\n", action);
  return (ANK_Action)NULL;
}

static ANK_Action ACR_handleAndExceptionally(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  ANK_Action left = ANK_getActionLhs(action);
  ANK_Action right = ANK_getActionRhs(action);
#ifdef DEBUG
  ATwarning("handleAndExceptionally\n");
#endif
#ifdef NATURAL
  left = ACR_handleAction(left,data,bindings);
  if (!ANK_isTerminatedExceptional((ANK_Terminated)left))
    return left;
  right = ACR_handleAction(right, data, bindings);
  if (!ANK_isTerminatedExceptional((ANK_Terminated)right))
    return right;
  return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_merge_data(ANK_getTerminatedData((ANK_Terminated)left),
									    ANK_getTerminatedData((ANK_Terminated)right)));

#else
  if (!ANK_isValidTerminated((ANK_Terminated)left))
    return ANK_makeActionInfix(ACR_handleAction(left,data,bindings),ANK_makeActionInfixAndExceptionally(),right);
  if (ANK_isTerminatedExceptional((ANK_Terminated)left) && !ANK_isValidTerminated((ANK_Terminated)right))
    return ANK_makeActionInfix(left,ANK_makeActionInfixAndExceptionally(), ACR_handleAction(right, data, bindings));
  if (ANK_isTerminatedExceptional((ANK_Terminated)left) && ANK_isTerminatedExceptional((ANK_Terminated)right)) 
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_merge_data(ANK_getTerminatedData((ANK_Terminated)left),
							     ANK_getTerminatedData((ANK_Terminated)right)));
  if (!ANK_isTerminatedExceptional((ANK_Terminated)left))
    return left;
  if (ANK_isValidTerminated((ANK_Terminated)right))
    return right;
#endif
  ATabort("Invalid 'and exceptionally' combinator: %t.\n", action); 
  return (ANK_Action)NULL;
}

static ANK_Action ACR_handleHence(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  ANK_Action left = ANK_getActionLhs(action);
  ANK_Action right = ANK_getActionRhs(action);
#ifdef DEBUG
  ATwarning("handleHence\n");
#endif
#ifdef NATURAL
  left = ACR_handleAction(left,data,bindings);
  if (ANK_isTerminatedNormal((ANK_Terminated)left)) {
    AN2Data bs = (AN2Data)ANK_getTerminatedData((ANK_Terminated)left);
    if (an2_has_type(bs, AN2_BINDINGS_TYPE))
      return ACR_handleAction(right, data, bs);
    return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  return left;
#else
  if (!ANK_isValidTerminated((ANK_Terminated)left))
    return ANK_makeActionInfix(ACR_handleAction(left,data,bindings),ANK_makeActionInfixHence(),right);
  if (ANK_isTerminatedNormal((ANK_Terminated)left)) {
    AN2Data bs = (AN2Data)ANK_getTerminatedData((ANK_Terminated)left);
    if (an2_has_type(bs, AN2_BINDINGS_TYPE)) {
      if (!ANK_isValidTerminated((ANK_Terminated)right))
	return ANK_makeActionInfix(left,ANK_makeActionInfixHence(),
				   ACR_handleAction(right, data, bs));
      return right;
    }
    else
      return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
  }
  if (!ANK_isTerminatedNormal((ANK_Terminated)left)) {
    return left;
  }
  if (ANK_isValidTerminated((ANK_Terminated)right))
    return right;
#endif
  ATabort("Invalid 'hence' combinator: %t.\n", action);
  return (ANK_Action)NULL;
}

static ANK_Action ACR_handleIndivisibly(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  action = ANK_getActionPrefixarg(action);
#ifdef DEBUG
  ATwarning("handleIndivisibly\n");
#endif
  while (!ANK_isValidTerminated((ANK_Terminated)action)) {
    action = ACR_handleAction(action,data,bindings);
  }
  return action;
}


static ANK_Action ACR_handleDataOp(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  ANK_DataOp op = ANK_getActionOp(action);
#ifdef DEBUG
  ATwarning("handleDataOp\n");
#endif
  if (ANK_isDataOpPrefix(op))
    return ACR_handleDataOpPrefix(op,data,bindings);
  if (ANK_isDataOpInfix(op))
    return ACR_handleDataOpInfix(op,data,bindings);
  ATabort("Invalid dataop: %t.\n", action);
  return (ANK_Action)NULL;
}

static ANK_Action ACR_handleCopy(ANK_Action action,AN2Data data,AN2Bindings bindings) {
#ifdef DEBUG
  ATwarning("handleCopy\n");
#endif
  return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)data);
}

static ANK_Action ACR_handleRaise(ANK_Action action,AN2Data data,AN2Bindings bindings) {
#ifdef DEBUG
  ATwarning("handleRaise\n");
#endif
  return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)data);
}

static ANK_Action ACR_handleFail(ANK_Action action,AN2Data data,AN2Bindings bindings) {
#ifdef DEBUG
  ATwarning("handleFail\n");
#endif
  return (ANK_Action)ANK_makeTerminatedFailed();
}


static ANK_Action ACR_handleChooseNatural(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  /* Todo */
#ifdef DEBUG
  ATwarning("handleChooseNatural\n");
#endif
  return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_make_int(0));
}


static ANK_Action ACR_handleGiveCurrentBindings(ANK_Action action,AN2Data data,AN2Bindings bindings) {
#ifdef DEBUG
  ATwarning("handleGiveCurrentBindings\n");
#endif
  return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)bindings);
}

static ANK_Action ACR_handleEnact(ANK_Action action,AN2Data data,AN2Bindings bindings) {
#ifdef DEBUG
  ATwarning("handleEnact\n");
#endif
  if (an2_has_type(data,AN2_ACTION_TYPE))
#ifdef NATURAL
    return ACR_handleAction(ANK_makeActionInfix((ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_make_empty()),
			       ANK_makeActionInfixThen(), 
			       ANK_makeActionInfix((ANK_Action)
						   ANK_makeTerminatedNormal((ANK_Data)an2_make_no_bindings()), 
						   ANK_makeActionInfixHence(), (ANK_Action)data)),data,bindings);
#else
    return ANK_makeActionInfix((ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_make_empty()),
			       ANK_makeActionInfixThen(), 
			       ANK_makeActionInfix((ANK_Action)
						   ANK_makeTerminatedNormal((ANK_Data)an2_make_no_bindings()), 
						   ANK_makeActionInfixHence(), (ANK_Action)data));
#endif
  return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
}
											 
static ANK_Action ACR_handleCreate(ANK_Action action,AN2Data data,AN2Bindings bindings) {
#ifdef DEBUG
  ATwarning("handleCreate\n");
#endif
  /* Only datums may be stored. */
  if (!an2_has_type(data,AN2_TUPLE_TYPE)) {
    AN2Cell cell = an2_make_cell(++cell_counter);
    an2_update_cell(store, cell, data);
    return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)cell);
  }
  return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
}
  
static ANK_Action ACR_handleDestroy(ANK_Action action,AN2Data data,AN2Bindings bindings) {
#ifdef DEBUG
  ATwarning("handleDestroy\n");
#endif
  if (an2_has_type(data,AN2_CELL_TYPE)) {
    an2_destroy_cell(store, data);
    return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_make_empty());
  }
  return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
}

static ANK_Action ACR_handleUpdate(ANK_Action action,AN2Data data,AN2Bindings bindings) {
#ifdef DEBUG
  ATwarning("handleUpdate\n");
#endif
  if (an2_has_type(data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)data) == 2) {
    if (an2_has_type(an2_get_elt1((AN2Tuple)data),AN2_CELL_TYPE)) {
      an2_update_cell(store, an2_get_elt1((AN2Tuple)data), an2_get_elt2((AN2Tuple)data));
      return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_make_empty());
    }
  }
  return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
}

static ANK_Action ACR_handleInspect(ANK_Action action,AN2Data data,AN2Bindings bindings) {
#ifdef DEBUG
  ATwarning("handleInspect\n");
#endif
  if (an2_has_type(data,AN2_CELL_TYPE))
    return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_inspect_cell(store, data));
  return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
}

static ANK_Action ACR_handleActivate(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  if (an2_has_type(data,AN2_ACTION_TYPE)) {
    ACRAgent agent = ACR_make_agent(++agent_counter, (ANK_Action)data);
    ACR_schedule_add(&schedule,agent);
    return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)agent);
  }
  return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
}
   
static ANK_Action ACR_handleDeactivate(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  if (an2_has_type(data,AN2_AGENT_TYPE)) {
    ACR_schedule_remove(&schedule,(ACRAgent)data);
    return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_make_empty());
  }
  return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
}

static ANK_Action ACR_handleGiveCurrentAgent(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)ACR_schedule_get_current(schedule));
}

static ANK_Action ACR_handleSend(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  if (an2_has_type(data,AN2_TUPLE_TYPE) && an2_get_tuple_size((AN2Tuple)data) == 3) {
    if (an2_has_type(an2_get_elt1((AN2Tuple)data),AN2_AGENT_TYPE) &&
	an2_has_type(an2_get_elt3((AN2Tuple)data),AN2_MESSAGETAG_TYPE)) {
      AN2TaggedBuffers tbs = ACR_agent_get_taggedbuffers((ACRAgent)an2_get_elt1((AN2Tuple)data));
      an2_queue_message(tbs, an2_get_elt3((AN2Tuple)data), an2_get_elt2((AN2Tuple)data));
      return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_make_empty());
    }
  }
  return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
}
      
static ANK_Action ACR_handleReceive(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  if (an2_has_type(data,AN2_MESSAGETAG_TYPE)) {
    ACRAgent ag = ACR_schedule_get_current(schedule);
    AN2TaggedBuffers tbs = ACR_agent_get_taggedbuffers(ag);
    AN2Data m = an2_dequeue_message(tbs, data);
    if (m) 
      return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)m);
  }
  return (ANK_Action)ANK_makeTerminatedExceptional((ANK_Data)an2_make_empty());
}


static ANK_Action ACR_handleGiveCurrentTime(ANK_Action action,AN2Data data,AN2Bindings bindings) {
  return (ANK_Action)ANK_makeTerminatedNormal((ANK_Data)an2_make_int(time(NULL)));
}
   
