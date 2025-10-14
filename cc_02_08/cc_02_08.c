#include <stdio.h>

int main()	{
	int first = 1;
	int val, maxval, minval;

	while ( scanf("%d", &val) != EOF )	{
		if ( first || val > maxval )	{
			maxval = val;
		}
		if ( first || val < minval )	{
			minval = val;
		}
	}

	printf("Maximum:\t%d\n", maxval);
	printf("Minimum:\t%d\n", minval);

	return 0;
}
