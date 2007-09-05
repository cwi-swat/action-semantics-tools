/*
 * Name : ALLOC_INT
 * Pre: ACData d
 * Action: allocate an integer datarecord in d
 * Post: d points to a uninitialized datarecord of type int.
 */
#define ALLOC_INT(d) ALLOC_DATA(d,INT_TYPE)
/*
 * Name : ALLOC_BOOL
 * Pre: ACData d
 * Action: allocate a new bool datarecord
 * Post: d points to a new datarecord of type bool
 */
#define ALLOC_BOOL(d) ALLOC_DATA(d,BOOL_TYPE)
