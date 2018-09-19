#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  unsigned long ctime = time(NULL);
  printf("This is the time: %lu\n", ctime);
  srand(ctime);
  printf("This is the random number: %d\n", rand());
  return 0;
}
