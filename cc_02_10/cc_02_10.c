#include <stdio.h>

int myMult(int, int);

int main()	{
	int retval = myMult(7, 3);
	printf("Answer:\t%d\n", retval);

	return 0;
}

int myMult(int a, int b)	{
	return a * b;
}
