
/*
 * We need:
 *  1  ints
 *  2  bools
 *  3  tuples
 *  4  agents
 *  5  action
 *  6  bindings
 *  7  binding
 *  8  cells
 *  9  messagetags
 * 10  token
 * 11  enactable
 * 12  composite (4 extra bits are for type of combinator)
 * - Combinatortypes:
 *  1  then
 *  2  and then
 *  3  normal
 *  4  exceptionally
 *  5  and exceptionally
 *  6  otherwise
 *  7  hence
 *  8  provide
 */

/* Type of data is: 
 * alloca(sizeof(char) + sizeof(int))
 * for int, bool, agent, messagetag, cell, token, enactable
 *
 * alloca(sizeof(char) + 2* sizeof(void*))
 * for tuple, composite (datum or left and right)
 *
 * alloca(sizeof(char) + sizeof(int) + sizeof(void*))
 * for binding (token, datum)
 *
 * alloca(sizeof(char) +  3*sizeof(void*))
 * for bindings (binding, left, right)
 */

/* Use 4 bits for type info (16 possible types) */

/* Use remaining 4 bits for bound data. */

/* Use 64 bits for actual data */

/* Use 32 bits for token (untyped), 32 bits for pointer to data */

/* Use alloca for allocation of ACBs and other stuff */

/* In tuples: 32 bits for pointer to datum
 * and 32 bits for pointer to next (possibly NULL)
 */




