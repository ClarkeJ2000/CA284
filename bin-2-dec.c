#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int binToDec(char *str);

void validate(char *str);

int main(int argc, char *argv[])
{
    char str[100] = {'\0'};

    for (int i = 1; i < argc; i++)
    {
        strcat(str, argv[i]);
    }

    validate(str);

    int results = binToDec(str);
    printf("%i\n", results);
    return 0;
}

int binToDec(char *str)
{
    int results = 0;
    int l = strlen(str);
    int power = 0;
    for (int i = l - 1; i >= 0; i--)
    {
        if (str[i] == '1')
        {
            results += pow(2, power);
        }
        power += 1;
    }
    return results;
}

void validate(char *str)
{
    int len = strlen(str);
    /* checks to make sure max lenght = 8*/ 
    if (len > 8)
    {
      printf("Too many binary digits entered.\n");
      exit(0);
    }

    for (int i = 0; i < len; i++)
    {
      /* check for anything other than 1 & 0 */
        if (str[i] != '0' && str[i] != '1')
        {
            printf("Only digits 1 and 0 are permitted.\n");
            exit(0);
        }
    }
}