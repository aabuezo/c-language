#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>


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


double elapsed_time_sec(clock_t start, clock_t end)
{
  return (end - start) / (double)CLOCKS_PER_SEC;
}


int main()
{
  int input;
  clock_t start_clk, end_clk;
  printf("Enter a positive integer: ");
  scanf("%d", &input);
  printf("\n");

  if (input < 1)
  {
    printf("%d is not positive.\n", input);
    return EXIT_FAILURE;
  }
  
  start_clk = clock();
  if (is_prime(input))
  {
    printf("%d is prime.\n", input);
  }
  else
  {
    printf("%d is not prime.\n", input);
  }
  end_clk = clock();
  printf("Elapsed time: %.1f [us]\n", elapsed_time_sec(start_clk, end_clk) * 1e6);

  return EXIT_SUCCESS;
}