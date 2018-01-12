#include <stdio.h>

int main(void)
{
  printf("i\tj\n");
  printf("%i\t%i\t=\t%i\n", 365, 7, (365 + 7 - 365 % 7));
  printf("%i\t%i\t=\t%i\n", 12258, 23, (12258 + 23 - 12258 % 23));
  printf("%i\t%i\t=\t%i\n", 996, 4, (996 + 4 - 996 % 4));
  return 0;
}
