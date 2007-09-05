
#include <stdio.h>

#include "accdata2.h"

void pr_bins(ACData *bs) {
  int i;
  printf("size = %d\n", bs[0]);
  for (i = 0; i < 2* ((int)(bs[0])); i += 2) {
    printf("<%s,%d>\n", bs[i+1]->content, (int)(bs[i+2]->content));
  }
}

int main(void) {
  ACData tk = make_token("barf");
  ACData n = make_int(3);
  ACData bs = give_binding(tk,n);
  ACData tk2 = make_token("frab");
  ACData n2 = make_int(-3);
  ACData bs2 = give_binding(tk2,n2);
  ACData bs3, bs4;
  ACData t,l;
  bs3 = give_overriding(bs,bs2);
  bs4 = give_disjoint_union(bs3,bs2);
  print_ac_data(bs3);
  t = make_tuple(tk,bs3);
  print_ac_data(t);
  printf("\n");
  l = make_list(tk,bs3);
  print_ac_data(l);
  printf("\n");
  l = lpush(l,l);
  print_ac_data(l);
  printf("\n");
  l = lpop(l);
  print_ac_data(l);
  printf("\n");
  return 0;
}

