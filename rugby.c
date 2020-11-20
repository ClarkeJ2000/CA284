#include <stdio.h>

int main()
{
    int tries;
    int conversion;
    int penalty;
    int dropGoal;

    printf("Enter no. of tries\n: ");
    scanf("%d", &tries);
    printf("Enter number of conversions\n: ");
    scanf("%d", &conversion);
    printf("Enter number of penalties scored\n: ");
    scanf("%d", &penalty);
    printf("Enter number of drop goals scored\n: "); 
    scanf("%d", &dropGoal);
    int Score = (tries * 5) + (conversion * 2) + (penalty * 3) + (dropGoal * 3);
    printf("Team scored %d points\n", Score);


    return 0;
}