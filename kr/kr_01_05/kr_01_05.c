#include <stdio.h>

int len(char []);

int main()	{
	char x[] = "Hello";
	int lengthX = len(x);
	printf("%s %d\n", x, lengthX);

	return 0;
}

int len(char a[])	{
	int result;
	for(result = 0; a[result] != '\0'; result++);

	return result;
}
