#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  unsigned long ctime = time(NULL); //so I can keep it for debugging
  printf("This is the time: %lu\n", ctime);
  srand(ctime); //seeding the random
  printf("This is a random number: %d\n", rand()); //first dose of random
  int arr[10]; //array of size 10
  int i; //for all those for loops
  for (i = 0; i < 9; i++) //assigning random number to first nine spots
    {
      arr[i] = rand(); //returns different random number each time
    }
  arr[9] = 0; //the last one has to be zero
  for (i = 0; i < 10; i++) //printing each entry
    {
      printf("arr[%d] = %d\n", i, arr[i]);
    }
  printf("----------------\n");
  int new[10]; //new array
  int * getter = arr; //we're gonna get each value from location pointed to be getter
  int * setter = new + 9; //and put it to location pointed to by setter
  for (i = 0; i < 10; i++)
    *(setter - i) = *(getter + i); //doing it backwards
  for (i = 0; i < 10; i++)
    {
      printf("new[%d] = %d\n", i, *(setter - 9 + i)); //printing it but forwards
    }
  return 0;
}
