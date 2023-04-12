#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// BIT CLEARING ---> c = A & MASK (sets A bits to zero)
// BIT TESTING  ---> c = A & 0000 1000 (checks if c != 0)
// BIT SETTING  ---> c = A | MASK (turns on A bits)
// BIT TOGGLING ---> c = A ^ MASK (toogles A bits)

int main()
{
  uint8_t a = 170;  // 1010 1010
  
  /* BIT SETTING */
  //uint8_t mask = 0b01000000;  // not practical...
  uint8_t mask = (1 << 6);
  uint8_t result = a | mask;
  printf("Setting bit 7 to 1:\n");
  printf("%u |  (1 << 6) -> result is: %d\n", a, result);
  
  /* BIT CLEARING */
  //mask = 0b11011111;  // same, not practical...
  mask = ~(1 << 5);
  result = a & mask;
  printf("Clearing bit 6:\n");
  printf("%u & ~(1 << 5) -> result is: %d\n", a, result);

  return EXIT_SUCCESS;
}