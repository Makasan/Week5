#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int i, sum, num = 0;
	char str[10000];

	scanf("%s", str);
	sum = strlen(str);
	for (i = 0; i < sum; i++)
	{
		if (isupper(str[i]))
			num++;
	}
	if (num == sum)
	{
		printf("All Capital Letter");
	}
	else if (num == 0)
	{
		printf("All Small Letter");
	}
	else
		printf("Mix");
	return 0;
}
