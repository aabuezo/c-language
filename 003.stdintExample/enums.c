#include <stdio.h>
#include <stdlib.h>

/* enum menu
{
  TEA,          // 0
  COFFEE,       // 1
  JUICE = 20,   // 20
  BEER = 30,    // 30
}; */

typedef enum
{
  TEA,     // 0
  COFFEE,  // 1
  JUICE,   // 2
  BEER,    // 3
} Menu;

int main()
{
  /* enum menu mario = COFFEE;
  enum menu andrea = BEER; */
  Menu mario = COFFEE;
  Menu andrea = BEER;

  printf("Mario ordered:    %d\n", mario);
  printf("Andrea ordered:   %d\n", andrea);



  return EXIT_SUCCESS;
}