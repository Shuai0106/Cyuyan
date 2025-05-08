#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int number_of_1(int n)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((n>>i) & 1 == 1)
		{
			count++;
		}
	}
	return count;
}

int number1_of_1(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	int num = number_of_1(n);
	printf("%d\n",num );
	int num1 = number1_of_1(n);
	printf("%d\n", num1);
	return 0;
}