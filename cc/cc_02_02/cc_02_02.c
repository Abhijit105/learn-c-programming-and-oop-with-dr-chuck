#include <stdio.h>

int main()	{
	int usf, esf;
	printf("Enter US floor:\t");
	scanf("%d", &usf);
	esf = usf - 1;
	printf("EU floor:\t%d\n", esf);

	return 0;
}
