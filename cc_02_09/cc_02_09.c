#include <stdio.h>

int main()	{
	int guess;
	while( scanf("%d", &guess) != EOF )	{
		if ( guess > 42 )	{
			printf("Too high.\n");
		}	else if ( guess < 42 )	{
		       printf("Too low.\n");
		}	else	{
			printf("Nice work.\n");
			break;
		}
	}

	return 0;
}
