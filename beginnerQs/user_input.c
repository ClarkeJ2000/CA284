#include <stdio.h>
/*for a double just use double instead of int
    also use lf rather than %d
    %c for charaters 
    we use fgets for when the string has spaces*/
int main()
{
    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);
    return 0;
}