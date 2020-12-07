#include <stdio.h>
int main(){
	char s[100];
	int i;
	printf("Enter a string of upper and lower case letters\n");
	scanf("%s", s);

	for (i=0; s[i] != '\0'; i++)
	{
		if(s[i] >= 0 && s[i] <= 64){
			printf("Invalid character entered.\n");
			return 0;
		}
		else if(s[i] >= 65 && s[i] <= 90)
			s[i] = s[i] + 32;
		else if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	printf("%s\n", s);
return 0;
}