#include "user.h"

void main(void) {
  printf("Hello World from shell!\n");
  // *((volatile int *) 0x80200000) = 0x1234;
  for (;;)
    ;
}
