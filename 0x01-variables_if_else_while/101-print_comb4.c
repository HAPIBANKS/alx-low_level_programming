#include <stdlib.h>
#include <stdio.h>
/**
*main - entry position
*Return: end the program
*/
int main(void)
{
int main(void) {
  int i, j, k;

  for (i = 0; i <= 8; i++) {
    for (j = 1; j <= 9; j++) {
      for (k = 2; k <= 9; k++) {
        if (i < j && j < k) {
          putchar(i + '0');
          putchar(j + '0');
          putchar(k + '0');
          if (i != 7 || j != 8 || k != 9) {
            putchar(',');
            putchar(' ');
          }
        }
	}
    }
	}
}
