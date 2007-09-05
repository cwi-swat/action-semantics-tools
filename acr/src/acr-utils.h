
#ifndef __ACR_UTILS__H
#define __ACR_UTILS__H 1

#include <an2.h>
#include "api/AN-K.h"

void ACR_debug(char *s);
int ACR_NatConToInt(ANK_NatCon natcon);
AN2Data ACR_dataToAN2Data(ANK_Data data);
AN2Type ACR_dataSortToAN2Type(ANK_DataSort ds);


#endif
