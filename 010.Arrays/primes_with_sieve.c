#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define MAX_NUMBER 1000000
bool sieve[MAX_NUMBER] = {false};

void fill_sieve()
{
  for (int number = 0; number < MAX_NUMBER; number++)
  {
    int num = (int)sqrt(number);
    for (int i = 2; i <= num; i++)
    {
      if (number % i == 0)
      {
        sieve[number] = false;
        goto not_prime;
      }
    }
    sieve[number] = true;
    not_prime:
  }
  
}

bool is_prime(const int number)
{
  if (number < 1 || number > MAX_NUMBER)
  {
    return EXIT_FAILURE;
  }
  else
  {
    return sieve[number];
  }
  
}

int main()
{
  int input;
  fill_sieve();

  do {
    printf("Enter a positive integer (0 to quit): ");
    scanf("%d", &input);

    if (input < 1)
    {
      printf("%d is not positive.\n", input);
      continue;
    }
    
    if (is_prime(input))
    {
      printf("%d is prime.\n", input);
    }
    else
    {
      printf("%d is not prime.\n", input);
    }
  } while (input);
  
  return EXIT_SUCCESS;
}