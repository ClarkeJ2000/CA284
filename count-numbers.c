#include <stdio.h>

int main(int argc, char *argv[])
{
  int i;
  int result=0;

  for (i=0; argv[1][i] != '\0'; i++)
  {
    if (argv[1][i] =='1')
      result = result *2+1;
    else
      result = result * 2;
  }
  printf("%d\n", result);

  return 1;
}