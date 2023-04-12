#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> ///
#include <stdbool.h>

int main()
{
  /* integers */
  unsigned students = 25U;
  unsigned long long worldPopulation = 7801235945UL;

  printf("%12u | Students in the class\n", students);
  printf("%12llu | World population now\n", worldPopulation);

  uint8_t count = UINT8_MAX;
  printf("%12u | Count of uint8_t\n", count);

  count = count + 1;
  printf("%12u | Count of uint8_t with overflow\n", count);

  printf("%12d | INT32_MIN\n", INT32_MIN);
  printf("%12d | INT32_MAX\n", INT32_MAX);
  printf("%12u | UINT32_MAX\n", UINT32_MAX);

  printf("\n===^^===\n\n");

  /* floats */
  /* 1.23456789 */
  double decimalDigits = 1.23456789;

  /* 7.801 x 10^9 */
  double fWorldPopulation = 7.801E9;

  /* 6.626 x 10^-34 */
  double plankConstant = 6.626E-34;

  printf("%12.1f | 1 decimal digit\n", decimalDigits);
  printf("%12.3f | 3 decimal digits\n", decimalDigits);
  
  printf("%12.1f | World Population, decimal, 1 digit\n", fWorldPopulation);
  printf("%12.1e | World Population, scientific, 1 digit\n", fWorldPopulation);
  printf("%12.3e | World Population, scientific, 3 digits\n", fWorldPopulation);

  printf("%12.1E | plankConstant, scientific, 1 digit\n", plankConstant);
  printf("%12.3E | plankConstant, scientific, 3 digit\n", plankConstant);

  printf("\n===^^===\n\n");

  /* chars */
  unsigned char c = 'A';
  printf("%12d | %c\n", c, c);
  
  printf("Enter a letter: ");
  c = getchar();
  printf("You entered: %c\n", c);

  printf("\n===^^===\n\n");

  /* booleans */
  bool a = true;    // stdbool.h
  bool b = false;
  printf("a (true): %d\n", a);
  printf("b (false): %d\n", b);


  printf("\n===^^===\n\n");
  return EXIT_SUCCESS;
}