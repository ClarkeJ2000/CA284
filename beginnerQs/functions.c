#include <stdio.h>
#include <stdlib.h>
/* void means the function wont return any inf*/
int main()
{
    sayHi("Jamie", 20);
    return 0;
}

void sayHi(char name[], int age){
    printf("Hello %s you are %d\n", name, age);
}