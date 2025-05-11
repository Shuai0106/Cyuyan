#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("请输入一个奇数(3<=n<=59):->");
	int n = 0;
	scanf("%d", &n);
	if (n % 2 != 0 && 3<=n && n<=59)
	{
		int i = 1;
		for (i = 1; i <= n; i++)
		{
			int j = 0;
			for (j = 1; j <= n - i; j++)
			{
				printf(" ");
			}
			printf("*");
			if (i != 1 &&i!=n)
			{
				int j = 0;
				for (j = 1; j < 2*i-2; j++)
				{
					printf(" ");
				}
				printf("*");
			}
			else if (i == n)
			{
				int j = 0;
				for (j = 1; j < i - 1; j++)
				{
					printf(" ");
				}
				printf("%d", n);
				for (j = 1; j < i - 1; j++)
				{
					printf(" ");
				}
				printf("*");
				
			}
			printf("\n");
		}
		for (i = 1; i <= n - 1; i++)
		{
			int j = 0;
			for (j = 1; j <= i; j++)
			{
				printf(" ");
			}
			printf("*");
			if (i != n - 1)
			{
				for (j = 1; j < 2 * n - 2 * i - 2; j++)
				{
					printf(" ");
				}
				printf("*");
				printf("\n");
			}
			
		}
	}
	else
	{
		printf("Fuck again");
	}
	return 0;

}