#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int apples = 12;
  int oranges = 9;
  int fruits = apples + oranges;

  printf("In the box, there are:\n");
  printf("\t%d apples\n", apples);
  printf("\t%d oranges\n", oranges);
  printf("Total:\t%d fruits\n", fruits);
  return EXIT_SUCCESS;
}