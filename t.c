#include <stdio.h>
#include <stdlib.h>

#define LEN 10
main() {
  unsigned char addr_a[LEN], addr_b[LEN];
  int i1, i2;

  /* hidden defects to allow next desktop analysis to find local issues */
  // memset(addr_a, 0, LEN);
  // memset(addr_b, 0, LEN);
  
  if (memcmp(addr_a, addr_b, LEN) != 0)
    return 0;
  else 
    return 1;

  // dead code: This item will be committed to the server
  i1 = i2;
}
