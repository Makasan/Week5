#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char str[50];
	char* p;
	scanf("%s", str, 49);
	p = str;
	while (*p != '\0') 
	{
		if ((*p >= '0') && (*p <= '9')) 
		{
			printf("%c", *p);
		}
		p = p + 1;
	}
	return 0;
}