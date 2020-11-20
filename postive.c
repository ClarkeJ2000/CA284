#include <stdio.h>
int positive(int x, int y)
	{/* begin function */
	if (x > 0)
		printf("is positive\n");
	else
		printf("is negative\n");
	if (y > 0)
		printf("is positive\n");
	else
		printf("is negative\n");
}
/*end function and program*/
int main()
{
	positive(90, 10);
}