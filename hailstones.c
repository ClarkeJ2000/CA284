#include<stdio.h>
#include<stdlib.h>

int Hailstone(int num)

{
if(num % 2 == 0) {
return num /= 2;
}
else {
return num = (3 * num) + 1;
}
}

int main (int argc, char *argv[])
{
int n = atoi(argv[1]);
do
   {
      n = Hailstone(n);
      printf("%d\n", n);
   }
   while ( n != 1);
   return 0;
}