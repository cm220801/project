#include<stdio.h>
size_t my_strlen(const char *s)
{
	char *p = s;

	while (*p)
	  ++p;

	return (p - s);
}
char *my_strcpy(char *t, char *s)
{
	char *p = t;
	while(*t++ = *s++)
	;

	return p;
}
int main(void)
{
	int i;
	char *s[] = 
	{
		"git tutorials",
		"Tutorials Point"
	};

	for (i=0;i<2;++i)
	
		printf("string length of %s = %d\n", s[i], my_strlen(s[i]));
	printf("%s\n", my_strcpy(p1, "Hello, World !!!"));
	return 0;
}