#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(const int number)
{
  const int num = (int)sqrt(number);
  for (int i = 2; i <= num; i++)
  {
    if (number % i == 0)
    {
      return false;
    }
  }
  return true;
}


int main()
{
  int input;
  printf("Enter a positive integer: ");
  scanf("%d", &input);
  printf("\n");

  if (input < 1)
  {
    printf("%d is not positive.\n", input);
    return EXIT_FAILURE;
  }
  
  if (is_prime(input))
  {
    printf("%d is prime.\n", input);
  }
  else
  {
    printf("%d is not prime.\n", input);
  }
  
  return EXIT_SUCCESS;
}