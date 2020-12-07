#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];                              // provide plenty of room
    int left = 0;
    int right;   
    int i;

    printf("Please enter a string:  \n");
    fgets(str, sizeof str, stdin);        // limit the input
    right = strlen(str);                 // now get the length

    for (i=0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]))
        {
            printf("Invalid input: Numbers not permitted.\n\n");
            return 0;
        }
    }
    while(left < right && !(isalpha(str[left])))
        {
        left++;
        }
    while(right > left && !(isalpha(str[right])))
        {
        right--;
        }
    if(left >= right)
        {
        return 0;
        }
    else 
        {
        if(toupper(str[left]) != toupper(str[right]))    // get case the same
            {         
            printf("This string is not a palindrome.\n");
            return 0;
            }
        else if(toupper(str[left]) == toupper(str[right]))
            {
            printf("this string is a palindrome.\n");
            return 0;
            }
        left++;
        right--;
        }

}