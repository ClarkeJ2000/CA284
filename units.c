#include <stdio.h>

int main()
{	
	double cm;
	printf("Enter cm: ");
	scanf("%lf", &cm);
	double inches = cm / 2.54;
	printf("The amount in Inches is: %f", inches);
	return 0;

}