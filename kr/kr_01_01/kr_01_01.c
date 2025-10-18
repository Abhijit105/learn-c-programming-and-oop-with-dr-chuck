#include <stdio.h>

int main()	{
	char x[10];

	for ( int i = 0; i < 10; i++ )	{
		x[i] = '*';
	}

	printf("%s\n", x);

	return 0;
}
