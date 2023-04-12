#include <stdio.h>
#include <stdlib.h>

/*
 *  === Minimun Power of 2 ===
 *
 * Goals:
 *  - Acquire user input as int
 *  - If input is positive:
 *    > print the smallest power of 2 greater than or equal to the number
 *  - If input is negative:
 *    > do nothing
 *  - Repeat until user enters -1
 */

int main()
{
  int userInput;

  do
  {
    printf("Enter an integer (-1 to exit): ");
    scanf("%d", &userInput);

    if (userInput > 0)
    {
      int power = 0;
      int result = 1;
      do
      {
        ++power;
        //result *= 2;
        result <<= 1;
      } while (result < userInput);  
      printf("Number: %d ---> min. power of 2 ---> (2^%d): %d\n", userInput, power, result);
    }
    
  } while (userInput != -1);
  

  return EXIT_SUCCESS;
}