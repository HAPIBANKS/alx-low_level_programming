#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc != 3) 
  {
    printf("Error\n");
    return (1);
  }

  int first_number = *argv[1];
  int second_number = *argv[2];

  int product = first_number * second_number;

  printf("%d\n", product);

  return (0);
}
