#include<stdio.h> // include stdio.h library
#include<string.h> // include stdio.h library

int main(void)
{       

    int len, i= 0, j, is_palindrome = 1;

    char word[50];

    printf("Enter a word: ");
    scanf("%s", word);

    j = strlen(word) - 1;  // get the last valid index

    while(i <= j)
    {
        if (word[i] != word[j])
        {
            is_palindrome = 0;
            break;
        }

        i++;  
        j--;
    }

    if(is_palindrome)
    {
        printf("%s is palindrome", word);
    }
    else
    {
        printf("%s is not palindrome.\n", word);
    }

    return 0;
}
