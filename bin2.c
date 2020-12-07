#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
  char str[100] = {'\0'};
  int i;
  int result;

  for (i=1; i < argc; i++)
  {
    if (argv[1][i] != '1' && argv[1][i] != '0')
    {
      printf("Only digits 1 and 0 are permitted\n");
      return 0;
    }
  
    else if (argv[1][i] =='1')
      result = (result * 2) + 1;
    else
      result = result * 2;
  }
  printf("%d\n", result);

  return 0;
}