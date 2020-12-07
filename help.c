#include <stdio.h>
#include<string.h>

int string(char * str, char * sub);
int main()
{   
    char firstWord[100] = {0};
    char secondWord[10] = {0};
    int i;

    printf("Enter the first string:\n");
    scanf("%[^\n]s", firstWord);

    for(i=0; i<strlen(firstWord); i++) 
    {
        if (firstWord[i] >= 48 && firstWord[i] <= 57) 
        {
            printf("Invalid character entered");
            break;
        }
        else
        {
            printf("Enter the second string:");
            scanf("%[^\n]s", secondWord);
        }
    }
    for(i = 0; i < strlen(secondWord); i++) 
    {
        if (secondWord[i] >= 48 && secondWord[i] <= 57) 
        {
            printf("Invalid character entered");
            break;
        }
    }
        char* pos = strstr(firstWord, secondWord);
        if (pos != NULL)
        {
            printf("\nthe string '%s' is contained in the string '%s'",secondWord, firstWord);
        }
        else 
        {
            printf("the string \'%s\' is not contained in the string '%s'",secondWord, firstWord);
        }
    return 0;
    }
    if(isdigit(&firstWord))
    {
        printf("Invalid character entered");
        exit(0);
    }
    else
    {
        printf("Enter the second string:");
        scanf("%s", &secondWord);

        char* pos = strstr(firstWord, secondWord);
        if (pos != NULL)
        {
        printf("\nthe string '%s' is contained in the string '%s'",secondWord, firstWord);
        }
        else 
        {
        printf("\nthe string '%s' is not contained in the string '%s'",secondWord, firstWord);
        }

    return 0;
}
    