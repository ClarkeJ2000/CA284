#include <stdio.h>

int main()
{
    char color[20];
    char pluralnoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural-noun: ");
    scanf("%s", pluralnoun);
    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityF, celebrityL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralnoun);
    printf("I Love %s %s\n", celebrityF, celebrityL);

}