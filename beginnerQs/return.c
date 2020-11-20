#include <stdio.h>
/* return key breaks out of function cant put code after return key*/
double cube(double num){
	double result = num * num * num;
	return result;
}

int main()
{
	printf("Answer: %f", cube(7.0));
	return 0;
}