#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  printf("===^^===\n");
  printf("Welcome to the Decimal to Hexadecimal Converter\n");
  printf("Enter a number:\n");
  
  int num = 0;
  scanf("%d", &num);

  printf("Decimal representation:   %9d\n", num);
  printf("Converted to hexadecimal: %9X\n", num);
  printf("===^^===\n");
  
  return EXIT_SUCCESS;
}