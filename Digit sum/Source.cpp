#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int sum=0, i, check, number;
	scanf("%d", &number);
	while (1) 
	{
		if (number >= 10) 
		{
			check = 1;
			sum = 0;
			while (check) 
			{
				sum = sum+(number%10);
				number = number/10;
				if (number >= 0 and number <= 9) 
				{
					number += sum;
					check = 0;
				}
			}
		}
		else if (number >= 0 or number <10)
		{
			
			printf("%d", number);
			return 0;
		}
	}
	
}