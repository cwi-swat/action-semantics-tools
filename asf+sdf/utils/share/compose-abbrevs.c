

#include <aterm2.h>

int main(int argc, char **argv) {
  int i;
  ATerm bos;
  ATermList list;
  ATinit(argc,argv,&bos);

  list = ATempty;

  for (i = 1; i < argc; i++) {
    FILE *f = fopen(argv[i], "r");
    ATwarning("Adding %s.\n", argv[i]);
    if (!f) ATabort("Error opening file %s.\n", argv[i]);
    list = ATconcat(list,(ATermList)ATreadFromTextFile(f));
    fclose(f);
  }
  ATwriteToTextFile((ATerm)list,stdout);
  return 0;
}

