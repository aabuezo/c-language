#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
 *  === Float Decomposition ===
 *
 * Build a program that decomposes integer and fractional parts of a floating point number.
 *
 * Goals:
 *  - Write a function called decompose that receives a floating point number
 *    and returns an integer part (int) and a fractional part (float).
 *  - Acquire a floating point from the keyboard.
 *  - Use the decompose function and print to screen integer and fractional part.
 *  - Reconstruct the original floating point number and print it.
 *
 * Tips:
 *  - You might need pointers ;)
 *  - Think carefully about the const keyword.
 */

void decompose(float number, int *int_part, float *frac_part)
{
  uint32_t *ptr = (uint32_t *)&number;

  /* get the sign: bit 31 */
  unsigned char sign = (((*ptr & (1 << 31)) >> 31) & 1);

  /* get the mantisa: 23 rightmost digits + 1 implicit digit */
  uint32_t mantisa = (*ptr & 0x7FFFFF) | (1 << 23);

  /* get the exponent: digits 23 to 30 in two'2 complement */
  uint8_t exponent = ~(((*ptr & (0x7F8 << 20)) >> 23) + 1);
  
  /* get the integer part: move mantisa to the right 
   * according to the exponent and multiply by sign 
   */
  *int_part = (mantisa >> (23 - (127 - exponent))) * (sign ? -1 : 1);

  /* get the fractional part */
  *frac_part = number - *int_part;
}

int main()
{
  int int_part;
  float frac_part, number;
  printf("Enter a floating point number: ");
  scanf("%f", &number);

  decompose(number, &int_part, &frac_part);

  printf("Integer part of %.2f: %d\n", number, int_part);
  printf("Fractional part of %.2f: %f\n", number, frac_part);

  float reconstructed = int_part + frac_part;
  printf("Reconstructed number: %f\n", reconstructed);

  return EXIT_SUCCESS;
}