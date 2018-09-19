#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  unsigned long ctime = time(NULL);
  printf("This is the time: %lu\n", ctime);
  srand(ctime);
  printf("This is a random number: %d\n", rand());
  int arr[10];
  int i;
  for (i = 0; i < 9; i++)
    {
      arr[i] = rand();
    }
  arr[9] = 0;
  for (i = 0; i < 10; i++)
    {
      printf("arr[%d] = %d\n", i, arr[i]);
    }
  printf("----------------\n");
  int new[10];
  int * getter = arr;
  int * setter = new + 9;
  for (i = 0; i < 10; i++)
    *(setter - i) = *(getter + i);
  for (i = 0; i < 10; i++)
    {
      printf("new[%d] = %d\n", i, *(setter - 9 + i));
    }
  return 0;
}
