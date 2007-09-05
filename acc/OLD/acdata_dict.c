/*
 * Generated at Mon Apr 15 16:40:13 2002
 */

#include "acdata_dict.h"



/*
 *
 *
 */

static ATermList _acdata_dict = NULL;

#define _acdata_dict_LEN 29

static char _acdata_dict_baf[_acdata_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x02,0x03,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,0x02,
0x01,0x01,0x02,0x00,0x01,0x02,0x5B,0x5D,0x00,0x00,0x01,0x00,0x08
};

void init_acdata_dict()
{
  ATermList afuns, terms;

  _acdata_dict = (ATermList)ATreadFromBinaryString(_acdata_dict_baf, _acdata_dict_LEN);

  ATprotect((ATerm *)&_acdata_dict);

  afuns = (ATermList)ATelementAt(_acdata_dict, 0);


  terms = (ATermList)ATelementAt(_acdata_dict, 1);

}
