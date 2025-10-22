#include <stdio.h>

void reverse(char []);

int main()	{
	/*-------------Single character----------------*/
	char s1[] = "o";
	printf("%s\n", s1);
	reverse(s1);
	printf("%s\n", s1);	

	/*-------------Empty string------------------*/
	char s2[] = "";
	printf("%s\n", s2);
	reverse(s2);
	printf("%s\n", s2);

	/*-------------Odd length string-------------*/
	char s3[] = "Hello";
	printf("%s\n", s3);
	reverse(s3);
	printf("%s\n", s3);

	/*-------------Even length string------------*/
	char s4[] = "Even";
	printf("%s\n", s4);
	reverse(s4);
	printf("%s\n", s4);	

	return 0;
}

void reverse(char s[])	{
	int len;
	for(len = 0; s[len] != '\0'; len++);

	for (int i = 0; i < len / 2; i++)	{
		char temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
