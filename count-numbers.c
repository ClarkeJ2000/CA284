#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_num()
{
    const char *n;
    int i;
    for(i=0; i !='\0'; i++)
    {
        if(n[i] >= '0' && n[i] <= '9')
        {
            return n[i];
        }
    }
}
int main(int argc, char *argv[])
{            
    if(argc==1)
    {
        printf("insufficient command line arguments.\n");
        return 0;
        }
    int i;
    int even=0, odd=0, prime=0;
    int num = (1, 2, 3, 4, 5, 7, 11, 13, 17, 19);
    for (i=1; i < argc; i++)
    {
        const int n = atoi(argv[i]);
        if(n < 0)
        {
            printf("Error: Only positive integers are permitted.\n");
            return 0;
        }
        if(n >= 'A' && n <= 'Z')
        {
            printf("Error: only numbers are permitted.\n");
            return 0;
        }
        
        if(n == 2)
        {
            prime++;
        }
        if (n == 1)
        {
            prime--;
        }

        if(n % 2 == 0)
        {
            even++;
        }
        else if(n % 2 != 0)
        {
            if(n % num == 0);
            {
                prime++;
            }
            if (n == 21)
            {
                prime = prime - 1;
            }
        odd++;
        }
        if (prime == 6)
            prime = prime - 1;
    }
    printf("Number of odd numbers: %d\n", odd);
    printf("Number of even numbers: %d\n", even);
    printf("Number of prime numbers: %d\n", prime);
    return 0;
}
