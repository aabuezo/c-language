#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>


#define MAX_NUMBER 1000000
bool sieve[MAX_NUMBER] = {false};


void fill_sieve()
{
  for (int number = 0; number < MAX_NUMBER; number++)
  {
    int num = (int)sqrt(number);
    sieve[number] = true;
    for (int i = 2; i <= num; i++)
    {
      if (number % i == 0)
      {
        sieve[number] = false;
        break;
      }
    }
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


double elapsed_time_sec(clock_t start, clock_t end)
{
  return (end - start) / (double)CLOCKS_PER_SEC;
}


int main()
{
  int input;
  
  clock_t start_clk, end_clk;
  printf("Filling the Sieve:...\n");
  start_clk = clock();
  fill_sieve();
  end_clk = clock();
  printf("Elapsed time: %.1f [us]\n", elapsed_time_sec(start_clk, end_clk) * 1e6);

  do {
    printf("Enter a positive integer (0 to quit): ");
    scanf("%d", &input);

    if (input < 1)
    {
      printf("%d is not positive.\n", input);
      continue;
    }
    
    start_clk = clock();  // get the number of clock ticks elapsed since the program was launched
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

  } while (input);
  
  return EXIT_SUCCESS;
}